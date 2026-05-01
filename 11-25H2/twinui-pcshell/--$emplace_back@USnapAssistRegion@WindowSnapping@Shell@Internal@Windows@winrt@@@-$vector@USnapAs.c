/*
 * XREFs of ??$emplace_back@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@QEAA?A_T$$QEAUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@Z @ 0x180599964
 * Callers:
 *     ?Initialize@GuidedSnapAssistData@@AEAAXAEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@AEBV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@3@AEBUCRect@Geometry@@H@Z @ 0x1802BCABC (-Initialize@GuidedSnapAssistData@@AEAAXAEBV-$vector@V-$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAPEAUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@QEAU234567@AEBU234567@@Z @ 0x180599870 (--$_Emplace_reallocate@AEBUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@-$vect.c)
 */

char *__fastcall std::vector<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>::emplace_back<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>(
        __int64 a1,
        _OWORD *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rdx

  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 == *(_QWORD *)(a1 + 16) )
    return std::vector<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>::_Emplace_reallocate<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion const &>(
             (const void **)a1,
             (_BYTE *)v3,
             a2);
  *(_OWORD *)v3 = *a2;
  *(_OWORD *)(v3 + 16) = a2[1];
  v4 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v4 + 32;
  return (char *)v4;
}
