/*
 * XREFs of KiSrcuReportQuiescent @ 0x14045B87C
 * Callers:
 *     KiCheckWaitNext @ 0x140221A60 (KiCheckWaitNext.c)
 *     KiRcuCheckQuiescent @ 0x1402237A0 (KiRcuCheckQuiescent.c)
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     KiSrcuCheckQuiescent @ 0x14045B730 (KiSrcuCheckQuiescent.c)
 *     KeSrcuReadUnlock @ 0x1405F7B80 (KeSrcuReadUnlock.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxTryToAcquireSpinLock @ 0x140332C98 (KxTryToAcquireSpinLock.c)
 *     KiSrcuCompareGraceSequence @ 0x1404D31A0 (KiSrcuCompareGraceSequence.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiSrcuNotifyGracePeriodStarted @ 0x14052B694 (KiSrcuNotifyGracePeriodStarted.c)
 *     KiSrcuQueueGracePeriodReport @ 0x1405F8300 (KiSrcuQueueGracePeriodReport.c)
 *     KiSrcuRequiresRebalance @ 0x1405F86E4 (KiSrcuRequiresRebalance.c)
 */

__int64 __fastcall KiSrcuReportQuiescent(__int64 a1, __int64 a2)
{
  signed __int64 v2; // r14
  unsigned int v4; // r13d
  __int64 v5; // r15
  int v6; // ebp
  __int64 *v7; // rdi
  __int64 v8; // r12
  unsigned __int8 CurrentIrql; // bl
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // r8
  signed __int64 *v13; // r9
  signed __int64 v14; // r10
  unsigned __int64 v15; // r12
  unsigned __int64 v16; // rcx
  __int64 v17; // rbp
  __int64 v18; // rax
  signed __int64 v20; // r8
  _QWORD *v21; // [rsp+70h] [rbp+8h]
  __int64 v22; // [rsp+78h] [rbp+10h]
  unsigned __int8 v23; // [rsp+80h] [rbp+18h]

  v22 = a2;
  v2 = *(_QWORD *)(a1 + 24);
  v4 = 1;
  v5 = *(_QWORD *)(a1 + 56);
  v6 = 1;
  v7 = *(__int64 **)(a1 + 40);
  v21 = (_QWORD *)(a1 + 32);
  v8 = **(_QWORD **)(a1 + 48);
  CurrentIrql = KeGetCurrentIrql();
  v23 = CurrentIrql;
  if ( CurrentIrql < 2u )
  {
    v10 = KeGetCurrentIrql();
    if ( (_BYTE)v10 != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 2;
      KiRaiseIrqlProcessIrqlFlags(v10, a2);
    }
  }
  while ( v7 )
  {
    if ( !KxTryToAcquireSpinLock((volatile signed __int32 *)v7 + 4) )
    {
      if ( v6 )
        KiSrcuQueueGracePeriodReport(a1, v22);
      else
        KiSrcuRequiresRebalance(v5);
      goto LABEL_34;
    }
    if ( v2 == *v21 )
      goto LABEL_30;
    if ( (v7[5] & v8) != 0 )
    {
      if ( v6 )
        KiSrcuQueueGracePeriodReport(a1, v22);
LABEL_30:
      KxReleaseSpinLock((PKSPIN_LOCK)v7 + 2);
LABEL_34:
      if ( CurrentIrql < 2u )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
      }
      return 0LL;
    }
    v11 = KiSrcuCompareGraceSequence(v2, v7[3]);
    if ( v11 < 0 )
      goto LABEL_30;
    if ( v12 )
    {
      if ( v11 > 0 )
      {
        v2 = v14;
        v7[6] |= v8 | v12;
      }
    }
    else
    {
      v7[3] = v2;
    }
    *v13 = v2;
    v7[5] |= v8;
    if ( v7[5] != *(_QWORD *)v7[1] )
      goto LABEL_30;
    v15 = v7[6];
    v7[5] = 0LL;
    if ( v15 )
    {
      if ( v6 )
      {
        _BitScanForward64(&v16, **(_QWORD **)(a1 + 48));
        v17 = a1 - (v16 << 6);
        do
        {
          if ( (v15 & 1) != 0 )
          {
            if ( v17 == a1 )
            {
              KiSrcuQueueGracePeriodReport(a1, v22);
            }
            else
            {
              *(_QWORD *)(v17 + 32) = v2;
              KiSrcuNotifyGracePeriodStarted(v5, v17);
            }
          }
          v17 += 64LL;
          v15 >>= 1;
        }
        while ( v15 );
        CurrentIrql = v23;
      }
      else
      {
        KiSrcuRequiresRebalance(v5);
      }
      v7[6] = 0LL;
    }
    KxReleaseSpinLock((PKSPIN_LOCK)v7 + 2);
    v6 = 0;
    v21 = v7 + 4;
    v18 = v7[1];
    v7 = (__int64 *)*v7;
    v8 = *(_QWORD *)(v18 + 8);
  }
  if ( CurrentIrql < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  while ( (int)KiSrcuCompareGraceSequence(v2, *(_QWORD *)(v5 + 48)) > 0 )
  {
    if ( v20 == _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 48), v2, v20) )
      return v4;
  }
  return 0;
}
