/*
 * XREFs of ?_Change_array@?$vector@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@V?$allocator@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAXQEAUSnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@_K1@Z @ 0x1802BF6CC
 * Callers:
 *     ??$_Reallocate@$0A@@?$vector@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@V?$allocator@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAXAEA_K@Z @ 0x180295034 (--$_Reallocate@$0A@@-$vector@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Window.c)
 *     ??$_Emplace_reallocate@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@?$vector@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@V?$allocator@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAPEAUSnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAU234567@$$QEAU234567@@Z @ 0x180593DE4 (--$_Emplace_reallocate@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winr.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@YAXPEAUSnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAU123456@AEAV?$allocator@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@0@@Z @ 0x1802950FC (--$_Destroy_range@V-$allocator@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Wind.c)
 */

void __fastcall std::vector<winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion *v6; // rcx

  v6 = *(winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion **)a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion>>(
      v6,
      *(winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion **)(a1 + 8));
    std::_Deallocate<16,0>(
      *(void **)a1,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF0uLL));
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 16 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 16 * a4;
}
