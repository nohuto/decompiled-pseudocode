/*
 * XREFs of _lambda_db1d86ab27b88e65a689dd51387263d9_::operator() @ 0x18042EB10
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_db1d86ab27b88e65a689dd51387263d9___::Run @ 0x180431E10 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_db1d86ab27b88e65a689dd51387263d9___--.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_db1d86ab27b88e65a689dd51387263d9_::operator()(_QWORD **a1)
{
  _QWORD *v1; // rax
  __int32 v3; // edi
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v9; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  v3 = 0;
  v9 = 0;
  v4 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v1 + 64LL))(*v1, &v9);
  v5 = v4;
  if ( v4 >= 0 )
  {
    LOBYTE(v3) = v9 != 0;
    v7 = *a1[1];
    _InterlockedExchange((volatile __int32 *)(v7 + 168), v3);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v7 + 16) + 128LL))(v7 + 16);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3DC,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
}
