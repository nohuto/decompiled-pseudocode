/*
 * XREFs of ?GetWindowStateIdForAction@HotkeyHandler@@AEAAIW4SnapAction@1@UtagRECT@@PEAUIImmersiveMonitor@@_N@Z @ 0x1805AF0CC
 * Callers:
 *     ?GetWindowStateIdForSnapInfo@HotkeyHandler@@AEAAIPEAUHWND__@@UIntendedHotKeySnapInfo@1@@Z @ 0x1805AF1E4 (-GetWindowStateIdForSnapInfo@HotkeyHandler@@AEAAIPEAUHWND__@@UIntendedHotKeySnapInfo@1@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA?AW4SnapRegion@@AEBUCRect@Geometry@@PEAUIImmersiveMonitor@@@Z @ 0x18016CF88 (-DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA-AW4SnapRegion@@AEBUCRect@Geometry@.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?IsValidRegionForAction@HotkeyHandler@@AEAA_NW4SnapAction@1@W4SnapRegion@@@Z @ 0x1805B034C (-IsValidRegionForAction@HotkeyHandler@@AEAA_NW4SnapAction@1@W4SnapRegion@@@Z.c)
 *     ?GetResourceForRegion@SnapAccessibilityHelpers@@YAIW4SnapRegion@@M_N@Z @ 0x1805BEB40 (-GetResourceForRegion@SnapAccessibilityHelpers@@YAIW4SnapRegion@@M_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall HotkeyHandler::GetWindowStateIdForAction(
        __int64 a1,
        unsigned int a2,
        int *a3,
        SnapRectHelpers *a4,
        char a5)
{
  __int64 (__fastcall *v8)(SnapRectHelpers *, __int128 *); // rax
  int v9; // eax
  int v11; // eax
  int v12; // r8d
  int v13; // r9d
  unsigned int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  _DWORD v18[4]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v19; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v8 = *(__int64 (__fastcall **)(SnapRectHelpers *, __int128 *))(*(_QWORD *)a4 + 88LL);
  v19 = 0LL;
  v9 = v8(a4, &v19);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x482,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\hotkeyhandler.cpp",
      (const char *)(unsigned int)v9);
    return 15031LL;
  }
  v11 = a3[1];
  v12 = a3[2];
  v13 = *a3;
  v18[3] = a3[3];
  v18[1] = v11;
  v18[2] = v12;
  v18[0] = v13;
  v14 = SnapLayoutHelpers::DetermineSnapRegionFromMonitorWorkArea((__int64)v18, a4);
  if ( !(unsigned __int8)HotkeyHandler::IsValidRegionForAction(v14, a2, v14) )
    return 15031LL;
  LOBYTE(v17) = a5;
  return SnapAccessibilityHelpers::GetResourceForRegion(v16, v15, v17);
}
