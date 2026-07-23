/*
 * XREFs of KeIntSteerPeriodic @ 0x1402563C0
 * Callers:
 *     PpmParkSteerInterrupts @ 0x140255B30 (PpmParkSteerInterrupts.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiIntSteerLogStatus @ 0x140256580 (KiIntSteerLogStatus.c)
 *     KiIntSteerDistributeInterrupts @ 0x140256710 (KiIntSteerDistributeInterrupts.c)
 *     KiIntSteerCalculateDistribution @ 0x140256910 (KiIntSteerCalculateDistribution.c)
 *     KiReleaseSpinLockInstrumented @ 0x140308CAC (KiReleaseSpinLockInstrumented.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall KeIntSteerPeriodic(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 *v8; // rsi
  unsigned __int64 v9; // r14
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int16 v13; // r8
  unsigned __int16 v14; // ax
  unsigned __int16 v15; // dx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int128 v23; // [rsp+20h] [rbp-48h] BYREF
  __int128 v24; // [rsp+30h] [rbp-38h] BYREF
  __int128 v25; // [rsp+40h] [rbp-28h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]

  if ( a2 )
  {
    v8 = (unsigned __int16 *)a2;
  }
  else
  {
    v8 = (unsigned __int16 *)a4;
    if ( a3 )
      v8 = (unsigned __int16 *)a3;
  }
  v9 = KeAcquireSpinLockRaiseToDpc(&KsepShimDbLock.InGlobalUpdateVpThreadPriorityList);
  v25 = 0LL;
  if ( a2 )
  {
    if ( *(_WORD *)a2 )
      v10 = *(_QWORD *)(a2 + 8);
    else
      v10 = 0LL;
    *(_QWORD *)&v25 = v10;
  }
  v24 = 0LL;
  if ( a3 )
  {
    if ( *(_WORD *)a3 )
      v11 = *(_QWORD *)(a3 + 8);
    else
      v11 = 0LL;
    *(_QWORD *)&v24 = v11;
  }
  v23 = 0LL;
  if ( *(_WORD *)a4 )
    v12 = *(_QWORD *)(a4 + 8);
  else
    v12 = 0LL;
  *(_QWORD *)&v23 = v12;
  v13 = WORD1(KsepShimDbLock.KernelShadowStack);
  v14 = *v8;
  v15 = 0;
  HIDWORD(KsepShimDbLock.KernelShadowStack) = 0;
  if ( v14 <= WORD1(KsepShimDbLock.KernelShadowStack) )
    v13 = v14;
  LOWORD(KsepShimDbLock.KernelShadowStack) = v13;
  if ( v13 )
  {
    do
    {
      v16 = v15++;
      *((_QWORD *)&KsepShimDbLock.KernelShadowStackInitial + v16) = *(_QWORD *)&v8[4 * v16 + 4];
    }
    while ( v15 < v13 );
  }
  while ( v15 < WORD1(KsepShimDbLock.KernelShadowStack) )
  {
    v17 = v15++;
    *((_QWORD *)&KsepShimDbLock.KernelShadowStackInitial + v17) = 0LL;
  }
  ((void (__fastcall *)(__int64, __int128 *, __int128 *, __int128 *))KiIntSteerCalculateDistribution)(
    a1,
    &v25,
    &v24,
    &v23);
  KiIntSteerLogStatus(0LL);
  KiIntSteerDistributeInterrupts(v19, v18, v20, v21, v23, *((_QWORD *)&v23 + 1));
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    _InterlockedAnd64((volatile signed __int64 *)&KsepShimDbLock.InGlobalUpdateVpThreadPriorityList, 0LL);
  else
    KiReleaseSpinLockInstrumented(&KsepShimDbLock.InGlobalUpdateVpThreadPriorityList, retaddr);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v9);
  __writecr8(v9);
  return 0LL;
}
