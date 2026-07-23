/*
 * XREFs of PsWatchWorkingSet @ 0x140476780
 * Callers:
 *     KiPageFault @ 0x14073BC80 (KiPageFault.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140304E70 (KiLeaveCriticalRegionUnsafe.c)
 *     KeSignalGate @ 0x1403CC9D0 (KeSignalGate.c)
 */

volatile signed __int64 *__fastcall PsWatchWorkingSet(int a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v4; // r11
  __int64 v5; // rdi
  volatile signed __int64 *result; // rax
  __int64 v8; // r9
  unsigned __int64 v9; // rbp
  signed __int32 v10; // eax
  unsigned __int8 CurrentIrql; // si
  signed __int32 v12; // ecx
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  __int64 v15; // r11
  signed __int32 v16; // eax
  volatile signed __int64 *v17; // rtt

  CurrentThread = KeGetCurrentThread();
  v4 = a3;
  v5 = a2;
  result = (volatile signed __int64 *)&CurrentThread->ApcState.Process->Header.Lock;
  v8 = *((_QWORD *)result + 88);
  if ( v8 )
  {
    v9 = 0x4000000000000000LL;
    if ( a1 >= 276 )
      v9 = 0x8000000000000000uLL;
    _m_prefetchw((const void *)v8);
    v10 = *(_DWORD *)v8;
    CurrentIrql = KeGetCurrentIrql();
    if ( !CurrentIrql )
      --CurrentThread->KernelApcDisable;
    do
    {
      if ( (v10 & 1) != 0 )
        goto LABEL_19;
      if ( (v10 & 0xFFFEu) >= 0x800 )
        break;
      v12 = v10;
      a3 = v10 ^ ((unsigned __int16)v10 ^ (unsigned __int16)(v10 + 2)) & 0xFFFEu;
      a2 = (unsigned int)a3 ^ ((unsigned int)a3 ^ ((_DWORD)a3 + 0x10000)) & 0x7FFF0000;
      v10 = _InterlockedCompareExchange((volatile signed __int32 *)v8, a2, v10);
    }
    while ( v10 != v12 );
    if ( (v10 & 1) != 0 || (v10 & 0xFFFEu) >= 0x800 )
    {
LABEL_19:
      _m_prefetchw((const void *)(v8 + 8));
      result = *(volatile signed __int64 **)(v8 + 8);
      do
      {
        if ( result == (volatile signed __int64 *)-1LL )
          break;
        v17 = result;
        result = (volatile signed __int64 *)_InterlockedCompareExchange64(
                                              (volatile signed __int64 *)(v8 + 8),
                                              (signed __int64)result + 1,
                                              (signed __int64)result);
      }
      while ( v17 != result );
      goto LABEL_17;
    }
    a2 = (unsigned __int16)v10 >> 1;
    v13 = v8 + 24 * a2;
    v14 = v4 & 0xFFFFFFFFFFFFFFFEuLL;
    *(_QWORD *)(v13 + 40) = v5;
    v15 = v4 | 1;
    if ( a1 >= 276 )
      v15 = v14;
    *(_QWORD *)(v8 + 24 * a2 + 48) = v15;
    *(_QWORD *)(v13 + 56) = *(_QWORD *)&CurrentThread[1].CurrentRunTime;
    v16 = _InterlockedExchangeAdd((volatile signed __int32 *)v8, 0xFFFF0000);
    if ( (v16 & 1) != 0 && (v16 & 0x7FFF0000) == 0x10000 )
      KeSignalGate(v8 + 16, 0LL, a3);
    result = (volatile signed __int64 *)CurrentThread->WaitBlock[0].SparePtr;
    if ( result )
      _InterlockedOr64(result, v9);
LABEL_17:
    if ( !CurrentIrql )
      return KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, a2);
  }
  return result;
}
