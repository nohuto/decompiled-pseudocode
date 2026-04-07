/*
 * XREFs of ?get_IsInSnapUIArrangement@?$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITopLevelWindow3DWrapper@345@@impl@winrt@@UEAAHPEA_N@Z @ 0x1800D8740
 * Callers:
 *     <none>
 * Callees:
 *     ?IsInSnapUIArrangement@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA_NXZ @ 0x18007E830 (-IsInSnapUIArrangement@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA_NXZ.c)
 *     ??$detach_from@_N@impl@winrt@@YA?A_P$$QEA_N@Z @ 0x18008815C (--$detach_from@_N@impl@winrt@@YA-A_P$$QEA_N@Z.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,winrt::Udwm::Transitions::ITopLevelWindow3DWrapper>::get_IsInSnapUIArrangement(
        __int64 a1)
{
  char v1; // al
  _BYTE *v2; // rdx
  int v4; // [rsp+30h] [rbp+8h] BYREF

  LOBYTE(v4) = winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::IsInSnapUIArrangement((winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper *)((a1 - 8) & -(__int64)(a1 != 0)));
  v1 = winrt::impl::detach_from<bool>((__int64)&v4);
  *v2 = v1;
  return 0LL;
}
