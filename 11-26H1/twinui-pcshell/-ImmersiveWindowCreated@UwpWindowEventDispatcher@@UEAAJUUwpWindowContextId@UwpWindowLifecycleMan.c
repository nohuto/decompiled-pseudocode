/*
 * XREFs of ?ImmersiveWindowCreated@UwpWindowEventDispatcher@@UEAAJUUwpWindowContextId@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@Z @ 0x180423780
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?UwpWindowActivationRequested@UwpWindowEventDispatcher@@AEAAJPEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUIActivationRequestedEventArgs@WindowManagement@ApplicationModel@56@@Z @ 0x180068F74 (-UwpWindowActivationRequested@UwpWindowEventDispatcher@@AEAAJPEAUIUwpWindowContext@UwpWindowLife.c)
 *     ?GetUwlm@UwpWindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIUwpWindowLifecycleManager@UwpWindowLifecycleManagement@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1800EE720 (-GetUwlm@UwpWindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIUwpWindowLifecycleManager@UwpWindowLifec.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall UwpWindowEventDispatcher::ImmersiveWindowCreated(__int64 a1, unsigned int a2)
{
  RTL_SRWLOCK *v3; // rbp
  _QWORD *Uwlm; // rax
  __int64 v5; // rsi
  __int64 (__fastcall *v6)(__int64, _QWORD, struct Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowContext **); // rdi
  int v7; // ebx
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowContext *v13; // [rsp+40h] [rbp+8h] BYREF
  __int64 v14; // [rsp+50h] [rbp+18h] BYREF

  v13 = 0LL;
  v3 = (RTL_SRWLOCK *)(a1 - 16);
  Uwlm = UwpWindowEventDispatcher::GetUwlm(a1 - 16, &v14);
  v5 = *Uwlm;
  v6 = *(__int64 (__fastcall **)(__int64, _QWORD, struct Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowContext **))(*(_QWORD *)*Uwlm + 104LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
  v7 = v6(v5, a2, &v13);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v14);
  if ( v7 >= 0 )
  {
    v10 = UwpWindowEventDispatcher::UwpWindowActivationRequested(v3, v13, 0LL);
    v7 = v10;
    if ( v10 >= 0 )
    {
      v7 = 0;
      goto LABEL_7;
    }
    v8 = (unsigned int)v10;
    v9 = 812LL;
  }
  else
  {
    v8 = (unsigned int)v7;
    v9 = 810LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
    (const char *)v8);
LABEL_7:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
  return (unsigned int)v7;
}
