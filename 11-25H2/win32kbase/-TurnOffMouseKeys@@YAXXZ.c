/*
 * XREFs of ?TurnOffMouseKeys@@YAXXZ @ 0x1401F9020
 * Callers:
 *     ?xxxMKToggleMouseKeys@@YAHG@Z @ 0x1401F9930 (-xxxMKToggleMouseKeys@@YAHG@Z.c)
 * Callees:
 *     ?MKHideMouseCursor@@YAXXZ @ 0x1400A6E40 (-MKHideMouseCursor@@YAXXZ.c)
 *     ApiSetEditionPostRitSound @ 0x1401967AC (ApiSetEditionPostRitSound.c)
 *     ApiSetEditionPostAccessibilitySettingChangedEvent @ 0x140225B48 (ApiSetEditionPostAccessibilitySettingChangedEvent.c)
 */

void __fastcall TurnOffMouseKeys(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx

  UserSessionState = W32GetUserSessionState(a1, a2);
  *(_DWORD *)(UserSessionState + 20580) &= ~1u;
  v5 = W32GetUserSessionState(v4, v3);
  *(_DWORD *)(v5 + 66800) &= ~0x2000u;
  MKHideMouseCursor(v7, v6);
  if ( (*(_DWORD *)(W32GetUserSessionState(v9, v8) + 20580) & 0x10) != 0 )
    ApiSetEditionPostRitSound(1LL, v10, 0LL);
  ApiSetEditionPostAccessibilitySettingChangedEvent(3LL);
}
