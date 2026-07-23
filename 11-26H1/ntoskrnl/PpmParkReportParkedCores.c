/*
 * XREFs of PpmParkReportParkedCores @ 0x14025BAD0
 * Callers:
 *     <none>
 * Callees:
 *     PpmCheckQueuePhaseActions @ 0x140253FF8 (PpmCheckQueuePhaseActions.c)
 *     ?RtlpAndAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x14025BF70 (-RtlpAndAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     ?RtlpXorAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x14025C98C (-RtlpXorAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     RtlSubtractAffinityEx @ 0x14025CBE8 (RtlSubtractAffinityEx.c)
 *     KeUpdateSoftParkRankList @ 0x14025CCE8 (KeUpdateSoftParkRankList.c)
 *     PpmEventSoftParkRankListChanged @ 0x14025CFA0 (PpmEventSoftParkRankListChanged.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
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
  void *v7; // rcx
  struct _KAFFINITY_EX v8; // [rsp+28h] [rbp-E0h] BYREF
  struct _KAFFINITY_EX v9; // [rsp+138h] [rbp+30h] BYREF
  struct _KAFFINITY_EX v10; // [rsp+248h] [rbp+140h] BYREF
  struct _KAFFINITY_EX v11; // [rsp+358h] [rbp+250h] BYREF

  memset_0(&v9.8, 0, sizeof(v9.8));
  memset_0(&v11.8, 0, sizeof(v11.8));
  memset_0(&v10.8, 0, sizeof(v10.8));
  result = (unsigned int)memset_0(&v8.8, 0, sizeof(v8.8));
  if ( PpmIsParkingEnabled )
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
      if ( PpmParkSoftParkRankListChanged )
      {
        KeUpdateSoftParkRankList(v5);
        PpmEventSoftParkRankListChanged(v6);
        v7 = PpmParkOldSoftParkRankList;
        result = (unsigned int)PpmParkNewSoftParkRankList;
        PpmParkOldSoftParkRankList = PpmParkNewSoftParkRankList;
        PpmParkNewSoftParkRankList = v7;
      }
    }
  }
  return result;
}
