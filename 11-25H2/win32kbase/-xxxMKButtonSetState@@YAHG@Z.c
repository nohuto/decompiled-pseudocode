/*
 * XREFs of ?xxxMKButtonSetState@@YAHG@Z @ 0x1401F94C0
 * Callers:
 *     ?MouseKeys@@YAHPEAUtagKE@@KH@Z @ 0x14010A2E0 (-MouseKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?xxxMKButtonClick@@YAHG@Z @ 0x1401F9450 (-xxxMKButtonClick@@YAHG@Z.c)
 *     ?xxxMKToggleMouseKeys@@YAHG@Z @ 0x1401F9930 (-xxxMKToggleMouseKeys@@YAHG@Z.c)
 * Callees:
 *     MouseButtonAction @ 0x1402168A0 (MouseButtonAction.c)
 *     ApiSetEditionPostAccessibilitySettingChangedEvent @ 0x140225B48 (ApiSetEditionPostAccessibilitySettingChangedEvent.c)
 */

__int64 __fastcall xxxMKButtonSetState(__int64 a1, __int64 a2)
{
  __int16 v2; // bx
  BOOL v3; // esi
  __int64 UserSessionState; // rdi
  __int16 v5; // ax
  __int16 v6; // bx

  v2 = a1;
  v3 = (_WORD)a1 != 0;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v5 = *(_WORD *)(UserSessionState + 20604);
  if ( v2 )
    v6 = v5 & ~*(_WORD *)(UserSessionState + 20606);
  else
    v6 = *(_WORD *)(UserSessionState + 20606) | v5;
  if ( (((unsigned __int8)v6 ^ (unsigned __int8)v5) & 1) != 0 )
    MouseButtonAction(1LL, v3);
  if ( ((*(_BYTE *)(UserSessionState + 20604) ^ (unsigned __int8)v6) & 2) != 0 )
    MouseButtonAction(2LL, v3);
  *(_WORD *)(UserSessionState + 20604) = v6;
  ApiSetEditionPostAccessibilitySettingChangedEvent(3LL);
  return 0LL;
}
