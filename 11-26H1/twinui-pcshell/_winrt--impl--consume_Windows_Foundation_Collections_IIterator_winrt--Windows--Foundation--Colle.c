/*
 * XREFs of _winrt::impl::consume_Windows_Foundation_Collections_IIterator_winrt::Windows::Foundation::Collections::IIterator_winrt::Windows::Foundation::Collections::IKeyValuePair_winrt::hstring_winrt::Windows::Foundation::IInspectable____winrt::Windows::Foundation::Collections::IKeyValuePair_winrt::hstring_winrt::Windows::Foundation::IInspectable___::operator__::_1_::dtor$1 @ 0x1806E3F82
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::impl::consume_Windows_Foundation_Collections_IIterator_winrt::Windows::Foundation::Collections::IIterator_winrt::Windows::Foundation::Collections::IKeyValuePair_winrt::hstring_winrt::Windows::Foundation::IInspectable____winrt::Windows::Foundation::Collections::IKeyValuePair_winrt::hstring_winrt::Windows::Foundation::IInspectable___::operator__::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~2u;
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(*(winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension **)(a2 + 40));
  }
}
