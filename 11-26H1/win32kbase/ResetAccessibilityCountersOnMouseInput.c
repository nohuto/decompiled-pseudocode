/*
 * XREFs of ResetAccessibilityCountersOnMouseInput @ 0x140134450
 * Callers:
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x140162848 (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x140111814 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ApiSetEditionKillAccessibilityTimer @ 0x1401C0190 (ApiSetEditionKillAccessibilityTimer.c)
 */

void __fastcall ResetAccessibilityCountersOnMouseInput(int a1, int a2, int a3)
{
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  __int64 v9; // rdx
  __int64 UserSessionState; // rbx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  int v15; // edx
  int v16; // ecx
  int v17; // r8d
  signed __int32 v18[10]; // [rsp+0h] [rbp-28h] BYREF
  char v19; // [rsp+30h] [rbp+8h] BYREF

  *(_BYTE *)(W32GetUserSessionState(a1, a2, a3) + 14044) = 0;
  *(_BYTE *)(W32GetUserSessionState(v4, v3, v5) + 14045) = 0;
  _InterlockedOr(v18, 0);
  UserSessionState = W32GetUserSessionState(v7, v6, v8);
  if ( *(_QWORD *)(UserSessionState + 20520) )
  {
    ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v19, v9);
    v14 = *(_QWORD *)(UserSessionState + 20520);
    if ( v14 )
    {
      ApiSetEditionKillAccessibilityTimer();
      *(_QWORD *)(UserSessionState + 20520) = 0LL;
      *(_DWORD *)(W32GetUserSessionState(v16, v15, v17) + 20544) = 8;
    }
    if ( !v19 )
      UserSessionSwitchLeaveCritWithNonPaged(v11, v14, v12, v13);
  }
}
