/*
 * XREFs of _lambda_0d0dc26f2e1703fa8279b79796d53b0f_::operator() @ 0x180444C38
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_0d0dc26f2e1703fa8279b79796d53b0f___::Run @ 0x180447390 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_0d0dc26f2e1703fa8279b79796d53b0f___--.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?CommitImportanceVector@UwpWindowWrapperBase@@AEAAXXZ @ 0x18004DFFC (-CommitImportanceVector@UwpWindowWrapperBase@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_0d0dc26f2e1703fa8279b79796d53b0f_::operator()(int **a1)
{
  int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int16 v5; // dx
  char v6; // cl
  char v7; // cl
  int *v8; // r8
  int v9; // ecx
  const char *v10; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v13; // [rsp+30h] [rbp+8h]
  RTL_SRWLOCK *v14; // [rsp+40h] [rbp+18h] BYREF

  v2 = **a1;
  v3 = *((_QWORD *)a1[1] + 35);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 208LL))(v3);
    v4 = *a1[2];
    HIWORD(v13) = HIWORD(v2);
    if ( v4 == -1 )
    {
      v5 = v2;
    }
    else
    {
      v13 = a1[1][63];
      v5 = v13;
      if ( (v4 & 1) != 0 )
        v5 = v2 & 1 | v13 & 0xFFFE;
      if ( (v4 & 2) != 0 )
        v5 = v5 & 0xFFF1 | v2 & 0xE;
      if ( (v4 & 4) != 0 )
        v5 = v5 & 0xFFCF | v2 & 0x30;
      if ( (v4 & 8) != 0 )
        v5 = v5 & 0xFFBF | v2 & 0x40;
      if ( (v4 & 0x10) != 0 )
        v5 = v5 & 0xFF7F | v2 & 0x80;
      if ( (v4 & 0x20) != 0 )
        v5 = v2 & 0x100 | v5 & 0xFEFF;
      if ( (v4 & 0x40) != 0 )
        v5 = v2 & 0x200 | v5 & 0xFDFF;
      if ( (v4 & 0x80u) != 0LL )
        v5 = v2 & 0x400 | v5 & 0xFBFF;
      if ( (v4 & 0x100) != 0 )
        v5 = v2 & 0x800 | v5 & 0xF7FF;
      v6 = BYTE2(v13);
      if ( (v4 & 0x200) != 0 )
        v6 = BYTE2(v2);
      BYTE2(v13) = v6;
      v7 = HIBYTE(v13);
      if ( (v4 & 0x400) != 0 )
        v7 = HIBYTE(v2);
      HIBYTE(v13) = v7;
    }
    v8 = a1[1];
    v9 = v8[89];
    if ( (v9 & 4) == 0 )
      v5 = v8[63] & 0xF | v5 & 0xFFF0;
    if ( (v9 & 8) == 0 )
      v5 = v5 & 0xFFCE | v8[63] & 0x31;
    LOWORD(v13) = v8[63] & 0xC0 | v5 & 0xFF3F;
    if ( v13 != v8[63] )
    {
      v8[63] = v13;
      UwpWindowWrapperBase::CommitImportanceVector((UwpWindowWrapperBase *)a1[1]);
    }
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v14);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x97A,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                           v10);
  }
  return result;
}
