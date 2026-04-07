/*
 * XREFs of ?AdjustSnapUIArrangementStartRect@?$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITopLevelWindow3DWrapper@345@@impl@winrt@@UEAAHURect@Foundation@Windows@3@PEAU4563@@Z @ 0x1800D8340
 * Callers:
 *     <none>
 * Callees:
 *     ??$detach_from@URect@Foundation@Windows@winrt@@@impl@winrt@@YA?A_P$$QEAURect@Foundation@Windows@1@@Z @ 0x18006D22C (--$detach_from@URect@Foundation@Windows@winrt@@@impl@winrt@@YA-A_P$$QEAURect@Foundation@Windows@.c)
 *     ?AdjustSnapUIArrangementStartRect@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA?AURect@Foundation@Windows@5@AEBU6785@@Z @ 0x1800D838C (-AdjustSnapUIArrangementStartRect@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,winrt::Udwm::Transitions::ITopLevelWindow3DWrapper>::AdjustSnapUIArrangementStartRect(
        __int64 a1,
        __int64 a2,
        _OWORD *a3)
{
  _BYTE v5[16]; // [rsp+20h] [rbp-28h] BYREF

  winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::AdjustSnapUIArrangementStartRect(
    (a1 - 8) & -(__int64)(a1 != 0),
    v5,
    a2);
  *a3 = *(_OWORD *)winrt::impl::detach_from<winrt::Windows::Foundation::Rect>();
  return 0LL;
}
