/*
 * XREFs of ?CalculateBarBounds@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@CA?AURect@Foundation@67@PEAUHMONITOR__@@AEBUFrameworkElement@Xaml@UI@67@AEBU8967@@Z @ 0x1802740A0
 * Callers:
 *     ?ShowBar@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180274684 (-ShowBar@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 * Callees:
 *     ?ActualHeight@?$consume_Windows_UI_Xaml_IFrameworkElement@UIFrameworkElement@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180274000 (-ActualHeight@-$consume_Windows_UI_Xaml_IFrameworkElement@UIFrameworkElement@Xaml@UI@Windows@win.c)
 *     ?ActualWidth@?$consume_Windows_UI_Xaml_IFrameworkElement@UIFrameworkElement@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180274050 (-ActualWidth@-$consume_Windows_UI_Xaml_IFrameworkElement@UIFrameworkElement@Xaml@UI@Windows@winr.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::CalculateBarBounds(
        __int64 a1,
        HMONITOR a2,
        __int64 *a3,
        __int64 a4)
{
  float v8; // xmm6_4
  double v9; // xmm0_8
  int v10; // edx
  float v11; // xmm2_4
  int v12; // eax
  int v13; // edx
  int v14; // eax
  float v15; // xmm3_4
  float v16; // xmm0_4
  float right; // xmm3_4
  int nNumerator; // [rsp+20h] [rbp-50h] BYREF
  struct tagMONITORINFO mi; // [rsp+28h] [rbp-48h] BYREF

  nNumerator = 0;
  GetDpiForMonitor(a2, 0LL, &nNumerator, &nNumerator);
  v8 = winrt::impl::consume_Windows_UI_Xaml_IFrameworkElement<winrt::Windows::UI::Xaml::IFrameworkElement>::ActualHeight(a3);
  v9 = winrt::impl::consume_Windows_UI_Xaml_IFrameworkElement<winrt::Windows::UI::Xaml::IFrameworkElement>::ActualWidth(a3);
  v10 = nNumerator;
  v11 = v9;
  *(_OWORD *)a1 = 0LL;
  v12 = MulDiv((int)v11, v10, 96);
  v13 = nNumerator;
  *(float *)(a1 + 8) = (float)v12;
  v14 = MulDiv((int)v8, v13, 96);
  v15 = *(float *)(a1 + 8);
  *(float *)(a1 + 12) = (float)v14;
  *(float *)a1 = (float)((float)(*(float *)(a4 + 8) * 0.5) + *(float *)a4) - (float)(v15 * 0.5);
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(a4 + 4);
  if ( v15 > *(float *)(a4 + 8) )
  {
    memset(&mi, 0, sizeof(mi));
    mi.cbSize = 40;
    if ( GetMonitorInfoW(a2, &mi) )
    {
      v16 = *(float *)a1 + *(float *)(a1 + 8);
      right = (float)mi.rcMonitor.right;
      if ( (float)mi.rcMonitor.left <= *(float *)a1 )
      {
        if ( v16 > right )
          *(float *)a1 = *(float *)a1 - (float)(v16 - right);
      }
      else
      {
        *(float *)a1 = (float)mi.rcMonitor.left;
      }
    }
  }
  return a1;
}
