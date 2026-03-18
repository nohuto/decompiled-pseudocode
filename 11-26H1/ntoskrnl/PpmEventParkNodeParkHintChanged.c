/*
 * XREFs of PpmEventParkNodeParkHintChanged @ 0x140514EC8
 * Callers:
 *     PpmParkApplyPolicy @ 0x1402592F0 (PpmParkApplyPolicy.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140212F70 (EtwWriteEx.c)
 *     PpmEventAddAffinityMaskAsSubset @ 0x140420DB0 (PpmEventAddAffinityMaskAsSubset.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

void __fastcall PpmEventParkNodeParkHintChanged(_WORD *a1, _WORD *a2)
{
  struct _EVENT_DATA_DESCRIPTOR *UserData; // rbx
  ULONG UserDataCount; // [rsp+40h] [rbp-59h] BYREF
  int v6; // [rsp+44h] [rbp-55h] BYREF
  int v7; // [rsp+48h] [rbp-51h] BYREF
  _BYTE v8[4]; // [rsp+4Ch] [rbp-4Dh] BYREF
  _BYTE v9[128]; // [rsp+50h] [rbp-49h] BYREF

  UserData = PpmEventPerfCheckData;
  v7 = 0;
  v6 = 0;
  UserDataCount = 0;
  if ( PpmEventPerfCheckData && PpmEtwRegistered )
  {
    if ( EtwEventEnabled(
           (REGHANDLE)PopModernStandbyStateNotify.ApcState.ApcListHead[1].Blink,
           &PPM_ETW_PARK_NODE_PARK_HINT_CHANGE) )
    {
      PpmEventAddAffinityMaskAsSubset(0LL, a1, (__int64)v8, (__int64)v9, (__int64)UserData, &v7, &v6, &UserDataCount);
      PpmEventAddAffinityMaskAsSubset(a1, a2, (__int64)v8, (__int64)v9, (__int64)UserData, &v7, &v6, &UserDataCount);
      EtwWriteEx(
        (REGHANDLE)PopModernStandbyStateNotify.ApcState.ApcListHead[1].Blink,
        &PPM_ETW_PARK_NODE_PARK_HINT_CHANGE,
        0LL,
        0,
        0LL,
        0LL,
        UserDataCount,
        UserData);
    }
  }
}
