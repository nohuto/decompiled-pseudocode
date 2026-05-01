/*
 * XREFs of _lambda_ca4d82d8000fbdd2cd63e8e98e84d882_::operator() @ 0x18036B624
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::Shell::Experience::IBaseExperienceManager___Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs___::_)(Windows::Internal::Shell::Experience::IBaseExperienceManager___Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::IBaseExperienceManager___Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____lambda_ca4d82d8000fbdd2cd63e8e98e84d882___1_Windows::Internal::Shell::Experience::IBaseExperienceManager___Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs___::Invoke @ 0x18036CBF0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_18036CBF0.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetWindowRegion@CControlCenterExperienceManager@@AEAAJXZ @ 0x1801B5168 (-SetWindowRegion@CControlCenterExperienceManager@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_ca4d82d8000fbdd2cd63e8e98e84d882_::operator()(
        CControlCenterExperienceManager **a1,
        __int64 *a2,
        __int64 a3)
{
  __int64 v3; // rax
  int v5; // ebx
  __int64 v6; // rdx
  CControlCenterExperienceManager *v8; // rcx
  bool v9; // zf
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v12; // [rsp+40h] [rbp+18h] BYREF

  v12 = a3;
  v3 = *a2;
  LOBYTE(v12) = 0;
  v5 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v3 + 48))(a2, &v12);
  if ( v5 < 0 )
  {
    v6 = 763LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v8 = *a1;
  v9 = *((_DWORD *)*a1 + 40) == 2;
  *((_BYTE *)*a1 + 445) = (_BYTE)v12 != 0;
  if ( v9 )
  {
    v10 = CControlCenterExperienceManager::SetWindowRegion(v8);
    v5 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x321,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v10);
      v6 = 764LL;
      goto LABEL_3;
    }
  }
  return 0LL;
}
