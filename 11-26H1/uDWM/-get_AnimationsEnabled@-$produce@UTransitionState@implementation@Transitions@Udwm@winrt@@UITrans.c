/*
 * XREFs of ?get_AnimationsEnabled@?$produce@UTransitionState@implementation@Transitions@Udwm@winrt@@UITransitionState@345@@impl@winrt@@UEAAHPEA_N@Z @ 0x180040C40
 * Callers:
 *     <none>
 * Callees:
 *     ?AnimationsEnabled@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA_NXZ @ 0x180042584 (-AnimationsEnabled@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA_NXZ.c)
 *     ??$detach_from@_N@impl@winrt@@YA?A_P$$QEA_N@Z @ 0x18008815C (--$detach_from@_N@impl@winrt@@YA-A_P$$QEA_N@Z.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::implementation::TransitionState,winrt::Udwm::Transitions::ITransitionState>::get_AnimationsEnabled(
        __int64 a1,
        _BYTE *a2)
{
  winrt::Udwm::Transitions::implementation::TransitionState *v3; // rcx
  __int64 result; // rax
  bool v5; // [rsp+30h] [rbp+8h] BYREF

  v3 = (winrt::Udwm::Transitions::implementation::TransitionState *)((a1 - 16) & -(__int64)(a1 != 0));
  try
  {
    v5 = winrt::Udwm::Transitions::implementation::TransitionState::AnimationsEnabled(v3);
    *a2 = winrt::impl::detach_from<bool>(&v5);
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v5);
  }
  return result;
}
