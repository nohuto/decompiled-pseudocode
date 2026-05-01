/*
 * XREFs of CMultitaskingViewTaskCallback__lambda_43c960c255a41f4cca7711b37d19ef2b___::RunTask @ 0x180487420
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CMultitaskingViewTaskCallback__lambda_43c960c255a41f4cca7711b37d19ef2b___::RunTask(
        __int64 a1,
        __int64 *a2)
{
  __int64 v3; // rax
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a2;
  v6 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64 *, __int64, GUID *, __int64 *))(v3 + 24))(
         a2,
         16LL,
         &GUID_1be71764_e771_4442_b78f_eda2c7f067f3,
         &v6);
  if ( v4 < 0
    || (v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v6 + 48LL))(
               v6,
               *(_QWORD *)(a1 + 16),
               *(unsigned int *)(a1 + 24)),
        v4 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x46,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopswitcherservice.cpp",
      (const char *)(unsigned int)v4);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v6);
}
