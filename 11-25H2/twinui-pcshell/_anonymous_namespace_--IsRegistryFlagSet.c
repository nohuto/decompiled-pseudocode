/*
 * XREFs of _anonymous_namespace_::IsRegistryFlagSet @ 0x1805B0E34
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::StartWidgetsOverwatchAsync$_ResumeCoro$1 @ 0x1805B3AC0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--StartWidgetsOverwatchAsync$_R.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::UpdateWidgetsTelemetryAsync$_ResumeCoro$1 @ 0x1805B5D00 (winrt--Windows--Internal--Shell--implementation--DashboardManager--UpdateWidgetsTel_ea_1805B5D00.c)
 * Callees:
 *     <none>
 */

bool __fastcall anonymous_namespace_::IsRegistryFlagSet(HKEY a1, const WCHAR *a2, const WCHAR *a3, char a4)
{
  int v6; // [rsp+40h] [rbp-18h] BYREF
  DWORD v7[5]; // [rsp+44h] [rbp-14h] BYREF

  v6 = 0;
  v7[0] = 4;
  if ( RegGetValueW(a1, a2, a3, 0x18u, 0LL, &v6, v7) )
    return a4;
  else
    return v6 != 0;
}
