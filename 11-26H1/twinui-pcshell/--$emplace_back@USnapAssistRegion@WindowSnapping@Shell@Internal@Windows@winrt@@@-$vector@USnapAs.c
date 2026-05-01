/*
 * XREFs of ??$emplace_back@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@QEAAAEAUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@$$QEAU234567@@Z @ 0x1805BDC8C
 * Callers:
 *     ?SetRegions@XamlSnapAssistViewHost@@UEAAJIPEAUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@ABI@@@Z @ 0x180201430 (-SetRegions@XamlSnapAssistViewHost@@UEAAJIPEAUSnapAssistRegion@WindowSnapping@Shell@Internal@Win.c)
 *     ?Initialize@GuidedSnapAssistData@@AEAAXAEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@AEBV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@3@AEBUCRect@Geometry@@H@Z @ 0x1802B3DF8 (-Initialize@GuidedSnapAssistData@@AEAAXAEBV-$vector@V-$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAPEAUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@QEAU234567@AEBU234567@@Z @ 0x1805BDB30 (--$_Emplace_reallocate@AEBUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@-$vect.c)
 */

char *__fastcall std::vector<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>::emplace_back<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>(
        __int64 *a1,
        __int128 *a2)
{
  __int128 *v3; // rdx
  __int64 v4; // rdx

  v3 = (__int128 *)a1[1];
  if ( v3 == (__int128 *)a1[2] )
    return std::vector<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>::_Emplace_reallocate<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion const &>(
             a1,
             (__int64)v3,
             a2);
  *v3 = *a2;
  v3[1] = a2[1];
  v4 = a1[1];
  a1[1] = v4 + 32;
  return (char *)v4;
}
