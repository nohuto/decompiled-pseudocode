/*
 * XREFs of ?get@?$weak_ref@UITransitionState@Transitions@Udwm@winrt@@@winrt@@QEBA@XZ @ 0x1800D8140
 * Callers:
 *     _winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition::PostTransition_::_9_::_lambda_1_::operator() @ 0x1800D6E80 (_winrt--Udwm--Transitions--Private--implementation--WindowJointResizeTransition--Po_ea_1800D6E80.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::weak_ref<winrt::Udwm::Transitions::ITransitionState>::get(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  if ( v2 )
  {
    v5 = 0LL;
    (*(void (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)v2 + 24LL))(
      v2,
      &winrt::impl::guid_v<winrt::Udwm::Transitions::ITransitionState>,
      &v5);
    *a2 = v5;
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
