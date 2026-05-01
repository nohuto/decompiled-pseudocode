/*
 * XREFs of _lambda_72d77370fba09f560742b90c3fd0c03a_::operator() @ 0x1801E4B44
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_72d77370fba09f560742b90c3fd0c03a___::Run @ 0x1801E4B20 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_72d77370fba09f560742b90c3fd0c03a___--.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_72d77370fba09f560742b90c3fd0c03a_::operator()(__int64 a1)
{
  __int64 v1; // rcx
  int v2; // eax
  const char *v3; // r9
  __int64 result; // rax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *(_QWORD *)(*(_QWORD *)a1 + 296LL);
  try
  {
    v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 56LL))(v1);
    if ( v2 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x4B,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
        (const char *)(unsigned int)v2,
        v5);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x4D,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
                           v3);
  }
  return result;
}
