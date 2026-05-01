/*
 * XREFs of ?TryGetHKCU@SearchSettingsHelper@SearchSettings@@CAJPEAPEAUHKEY__@@@Z @ 0x1803B9DE4
 * Callers:
 *     ?DoKeysExistAndCanAccess@SearchSettingsHelper@SearchSettings@@SA_NXZ @ 0x1803B0C30 (-DoKeysExistAndCanAccess@SearchSettingsHelper@SearchSettings@@SA_NXZ.c)
 *     ?SetIsIndividualWebSearchProviderEnabled@SearchSettingsHelper@SearchSettings@@SAJQEBG_N@Z @ 0x1803B8BA4 (-SetIsIndividualWebSearchProviderEnabled@SearchSettingsHelper@SearchSettings@@SAJQEBG_N@Z.c)
 *     ?SetWebSearchProviderInstalledDate@SearchSettingsHelper@SearchSettings@@SAJQEBGV?$time_point@Uclock@winrt@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@chrono@std@@@Z @ 0x1803B8E54 (-SetWebSearchProviderInstalledDate@SearchSettingsHelper@SearchSettings@@SAJQEBGV-$time_point@Ucl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SearchSettings::SearchSettingsHelper::TryGetHKCU(PHKEY phkResult)
{
  unsigned int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = RegOpenCurrentUser(0x20019u, phkResult);
  if ( v1 )
    return wil::details::in1diag3::Return_Win32(
             retaddr,
             (void *)0x317,
             (int)"shellcommon\\internal\\shell\\inc\\Search\\SearchSettingsHelper.h",
             (const char *)v1);
  else
    return 0LL;
}
