/*
 * XREFs of _lambda_1c691449c5167e3292e0cc06d01cfa4b_::operator() @ 0x18042D0D8
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_1c691449c5167e3292e0cc06d01cfa4b___::Run @ 0x1804319B0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_1c691449c5167e3292e0cc06d01cfa4b___--.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?CommitImportanceVector@WindowWrapperBase@@AEAAXXZ @ 0x18042F734 (-CommitImportanceVector@WindowWrapperBase@@AEAAXXZ.c)
 *     ?PushDesiredNavigationLevelToDerivedClass@WindowWrapperBase@@AEAAXXZ @ 0x180430E4C (-PushDesiredNavigationLevelToDerivedClass@WindowWrapperBase@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_1c691449c5167e3292e0cc06d01cfa4b_::operator()(__int64 a1)
{
  int v2; // edi
  int v3; // ebx
  char v4; // r15
  __int64 v5; // rcx
  __int64 v6; // rcx
  HWND v7; // r14
  int v8; // eax
  const char *v9; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  RTL_SRWLOCK *v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = **(_DWORD **)a1;
  v3 = 4;
  if ( v2 == 5 )
  {
    v4 = 1;
    v2 = 4;
  }
  else
  {
    v4 = 0;
  }
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 280LL);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 200LL))(v5);
    v6 = *(_QWORD *)(a1 + 8);
    v7 = (HWND)*(int *)(v6 + 296);
    v8 = *(_DWORD *)(v6 + 480);
    if ( v2 != v8 )
    {
      if ( !v8 )
      {
        CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v12);
        return 2147947423LL;
      }
      *(_DWORD *)(v6 + 480) = v2;
      if ( (*(_BYTE *)(v6 + 356) & 4) == 0 )
      {
        if ( (unsigned int)(v2 - 4) > 1 )
          v3 = 2;
        if ( v3 != ((*(unsigned __int16 *)(v6 + 252) >> 1) & 7) )
        {
          *(_WORD *)(v6 + 252) = *(_WORD *)(v6 + 252) & 0xFFF1 | (2 * v3);
          WindowWrapperBase::CommitImportanceVector((WindowWrapperBase *)v6);
        }
      }
      WindowWrapperBase::PushDesiredNavigationLevelToDerivedClass(*(WindowWrapperBase **)(a1 + 8));
    }
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v12);
    if ( v4 && v7 )
      SetForegroundWindow(v7);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x352,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v9);
  }
  return result;
}
