/*
 * XREFs of PopDiagTraceThermalRequestActiveUpdate @ 0x1407D5564
 * Callers:
 *     PoSetThermalActiveCooling @ 0x1407CB6B0 (PoSetThermalActiveCooling.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212EF0 (EtwWrite.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceThermalRequestActiveUpdate(__int64 a1)
{
  bool v2; // zf
  BOOL v3; // [rsp+30h] [rbp-48h] BYREF
  __int64 v4; // [rsp+38h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-38h] BYREF
  __int64 *v6; // [rsp+50h] [rbp-28h]
  __int64 v7; // [rsp+58h] [rbp-20h]

  if ( byte_140E67628 )
  {
    if ( EtwEventEnabled(
           *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
           &POP_ETW_EVENT_THERMAL_REQUEST_ACTIVE_UPDATE) )
    {
      v4 = a1;
      v2 = *(_BYTE *)(a1 + 17) == 0;
      *(_QWORD *)&UserData.Size = 4LL;
      v7 = 8LL;
      v3 = !v2;
      UserData.Ptr = (ULONGLONG)&v3;
      v6 = &v4;
      EtwWrite(
        *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
        &POP_ETW_EVENT_THERMAL_REQUEST_ACTIVE_UPDATE,
        0LL,
        2u,
        &UserData);
    }
  }
}
