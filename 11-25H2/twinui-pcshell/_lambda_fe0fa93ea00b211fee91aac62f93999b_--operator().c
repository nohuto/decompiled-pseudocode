/*
 * XREFs of _lambda_fe0fa93ea00b211fee91aac62f93999b_::operator() @ 0x1801108C8
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_fe0fa93ea00b211fee91aac62f93999b___::Run @ 0x1801108A0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_fe0fa93ea00b211fee91aac62f93999b___--.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?PushDesiredNavigationLevelToDerivedClass@UwpWindowWrapperBase@@AEAAXXZ @ 0x1801111F4 (-PushDesiredNavigationLevelToDerivedClass@UwpWindowWrapperBase@@AEAAXXZ.c)
 *     ?CommitImportanceVector@UwpWindowWrapperBase@@AEAAXXZ @ 0x18011209C (-CommitImportanceVector@UwpWindowWrapperBase@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_fe0fa93ea00b211fee91aac62f93999b_::operator()(__int64 a1)
{
  int v2; // edi
  int v3; // ebx
  char v4; // r15
  const char *v5; // r9
  __int64 v6; // rcx
  HWND v7; // r14
  int v8; // eax
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF

  try
  {
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
    (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 280LL) + 208LL))(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 280LL),
      &SRWLock);
    v6 = *(_QWORD *)(a1 + 8);
    v7 = (HWND)*(int *)(v6 + 296);
    v8 = *(_DWORD *)(v6 + 480);
    if ( v2 != v8 )
    {
      if ( !v8 )
      {
        CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&SRWLock);
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
          UwpWindowWrapperBase::CommitImportanceVector((UwpWindowWrapperBase *)v6);
        }
      }
      UwpWindowWrapperBase::PushDesiredNavigationLevelToDerivedClass(*(UwpWindowWrapperBase **)(a1 + 8));
    }
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    if ( v4 && v7 )
      SetForegroundWindow(v7);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x361,
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                           v5);
  }
  return result;
}
