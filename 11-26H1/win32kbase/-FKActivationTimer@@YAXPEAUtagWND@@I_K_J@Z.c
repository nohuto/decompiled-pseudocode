/*
 * XREFs of ?FKActivationTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x140212520
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionSetAccessibilityTimer @ 0x1401BB43C (ApiSetEditionSetAccessibilityTimer.c)
 *     ApiSetEditionKillAccessibilityTimer @ 0x1401C0190 (ApiSetEditionKillAccessibilityTimer.c)
 *     ApiSetEditionPostAccessibilitySettingChangedEvent @ 0x140227B14 (ApiSetEditionPostAccessibilitySettingChangedEvent.c)
 *     ApiSetEditionPostAccessibilityShortcutNotification @ 0x140227B74 (ApiSetEditionPostAccessibilityShortcutNotification.c)
 *     ApiSetEditionPostRitSound @ 0x140227D6C (ApiSetEditionPostRitSound.c)
 */

void __fastcall FKActivationTimer(struct tagWND *a1, int a2, __int64 a3)
{
  int v4; // edx
  int v5; // ecx
  __int64 UserSessionState; // rbx
  int v7; // r8d
  __int64 v8; // rdx
  __int64 v9; // rdx
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  __int64 v13; // rax
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 (__fastcall *v22)(__int64, _QWORD, __int64, _QWORD); // rbx
  int v23; // edx
  int v24; // ecx
  int v25; // r8d

  UserSessionState = W32GetUserSessionState((_DWORD)a1, a2, a3);
  if ( *(_DWORD *)(UserSessionState + 20544) == 1 )
    goto LABEL_20;
  if ( *(_DWORD *)(UserSessionState + 20544) != 2 )
  {
    if ( *(_DWORD *)(UserSessionState + 20544) != 3 )
    {
      if ( *(_DWORD *)(UserSessionState + 20544) == 4 )
      {
        *(_QWORD *)(UserSessionState + 20512) = 0LL;
        *(_DWORD *)(UserSessionState + 20504) = 2000;
        if ( (*(_DWORD *)(W32GetUserSessionState(v5, v4, v7) + 20500) & 0x10) != 0 )
          ApiSetEditionPostRitSound(5LL, v8, 3LL);
      }
      return;
    }
    if ( (*(_DWORD *)(W32GetUserSessionState(v5, v4, v7) + 20500) & 0x10) != 0 )
      ApiSetEditionPostRitSound(5LL, v9, 2LL);
    *(_DWORD *)(UserSessionState + 20512) = 0;
    *(_DWORD *)(UserSessionState + 20504) = 0;
    *(_DWORD *)(UserSessionState + 20516) = 1000;
LABEL_20:
    ++*(_DWORD *)(UserSessionState + 20544);
    v22 = ApiSetEditionSetAccessibilityTimer(a3, 0xFA0u, (__int64)FKActivationTimer, 1u);
    *(_QWORD *)(W32GetUserSessionState(v24, v23, v25) + 20520) = v22;
    return;
  }
  v11 = *(_DWORD *)(W32GetUserSessionState(v5, v4, v7) + 20500);
  if ( (v11 & 1) == 0 )
  {
    if ( (*(_DWORD *)(W32GetUserSessionState(v11, v10, v12) + 20500) & 0x10) != 0 )
      ApiSetEditionPostRitSound(0LL, v21, 0LL);
    ApiSetEditionPostAccessibilityShortcutNotification(2LL);
    goto LABEL_20;
  }
  v13 = W32GetUserSessionState(v11, v10, v12);
  *(_DWORD *)(v13 + 20500) &= ~1u;
  v17 = *(unsigned int *)(W32GetUserSessionState(v15, v14, v16) + 20500);
  if ( (v17 & 0x10) != 0 )
    ApiSetEditionPostRitSound(1LL, v17, 0LL);
  ApiSetEditionPostAccessibilitySettingChangedEvent(2LL);
  v19 = *(_QWORD *)(UserSessionState + 20528);
  if ( v19 )
  {
    ApiSetEditionKillAccessibilityTimer(v18, v19);
    *(_QWORD *)(UserSessionState + 20528) = 0LL;
  }
  v20 = *(_QWORD *)(UserSessionState + 20536);
  if ( v20 )
  {
    ApiSetEditionKillAccessibilityTimer(v18, v20);
    *(_QWORD *)(UserSessionState + 20536) = 0LL;
  }
}
