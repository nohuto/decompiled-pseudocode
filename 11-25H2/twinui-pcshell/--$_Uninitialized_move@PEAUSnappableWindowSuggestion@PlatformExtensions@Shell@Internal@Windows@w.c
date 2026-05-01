/*
 * XREFs of ??$_Uninitialized_move@PEAUSnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@V?$allocator@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@YAPEAUSnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAU123456@0PEAU123456@AEAV?$allocator@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@0@@Z @ 0x1802950A4
 * Callers:
 *     ??$_Reallocate@$0A@@?$vector@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@V?$allocator@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAXAEA_K@Z @ 0x180295034 (--$_Reallocate@$0A@@-$vector@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Window.c)
 *     ??$_Emplace_reallocate@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@?$vector@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@V?$allocator@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAPEAUSnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAU234567@$$QEAU234567@@Z @ 0x180593DE4 (--$_Emplace_reallocate@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winr.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@YAXPEAUSnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAU123456@AEAV?$allocator@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@0@@Z @ 0x1802950FC (--$_Destroy_range@V-$allocator@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Wind.c)
 */

winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion *__fastcall std::_Uninitialized_move<winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion *>(
        __int64 *a1,
        __int64 *a2,
        winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion *a3)
{
  __int64 *v4; // r8
  char *v5; // r9
  __int64 v6; // rcx

  if ( a1 != a2 )
  {
    v4 = a1 + 1;
    v5 = (char *)(a3 - (winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion *)a1);
    do
    {
      *(_QWORD *)a3 = *(v4 - 1);
      a3 = (winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion *)((char *)a3 + 16);
      v6 = *v4;
      *v4 = 0LL;
      *(__int64 *)((char *)v4 + (_QWORD)v5) = v6;
      v4 += 2;
    }
    while ( v4 - 1 != a2 );
  }
  std::_Destroy_range<std::allocator<winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion>>(a3);
  return a3;
}
