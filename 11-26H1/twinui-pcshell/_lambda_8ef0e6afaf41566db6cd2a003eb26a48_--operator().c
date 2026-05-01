/*
 * XREFs of _lambda_8ef0e6afaf41566db6cd2a003eb26a48_::operator() @ 0x180439E04
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_8ef0e6afaf41566db6cd2a003eb26a48___::Run @ 0x18043DF70 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_8ef0e6afaf41566db6cd2a003eb26a48___--.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_8ef0e6afaf41566db6cd2a003eb26a48_::operator()(unsigned int **a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  int v5; // eax
  const char *v6; // r9
  __int64 result; // rax
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  v2 = *((_QWORD *)*a1 + 35);
  try
  {
    v3 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 144LL))(v2);
    v4 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v3 + 40LL))(*v3, &v10);
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v4 + 168LL))(*v4, (*a1)[88], *a1[1]);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x55C,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v5,
        v8);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v10);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v11);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x55E,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v6);
  }
  return result;
}
