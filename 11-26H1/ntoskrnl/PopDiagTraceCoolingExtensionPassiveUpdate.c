/*
 * XREFs of PopDiagTraceCoolingExtensionPassiveUpdate @ 0x140B3C0C4
 * Callers:
 *     PopPropogateCoolingChange @ 0x1404357C4 (PopPropogateCoolingChange.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212EF0 (EtwWrite.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceCoolingExtensionPassiveUpdate(__int64 a1)
{
  char v2; // [rsp+30h] [rbp-48h] BYREF
  __int64 v3; // [rsp+38h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-38h] BYREF
  __int64 *v5; // [rsp+50h] [rbp-28h]
  __int64 v6; // [rsp+58h] [rbp-20h]

  if ( byte_140E67628 )
  {
    if ( EtwEventEnabled(
           *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
           &POP_ETW_EVENT_COOLING_EXTENSION_PASSIVE_UPDATE) )
    {
      v2 = *(_BYTE *)(a1 + 66);
      v3 = a1;
      UserData.Ptr = (ULONGLONG)&v2;
      v5 = &v3;
      *(_QWORD *)&UserData.Size = 1LL;
      v6 = 8LL;
      EtwWrite(
        *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
        &POP_ETW_EVENT_COOLING_EXTENSION_PASSIVE_UPDATE,
        0LL,
        2u,
        &UserData);
    }
  }
}
