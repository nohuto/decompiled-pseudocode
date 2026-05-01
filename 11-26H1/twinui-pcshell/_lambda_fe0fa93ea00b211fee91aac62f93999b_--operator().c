/*
 * XREFs of _lambda_fe0fa93ea00b211fee91aac62f93999b_::operator() @ 0x18004CAFC
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_fe0fa93ea00b211fee91aac62f93999b___::Run @ 0x18004CC40 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_fe0fa93ea00b211fee91aac62f93999b___--.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?PushDesiredNavigationLevelToDerivedClass@UwpWindowWrapperBase@@AEAAXXZ @ 0x18004BDA4 (-PushDesiredNavigationLevelToDerivedClass@UwpWindowWrapperBase@@AEAAXXZ.c)
 *     ?GetPresentationClass@UwpWindowWrapperBase@@AEBA?AW4_RM_PRESENTATION_CLASS@@XZ @ 0x18004DEB8 (-GetPresentationClass@UwpWindowWrapperBase@@AEBA-AW4_RM_PRESENTATION_CLASS@@XZ.c)
 *     ?CommitImportanceVector@UwpWindowWrapperBase@@AEAAXXZ @ 0x18004DFFC (-CommitImportanceVector@UwpWindowWrapperBase@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_fe0fa93ea00b211fee91aac62f93999b_::operator()(__int64 a1)
{
  int v2; // edi
  char v3; // r14
  const char *v4; // r9
  __int64 v5; // rax
  HWND v6; // rsi
  int v7; // ecx
  __int64 result; // rax
  int PresentationClass; // eax
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  try
  {
    v2 = **(_DWORD **)a1;
    if ( v2 == 5 )
    {
      v3 = 1;
      v2 = 4;
    }
    else
    {
      v3 = 0;
    }
    (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 280LL) + 208LL))(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 280LL),
      &SRWLock);
    v5 = *(_QWORD *)(a1 + 8);
    v6 = (HWND)*(int *)(v5 + 296);
    v7 = *(_DWORD *)(v5 + 464);
    if ( v2 != v7 )
    {
      if ( !v7 )
      {
        CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&SRWLock);
        return 2147947423LL;
      }
      *(_DWORD *)(v5 + 464) = v2;
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 8) + 356LL) & 4) == 0 )
      {
        PresentationClass = UwpWindowWrapperBase::GetPresentationClass(*(_QWORD *)(a1 + 8));
        if ( PresentationClass != ((*(unsigned __int16 *)(v10 + 252) >> 1) & 7) )
        {
          *(_WORD *)(v10 + 252) ^= ((unsigned __int8)*(_WORD *)(v10 + 252) ^ (unsigned __int8)(2 * PresentationClass)) & 0xE;
          UwpWindowWrapperBase::CommitImportanceVector(*(UwpWindowWrapperBase **)(a1 + 8));
        }
      }
      UwpWindowWrapperBase::PushDesiredNavigationLevelToDerivedClass(*(UwpWindowWrapperBase **)(a1 + 8));
    }
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    if ( v3 && v6 )
      SetForegroundWindow(v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x361,
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                           v4);
  }
  return result;
}
