/*
 * XREFs of ?GetSearchboxTaskbarMode@@YA?AW4SearchboxTaskbarMode@@XZ @ 0x1803C0450
 * Callers:
 *     ?ShowInternal@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@W4CortanaAppTransitionType@4567@@Z @ 0x1803C3A1C (-ShowInternal@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOpti.c)
 *     ?ShowInternal@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@W4CortanaAppTransitionType@4567@@Z @ 0x1803CDAEC (-ShowInternal@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOption.c)
 * Callees:
 *     ?IsTabletMode@TabletModeHelpers@@YA_NXZ @ 0x180108940 (-IsTabletMode@TabletModeHelpers@@YA_NXZ.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x180198438 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchInAllMarkets@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1803C2FD0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchInAllMarkets@@@details@wil@@QEAAX_N.c)
 */

__int64 __fastcall GetSearchboxTaskbarMode(TabletModeHelpers *a1, enum _TABLETMODESTATE *a2)
{
  __int64 v2; // rdx
  unsigned int v3; // ebx
  unsigned int v5; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v6; // [rsp+38h] [rbp+10h] BYREF

  if ( TabletModeHelpers::IsTabletMode(a1, a2) )
  {
    return 1;
  }
  else
  {
    v3 = 1;
    LOBYTE(v2) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchInAllMarkets>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_SearchInAllMarkets>::GetImpl'::`2'::impl,
      v2);
    v6 = 2;
    if ( SHRegGetDWORD(
           HKEY_CURRENT_USER,
           L"Software\\Microsoft\\Windows\\CurrentVersion\\Search",
           L"SearchboxTaskbarMode",
           &v6) != -2147024894 )
      return v6;
    v5 = 0;
    if ( SHRegGetDWORD(
           HKEY_CURRENT_USER,
           L"Software\\Microsoft\\Windows\\CurrentVersion\\Search",
           L"SearchboxTaskbarModeForceGlyph",
           &v5) < 0
      || !v5 )
    {
      return v6;
    }
  }
  return v3;
}
