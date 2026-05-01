/*
 * XREFs of _lambda_f0bf3ef6290d6e5ef57ffd26b9b28bf0_::operator() @ 0x180226B38
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f0bf3ef6290d6e5ef57ffd26b9b28bf0___::Run @ 0x180226B10 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_f0bf3ef6290d6e5ef57ffd26b9b28bf0___--.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_f0bf3ef6290d6e5ef57ffd26b9b28bf0_::operator()(_QWORD *a1)
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
        (void *)0x1B1,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
        (const char *)(unsigned int)v2,
        v5[0]);
    *(_OWORD *)(*a1 + 720LL) = *(_OWORD *)a1[1];
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1B4,
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
                           v3);
  }
  return 0LL;
}
