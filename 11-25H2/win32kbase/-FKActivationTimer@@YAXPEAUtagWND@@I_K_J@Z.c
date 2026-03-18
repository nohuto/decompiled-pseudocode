/*
 * XREFs of ?FKActivationTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1401F8D30
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionKillAccessibilityTimer @ 0x14010A9A4 (ApiSetEditionKillAccessibilityTimer.c)
 *     ApiSetEditionSetAccessibilityTimer @ 0x14010AA14 (ApiSetEditionSetAccessibilityTimer.c)
 *     ApiSetEditionPostRitSound @ 0x1401967AC (ApiSetEditionPostRitSound.c)
 *     ApiSetEditionPostAccessibilitySettingChangedEvent @ 0x140225B48 (ApiSetEditionPostAccessibilitySettingChangedEvent.c)
 *     ApiSetEditionPostAccessibilityShortcutNotification @ 0x140225BA8 (ApiSetEditionPostAccessibilityShortcutNotification.c)
 */

void __fastcall FKActivationTimer(struct tagWND *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 UserSessionState; // rbx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx

  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( *(_DWORD *)(UserSessionState + 20512) == 1 )
    goto LABEL_20;
  if ( *(_DWORD *)(UserSessionState + 20512) != 2 )
  {
    if ( *(_DWORD *)(UserSessionState + 20512) != 3 )
    {
      if ( *(_DWORD *)(UserSessionState + 20512) == 4 )
      {
        *(_DWORD *)(UserSessionState + 20480) = 0;
        *(_DWORD *)(UserSessionState + 20484) = 0;
        *(_DWORD *)(UserSessionState + 20472) = 2000;
        if ( (*(_DWORD *)(W32GetUserSessionState(v5, v4) + 20468) & 0x10) != 0 )
          ApiSetEditionPostRitSound(5LL, v7, 3LL);
      }
      return;
    }
    if ( (*(_DWORD *)(W32GetUserSessionState(v5, v4) + 20468) & 0x10) != 0 )
      ApiSetEditionPostRitSound(5LL, v8, 2LL);
    *(_DWORD *)(UserSessionState + 20480) = 0;
    *(_DWORD *)(UserSessionState + 20472) = 0;
    *(_DWORD *)(UserSessionState + 20484) = 1000;
LABEL_20:
    ++*(_DWORD *)(UserSessionState + 20512);
    v19 = ApiSetEditionSetAccessibilityTimer(a3, 4000LL, (__int64)FKActivationTimer, 1u);
    *(_QWORD *)(W32GetUserSessionState(v21, v20) + 20488) = v19;
    return;
  }
  v10 = *(unsigned int *)(W32GetUserSessionState(v5, v4) + 20468);
  if ( (v10 & 1) == 0 )
  {
    if ( (*(_DWORD *)(W32GetUserSessionState(v10, v9) + 20468) & 0x10) != 0 )
      ApiSetEditionPostRitSound(0LL, v18, 0LL);
    ApiSetEditionPostAccessibilityShortcutNotification(2LL);
    goto LABEL_20;
  }
  v11 = W32GetUserSessionState(v10, v9);
  *(_DWORD *)(v11 + 20468) &= ~1u;
  v14 = *(unsigned int *)(W32GetUserSessionState(v13, v12) + 20468);
  if ( (v14 & 0x10) != 0 )
    ApiSetEditionPostRitSound(1LL, v14, 0LL);
  ApiSetEditionPostAccessibilitySettingChangedEvent(2LL);
  v16 = *(_QWORD *)(UserSessionState + 20496);
  if ( v16 )
  {
    ApiSetEditionKillAccessibilityTimer(v15, v16);
    *(_QWORD *)(UserSessionState + 20496) = 0LL;
  }
  v17 = *(_QWORD *)(UserSessionState + 20504);
  if ( v17 )
  {
    ApiSetEditionKillAccessibilityTimer(v15, v17);
    *(_QWORD *)(UserSessionState + 20504) = 0LL;
  }
}
