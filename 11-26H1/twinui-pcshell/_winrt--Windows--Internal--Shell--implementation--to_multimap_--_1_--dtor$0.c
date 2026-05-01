/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::to_multimap_::_1_::dtor$0 @ 0x180704EA5
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$multimap@Uhstring@winrt@@U12@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@4@@std@@QEAA@XZ @ 0x18033817C (--1-$multimap@Uhstring@winrt@@U12@U-$less@Uhstring@winrt@@@std@@V-$allocator@U-$pair@$$CBUhstrin.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::to_multimap_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    std::multimap<winrt::hstring,winrt::hstring>::~multimap<winrt::hstring,winrt::hstring>(*(void ***)(a2 + 128));
  }
}
