/*
 * XREFs of ?GetAbsoluteWindowRect@?$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITopLevelWindow3DWrapper@345@@impl@winrt@@UEAAHPEAURect@Foundation@Windows@3@@Z @ 0x18006D190
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAbsoluteWindowRect@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA?AURect@Foundation@Windows@5@XZ @ 0x18000B470 (-GetAbsoluteWindowRect@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA-AURec.c)
 *     ??$detach_from@URect@Foundation@Windows@winrt@@@impl@winrt@@YA?A_P$$QEAURect@Foundation@Windows@1@@Z @ 0x18006D22C (--$detach_from@URect@Foundation@Windows@winrt@@@impl@winrt@@YA-A_P$$QEAURect@Foundation@Windows@.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,winrt::Udwm::Transitions::ITopLevelWindow3DWrapper>::GetAbsoluteWindowRect(
        __int64 a1,
        _OWORD *a2)
{
  __int64 AbsoluteWindowRect; // rax
  _BYTE v5[16]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v6[24]; // [rsp+30h] [rbp-18h] BYREF

  AbsoluteWindowRect = winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::GetAbsoluteWindowRect(
                         (a1 - 8) & -(__int64)(a1 != 0),
                         (__int64)v5);
  *a2 = *(_OWORD *)winrt::impl::detach_from<winrt::Windows::Foundation::Rect>(v6, AbsoluteWindowRect);
  return 0LL;
}
