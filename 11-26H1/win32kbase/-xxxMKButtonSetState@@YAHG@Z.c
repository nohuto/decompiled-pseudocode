/*
 * XREFs of ?xxxMKButtonSetState@@YAHG@Z @ 0x140212CC0
 * Callers:
 *     ?MouseKeys@@YAHPEAUtagKE@@KH@Z @ 0x1401496E0 (-MouseKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?xxxMKButtonClick@@YAHG@Z @ 0x140212C50 (-xxxMKButtonClick@@YAHG@Z.c)
 *     ?xxxMKToggleMouseKeys@@YAHG@Z @ 0x140213140 (-xxxMKToggleMouseKeys@@YAHG@Z.c)
 * Callees:
 *     MouseButtonAction @ 0x14021BD90 (MouseButtonAction.c)
 *     ApiSetEditionPostAccessibilitySettingChangedEvent @ 0x140227B14 (ApiSetEditionPostAccessibilitySettingChangedEvent.c)
 */

__int64 __fastcall xxxMKButtonSetState(int a1, int a2, int a3)
{
  __int16 v3; // bx
  BOOL v4; // ebp
  __int64 UserSessionState; // rsi
  __int16 v6; // cx
  __int16 v7; // di
  __int16 v8; // di

  v3 = a1;
  v4 = (_WORD)a1 != 0;
  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  v6 = *(_WORD *)(UserSessionState + 20636);
  v7 = *(_WORD *)(UserSessionState + 20638);
  if ( v3 )
    v8 = v6 & ~v7;
  else
    v8 = v6 | v7;
  if ( (((unsigned __int8)v8 ^ (unsigned __int8)v6) & 1) != 0 )
    MouseButtonAction(1LL, v4);
  if ( ((*(_BYTE *)(UserSessionState + 20636) ^ (unsigned __int8)v8) & 2) != 0 )
    MouseButtonAction(2LL, v4);
  *(_WORD *)(UserSessionState + 20636) = v8;
  ApiSetEditionPostAccessibilitySettingChangedEvent(3LL);
  return 0LL;
}
