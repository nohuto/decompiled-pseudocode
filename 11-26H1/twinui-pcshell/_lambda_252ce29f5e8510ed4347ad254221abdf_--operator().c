/*
 * XREFs of _lambda_252ce29f5e8510ed4347ad254221abdf_::operator() @ 0x18042DFA4
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_252ce29f5e8510ed4347ad254221abdf___::Run @ 0x18042ECD0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_252ce29f5e8510ed4347ad254221abdf___--.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_252ce29f5e8510ed4347ad254221abdf_::operator()(_QWORD *a1)
{
  __int64 v2; // rcx
  int v3; // eax
  const char *v4; // r9
  int v6[4]; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *(_QWORD *)(*a1 + 296LL);
  *(_OWORD *)v6 = *(_OWORD *)a1[1];
  try
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 48LL))(v2);
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x184,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v3,
        v6[0]);
    *(_OWORD *)(*a1 + 696LL) = *(_OWORD *)a1[1];
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x187,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
                           v4);
  }
  return 0LL;
}
