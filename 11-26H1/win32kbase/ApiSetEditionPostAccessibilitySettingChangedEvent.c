/*
 * XREFs of ApiSetEditionPostAccessibilitySettingChangedEvent @ 0x140227B14
 * Callers:
 *     ?xxxStickyKeys@@YAHPEAUtagKE@@KH@Z @ 0x140124580 (-xxxStickyKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?xxxUnlatchStickyKeys@@YAXXZ @ 0x14019C560 (-xxxUnlatchStickyKeys@@YAXXZ.c)
 *     ?xxxTurnOffStickyKeys@@YAXXZ @ 0x1401C6AA0 (-xxxTurnOffStickyKeys@@YAXXZ.c)
 *     ?FKActivationTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x140212520 (-FKActivationTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?MKButtonSelect@@YAHG@Z @ 0x140212730 (-MKButtonSelect@@YAHG@Z.c)
 *     ?TurnOffMouseKeys@@YAXXZ @ 0x140212820 (-TurnOffMouseKeys@@YAXXZ.c)
 *     ?xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x140212890 (-xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxMKButtonSetState@@YAHG@Z @ 0x140212CC0 (-xxxMKButtonSetState@@YAHG@Z.c)
 *     ?xxxMKToggleMouseKeys@@YAHG@Z @ 0x140213140 (-xxxMKToggleMouseKeys@@YAHG@Z.c)
 *     ?xxxTwoKeysDown@@YAHH@Z @ 0x1402134A0 (-xxxTwoKeysDown@@YAHH@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall ApiSetEditionPostAccessibilitySettingChangedEvent(__int64 a1))(void)
{
  unsigned int v1; // ebx
  __int64 (*result)(void); // rax
  __int64 v3; // rcx

  v1 = a1;
  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 4464LL);
  if ( result )
  {
    result = (__int64 (*)(void))result();
    if ( (int)result >= 0 )
    {
      result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v3) + 48) + 4472LL);
      if ( result )
        return (__int64 (*)(void))((__int64 (__fastcall *)(_QWORD))result)(v1);
    }
  }
  return result;
}
