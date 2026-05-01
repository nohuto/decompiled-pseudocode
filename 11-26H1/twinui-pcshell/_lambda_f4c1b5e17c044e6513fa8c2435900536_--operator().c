/*
 * XREFs of _lambda_f4c1b5e17c044e6513fa8c2435900536_::operator() @ 0x1802AEBE4
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f4c1b5e17c044e6513fa8c2435900536___::Run @ 0x180447890 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_f4c1b5e17c044e6513fa8c2435900536___--.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_f4c1b5e17c044e6513fa8c2435900536_::operator()(_QWORD **a1)
{
  int v2; // eax
  const char *v3; // r9
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  try
  {
    (*(void (**)(void))(**a1 + 264LL))();
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(MEMORY[0] + 48LL))(0LL, *a1[1]);
    if ( v2 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x400,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
        (const char *)(unsigned int)v2,
        v5);
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x402,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                           v3);
  }
  return 0LL;
}
