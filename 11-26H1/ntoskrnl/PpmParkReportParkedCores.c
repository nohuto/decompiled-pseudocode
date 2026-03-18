/*
 * XREFs of PpmParkReportParkedCores @ 0x14025A2F0
 * Callers:
 *     <none>
 * Callees:
 *     PpmCheckQueuePhaseActions @ 0x140252698 (PpmCheckQueuePhaseActions.c)
 *     ?RtlpAndAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x14025A790 (-RtlpAndAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     ?RtlpXorAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x14025B1B0 (-RtlpXorAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     RtlSubtractAffinityEx @ 0x14025B408 (RtlSubtractAffinityEx.c)
 *     KeUpdateSoftParkRankList @ 0x14025B508 (KeUpdateSoftParkRankList.c)
 *     PpmEventSoftParkRankListChanged @ 0x14025B7C0 (PpmEventSoftParkRankListChanged.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

unsigned int PpmParkReportParkedCores()
{
  unsigned int result; // eax
  unsigned int v1; // eax
  unsigned int v2; // edi
  unsigned int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // rcx
  struct _LIST_ENTRY *Flink; // rcx
  struct _KAFFINITY_EX v8; // [rsp+28h] [rbp-E0h] BYREF
  struct _KAFFINITY_EX v9; // [rsp+138h] [rbp+30h] BYREF
  struct _KAFFINITY_EX v10; // [rsp+248h] [rbp+140h] BYREF
  struct _KAFFINITY_EX v11; // [rsp+358h] [rbp+250h] BYREF

  memset_0(&v9.8, 0, sizeof(v9.8));
  memset_0(&v11.8, 0, sizeof(v11.8));
  memset_0(&v10.8, 0, sizeof(v10.8));
  result = (unsigned int)memset_0(&v8.8, 0, sizeof(v8.8));
  if ( PopModernStandbyStateNotify.ReadyTime )
  {
    *(_QWORD *)&v11.Count = 2097153LL;
    memset_0(&v11.8, 0, sizeof(v11.8));
    v1 = RtlpAndAffinityEx(&PpmPerfChangedCoreParkingMask, &PpmPerfNewCoreParkingMask, &v11, v11.Size);
    *(_QWORD *)&v10.Count = 2097153LL;
    v2 = v1;
    memset_0(&v10.8, 0, sizeof(v10.8));
    RtlSubtractAffinityEx(&PpmPerfNewCoreParkingMask, &PpmPerfChangedCoreParkingMask, &v10);
    *(_QWORD *)&v8.Count = 2097153LL;
    memset_0(&v8.8, 0, sizeof(v8.8));
    RtlpXorAffinityEx(&PpmParkSoftParkingMask, &PpmParkNewSoftParkingMask, &v8, 0x20u);
    v3 = RtlpAndAffinityEx(&v8, &v10, &v8, v8.Size);
    *(_QWORD *)&v9.Count = 2097153LL;
    v4 = v3;
    memset_0(&v9.8, 0, sizeof(v9.8));
    if ( v2 | v4
      || (RtlpXorAffinityEx(&PpmParkForceParkingMask, &PpmParkNewForceParkingMask, &v9, v9.Size),
          (result = RtlpAndAffinityEx(&v9, &v10, &v9, v9.Size)) != 0) )
    {
      PpmCheckQueuePhaseActions((__int64)&v11, 3);
      PpmCheckQueuePhaseActions((__int64)&v8, 5);
      result = PpmCheckQueuePhaseActions((__int64)&v9, 4);
      if ( BYTE4(PopModernStandbyStateNotify.TrapFrame) )
      {
        KeUpdateSoftParkRankList(v5);
        PpmEventSoftParkRankListChanged(v6);
        result = *(_DWORD *)&PopModernStandbyStateNotify.ApcStateFill[8];
        Flink = PopModernStandbyStateNotify.ApcState.ApcListHead[0].Flink;
        PopModernStandbyStateNotify.ApcState.ApcListHead[0].Flink = PopModernStandbyStateNotify.ApcState.ApcListHead[0].Blink;
        PopModernStandbyStateNotify.ApcState.ApcListHead[0].Blink = Flink;
      }
    }
  }
  return result;
}
