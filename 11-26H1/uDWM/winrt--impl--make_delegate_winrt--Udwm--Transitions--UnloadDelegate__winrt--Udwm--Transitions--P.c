/*
 * XREFs of winrt::impl::make_delegate_winrt::Udwm::Transitions::UnloadDelegate__winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition::PostTransition_::_9_::_lambda_1___ @ 0x1800D6B30
 * Callers:
 *     winrt::Udwm::Transitions::UnloadDelegate::UnloadDelegate__winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition::PostTransition_::_9_::_lambda_1___ @ 0x1800D636C (winrt--Udwm--Transitions--UnloadDelegate--UnloadDelegate__winrt--Udwm--Transitions--Private--imp.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x1800056CC (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ??2@YAPEAX_K@Z @ 0x180085BEC (--2@YAPEAX_K@Z.c)
 *     ??0implements_delegate_base@impl@winrt@@QEAA@XZ @ 0x180086164 (--0implements_delegate_base@impl@winrt@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::make_delegate_winrt::Udwm::Transitions::UnloadDelegate__winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition::PostTransition_::_9_::_lambda_1___(
        _QWORD *a1,
        __int64 *a2)
{
  _QWORD *v4; // rax
  unsigned int v5; // edx
  _QWORD *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  _QWORD *result; // rax

  v4 = operator new(0x20uLL);
  v6 = v4;
  if ( v4 )
  {
    winrt::impl::implements_delegate_base::implements_delegate_base(
      (winrt::impl::implements_delegate_base *)(v4 + 1),
      v5);
    v7 = *a2;
    *a2 = 0LL;
    v6[2] = v7;
    v8 = a2[1];
    v6[3] = v8;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    _InterlockedIncrement((volatile signed __int32 *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&`winrt::get_module_lock'::`2'::s_lock));
    *v6 = off_1800F1668;
  }
  else
  {
    v6 = 0LL;
  }
  result = a1;
  *a1 = v6;
  return result;
}
