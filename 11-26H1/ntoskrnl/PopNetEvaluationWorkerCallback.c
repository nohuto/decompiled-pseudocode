/*
 * XREFs of PopNetEvaluationWorkerCallback @ 0x1404EA630
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopNetUpdateCsConsumptionFlags @ 0x140B30410 (PopNetUpdateCsConsumptionFlags.c)
 *     PopNetPublishWnfStateUpdate @ 0x140B39F5C (PopNetPublishWnfStateUpdate.c)
 *     PopTraceStandbyConnectivityUpdate @ 0x140B3DAFC (PopTraceStandbyConnectivityUpdate.c)
 *     PopNetEvaluateStateMask @ 0x140B455B0 (PopNetEvaluateStateMask.c)
 *     PopNetSetResiliencyPhaseBias @ 0x140B4AC80 (PopNetSetResiliencyPhaseBias.c)
 *     PopAcquirePolicyLock @ 0x140C04BF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C04C40 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopNetEvaluationWorkerCallback(__int64 a1, __int64 a2)
{
  int v2; // r14d
  int v3; // r12d
  char v4; // r15
  char v5; // bp
  char v6; // r13
  __int64 v7; // rcx
  unsigned int v8; // esi
  unsigned int v9; // edi
  KIRQL v11; // al
  char v12; // [rsp+68h] [rbp+10h]
  unsigned int v13; // [rsp+70h] [rbp+18h] BYREF
  unsigned int v14; // [rsp+78h] [rbp+20h] BYREF

  v14 = 0;
  v13 = 0;
  PopAcquirePolicyLock(a1, a2);
  while ( 1 )
  {
    v2 = PopNetStandbyState;
    v3 = PopNetStandbyReason;
    v4 = 0;
    v12 = 0;
    v5 = 0;
    v6 = 0;
    PopNetEvaluateStateMask(&v13, &v14);
    v8 = v13;
    if ( v13 == v2 )
      goto LABEL_3;
    if ( v2 == 2 )
    {
      v5 = 1;
      v6 = 1;
    }
    else
    {
      if ( v13 != 2 )
        goto LABEL_3;
      v5 = 1;
    }
    if ( BYTE4(stru_140F0C428.Header.WaitListHead.Flink) && qword_140E67580 )
    {
      LOBYTE(v7) = 1;
      v12 = 1;
      PopNetSetResiliencyPhaseBias(v7);
    }
LABEL_3:
    v9 = v14;
    if ( v14 != v3 )
    {
      v4 = 1;
      v11 = KeAcquireSpinLockRaiseToDpc(&stru_140F10070.Spare35[1]);
      PopNetStandbyReason = v9;
      if ( LOBYTE(stru_140F10828.Spare35[0]) && !stru_140F10828.SchedulerSharedOffset )
        stru_140F10828.SchedulerSharedOffset = v9;
      KeReleaseSpinLock(&stru_140F10070.Spare35[1], v11);
    }
    if ( v8 != v2 )
    {
      v4 = 1;
      PopNetStandbyState = v8;
      PopNetUpdateCsConsumptionFlags();
    }
    if ( v5 )
    {
      LOBYTE(v7) = v6;
      PopNetPublishWnfStateUpdate(v7);
      if ( v12 )
        PopNetSetResiliencyPhaseBias(0LL);
    }
    if ( !v4 )
      break;
    if ( byte_140E67628 )
      PopTraceStandbyConnectivityUpdate(v8, v9);
    else
      stru_140F0C428.WaitBlockFill6[108] = 1;
  }
  _InterlockedExchange((volatile __int32 *)&stru_140F0C428.WaitBlockFill11[96], 0);
  return PopReleasePolicyLock();
}
