/*
 * XREFs of HvlpSetPowerProperty @ 0x1402F360C
 * Callers:
 *     HvlRegisterLogicalProcessorFrequency @ 0x1402F35B0 (HvlRegisterLogicalProcessorFrequency.c)
 *     HvlConfigureIdleStates @ 0x1405C1774 (HvlConfigureIdleStates.c)
 *     HvlRegisterPerfFeedbackCounters @ 0x1405C1DC4 (HvlRegisterPerfFeedbackCounters.c)
 *     HvlSetLogicalProcessorCppcRequest @ 0x1405C1EB0 (HvlSetLogicalProcessorCppcRequest.c)
 *     HvlSetPlatformIdleState @ 0x1405C1F10 (HvlSetPlatformIdleState.c)
 *     HvlpPowerPolicySettingCallback @ 0x1405C21C0 (HvlpPowerPolicySettingCallback.c)
 * Callees:
 *     HvlpHvStatusIsInsufficientMemory @ 0x1402F4C78 (HvlpHvStatusIsInsufficientMemory.c)
 *     HvlpHvToNtStatus @ 0x1402F4CA0 (HvlpHvToNtStatus.c)
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032D9A0 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 *     HvlpHandleInsufficientMemory @ 0x140533814 (HvlpHandleInsufficientMemory.c)
 */

__int64 __fastcall HvlpSetPowerProperty(__int128 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int128 *v4; // rax
  __int128 v5; // xmm0
  __int64 v6; // rdx
  unsigned __int16 v7; // bx
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]
  __int64 v11; // [rsp+38h] [rbp-10h]

  v9 = 0LL;
  v10 = 0LL;
  LODWORD(v11) = 0;
  do
  {
    v2 = HvlpAcquireHypercallPage(&v9, 1LL, 0LL, 536LL);
    v3 = 4LL;
    v4 = a1;
    do
    {
      v5 = *v4;
      v4 += 8;
      *(_OWORD *)v2 = v5;
      v2 += 128LL;
      *(_OWORD *)(v2 - 112) = *(v4 - 7);
      *(_OWORD *)(v2 - 96) = *(v4 - 6);
      *(_OWORD *)(v2 - 80) = *(v4 - 5);
      *(_OWORD *)(v2 - 64) = *(v4 - 4);
      *(_OWORD *)(v2 - 48) = *(v4 - 3);
      *(_OWORD *)(v2 - 32) = *(v4 - 2);
      *(_OWORD *)(v2 - 16) = *(v4 - 1);
      --v3;
    }
    while ( v3 );
    v6 = v11;
    *(_OWORD *)v2 = *v4;
    *(_QWORD *)(v2 + 16) = *((_QWORD *)v4 + 2);
    v7 = HvcallInitiateHypercall(156LL, v6, 0LL);
    HvlpReleaseHypercallPage(&v9);
    if ( !(unsigned __int8)HvlpHvStatusIsInsufficientMemory(v7) )
      return HvlpHvToNtStatus(v7);
  }
  while ( (int)HvlpHandleInsufficientMemory(v7) >= 0 );
  return 3221225626LL;
}
