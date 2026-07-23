/*
 * XREFs of PpmEventAffinityMask @ 0x140610F10
 * Callers:
 *     PpmIdleUpdateSystemLatencyLimit @ 0x14028F150 (PpmIdleUpdateSystemLatencyLimit.c)
 *     PoExecuteIdleCheck @ 0x1404E9AC4 (PoExecuteIdleCheck.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     PpmEventAddAffinityMaskAsSubset @ 0x1404185F0 (PpmEventAddAffinityMaskAsSubset.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall PpmEventAffinityMask(PCEVENT_DESCRIPTOR EventDescriptor, _WORD *a2)
{
  ULONG UserDataCount; // [rsp+40h] [rbp-478h] BYREF
  _BYTE v5[4]; // [rsp+44h] [rbp-474h] BYREF
  int v6; // [rsp+48h] [rbp-470h] BYREF
  int v7; // [rsp+4Ch] [rbp-46Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-468h] BYREF
  _BYTE v9[64]; // [rsp+460h] [rbp-58h] BYREF

  v7 = 0;
  v6 = 0;
  UserDataCount = 0;
  if ( PpmEtwRegistered )
  {
    if ( EtwEventEnabled(PpmEtwHandle, EventDescriptor) )
    {
      PpmEventAddAffinityMaskAsSubset(0LL, a2, (__int64)v5, (__int64)v9, (__int64)&UserData, &v7, &v6, &UserDataCount);
      EtwWriteEx(PpmEtwHandle, EventDescriptor, 0LL, 0, 0LL, 0LL, UserDataCount, &UserData);
    }
  }
}
