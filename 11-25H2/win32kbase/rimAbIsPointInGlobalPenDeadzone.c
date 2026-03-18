/*
 * XREFs of rimAbIsPointInGlobalPenDeadzone @ 0x1401DCBA4
 * Callers:
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x140030AA8 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     rimAbIsPointerSuppressedByGlobalPenDeadzone @ 0x14017F5C8 (rimAbIsPointerSuppressedByGlobalPenDeadzone.c)
 * Callees:
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     ApiSetGetUserHandedness @ 0x140127A30 (ApiSetGetUserHandedness.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@01W4tagHANDEDNESS@@@Z @ 0x1401EDD08 (-IsInDeadzone@RIMDeadzone@@QEAAHAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@01W4tagHANDEDNESS.c)
 */

__int64 __fastcall rimAbIsPointInGlobalPenDeadzone(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 UserSessionState; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  int UserHandedness; // ebx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax

  v6 = 0;
  if ( !*(_DWORD *)(W32GetUserSessionState(a1, a2) + 244) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 77);
  if ( *(_DWORD *)(a1 + 492) )
  {
    UserSessionState = W32GetUserSessionState(v8, v7);
    RIMLockExclusive(UserSessionState + 40);
    if ( *(_DWORD *)(W32GetUserSessionState(v11, v10) + 244) == 1 )
    {
      v6 = 1;
    }
    else if ( *(_QWORD *)(W32GetUserSessionState(v13, v12) + 256) )
    {
      v14 = *(_QWORD *)(W32GetUserSessionState(v13, v12) + 256);
      if ( *(_DWORD *)(v14 + 8) != 1 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 90);
      UserHandedness = ApiSetGetUserHandedness(v15, v14);
      v19 = W32GetUserSessionState(v18, v17);
      v6 = RIMDeadzone::IsInDeadzone(*(_QWORD *)(v19 + 256), a2, a3, a1 + 496, a1 + 608, UserHandedness);
    }
    v20 = W32GetUserSessionState(v13, v12);
    RIMUnlockExclusive(v20 + 40);
  }
  return v6;
}
