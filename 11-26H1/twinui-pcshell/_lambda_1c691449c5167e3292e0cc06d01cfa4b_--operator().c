/*
 * XREFs of _lambda_1c691449c5167e3292e0cc06d01cfa4b_::operator() @ 0x180439300
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_1c691449c5167e3292e0cc06d01cfa4b___::Run @ 0x18043DD20 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_1c691449c5167e3292e0cc06d01cfa4b___--.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?CommitImportanceVector@WindowWrapperBase@@AEAAXXZ @ 0x18043BA24 (-CommitImportanceVector@WindowWrapperBase@@AEAAXXZ.c)
 *     ?GetPresentationClass@WindowWrapperBase@@AEBA?AW4_RM_PRESENTATION_CLASS@@XZ @ 0x18043C404 (-GetPresentationClass@WindowWrapperBase@@AEBA-AW4_RM_PRESENTATION_CLASS@@XZ.c)
 *     ?PushDesiredNavigationLevelToDerivedClass@WindowWrapperBase@@AEAAXXZ @ 0x18043D1CC (-PushDesiredNavigationLevelToDerivedClass@WindowWrapperBase@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_1c691449c5167e3292e0cc06d01cfa4b_::operator()(__int64 a1)
{
  int v2; // edi
  char v3; // r14
  __int64 v4; // rcx
  __int64 v5; // rax
  HWND v6; // rsi
  int v7; // ecx
  const char *v8; // r9
  __int64 result; // rax
  int PresentationClass; // eax
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v13; // [rsp+30h] [rbp+8h] BYREF

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
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 280LL);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 200LL))(v4);
    v5 = *(_QWORD *)(a1 + 8);
    v6 = (HWND)*(int *)(v5 + 296);
    v7 = *(_DWORD *)(v5 + 464);
    if ( v2 != v7 )
    {
      if ( !v7 )
      {
        CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v13);
        return 2147947423LL;
      }
      *(_DWORD *)(v5 + 464) = v2;
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 8) + 356LL) & 4) == 0 )
      {
        PresentationClass = WindowWrapperBase::GetPresentationClass(*(_QWORD *)(a1 + 8));
        if ( PresentationClass != ((*(unsigned __int16 *)(v11 + 252) >> 1) & 7) )
        {
          *(_WORD *)(v11 + 252) ^= ((unsigned __int8)*(_WORD *)(v11 + 252) ^ (unsigned __int8)(2 * PresentationClass)) & 0xE;
          WindowWrapperBase::CommitImportanceVector(*(WindowWrapperBase **)(a1 + 8));
        }
      }
      WindowWrapperBase::PushDesiredNavigationLevelToDerivedClass(*(WindowWrapperBase **)(a1 + 8));
    }
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v13);
    if ( v3 && v6 )
      SetForegroundWindow(v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x352,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v8);
  }
  return result;
}
