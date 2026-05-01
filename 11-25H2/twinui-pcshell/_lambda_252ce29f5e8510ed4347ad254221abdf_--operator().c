/*
 * XREFs of _lambda_252ce29f5e8510ed4347ad254221abdf_::operator() @ 0x180422A88
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_252ce29f5e8510ed4347ad254221abdf___::Run @ 0x180423770 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_252ce29f5e8510ed4347ad254221abdf___--.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_252ce29f5e8510ed4347ad254221abdf_::operator()(_QWORD *a1)
{
  int v2; // eax
  const char *v3; // r9
  int v5[4]; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *(_OWORD *)v5 = *(_OWORD *)a1[1];
  try
  {
    v2 = (*(__int64 (**)(void))(**(_QWORD **)(*a1 + 296LL) + 48LL))();
    if ( v2 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x184,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v2,
        v5[0]);
    *(_OWORD *)(*a1 + 712LL) = *(_OWORD *)a1[1];
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x187,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
                           v3);
  }
  return 0LL;
}
