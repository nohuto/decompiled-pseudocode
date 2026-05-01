/*
 * XREFs of _lambda_0416af504263cdf2899427440ca143d8_::operator() @ 0x1804135F0
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_0416af504263cdf2899427440ca143d8___::Run @ 0x18041D8D0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_0416af504263cdf2899427440ca143d8___--.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180024FF4 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_0416af504263cdf2899427440ca143d8_::operator()(
        _QWORD **a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  _QWORD *v5; // rbx
  _QWORD *v6; // rsi
  unsigned int v7; // esi
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, _QWORD, __int64 *); // rbx
  int v11; // eax
  __int64 result; // rax
  int v13; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v15; // [rsp+30h] [rbp+8h] BYREF
  __int64 v16; // [rsp+38h] [rbp+10h] BYREF

  v5 = (_QWORD *)(*a1)[46];
  v6 = (_QWORD *)(*a1)[47];
  try
  {
    while ( v5 != v6 )
    {
      if ( (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 296LL))(*v5) == *a1[1] )
      {
        v7 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 288LL))(*v5);
        v15 = 0LL;
        v8 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(*a1)[39] + 40LL))((*a1)[39], &v16);
        v9 = *(_QWORD *)v8;
        v10 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(**(_QWORD **)v8 + 56LL);
        wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(&v15);
        v11 = v10(v9, v7, &v15);
        if ( v11 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x76F,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
            (const char *)(unsigned int)v11,
            v13);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v16);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v15);
        break;
      }
      ++v5;
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x774,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                           a4);
  }
  return result;
}
