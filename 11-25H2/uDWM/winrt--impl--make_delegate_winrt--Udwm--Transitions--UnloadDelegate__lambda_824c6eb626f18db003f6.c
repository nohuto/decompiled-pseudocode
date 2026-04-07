/*
 * XREFs of winrt::impl::make_delegate_winrt::Udwm::Transitions::UnloadDelegate__lambda_824c6eb626f18db003f69816ba8f789d___ @ 0x1800D9AFC
 * Callers:
 *     winrt::Udwm::Transitions::UnloadDelegate::UnloadDelegate__lambda_824c6eb626f18db003f69816ba8f789d___ @ 0x1800D9334 (winrt--Udwm--Transitions--UnloadDelegate--UnloadDelegate__lambda_824c6eb626f18db003f69816ba8f789.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x180007758 (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800946B8 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0implements_delegate_base@impl@winrt@@QEAA@XZ @ 0x18009693C (--0implements_delegate_base@impl@winrt@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::make_delegate_winrt::Udwm::Transitions::UnloadDelegate__lambda_824c6eb626f18db003f69816ba8f789d___(
        _QWORD *a1,
        const struct std::nothrow_t *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  _QWORD *result; // rax

  v4 = operator new[](0x20uLL, a2);
  v5 = v4;
  if ( v4 )
  {
    winrt::impl::implements_delegate_base::implements_delegate_base((winrt::impl::implements_delegate_base *)(v4 + 1));
    v6 = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0LL;
    v5[2] = v6;
    v7 = *((_QWORD *)a2 + 1);
    v5[3] = v7;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    _InterlockedIncrement((volatile signed __int32 *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&`winrt::get_module_lock'::`2'::s_lock));
    *v5 = off_1800F5DD8;
  }
  else
  {
    v5 = 0LL;
  }
  result = a1;
  *a1 = v5;
  return result;
}
