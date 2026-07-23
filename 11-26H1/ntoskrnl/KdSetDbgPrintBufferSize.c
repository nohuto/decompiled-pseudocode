/*
 * XREFs of KdSetDbgPrintBufferSize @ 0x1405E69A8
 * Callers:
 *     NtSystemDebugControl @ 0x14084A9E0 (NtSystemDebugControl.c)
 *     MiInitSystem @ 0x140CF7944 (MiInitSystem.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KdSetDbgPrintBufferSize(unsigned int a1)
{
  unsigned int v1; // ebp
  _BYTE *Pool2; // rsi
  unsigned __int8 CurrentIrql; // r14
  size_t v5; // rdi
  PVOID v6; // r15
  size_t v7; // rbx
  size_t v8; // rax
  size_t v9; // rax

  v1 = a1;
  if ( KdPitchDebugger )
    return 3221226324LL;
  if ( a1 > 0x1000000 )
    return 3221225711LL;
  if ( a1 <= 0x1000 )
  {
    v1 = 4096;
    Pool2 = &KdPrintDefaultCircularBuffer;
    while ( 1 )
    {
LABEL_9:
      if ( !KdpPrintSpinLock )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql != 15 )
          __writecr8(0xFuLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
        if ( !_InterlockedCompareExchange64(&KdpPrintSpinLock, 1LL, 0LL) )
        {
          v5 = 0LL;
          v6 = KdPrintCircularBuffer;
          qword_140E66558 = (__int64)KeGetCurrentPrcb();
          if ( v1 > (unsigned __int64)(unsigned int)KdPrintBufferSize )
          {
            if ( KdPrintWritePointer - (_UNKNOWN *)KdPrintCircularBuffer >= (unsigned __int64)(unsigned int)KdPrintBufferSize )
              KdPrintRolloverCount = 0;
            v7 = (KdPrintWritePointer - (_UNKNOWN *)KdPrintCircularBuffer) & -(__int64)(KdPrintWritePointer
                                                                                      - (_UNKNOWN *)KdPrintCircularBuffer < (unsigned __int64)(unsigned int)KdPrintBufferSize);
            if ( KdPrintRolloverCount )
            {
              v5 = (unsigned int)KdPrintBufferSize - v7;
              memmove(Pool2, (char *)KdPrintCircularBuffer + v7, v5);
            }
            memmove(&Pool2[v5], v6, v7);
            v5 += v7;
            if ( KdPrintRolloverCount )
            {
              v8 = 0LL;
              if ( *Pool2 )
              {
                do
                {
                  if ( v8 >= v5 )
                    break;
                  ++v8;
                }
                while ( Pool2[v8] );
              }
              v9 = v8 + 1;
              if ( v9 < v5 )
              {
                v5 -= v9;
                memmove(Pool2, &Pool2[v9], v5);
              }
            }
          }
          memset_0(&Pool2[v5], 0, v1 - v5);
          ++KdPrintBufferChanges;
          KdPrintCircularBuffer = Pool2;
          KdPrintBufferSize = v1;
          KdPrintWritePointer = &Pool2[v5];
          KdPrintRolloverCount = 0;
          qword_140E66558 = 0LL;
          _InterlockedExchange((volatile __int32 *)&KdpPrintSpinLock, 0);
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
          __writecr8(CurrentIrql);
          if ( v6 && v6 != &KdPrintDefaultCircularBuffer )
            ExFreePoolWithTag(v6, 0);
          return 0LL;
        }
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
      }
      _mm_pause();
    }
  }
  Pool2 = (_BYTE *)ExAllocatePool2(0x42uLL);
  if ( Pool2 )
    goto LABEL_9;
  return 3221225495LL;
}
