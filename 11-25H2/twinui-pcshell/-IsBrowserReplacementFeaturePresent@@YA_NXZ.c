/*
 * XREFs of ?IsBrowserReplacementFeaturePresent@@YA_NXZ @ 0x18066D21C
 * Callers:
 *     GetPidlsFromTaskbarLayout @ 0x180669AEC (GetPidlsFromTaskbarLayout.c)
 * Callees:
 *     ?GetInstalledBrowserChannelInfo@@YA_NW4ChannelId@BrowserChannels@@W4InstallationLevel@2@PEAUInfo@2@@Z @ 0x1806698E8 (-GetInstalledBrowserChannelInfo@@YA_NW4ChannelId@BrowserChannels@@W4InstallationLevel@2@PEAUInfo.c)
 *     ?IsPackagedBrowserReplacementFeaturePresent@@YA_NXZ @ 0x18066D508 (-IsPackagedBrowserReplacementFeaturePresent@@YA_NXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_BrowserReplacement@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18066F37C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_BrowserReplacement@@@details@wil@@QEAAX_N.c)
 */

char __fastcall IsBrowserReplacementFeaturePresent(__int64 a1, __int64 a2)
{
  char v2; // bl

  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_BrowserReplacement>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_BrowserReplacement>::GetImpl'::`2'::impl,
    a2,
    0LL);
  v2 = 0;
  if ( GetInstalledBrowserChannelInfo()
    || IsPackagedBrowserReplacementFeaturePresent()
    || IsPackagedBrowserReplacementFeaturePresent() )
  {
    return 1;
  }
  return v2;
}
