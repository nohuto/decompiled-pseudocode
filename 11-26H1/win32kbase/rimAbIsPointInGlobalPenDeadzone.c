/*
 * XREFs of rimAbIsPointInGlobalPenDeadzone @ 0x1400F85FC
 * Callers:
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1400752B0 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     rimAbIsPointerSuppressedByGlobalPenDeadzone @ 0x1400F8450 (rimAbIsPointerSuppressedByGlobalPenDeadzone.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ApiSetGetUserHandedness @ 0x1401C158C (ApiSetGetUserHandedness.c)
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@01W4tagHANDEDNESS@@@Z @ 0x14020C38C (-IsInDeadzone@RIMDeadzone@@QEAAHAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@01W4tagHANDEDNESS.c)
 */

__int64 __fastcall rimAbIsPointInGlobalPenDeadzone(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // ebx
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  __int64 UserSessionState; // rax
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  int v15; // edx
  int v16; // ecx
  int v17; // r8d
  int UserHandedness; // ebx
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  __int64 v22; // rax
  __int64 v23; // rax

  v6 = 0;
  if ( !*(_DWORD *)(W32GetUserSessionState(a1, a2, a3) + 244) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 77LL);
  if ( *(_DWORD *)(a1 + 492) )
  {
    UserSessionState = W32GetUserSessionState(v8, v7, v9);
    RIMLockExclusive(UserSessionState + 40);
    if ( *(_DWORD *)(W32GetUserSessionState(v13, v12, v14) + 244) == 1 )
    {
      v6 = 1;
    }
    else if ( *(_QWORD *)(W32GetUserSessionState(v16, v15, v17) + 256) )
    {
      if ( *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v16, v15, v17) + 256) + 8LL) != 1 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 90LL);
      UserHandedness = ApiSetGetUserHandedness();
      v22 = W32GetUserSessionState(v20, v19, v21);
      v6 = RIMDeadzone::IsInDeadzone(*(_QWORD *)(v22 + 256), a2, a3, a1 + 496, a1 + 608, UserHandedness);
    }
    v23 = W32GetUserSessionState(v16, v15, v17);
    RIMUnlockExclusive(v23 + 40);
  }
  return v6;
}
