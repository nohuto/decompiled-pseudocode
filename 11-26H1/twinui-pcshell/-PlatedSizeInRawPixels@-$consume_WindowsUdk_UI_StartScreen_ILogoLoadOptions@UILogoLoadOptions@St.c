/*
 * XREFs of ?PlatedSizeInRawPixels@?$consume_WindowsUdk_UI_StartScreen_ILogoLoadOptions@UILogoLoadOptions@StartScreen@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUSize@Foundation@Windows@3@@Z @ 0x1805398D8
 * Callers:
 *     JointResize::TagViewWithLogoAsync$_ResumeCoro$1 @ 0x18053A1A0 (JointResize--TagViewWithLogoAsync$_ResumeCoro$1.c)
 *     _lambda_c0ce33e06c92a42a96b12c6bd24e1411_::operator()_winrt::Windows::UI::Input::GestureRecognizer_ @ 0x18058E618 (_lambda_c0ce33e06c92a42a96b12c6bd24e1411_--operator()_winrt--Windows--UI--Input--GestureRecogniz.c)
 *     ?CreateShowShellViewOptions@ShellAnimationCoordinator@implementation@Animations@Shell@Internal@Windows@winrt@@SA?AUShowShellViewOptions@4UI@WindowsUdk@7@W4ShellView@49WindowsUdk@7@_KUPoint@Foundation@67@AEBUGestureAnimationData@Input@9WindowsUdk@7@@Z @ 0x18069BE40 (-CreateShowShellViewOptions@ShellAnimationCoordinator@implementation@Animations@Shell@Internal@W.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int *__fastcall winrt::impl::consume_WindowsUdk_UI_StartScreen_ILogoLoadOptions<winrt::WindowsUdk::UI::StartScreen::ILogoLoadOptions>::PlatedSizeInRawPixels(
        __int64 *a1,
        unsigned int *a2)
{
  __m128 v2; // xmm1
  __int64 v3; // rcx
  int v4; // eax
  int v6; // [rsp+20h] [rbp-28h] BYREF
  __int128 v7; // [rsp+28h] [rbp-20h]
  int v8; // [rsp+50h] [rbp+8h] BYREF

  v2 = (__m128)a2[1];
  v3 = *a1;
  v7 = 0LL;
  v6 = 0;
  v4 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v3 + 72LL))(
         v3,
         _mm_unpacklo_ps((__m128)*a2, v2).m128_u64[0]);
  return winrt::check_hresult(&v8, v4, (__int64)&v6);
}
