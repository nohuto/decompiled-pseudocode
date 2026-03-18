/*
 * XREFs of ResetAccessibilityCountersOnMouseInput @ 0x1400EBCC0
 * Callers:
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1401908B0 (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1400E1960 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ??1ReEnterLeaveCrit@@QEAA@XZ @ 0x1400E1A28 (--1ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ApiSetEditionKillAccessibilityTimer @ 0x14010A9A4 (ApiSetEditionKillAccessibilityTimer.c)
 */

void __fastcall ResetAccessibilityCountersOnMouseInput(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 UserSessionState; // rbx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF
  char v11; // [rsp+30h] [rbp+8h] BYREF

  *(_BYTE *)(W32GetUserSessionState(a1, a2) + 14052) = 0;
  *(_BYTE *)(W32GetUserSessionState(v3, v2) + 14053) = 0;
  _InterlockedOr(v10, 0);
  UserSessionState = W32GetUserSessionState(v5, v4);
  if ( *(_QWORD *)(UserSessionState + 20488) )
  {
    ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v11);
    v7 = *(_QWORD *)(UserSessionState + 20488);
    if ( v7 )
    {
      ApiSetEditionKillAccessibilityTimer();
      *(_QWORD *)(UserSessionState + 20488) = 0LL;
      *(_DWORD *)(W32GetUserSessionState(v9, v8) + 20512) = 8;
    }
    ReEnterLeaveCrit::~ReEnterLeaveCrit((ReEnterLeaveCrit *)&v11, v7);
  }
}
