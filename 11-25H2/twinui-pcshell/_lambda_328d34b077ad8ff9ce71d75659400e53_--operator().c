/*
 * XREFs of _lambda_328d34b077ad8ff9ce71d75659400e53_::operator() @ 0x180425EAC
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_328d34b077ad8ff9ce71d75659400e53___::Run @ 0x1804269E0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_328d34b077ad8ff9ce71d75659400e53___--.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_328d34b077ad8ff9ce71d75659400e53_::operator()(__int64 **a1)
{
  __int64 v2; // rcx
  int v3; // eax
  int v4; // eax
  const char *v5; // r9
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v9; // [rsp+38h] [rbp+10h] BYREF

  v2 = **a1;
  try
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 120LL))(v2);
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x190,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
        (const char *)(unsigned int)v3,
        v7);
    v9 = 0;
    v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)**a1 + 104LL))(**a1, &v9);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x198,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
        (const char *)(unsigned int)v4,
        v7);
    if ( v9 == 1 || v9 == 3 )
      *(_DWORD *)*a1[1] = 2;
    else
      *(_DWORD *)*a1[1] = 0;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1AA,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
                           v5);
  }
  return 0LL;
}
