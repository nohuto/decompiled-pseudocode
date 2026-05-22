/*
 * XREFs of ?GetParentDelegationTarget@DWMInputRouter@@UEAAJPEAPEAUIFocusInputTarget@@@Z @ 0x1801A32F0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Bugfix_57240160@@@details@wil@@QEAA_NXZ @ 0x1800AE8CC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Bugfix_57240160@@@details@wil@@QE.c)
 *     ?FailFastWithHR@@YAXJ_K0@Z @ 0x1801A3104 (-FailFastWithHR@@YAXJ_K0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall DWMInputRouter::GetParentDelegationTarget(DWMInputRouter *this, struct IFocusInputTarget **a2)
{
  const char *v4; // r9
  __int64 (__fastcall ***v5)(_QWORD, GUID *, struct IFocusInputTarget **); // rcx
  int v6; // eax
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Bugfix_57240160>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Bugfix_57240160>::GetImpl'::`2'::impl) )
    FailFastWithHR(-2147467259, (ULONG_PTR)retaddr, 0x790uLL);
  if ( !a2 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x792,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      v4);
  *a2 = 0LL;
  v5 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IFocusInputTarget **))*((_QWORD *)this + 33);
  if ( v5 )
  {
    v6 = (**v5)(v5, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, a2);
    if ( v6 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x796,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v6,
        v8);
  }
  return *a2 == 0LL ? 0x80004005 : 0;
}
