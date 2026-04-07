/*
 * XREFs of ?GetMaximizeSnapStartRect@?$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITopLevelWindow3DWrapper@345@@impl@winrt@@UEAAHPEAURect@Foundation@Windows@3@@Z @ 0x18006D1E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$detach_from@URect@Foundation@Windows@winrt@@@impl@winrt@@YA?A_P$$QEAURect@Foundation@Windows@1@@Z @ 0x18006D22C (--$detach_from@URect@Foundation@Windows@winrt@@@impl@winrt@@YA-A_P$$QEAURect@Foundation@Windows@.c)
 *     ?GetMaximizeSnapStartRect@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA?AURect@Foundation@Windows@5@XZ @ 0x18006D244 (-GetMaximizeSnapStartRect@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA-AU.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,winrt::Udwm::Transitions::ITopLevelWindow3DWrapper>::GetMaximizeSnapStartRect(
        __int64 a1,
        _OWORD *a2)
{
  __int64 MaximizeSnapStartRect; // rax
  _BYTE v5[16]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v6[24]; // [rsp+30h] [rbp-18h] BYREF

  MaximizeSnapStartRect = winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::GetMaximizeSnapStartRect(
                            (a1 - 8) & -(__int64)(a1 != 0),
                            v5);
  *a2 = *(_OWORD *)winrt::impl::detach_from<winrt::Windows::Foundation::Rect>(v6, MaximizeSnapStartRect);
  return 0LL;
}
