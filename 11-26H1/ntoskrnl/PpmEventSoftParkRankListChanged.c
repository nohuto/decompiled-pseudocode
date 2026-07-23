/*
 * XREFs of PpmEventSoftParkRankListChanged @ 0x14025CFA0
 * Callers:
 *     PpmParkApplyPolicy @ 0x14025AAD0 (PpmParkApplyPolicy.c)
 *     PpmParkReportParkedCores @ 0x14025BAD0 (PpmParkReportParkedCores.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void PpmEventSoftParkRankListChanged()
{
  void *v0; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-38h] BYREF
  void *v2; // [rsp+50h] [rbp-28h]
  int v3; // [rsp+58h] [rbp-20h]
  int v4; // [rsp+5Ch] [rbp-1Ch]

  v0 = PpmParkNewSoftParkRankList;
  if ( PpmEtwRegistered )
  {
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_SOFT_PARKING_RANK_LIST_CHANGED) )
    {
      UserData.Ptr = (ULONGLONG)&KeMaximumProcessors;
      v3 = 4 * KeMaximumProcessors;
      *(_QWORD *)&UserData.Size = 4LL;
      v2 = v0;
      v4 = 0;
      EtwWriteEx(PpmEtwHandle, &PPM_ETW_SOFT_PARKING_RANK_LIST_CHANGED, 0LL, 0, 0LL, 0LL, 2u, &UserData);
    }
  }
}
