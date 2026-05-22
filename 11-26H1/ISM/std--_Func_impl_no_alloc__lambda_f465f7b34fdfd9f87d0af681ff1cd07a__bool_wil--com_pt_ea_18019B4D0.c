/*
 * XREFs of std::_Func_impl_no_alloc__lambda_f465f7b34fdfd9f87d0af681ff1cd07a__bool_wil::com_ptr_t_PenEventsClientCustomProxy_wil::err_exception_policy__bool_::_Do_call @ 0x18019B4D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800173F8 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F7EC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall std::_Func_impl_no_alloc__lambda_f465f7b34fdfd9f87d0af681ff1cd07a__bool_wil::com_ptr_t_PenEventsClientCustomProxy_wil::err_exception_policy__bool_::_Do_call(
        __int64 a1,
        __int64 *a2,
        char *a3)
{
  char v3; // di
  __int64 v4; // rcx
  char v5; // bl
  __int64 v6; // rdx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF
  __int64 *v11; // [rsp+40h] [rbp+18h]

  v3 = *a3;
  v4 = *a2;
  v5 = 0;
  *a2 = 0LL;
  v10 = v4;
  v11 = &v10;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(v4 + 8) + 96LL))(v4 + 8) )
  {
    LOBYTE(v6) = v3;
    v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v10 + 8) + 32LL))(v10 + 8, v6);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1D4,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\events\\server\\peneventsdispat"
             "cherprincipal.cpp",
        (const char *)(unsigned int)v7);
    v5 = 1;
  }
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v10);
  return v5;
}
