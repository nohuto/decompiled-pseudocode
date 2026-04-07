/*
 * XREFs of ?get_Rect@?$produce@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@UIUserResizeVisual@345@@impl@winrt@@UEAAHPEAURect@Foundation@Windows@3@@Z @ 0x1800E0EA0
 * Callers:
 *     <none>
 * Callees:
 *     ??$detach_from@URect@Foundation@Windows@winrt@@@impl@winrt@@YA?A_P$$QEAURect@Foundation@Windows@1@@Z @ 0x18002466C (--$detach_from@URect@Foundation@Windows@winrt@@@impl@winrt@@YA-A_P$$QEAURect@Foundation@Windows@.c)
 *     ?Rect@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAA?AU0Foundation@Windows@5@XZ @ 0x1800E07A8 (-Rect@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAA-AU0Foundation@Windows@5@XZ.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::implementation::UserResizeVisual,winrt::Udwm::Transitions::IUserResizeVisual>::get_Rect(
        __int64 a1)
{
  _OWORD *v1; // rax
  _OWORD *v2; // r8
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF

  winrt::Udwm::Transitions::implementation::UserResizeVisual::Rect((a1 - 8) & -(__int64)(a1 != 0), &v4);
  v1 = (_OWORD *)winrt::impl::detach_from<winrt::Windows::Foundation::Rect>();
  *v2 = *v1;
  return 0LL;
}
