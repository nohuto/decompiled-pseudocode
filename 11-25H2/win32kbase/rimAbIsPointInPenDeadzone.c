/*
 * XREFs of rimAbIsPointInPenDeadzone @ 0x1401DCCEC
 * Callers:
 *     rimAbIsPointerSuppressedByPointer @ 0x1401DD114 (rimAbIsPointerSuppressedByPointer.c)
 *     RIMIsPointInPenDeadzone @ 0x1401DDCE0 (RIMIsPointInPenDeadzone.c)
 *     ?SuppressDeadzoneContactsInFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAXAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@@Z @ 0x14020BE80 (-SuppressDeadzoneContactsInFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAXAEBUDEVICE_OUTPUT_CONFIG.c)
 * Callees:
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     ApiSetGetUserHandedness @ 0x140127A30 (ApiSetGetUserHandedness.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@01W4tagHANDEDNESS@@@Z @ 0x1401EDD08 (-IsInDeadzone@RIMDeadzone@@QEAAHAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@01W4tagHANDEDNESS.c)
 */

__int64 __fastcall rimAbIsPointInPenDeadzone(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // r11d
  int v12; // r11d
  __int64 UserSessionState; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  int UserHandedness; // eax
  __int64 v24; // rax

  v8 = 0;
  v11 = *(_DWORD *)(W32GetUserSessionState(a1, a2) + 244);
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( v12 )
    {
      if ( (unsigned int)(v12 - 1) <= 1 )
      {
        UserSessionState = W32GetUserSessionState(v10, v9);
        RIMLockExclusive(UserSessionState + 40);
        if ( *(_QWORD *)(W32GetUserSessionState(v15, v14) + 256) )
        {
          v19 = *(_QWORD *)(W32GetUserSessionState(v17, v16) + 256);
          if ( *(_DWORD *)(v19 + 8) != 1 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 39);
          v20 = *(_QWORD *)(W32GetUserSessionState(v19, v18) + 256);
          UserHandedness = ApiSetGetUserHandedness(v22, v21);
          v8 = RIMDeadzone::IsInDeadzone(v20, a1, a2, a3, a4, UserHandedness);
        }
        v24 = W32GetUserSessionState(v17, v16);
        RIMUnlockExclusive(v24 + 40);
      }
    }
    else
    {
      return 1;
    }
  }
  return v8;
}
