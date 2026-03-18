/*
 * XREFs of rimAbIsPointInPenDeadzone @ 0x140202D28
 * Callers:
 *     rimAbIsPointerSuppressedByPointer @ 0x140202E5C (rimAbIsPointerSuppressedByPointer.c)
 *     RIMIsPointInPenDeadzone @ 0x1402039D0 (RIMIsPointInPenDeadzone.c)
 *     ?SuppressDeadzoneContactsInFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAXAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@@Z @ 0x140216960 (-SuppressDeadzoneContactsInFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAXAEBUDEVICE_OUTPUT_CONFIG.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ApiSetGetUserHandedness @ 0x1401C158C (ApiSetGetUserHandedness.c)
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@01W4tagHANDEDNESS@@@Z @ 0x14020C38C (-IsInDeadzone@RIMDeadzone@@QEAAHAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@01W4tagHANDEDNESS.c)
 */

__int64 __fastcall rimAbIsPointInPenDeadzone(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v8; // ebx
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // r11d
  int v13; // r11d
  __int64 UserSessionState; // rax
  int v15; // edx
  int v16; // ecx
  int v17; // r8d
  int v18; // edx
  int v19; // ecx
  int v20; // r8d
  int v21; // edx
  __int64 v22; // rcx
  int v23; // r8d
  __int64 v24; // rbx
  __int64 v25; // rcx
  int UserHandedness; // eax
  __int64 v27; // rax

  v8 = 0;
  v12 = *(_DWORD *)(W32GetUserSessionState(a1, a2, a3) + 244);
  if ( v12 )
  {
    v13 = v12 - 1;
    if ( v13 )
    {
      if ( (unsigned int)(v13 - 1) <= 1 )
      {
        UserSessionState = W32GetUserSessionState(v10, v9, v11);
        RIMLockExclusive(UserSessionState + 40);
        if ( *(_QWORD *)(W32GetUserSessionState(v16, v15, v17) + 256) )
        {
          v22 = *(_QWORD *)(W32GetUserSessionState(v19, v18, v20) + 256);
          if ( *(_DWORD *)(v22 + 8) != 1 )
            MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 39);
          v24 = *(_QWORD *)(W32GetUserSessionState(v22, v21, v23) + 256);
          UserHandedness = ApiSetGetUserHandedness(v25);
          v8 = RIMDeadzone::IsInDeadzone(v24, a1, a2, a3, a4, UserHandedness);
        }
        v27 = W32GetUserSessionState(v19, v18, v20);
        RIMUnlockExclusive(v27 + 40);
      }
    }
    else
    {
      return 1;
    }
  }
  return v8;
}
