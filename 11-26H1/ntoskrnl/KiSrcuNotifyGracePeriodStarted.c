/*
 * XREFs of KiSrcuNotifyGracePeriodStarted @ 0x14052B694
 * Callers:
 *     KiSrcuReportQuiescent @ 0x14045B87C (KiSrcuReportQuiescent.c)
 *     KiSrcuStartGracePeriod @ 0x1405F8724 (KiSrcuStartGracePeriod.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiSrcuNotifyWorkerAcquire @ 0x1405F8054 (KiSrcuNotifyWorkerAcquire.c)
 *     KiSrcuNotifyWorkerSelectAndQueue @ 0x1405F81D8 (KiSrcuNotifyWorkerSelectAndQueue.c)
 */

unsigned __int64 __fastcall KiSrcuNotifyGracePeriodStarted(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  __int64 v3; // rdi
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 v6; // cl
  __int64 v7; // rdi
  ULONG_PTR v8; // rsi
  ULONG_PTR v9; // r14
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  v3 = a2;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
  {
    v6 = KeGetCurrentIrql();
    if ( v6 != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 2;
      result = KiRaiseIrqlProcessIrqlFlags(v6, a2);
    }
  }
  if ( v3 )
  {
    v7 = (v3 - *(_QWORD *)(a1 + 32)) >> 6;
    v8 = 80LL * ((unsigned int)v7 / *(_DWORD *)(a1 + 156)) + *(_QWORD *)(a1 + 160);
    result = KiSrcuNotifyWorkerAcquire(v8, 1LL, (unsigned int)(1 << (v7 - *(_BYTE *)(v8 + 64))));
    if ( (_DWORD)result )
      result = KiSrcuNotifyWorkerSelectAndQueue(v8);
  }
  else if ( *(_DWORD *)(a1 + 152) )
  {
    do
    {
      v9 = *(_QWORD *)(a1 + 160) + 80 * v3;
      result = KiSrcuNotifyWorkerAcquire(v9, 1LL, (unsigned int)((1 << *(_DWORD *)(a1 + 156)) - 1));
      if ( (_DWORD)result )
        result = KiSrcuNotifyWorkerSelectAndQueue(v9);
      v3 = (unsigned int)(v3 + 1);
    }
    while ( (unsigned int)v3 < *(_DWORD *)(a1 + 152) );
  }
  if ( CurrentIrql < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
