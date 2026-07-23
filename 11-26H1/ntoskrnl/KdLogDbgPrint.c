/*
 * XREFs of KdLogDbgPrint @ 0x140C1BA40
 * Callers:
 *     KdpPrint @ 0x140C1BD30 (KdpPrint.c)
 *     KdpPrompt @ 0x140C1BEBC (KdpPrompt.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     KdpCopyMemoryChunks @ 0x140C1D780 (KdpCopyMemoryChunks.c)
 */

struct _KPRCB *__fastcall KdLogDbgPrint(unsigned __int16 *a1)
{
  struct _KPRCB *result; // rax
  unsigned __int8 CurrentIrql; // bp
  unsigned int v4; // ebx
  unsigned int v5; // eax
  signed __int64 v6; // rax
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rsi
  unsigned int v10; // ebx
  char *v11; // rcx
  unsigned int v12; // edi
  unsigned int v13; // [rsp+58h] [rbp+10h] BYREF

  v13 = 0;
  result = KeGetCurrentPrcb();
  if ( (struct _KPRCB *)qword_140E66558 == result )
  {
    _InterlockedIncrement(&KdPrintSkippedCount);
    return result;
  }
  _InterlockedIncrement((_DWORD *)&KdpPrintSpinLock + 1);
  while ( (_DWORD)KdpPrintSpinLock )
    _mm_pause();
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 15 )
    __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  if ( KdPrintCircularBuffer )
  {
    v4 = *a1;
    v5 = (unsigned int)KdPrintBufferSize >> 3;
    if ( (unsigned int)KdPrintBufferSize >> 3 > 0x200 )
      v5 = 512;
    if ( v4 > v5 )
    {
      v4 = v5;
      _InterlockedIncrement(&KdPrintTruncatedCount);
    }
    v6 = _InterlockedCompareExchange64((volatile signed __int64 *)&KdPrintWritePointer, 0LL, 0LL);
    do
    {
      v7 = v4 + v6;
      v8 = v7 - (unsigned int)KdPrintBufferSize;
      v9 = v6;
      if ( v7 < (unsigned __int64)KdPrintCircularBuffer + (unsigned int)KdPrintBufferSize )
        v8 = v4 + v6;
      v6 = _InterlockedCompareExchange64((volatile signed __int64 *)&KdPrintWritePointer, v8, v6);
    }
    while ( v6 != v9 );
    if ( v8 < v9 )
      _InterlockedIncrement(&KdPrintRolloverCount);
    if ( v7 > (unsigned __int64)KdPrintCircularBuffer + (unsigned int)KdPrintBufferSize )
    {
      v12 = (_DWORD)KdPrintCircularBuffer - v9 + KdPrintBufferSize;
      KdpCopyMemoryChunks(*((_QWORD *)a1 + 1), v9, v12, 0, 4, (__int64)&v13);
      if ( v13 < v12 )
        memset_0((void *)(v9 + v13), 0, v12 - v13);
      v10 = v4 - v12;
      if ( v13 != v12 )
      {
        v11 = (char *)KdPrintCircularBuffer;
        goto LABEL_30;
      }
      KdpCopyMemoryChunks(*((_DWORD *)a1 + 2) + v12, (_DWORD)KdPrintCircularBuffer, v10, 0, 4, (__int64)&v13);
      if ( v13 < v10 )
      {
        v10 -= v13;
        v11 = (char *)KdPrintCircularBuffer + v13;
        goto LABEL_30;
      }
    }
    else
    {
      KdpCopyMemoryChunks(*((_QWORD *)a1 + 1), v9, v4, 0, 4, (__int64)&v13);
      if ( v13 < v4 )
      {
        v10 = v4 - v13;
        v11 = (char *)(v9 + v13);
LABEL_30:
        memset_0(v11, 0, v10);
      }
    }
  }
  _InterlockedDecrement((_DWORD *)&KdpPrintSpinLock + 1);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = (struct _KPRCB *)CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
