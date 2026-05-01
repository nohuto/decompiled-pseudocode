/*
 * XREFs of wil::details::RunFeatureDispatch__lambda_203a32cbd1766f67226f85b07542c037__&_ @ 0x1800CA834
 * Callers:
 *     ?CanApplyMDMLayout@TaskbarLayoutPolicyManager@@AEAAHXZ @ 0x180157F24 (-CanApplyMDMLayout@TaskbarLayoutPolicyManager@@AEAAHXZ.c)
 * Callees:
 *     ??0ThreadErrorContext@wil@@QEAA@XZ @ 0x1800CAAD8 (--0ThreadErrorContext@wil@@QEAA@XZ.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x1800CB024 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::RunFeatureDispatch__lambda_203a32cbd1766f67226f85b07542c037____(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  struct wil::details::IFunctorHost *v4; // r8
  __int64 result; // rax
  _QWORD v6[3]; // [rsp+20h] [rbp-40h] BYREF
  void **v7; // [rsp+38h] [rbp-28h] BYREF
  __int64 v8; // [rsp+40h] [rbp-20h] BYREF
  int v9; // [rsp+4Ch] [rbp-14h]
  __int64 v10; // [rsp+50h] [rbp-10h]
  int v11; // [rsp+58h] [rbp-8h]
  unsigned int v12; // [rsp+88h] [rbp+28h] BYREF

  v12 = 0;
  v6[0] = off_180724230;
  v6[1] = a3;
  v6[2] = &v12;
  v7 = &wil::details::FeatureFunctorHost::`vftable';
  wil::ThreadErrorContext::ThreadErrorContext((wil::ThreadErrorContext *)&v8);
  v10 = a2;
  v11 = 9608605;
  wil::details::RunFunctor((wil::details *)v6, (struct wil::details::IFunctor *)&v7, v4);
  result = v12;
  if ( v8 )
    *(_DWORD *)(v8 + 16) = v9;
  return result;
}
