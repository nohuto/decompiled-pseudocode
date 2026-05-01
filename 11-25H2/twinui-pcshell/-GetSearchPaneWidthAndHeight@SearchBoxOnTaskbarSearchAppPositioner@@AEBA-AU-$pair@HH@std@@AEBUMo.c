/*
 * XREFs of ?GetSearchPaneWidthAndHeight@SearchBoxOnTaskbarSearchAppPositioner@@AEBA?AU?$pair@HH@std@@AEBUMonitorInfo@@_N@Z @ 0x18024CEB0
 * Callers:
 *     ?GetSearchBoxOnTaskbarAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@AEAA?AUSearchAppSizeAndBorderInfo@@AEBUMonitorInfo@@AEBUtagRECT@@_N@Z @ 0x18024CACC (-GetSearchBoxOnTaskbarAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@AEAA-AUSea.c)
 *     ?GetTaskbarSearchBoxRect@SearchBoxOnTaskbarSearchAppPositioner@@UEAA?AURect@Foundation@Windows@winrt@@AEBUtagRECT@@@Z @ 0x18024CF80 (-GetTaskbarSearchBoxRect@SearchBoxOnTaskbarSearchAppPositioner@@UEAA-AURect@Foundation@Windows@w.c)
 * Callees:
 *     ?GetSharedStartSearchWindowHeight@StartSearchSharedUtils@@YANN@Z @ 0x1801F0E64 (-GetSharedStartSearchWindowHeight@StartSearchSharedUtils@@YANN@Z.c)
 */

int *__fastcall SearchBoxOnTaskbarSearchAppPositioner::GetSearchPaneWidthAndHeight(
        __int64 a1,
        int *a2,
        __int64 a3,
        char a4)
{
  double v4; // xmm1_8
  int v8; // r14d
  int v9; // ebx
  StartSearchSharedUtils *v10; // rcx
  double SharedStartSearchWindowHeight; // xmm0_8
  int v12; // eax
  int *result; // rax

  v8 = MulDiv(800, *(_DWORD *)(a3 + 56), 96);
  v9 = *(_DWORD *)(a3 + 56);
  MulDiv(HIDWORD(*(_QWORD *)(a3 + 24)) - HIDWORD(*(_QWORD *)(a3 + 16)), 96, v9);
  SharedStartSearchWindowHeight = StartSearchSharedUtils::GetSharedStartSearchWindowHeight(v10, v4);
  v12 = MulDiv((int)SharedStartSearchWindowHeight + 24, v9, 96);
  if ( a4 )
    v12 += *(_DWORD *)(a3 + 72) - *(_DWORD *)(a3 + 64);
  a2[1] = v12;
  result = a2;
  *a2 = v8;
  return result;
}
