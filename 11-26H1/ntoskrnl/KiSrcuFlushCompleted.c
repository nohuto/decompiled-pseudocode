/*
 * XREFs of KiSrcuFlushCompleted @ 0x14052EB44
 * Callers:
 *     KiCheckWaitNext @ 0x1402200D0 (KiCheckWaitNext.c)
 *     KiRcuCheckQuiescent @ 0x140221E10 (KiRcuCheckQuiescent.c)
 *     KeDelayExecutionThread @ 0x140244840 (KeDelayExecutionThread.c)
 *     KiSrcuCheckQuiescent @ 0x140462770 (KiSrcuCheckQuiescent.c)
 *     KeSrcuReadUnlock @ 0x1405F51C0 (KeSrcuReadUnlock.c)
 *     KiSrcuFlushCompletedDpcRoutine @ 0x1405F53E0 (KiSrcuFlushCompletedDpcRoutine.c)
 *     KiSrcuStartGracePeriod @ 0x1405F5D68 (KiSrcuStartGracePeriod.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x1402642B0 (KeGetEffectiveIrql.c)
 *     KiInsertQueueDpc @ 0x1402BD330 (KiInsertQueueDpc.c)
 *     KxReleaseSpinLock @ 0x1402BDEF0 (KxReleaseSpinLock.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxTryToAcquireSpinLock @ 0x140330C68 (KxTryToAcquireSpinLock.c)
 *     KeSignalGate @ 0x1403C2AD0 (KeSignalGate.c)
 *     KiSrcuCompareGraceSequence @ 0x1404D9AC0 (KiSrcuCompareGraceSequence.c)
 *     KiSrcuRebalance @ 0x1405F5B18 (KiSrcuRebalance.c)
 */

_QWORD **__fastcall KiSrcuFlushCompleted(__int64 a1, unsigned int a2)
{
  KIRQL EffectiveIrql; // di
  int v5; // ebp
  volatile signed __int32 *v6; // rcx
  __int64 v7; // r10
  __int64 v8; // r9
  _QWORD *v9; // r8
  __int64 v10; // rax
  _QWORD *v11; // rcx
  _QWORD *v12; // rax
  KSPIN_LOCK *v13; // rcx
  __int64 v14; // r8
  _QWORD *v15; // rcx
  _QWORD **result; // rax
  __int64 v17; // rdx
  _QWORD *v18; // rax
  _QWORD *v19; // [rsp+30h] [rbp-18h] BYREF
  _QWORD **v20; // [rsp+38h] [rbp-10h]

  EffectiveIrql = KeGetEffectiveIrql();
  if ( EffectiveIrql > 2u )
    return (_QWORD **)KiInsertQueueDpc(a1 + 88, 0LL, 0LL, 0LL, 0);
  v5 = KiSrcuRebalance(a1, a2);
  v6 = (volatile signed __int32 *)(a1 + 40);
  v20 = &v19;
  v19 = &v19;
  if ( EffectiveIrql >= 2u )
  {
    if ( KxTryToAcquireSpinLock(v6) )
      goto LABEL_6;
    return (_QWORD **)KiInsertQueueDpc(a1 + 88, 0LL, 0LL, 0LL, 0);
  }
  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v6);
LABEL_6:
  v7 = *(_QWORD *)(a1 + 48);
  v8 = a1 + 72;
  while ( *(_QWORD *)v8 != v8 && (int)KiSrcuCompareGraceSequence(v7, *(_QWORD *)(*(_QWORD *)v8 + 16LL)) >= 0 )
  {
    v10 = *v9;
    if ( *(_QWORD **)(*v9 + 8LL) != v9
      || (v11 = (_QWORD *)v9[1], (_QWORD *)*v11 != v9)
      || (*v11 = v10, *(_QWORD *)(v10 + 8) = v11, v12 = v20, *v20 != &v19) )
    {
LABEL_20:
      __fastfail(3u);
    }
    v9[1] = v20;
    *v9 = &v19;
    *v12 = v9;
    v20 = (_QWORD **)v9;
  }
  v13 = (KSPIN_LOCK *)(a1 + 40);
  if ( EffectiveIrql < 2u )
    KeReleaseSpinLock(v13, EffectiveIrql);
  else
    KxReleaseSpinLock(v13);
  while ( 1 )
  {
    v15 = v19;
    result = &v19;
    if ( v19 == &v19 )
      break;
    v17 = *v19;
    if ( *(_QWORD **)(*v19 + 8LL) != v19 )
      goto LABEL_20;
    v18 = (_QWORD *)v19[1];
    if ( (_QWORD *)*v18 != v19 )
      goto LABEL_20;
    *v18 = v17;
    *(_QWORD *)(v17 + 8) = v18;
    KeSignalGate((__int64)(v15 + 3), 0LL, v14);
  }
  if ( v5 )
    return (_QWORD **)KiInsertQueueDpc(a1 + 88, 0LL, 0LL, 0LL, 0);
  return result;
}
