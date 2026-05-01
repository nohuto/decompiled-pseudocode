/*
 * XREFs of ?ShowVirtualDesktopSwitcher@CVirtualDesktopSwitcherService@@UEAAJPEAUHMONITOR__@@W4VIRTUAL_DESKTOP_SWITCHER_INVOKE_DETAILS@@@Z @ 0x1804875E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800675F0 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??0?$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z @ 0x1800F646C (--0-$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z.c)
 *     MakeMultitaskingViewTaskCallback__lambda_43c960c255a41f4cca7711b37d19ef2b___ @ 0x18048706C (MakeMultitaskingViewTaskCallback__lambda_43c960c255a41f4cca7711b37d19ef2b___.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CVirtualDesktopSwitcherService::ShowVirtualDesktopSwitcher(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rcx
  bool v7; // al
  __int64 result; // rax
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, __int64, GUID *, GUID *, __int64 *); // rbx
  int v11; // eax
  unsigned int v12; // ebx
  const char *v13; // r9
  int MultitaskingViewTaskCallback__lambda_43c960c255a41f4cca7711b37d19ef2b; // ebx
  int v15; // eax
  unsigned int v16; // ebx
  __int64 v17; // [rsp+30h] [rbp-38h] BYREF
  __int64 v18; // [rsp+38h] [rbp-30h] BYREF
  int v19; // [rsp+40h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v21; // [rsp+88h] [rbp+20h] BYREF

  v6 = *(_QWORD *)(a1 + 32);
  v7 = *(_QWORD *)(a1 + 24) == 0LL;
  if ( v7 || v6 == 0 )
    return 2147500036LL;
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 24LL))(v6);
    v21 = 0LL;
    v9 = *(_QWORD *)(a1 + 24);
    v10 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, GUID *, __int64 *))(*(_QWORD *)v9 + 72LL);
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(&v21);
    v11 = v10(v9, a2, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &v21);
    v12 = v11;
    if ( v11 >= 0 )
    {
      wil::com_ptr_t<TaskViewFrame,wil::err_exception_policy>::com_ptr_t<TaskViewFrame,wil::err_exception_policy>(
        &v18,
        v21);
      v19 = a3;
      v17 = 0LL;
      MultitaskingViewTaskCallback__lambda_43c960c255a41f4cca7711b37d19ef2b = MakeMultitaskingViewTaskCallback__lambda_43c960c255a41f4cca7711b37d19ef2b_(
                                                                                &v17,
                                                                                (__int64)&v18);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v18);
      if ( MultitaskingViewTaskCallback__lambda_43c960c255a41f4cca7711b37d19ef2b >= 0 )
      {
        v15 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 16) + 24LL))(
                *(_QWORD *)(a1 + 16),
                v17,
                1LL);
        v16 = v15;
        if ( v15 < 0 )
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x49,
            (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopswitcherservice.cpp",
            (const char *)(unsigned int)v15);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v17);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v21);
        result = v16;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x46,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopswitcherservice.cpp",
          (const char *)(unsigned int)MultitaskingViewTaskCallback__lambda_43c960c255a41f4cca7711b37d19ef2b);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v17);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v21);
        result = (unsigned int)MultitaskingViewTaskCallback__lambda_43c960c255a41f4cca7711b37d19ef2b;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x38,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopswitcherservice.cpp",
        (const char *)(unsigned int)v11);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v21);
      result = v12;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x4D,
                           (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopswitcherservice.cpp",
                           v13);
  }
  return result;
}
