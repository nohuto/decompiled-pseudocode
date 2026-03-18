/*
 * XREFs of PpmEventSoftParkRankListChanged @ 0x14025B7C0
 * Callers:
 *     PpmParkApplyPolicy @ 0x1402592F0 (PpmParkApplyPolicy.c)
 *     PpmParkReportParkedCores @ 0x14025A2F0 (PpmParkReportParkedCores.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140212F70 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

void PpmEventSoftParkRankListChanged()
{
  struct _LIST_ENTRY *Blink; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-38h] BYREF
  struct _LIST_ENTRY *v2; // [rsp+50h] [rbp-28h]
  int v3; // [rsp+58h] [rbp-20h]
  int v4; // [rsp+5Ch] [rbp-1Ch]

  Blink = PopModernStandbyStateNotify.ApcState.ApcListHead[0].Blink;
  if ( PpmEtwRegistered )
  {
    if ( EtwEventEnabled(
           (REGHANDLE)PopModernStandbyStateNotify.ApcState.ApcListHead[1].Blink,
           &PPM_ETW_SOFT_PARKING_RANK_LIST_CHANGED) )
    {
      UserData.Ptr = (ULONGLONG)&KeMaximumProcessors;
      v3 = 4 * KeMaximumProcessors;
      *(_QWORD *)&UserData.Size = 4LL;
      v2 = Blink;
      v4 = 0;
      EtwWriteEx(
        (REGHANDLE)PopModernStandbyStateNotify.ApcState.ApcListHead[1].Blink,
        &PPM_ETW_SOFT_PARKING_RANK_LIST_CHANGED,
        0LL,
        0,
        0LL,
        0LL,
        2u,
        &UserData);
    }
  }
}
