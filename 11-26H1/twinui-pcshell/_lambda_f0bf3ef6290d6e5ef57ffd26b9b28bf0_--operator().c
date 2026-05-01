/*
 * XREFs of _lambda_f0bf3ef6290d6e5ef57ffd26b9b28bf0_::operator() @ 0x1802189B4
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f0bf3ef6290d6e5ef57ffd26b9b28bf0___::Run @ 0x180218990 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_f0bf3ef6290d6e5ef57ffd26b9b28bf0___--.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_f0bf3ef6290d6e5ef57ffd26b9b28bf0_::operator()(_QWORD *a1)
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
        (void *)0x1B1,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
        (const char *)(unsigned int)v3,
        v6[0]);
    *(_OWORD *)(*a1 + 704LL) = *(_OWORD *)a1[1];
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1B4,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
                           v4);
  }
  return 0LL;
}
