/*
 * XREFs of ?get_IsFullscreen@?$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITopLevelWindow3DWrapper@345@@impl@winrt@@UEAAHPEA_N@Z @ 0x18007E830
 * Callers:
 *     <none>
 * Callees:
 *     ?IsFullscreen@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA_NXZ @ 0x18007E870 (-IsFullscreen@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA_NXZ.c)
 *     ??$detach_from@_N@impl@winrt@@YA?A_P$$QEA_N@Z @ 0x18009532C (--$detach_from@_N@impl@winrt@@YA-A_P$$QEA_N@Z.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,winrt::Udwm::Transitions::ITopLevelWindow3DWrapper>::get_IsFullscreen(
        __int64 a1,
        _BYTE *a2)
{
  bool IsFullscreen; // [rsp+30h] [rbp+8h] BYREF

  IsFullscreen = winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::IsFullscreen((winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper *)((a1 - 8) & -(__int64)(a1 != 0)));
  *a2 = winrt::impl::detach_from<bool>(&IsFullscreen);
  return 0LL;
}
