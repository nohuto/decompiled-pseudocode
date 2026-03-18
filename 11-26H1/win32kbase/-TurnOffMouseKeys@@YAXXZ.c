/*
 * XREFs of ?TurnOffMouseKeys@@YAXXZ @ 0x140212820
 * Callers:
 *     ?xxxMKToggleMouseKeys@@YAHG@Z @ 0x140213140 (-xxxMKToggleMouseKeys@@YAHG@Z.c)
 * Callees:
 *     ?MKHideMouseCursor@@YAXXZ @ 0x1400DF460 (-MKHideMouseCursor@@YAXXZ.c)
 *     ApiSetEditionPostAccessibilitySettingChangedEvent @ 0x140227B14 (ApiSetEditionPostAccessibilitySettingChangedEvent.c)
 *     ApiSetEditionPostRitSound @ 0x140227D6C (ApiSetEditionPostRitSound.c)
 */

void __fastcall TurnOffMouseKeys(int a1, int a2, int a3)
{
  __int64 UserSessionState; // rax
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  __int64 v7; // rax
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  __int64 v14; // rdx

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  *(_DWORD *)(UserSessionState + 20612) &= ~1u;
  v7 = W32GetUserSessionState(v5, v4, v6);
  *(_DWORD *)(v7 + 66792) &= ~0x2000u;
  MKHideMouseCursor(v9, v8, v10);
  if ( (*(_DWORD *)(W32GetUserSessionState(v12, v11, v13) + 20612) & 0x10) != 0 )
    ApiSetEditionPostRitSound(1LL, v14, 0LL);
  ApiSetEditionPostAccessibilitySettingChangedEvent(3LL);
}
