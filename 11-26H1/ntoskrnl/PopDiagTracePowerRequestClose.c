/*
 * XREFs of PopDiagTracePowerRequestClose @ 0x140AD3278
 * Callers:
 *     PopPowerRequestDelete @ 0x140AD30B0 (PopPowerRequestDelete.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall PopDiagTracePowerRequestClose(__int64 a1)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF
  __int64 v2; // [rsp+60h] [rbp+8h] BYREF

  v2 = a1;
  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_CLOSE_POWER_REQUEST) )
    {
      UserData.Ptr = (ULONGLONG)&v2;
      *(_QWORD *)&UserData.Size = 8LL;
      EtwWrite(PopDiagHandle, &POP_ETW_EVENT_CLOSE_POWER_REQUEST, 0LL, 1u, &UserData);
    }
  }
}
