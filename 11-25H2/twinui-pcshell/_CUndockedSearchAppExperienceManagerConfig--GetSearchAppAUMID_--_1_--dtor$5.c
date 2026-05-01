/*
 * XREFs of _CUndockedSearchAppExperienceManagerConfig::GetSearchAppAUMID_::_1_::dtor$5 @ 0x1806C009F
 * Callers:
 *     <none>
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

void __fastcall CUndockedSearchAppExperienceManagerConfig::GetSearchAppAUMID_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 92) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 92) &= ~1u;
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)(a2 + 112));
  }
}
