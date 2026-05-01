/*
 * XREFs of ComparePackageVersions @ 0x1805AA780
 * Callers:
 *     ?IsPackageInstalled@LockScreenWidgetPackageHelperBase@@IEAA_NAEBUhstring@winrt@@AEBUPackageVersion@ApplicationModel@Windows@3@@Z @ 0x1805B0854 (-IsPackageInstalled@LockScreenWidgetPackageHelperBase@@IEAA_NAEBUhstring@winrt@@AEBUPackageVersi.c)
 *     ?evaluate@_tip_SettingsStoreAppInstallerTest@@QEAAXXZ @ 0x1805B826C (-evaluate@_tip_SettingsStoreAppInstallerTest@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ComparePackageVersions(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rdx

  if ( (unsigned __int16)a1 >= (unsigned __int16)a2 )
  {
    if ( (unsigned __int16)a1 > (unsigned __int16)a2 )
      return 1LL;
    if ( WORD1(a1) >= WORD1(a2) )
    {
      if ( WORD1(a1) > WORD1(a2) )
        return 1LL;
      if ( WORD2(a1) >= WORD2(a2) )
      {
        if ( WORD2(a1) <= WORD2(a2) )
        {
          v2 = HIWORD(a1);
          v3 = HIWORD(a2);
          if ( (unsigned __int16)v2 >= (unsigned __int16)v3 )
            return (unsigned __int16)v2 > (unsigned __int16)v3;
          return 0xFFFFFFFFLL;
        }
        return 1LL;
      }
    }
  }
  return 0xFFFFFFFFLL;
}
