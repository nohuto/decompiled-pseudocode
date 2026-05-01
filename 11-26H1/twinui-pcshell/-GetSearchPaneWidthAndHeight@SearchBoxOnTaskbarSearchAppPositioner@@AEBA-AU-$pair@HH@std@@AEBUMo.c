/*
 * XREFs of ?GetSearchPaneWidthAndHeight@SearchBoxOnTaskbarSearchAppPositioner@@AEBA?AU?$pair@HH@std@@AEBUMonitorInfo@@_N@Z @ 0x180240E0C
 * Callers:
 *     ?GetSearchBoxOnTaskbarAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@AEAA?AUSearchAppSizeAndBorderInfo@@AEBUMonitorInfo@@AEBUtagRECT@@_N@Z @ 0x180240A28 (-GetSearchBoxOnTaskbarAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@AEAA-AUSea.c)
 *     ?GetTaskbarSearchBoxRect@SearchBoxOnTaskbarSearchAppPositioner@@UEAA?AURect@Foundation@Windows@winrt@@AEBUtagRECT@@@Z @ 0x180240F30 (-GetTaskbarSearchBoxRect@SearchBoxOnTaskbarSearchAppPositioner@@UEAA-AURect@Foundation@Windows@w.c)
 * Callees:
 *     ?GetSharedStartSearchWindowHeight@StartSearchSharedUtils@@YANN@Z @ 0x1801E6EC8 (-GetSharedStartSearchWindowHeight@StartSearchSharedUtils@@YANN@Z.c)
 *     ?GetSearchSize@@YA?AUSize@Foundation@Windows@winrt@@AEBUtagRECT@@H@Z @ 0x1803CF59C (-GetSearchSize@@YA-AUSize@Foundation@Windows@winrt@@AEBUtagRECT@@H@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_56546130@@@details@wil@@QEAA_NXZ @ 0x1803CF980 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_56546130@@@details@wil@@QEAA_NXZ.c)
 */

int *__fastcall SearchBoxOnTaskbarSearchAppPositioner::GetSearchPaneWidthAndHeight(
        __int64 a1,
        int *a2,
        __int64 a3,
        char a4)
{
  double v4; // xmm1_8
  char IsEnabled; // al
  unsigned int v9; // edx
  int v10; // eax
  int v11; // ecx
  int v12; // edx
  int v13; // r14d
  int v14; // eax
  int v15; // ebx
  StartSearchSharedUtils *v16; // rcx
  double SharedStartSearchWindowHeight; // xmm0_8
  int v18; // ecx
  int *result; // rax
  __int64 v20; // [rsp+40h] [rbp+8h] BYREF

  v20 = a1;
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_56546130>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_56546130>::GetImpl'::`2'::impl);
  v9 = *(_DWORD *)(a3 + 56);
  if ( IsEnabled )
  {
    GetSearchSize(&v20, a3 + 16, v9);
    v10 = MulDiv((int)*(float *)&v20 + 24, *(_DWORD *)(a3 + 56), 96);
    v11 = (int)*((float *)&v20 + 1);
    v12 = *(_DWORD *)(a3 + 56);
    v13 = v10;
  }
  else
  {
    v14 = MulDiv(800, v9, 96);
    v15 = *(_DWORD *)(a3 + 56);
    v13 = v14;
    MulDiv(HIDWORD(*(_QWORD *)(a3 + 24)) - HIDWORD(*(_QWORD *)(a3 + 16)), 96, v15);
    SharedStartSearchWindowHeight = StartSearchSharedUtils::GetSharedStartSearchWindowHeight(v16, v4);
    v12 = v15;
    v11 = (int)SharedStartSearchWindowHeight + 24;
  }
  v18 = MulDiv(v11, v12, 96);
  if ( a4 )
    v18 += *(_DWORD *)(a3 + 72) - *(_DWORD *)(a3 + 64);
  result = a2;
  *a2 = v13;
  a2[1] = v18;
  return result;
}
