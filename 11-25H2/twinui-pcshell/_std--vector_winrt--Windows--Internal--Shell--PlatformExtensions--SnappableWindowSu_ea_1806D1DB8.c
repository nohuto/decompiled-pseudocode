/*
 * XREFs of _std::vector_winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion_std::allocator_winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion___::_Emplace_reallocate_winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion__::_1_::catch$2 @ 0x1806D1DB8
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@YAXPEAUSnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAU123456@AEAV?$allocator@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@0@@Z @ 0x1802950FC (--$_Destroy_range@V-$allocator@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Wind.c)
 *     _CxxThrowException_0 @ 0x1802D3008 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion_std::allocator_winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion___::_Emplace_reallocate_winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion__::_1_::catch_2(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion>>(
    *(winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion **)(a2 + 112),
    *(winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion **)(a2 + 136));
  std::_Deallocate<16,0>(*(void **)(a2 + 32), (const struct std::nothrow_t *)(16LL * *(_QWORD *)(a2 + 120)));
  throw;
}
