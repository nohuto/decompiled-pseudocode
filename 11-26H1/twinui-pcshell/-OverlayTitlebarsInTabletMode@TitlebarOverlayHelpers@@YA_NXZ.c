/*
 * XREFs of ?OverlayTitlebarsInTabletMode@TitlebarOverlayHelpers@@YA_NXZ @ 0x180519C98
 * Callers:
 *     ?CreateTitlebarConfiguration@TabletModePositioner@@CAJPEAUIApplicationView@@PEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x180517840 (-CreateTitlebarConfiguration@TabletModePositioner@@CAJPEAUIApplicationView@@PEAPEAUIApplicationV.c)
 * Callees:
 *     ?IsTabletMode@TabletModeHelpers@@YA_NXZ @ 0x180059D70 (-IsTabletMode@TabletModeHelpers@@YA_NXZ.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x180190638 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 */

char __fastcall TitlebarOverlayHelpers::OverlayTitlebarsInTabletMode(
        TitlebarOverlayHelpers *this,
        enum _TABLETMODESTATE *a2)
{
  int v2; // eax
  char v3; // bl
  unsigned int v4; // eax
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = `TitlebarOverlayHelpers::OverlayTitlebarsInTabletMode'::`2'::allowOverlay;
  v3 = 0;
  if ( !`TitlebarOverlayHelpers::OverlayTitlebarsInTabletMode'::`2'::allowOverlay )
  {
    v6 = 0;
    if ( SHRegGetDWORD(
           HKEY_CURRENT_USER,
           L"Software\\Microsoft\\Windows\\CurrentVersion\\ImmersiveShell",
           L"AllowTitlebarOverlay",
           &v6) >= 0
      || SHRegGetDWORD(
           HKEY_LOCAL_MACHINE,
           L"Software\\Microsoft\\Windows\\CurrentVersion\\ImmersiveShell",
           L"AllowTitlebarOverlay",
           &v6) >= 0 )
    {
      v4 = v6;
    }
    else
    {
      v4 = -1;
    }
    if ( v4 == -1 )
      v2 = 1;
    else
      v2 = 2 - (v4 != 0);
    `TitlebarOverlayHelpers::OverlayTitlebarsInTabletMode'::`2'::allowOverlay = v2;
  }
  if ( v2 == 1 )
    return TabletModeHelpers::IsTabletMode(this, a2);
  return v3;
}
