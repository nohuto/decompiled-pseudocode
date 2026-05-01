/*
 * XREFs of _lambda_0432630cb06de32104bbb9571e820edc_::operator() @ 0x1802DDB40
 * Callers:
 *     ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_0432630cb06de32104bbb9571e820edc___::Invoke @ 0x1802E2B50 (ShellPositionerHelpers--Details--ShellPositionerCallback__lambda_0432630cb06de32104bbb9571e820ed.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_0432630cb06de32104bbb9571e820edc_::operator()(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *))
{
  __int64 (__fastcall **v3)(_QWORD, GUID *, __int64 *); // rax
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v3 = *a2;
  v9 = 0LL;
  v4 = (*v3)(a2, &GUID_288fc02d_5a3a_4a73_8ee6_52de772339ac, &v9);
  v5 = v4;
  if ( v4 == -2147467262 )
    goto LABEL_7;
  if ( v4 >= 0 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v9 + 24LL))(
           v9,
           **(_QWORD **)(a1 + 8),
           *(_QWORD *)a1);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 7154LL;
      goto LABEL_6;
    }
LABEL_7:
    v5 = 0;
    goto LABEL_8;
  }
  v6 = 7153LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
    (const char *)(unsigned int)v4);
LABEL_8:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v9);
  return v5;
}
