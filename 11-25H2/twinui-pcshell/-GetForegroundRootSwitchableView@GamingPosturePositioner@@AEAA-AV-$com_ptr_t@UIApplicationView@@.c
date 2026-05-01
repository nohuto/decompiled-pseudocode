/*
 * XREFs of ?GetForegroundRootSwitchableView@GamingPosturePositioner@@AEAA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1804E2750
 * Callers:
 *     _lambda_bf1ca8575d68b9366077aadb303b08d6_::operator() @ 0x1804E1A08 (_lambda_bf1ca8575d68b9366077aadb303b08d6_--operator().c)
 *     ?HandleViewRecovery@GamingPosturePositioner@@AEAAXXZ @ 0x1804E2EFC (-HandleViewRecovery@GamingPosturePositioner@@AEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800675F0 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall GamingPosturePositioner::GetForegroundRootSwitchableView(__int64 a1, __int64 *a2)
{
  HWND ForegroundWindow; // r14
  __int64 v5; // rdi
  int (__fastcall *v6)(__int64, HWND, __int64 *); // rbx
  __int64 v7; // rbx
  int (__fastcall *v8)(__int64, __int64 *); // rdi
  __int64 v9; // rax
  __int64 v11; // [rsp+60h] [rbp+30h] BYREF
  __int64 v12; // [rsp+68h] [rbp+38h] BYREF

  ForegroundWindow = GetForegroundWindow();
  if ( !ForegroundWindow )
    goto LABEL_10;
  v11 = 0LL;
  v5 = *(_QWORD *)(a1 + 160);
  v6 = *(int (__fastcall **)(__int64, HWND, __int64 *))(*(_QWORD *)v5 + 48LL);
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(&v11);
  if ( v6(v5, ForegroundWindow, &v11) < 0 || (v7 = v11) == 0 )
  {
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v11);
LABEL_10:
    *a2 = 0LL;
    return a2;
  }
  v12 = 0LL;
  v8 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 360LL);
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(&v12);
  if ( v8(v7, &v12) >= 0 && (v9 = v12) != 0 )
  {
    v12 = 0LL;
  }
  else
  {
    v9 = v11;
    v11 = 0LL;
  }
  *a2 = v9;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v12);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v11);
  return a2;
}
