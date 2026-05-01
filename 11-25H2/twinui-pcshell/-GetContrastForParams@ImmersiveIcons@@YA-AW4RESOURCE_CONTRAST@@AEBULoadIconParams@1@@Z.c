/*
 * XREFs of ?GetContrastForParams@ImmersiveIcons@@YA?AW4RESOURCE_CONTRAST@@AEBULoadIconParams@1@@Z @ 0x1802A2924
 * Callers:
 *     ?GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z @ 0x18009C11C (-GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z.c)
 *     ?InitResourceContextForAllThemes@ImmersiveIcons@@YAJAEBULoadIconParams@1@PEAUIResourceContext@@@Z @ 0x18065893C (-InitResourceContextForAllThemes@ImmersiveIcons@@YAJAEBULoadIconParams@1@PEAUIResourceContext@@@.c)
 *     ?InitResourceContextForLightTheme@ImmersiveIcons@@YAJAEBULoadIconParams@1@PEAUIResourceContext@@@Z @ 0x180658ACC (-InitResourceContextForLightTheme@ImmersiveIcons@@YAJAEBULoadIconParams@1@PEAUIResourceContext@@.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SystemLightTheme@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802A2984 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SystemLightTheme@@@details@wil@@QEAAX_NW4.c)
 *     ?GetMrtContrast@ImmersiveIcons@@YA?AW4RESOURCE_CONTRAST@@XZ @ 0x1802C2164 (-GetMrtContrast@ImmersiveIcons@@YA-AW4RESOURCE_CONTRAST@@XZ.c)
 */

__int64 __fastcall ImmersiveIcons::GetContrastForParams(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SystemLightTheme>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_SystemLightTheme>::GetImpl'::`2'::impl,
    a2);
  result = 0LL;
  if ( !*(_DWORD *)(a1 + 36) )
    return ImmersiveIcons::GetMrtContrast();
  if ( *(_DWORD *)(a1 + 36) == 2 )
  {
    if ( *(_DWORD *)(a1 + 44) == 2 )
    {
      return 2LL;
    }
    else
    {
      result = 3LL;
      if ( *(_DWORD *)(a1 + 44) != 1 )
        return 1LL;
    }
  }
  return result;
}
