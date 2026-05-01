/*
 * XREFs of _lambda_94a2b8c495758bf3d605ddc865d9a432_::operator() @ 0x180439EAC
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_94a2b8c495758bf3d605ddc865d9a432___::Run @ 0x18043DFA0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_94a2b8c495758bf3d605ddc865d9a432___--.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x180127C68 (-Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_94a2b8c495758bf3d605ddc865d9a432_::operator()(HSTRING **a1)
{
  int v2; // eax
  int v3; // eax
  const char *v4; // r9
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = Windows::Internal::String::Initialize(*a1 + 34, a1[1]);
  try
  {
    if ( v2 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x940,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v2,
        v6);
    v3 = (*(__int64 (__fastcall **)(HSTRING, _QWORD, _QWORD))(*(_QWORD *)(*a1)[13] + 136LL))((*a1)[13], *a1[1], *a1[2]);
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x941,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v3,
        v6);
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x943,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v4);
  }
  return 0LL;
}
