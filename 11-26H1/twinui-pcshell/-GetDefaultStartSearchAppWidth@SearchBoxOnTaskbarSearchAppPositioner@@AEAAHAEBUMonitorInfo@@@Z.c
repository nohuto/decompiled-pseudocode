/*
 * XREFs of ?GetDefaultStartSearchAppWidth@SearchBoxOnTaskbarSearchAppPositioner@@AEAAHAEBUMonitorInfo@@@Z @ 0x1803CF4A0
 * Callers:
 *     ?GetAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@UEAA?AUSearchAppSizeAndBorderInfo@@AEBUtagRECT@@0W4SearchAppActivationMode@Shell@UI@WindowsUdk@winrt@@_NAEBUhstring@8@@Z @ 0x180240400 (-GetAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@UEAA-AUSearchAppSizeAndBorde.c)
 * Callees:
 *     ?IsWideAtStartupEnabled@SearchAppSizeHelpers@@YA_NH@Z @ 0x1801B3F74 (-IsWideAtStartupEnabled@SearchAppSizeHelpers@@YA_NH@Z.c)
 *     ?GetSearchSize@@YA?AUSize@Foundation@Windows@winrt@@AEBUtagRECT@@H@Z @ 0x1803CF59C (-GetSearchSize@@YA-AUSize@Foundation@Windows@winrt@@AEBUtagRECT@@H@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_56546130@@@details@wil@@QEAA_NXZ @ 0x1803CF980 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_56546130@@@details@wil@@QEAA_NXZ.c)
 */

__int64 __fastcall SearchBoxOnTaskbarSearchAppPositioner::GetDefaultStartSearchAppWidth(
        SearchBoxOnTaskbarSearchAppPositioner *this,
        const struct MonitorInfo *a2)
{
  int v3; // ebx
  char IsEnabled; // al
  __int64 v5; // r8
  unsigned int v6; // eax
  unsigned int v7; // ebx
  SearchBoxOnTaskbarSearchAppPositioner *v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = this;
  v3 = 642;
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_56546130>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_56546130>::GetImpl'::`2'::impl);
  v5 = *((unsigned int *)a2 + 14);
  if ( IsEnabled )
  {
    GetSearchSize(&v9, (char *)a2 + 16, v5);
    v3 = (int)*(float *)&v9;
  }
  else
  {
    v6 = MulDiv(*((_DWORD *)a2 + 2) - *(_DWORD *)a2, 96, v5);
    if ( SearchAppSizeHelpers::IsWideAtStartupEnabled((SearchAppSizeHelpers *)v6) )
      v3 = 776;
  }
  v7 = v3 + 24;
  if ( !*((_DWORD *)a2 + 13) || *((_DWORD *)a2 + 13) == 2 )
    v7 += 12;
  return v7;
}
