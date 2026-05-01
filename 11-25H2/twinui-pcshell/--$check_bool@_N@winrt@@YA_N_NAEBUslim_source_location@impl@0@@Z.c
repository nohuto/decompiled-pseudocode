/*
 * XREFs of ??$check_bool@_N@winrt@@YA_N_NAEBUslim_source_location@impl@0@@Z @ 0x180441190
 * Callers:
 *     winrt::Microsoft::UI::EnsureInteropImplLoaded @ 0x180441BFC (winrt--Microsoft--UI--EnsureInteropImplLoaded.c)
 * Callees:
 *     ?throw_last_error@winrt@@YAXAEBUslim_source_location@impl@1@@Z @ 0x1802E097C (-throw_last_error@winrt@@YAXAEBUslim_source_location@impl@1@@Z.c)
 */

char __fastcall winrt::check_bool<bool>(char a1, winrt *a2)
{
  if ( !a1 )
    winrt::throw_last_error(a2, a2);
  return a1;
}
