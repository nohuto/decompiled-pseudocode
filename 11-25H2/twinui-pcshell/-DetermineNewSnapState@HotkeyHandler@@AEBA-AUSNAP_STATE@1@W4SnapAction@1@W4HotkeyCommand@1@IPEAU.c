/*
 * XREFs of ?DetermineNewSnapState@HotkeyHandler@@AEBA?AUSNAP_STATE@1@W4SnapAction@1@W4HotkeyCommand@1@IPEAUIImmersiveMonitor@@@Z @ 0x18058A8B4
 * Callers:
 *     ?HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z @ 0x18058B250 (-HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z.c)
 * Callees:
 *     ?AreQuadrantsEnabled@SnapLayoutHelpers@@YA_NXZ @ 0x1800D996C (-AreQuadrantsEnabled@SnapLayoutHelpers@@YA_NXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?CanFitColumnLayouts@SnapLayoutHelpers@@YA_NAEBUCRect@Geometry@@H@Z @ 0x180587200 (-CanFitColumnLayouts@SnapLayoutHelpers@@YA_NAEBUCRect@Geometry@@H@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall HotkeyHandler::DetermineNewSnapState(
        SnapLayoutHelpers *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        char a5,
        __int64 *a6)
{
  __int64 v7; // r15
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  struct Geometry::CRect *v13; // [rsp+20h] [rbp-38h] BYREF
  __int128 v14; // [rsp+28h] [rbp-30h] BYREF

  *(_DWORD *)a2 = 0;
  *(_DWORD *)(a2 + 4) = 0;
  v7 = a4;
  v8 = a4 + 4LL * a3;
  if ( !SnapLayoutHelpers::AreQuadrantsEnabled(a1, (enum _TABLETMODESTATE *)a2) )
  {
    v9 = (__int64)*(&HotkeyHandler::MoreSnapZonesHotkeyMaps::TabletMode + v8);
LABEL_9:
    *(_QWORD *)a2 = v9;
    return a2;
  }
  if ( (a5 & 1) == 0 )
  {
    *(_QWORD *)a2 = *(&HotkeyHandler::MoreSnapZonesHotkeyMaps::Default + v8);
    return a2;
  }
  v10 = (__int64)*(&HotkeyHandler::MoreSnapZonesHotkeyMaps::Column + v8);
  v13 = 0LL;
  *(_QWORD *)a2 = v10;
  v11 = *a6;
  v14 = 0LL;
  if ( (*(int (__fastcall **)(__int64 *, __int128 *))(v11 + 88))(a6, &v14) >= 0
    && (*(int (__fastcall **)(__int64 *, struct Geometry::CRect **, char *))(*a6 + 112))(a6, &v13, (char *)&v13 + 4) >= 0
    && !SnapLayoutHelpers::CanFitColumnLayouts(
          (SnapLayoutHelpers *)&v14,
          (const struct Geometry::CRect *)(unsigned int)v13)
    && *(_DWORD *)a2 == 10 )
  {
    v9 = qword_180898880[v7];
    goto LABEL_9;
  }
  return a2;
}
