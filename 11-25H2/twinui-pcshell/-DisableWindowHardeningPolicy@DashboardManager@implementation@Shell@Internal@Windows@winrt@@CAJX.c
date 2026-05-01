/*
 * XREFs of ?DisableWindowHardeningPolicy@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CAJXZ @ 0x1802B4FA4
 * Callers:
 *     _lambda_96ecd2df1703701600c983d4c680e5f8_::operator() @ 0x1805A8D4C (_lambda_96ecd2df1703701600c983d4c680e5f8_--operator().c)
 *     _lambda_9b092398f928f40caadc1063cb84386c_::operator() @ 0x1805A9020 (_lambda_9b092398f928f40caadc1063cb84386c_--operator().c)
 *     _lambda_e2d5ef650d355823d1be80b4ea509615_::operator() @ 0x1805A96BC (_lambda_e2d5ef650d355823d1be80b4ea509615_--operator().c)
 *     _lambda_f17086a35f2f14e82d9d84ab1f41fcfa_::operator() @ 0x1805A9A44 (_lambda_f17086a35f2f14e82d9d84ab1f41fcfa_--operator().c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800675F0 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     _anonymous_namespace_::IsForegroundWindowHardened @ 0x1802B50F4 (_anonymous_namespace_--IsForegroundWindowHardened.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 winrt::Windows::Internal::Shell::implementation::DashboardManager::DisableWindowHardeningPolicy(void)
{
  HRESULT v0; // eax
  unsigned int v1; // ebx
  __int64 v2; // rax
  int v3; // eax
  __int64 v4; // rdx
  HRESULT v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  IUnknown *pUnk; // [rsp+40h] [rbp+10h] BYREF
  LPVOID ppv; // [rsp+48h] [rbp+18h] BYREF

  if ( (unsigned __int8)anonymous_namespace_::IsForegroundWindowHardened() )
  {
    ppv = 0LL;
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)&ppv);
    v0 = CoCreateInstance(&CLSID_ImmersiveShell, 0LL, 4u, &GUID_6d5140c1_7436_11ce_8034_00aa006009fa, &ppv);
    v1 = v0;
    if ( v0 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x638,
        (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
        (const char *)(unsigned int)v0);
LABEL_11:
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&ppv);
      return v1;
    }
    pUnk = 0LL;
    v2 = *(_QWORD *)ppv;
    pUnk = 0LL;
    v3 = (*(__int64 (__fastcall **)(LPVOID, GUID *, GUID *, IUnknown **))(v2 + 24))(
           ppv,
           &IID_IImmersiveApplicationManager,
           &GUID_bf63999f_7411_40da_861c_df72c0ffee84,
           &pUnk);
    v1 = v3;
    if ( v3 < 0 )
    {
      v4 = 1594LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v4,
        (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
        (const char *)(unsigned int)v3);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&pUnk);
      goto LABEL_11;
    }
    v5 = CoAllowSetForegroundWindow(pUnk, 0LL);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x63B,
        (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
        (const char *)(unsigned int)v5);
    v3 = ((__int64 (__fastcall *)(IUnknown *, _QWORD, __int64))pUnk->lpVtbl[4].QueryInterface)(pUnk, 0LL, 1LL);
    v1 = v3;
    if ( v3 < 0 )
    {
      v4 = 1597LL;
      goto LABEL_10;
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&pUnk);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&ppv);
  }
  return 0LL;
}
