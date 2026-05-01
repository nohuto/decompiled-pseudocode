/*
 * XREFs of ?ActualHeight@?$consume_Windows_UI_Xaml_IFrameworkElement@UIFrameworkElement@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180274000
 * Callers:
 *     ?CalculateBarBounds@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@CA?AURect@Foundation@67@PEAUHMONITOR__@@AEBUFrameworkElement@Xaml@UI@67@AEBU8967@@Z @ 0x1802740A0 (-CalculateBarBounds@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt.c)
 *     winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::CalculateFlyoutBoundsAsync$_ResumeCoro$1 @ 0x18059D0C0 (winrt--Windows--Internal--Shell--SnapComponent--implementation--SnapFlyoutInstance-_ea_18059D0C0.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

double __fastcall winrt::impl::consume_Windows_UI_Xaml_IFrameworkElement<winrt::Windows::UI::Xaml::IFrameworkElement>::ActualHeight(
        __int64 *a1)
{
  __int64 v1; // rcx
  unsigned int v2; // eax
  int v4; // [rsp+20h] [rbp-28h] BYREF
  __int128 v5; // [rsp+28h] [rbp-20h]
  char v6; // [rsp+50h] [rbp+8h] BYREF
  double v7; // [rsp+58h] [rbp+10h] BYREF

  v1 = *a1;
  v4 = 0;
  v7 = 0.0;
  v5 = 0LL;
  v2 = (*(__int64 (__fastcall **)(__int64, double *))(*(_QWORD *)v1 + 112LL))(v1, &v7);
  winrt::check_hresult(&v6, v2, &v4);
  return v7;
}
