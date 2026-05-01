/*
 * XREFs of _lambda_9378343b320afa124df06e8933a6190f_::operator() @ 0x180439830
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9378343b320afa124df06e8933a6190f___::Run @ 0x18043B350 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_9378343b320afa124df06e8933a6190f___--Run.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0$0DM@@StringReference@Internal@Windows@@QEAA@AEAY0DM@$$CBG@Z @ 0x180222C70 (--$-0$0DM@@StringReference@Internal@Windows@@QEAA@AEAY0DM@$$CBG@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_9378343b320afa124df06e8933a6190f_::operator()(HWND *a1)
{
  DWORD WindowThreadProcessId; // ebx
  const unsigned __int16 (*v2)[60]; // rdx
  HSTRING *v3; // rax
  int ActivationFactory; // eax
  __int64 v5; // rax
  int v6; // eax
  int v7; // eax
  const char *v8; // r9
  __int64 result; // rax
  int v10; // [rsp+20h] [rbp-58h]
  int v11; // [rsp+30h] [rbp-48h] BYREF
  DWORD dwProcessId; // [rsp+34h] [rbp-44h] BYREF
  __int64 v13; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v14; // [rsp+40h] [rbp-38h] BYREF
  HSTRING string; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  dwProcessId = 0;
  WindowThreadProcessId = GetWindowThreadProcessId(*a1, &dwProcessId);
  v14 = 0LL;
  v3 = Windows::Internal::StringReference::StringReference(&string, v2);
  ActivationFactory = RoGetActivationFactory(*v3, &GUID_365b4229_bffa_4446_8dc8_a293bebbe536, &v14);
  try
  {
    if ( ActivationFactory < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xAE3,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
        (const char *)(unsigned int)ActivationFactory,
        v10);
    v13 = 0LL;
    v5 = *v14;
    v13 = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, __int64 *))(v5 + 48))(
           v14,
           dwProcessId,
           WindowThreadProcessId,
           &v13);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xAE9,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
        (const char *)(unsigned int)v6,
        v10);
    v11 = 0;
    v7 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v13 + 48LL))(v13, &v11);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xAEC,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
        (const char *)(unsigned int)v7,
        v10);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v13);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v14);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xAEE,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                           v8);
  }
  return result;
}
