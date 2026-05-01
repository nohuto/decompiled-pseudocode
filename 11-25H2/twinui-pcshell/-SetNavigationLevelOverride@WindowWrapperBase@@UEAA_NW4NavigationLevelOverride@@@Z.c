/*
 * XREFs of ?SetNavigationLevelOverride@WindowWrapperBase@@UEAA_NW4NavigationLevelOverride@@@Z @ 0x1804327E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?PushDesiredNavigationLevelToDerivedClass@WindowWrapperBase@@AEAAXXZ @ 0x180430E4C (-PushDesiredNavigationLevelToDerivedClass@WindowWrapperBase@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall WindowWrapperBase::SetNavigationLevelOverride(__int64 a1, int a2)
{
  char v4; // si
  int v5; // edi
  unsigned int v6; // eax
  int v7; // eax
  RTL_SRWLOCK *v9; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**(_QWORD **)(a1 + 264) + 200LL))(*(_QWORD *)(a1 + 264), &v9);
  v4 = 0;
  if ( !a2 )
  {
    *(_DWORD *)(a1 + 164) &= 0xFFFFFFC7;
    goto LABEL_9;
  }
  v5 = a2 - 1;
  if ( v5 )
  {
    if ( v5 != 1 )
    {
LABEL_9:
      WindowWrapperBase::PushDesiredNavigationLevelToDerivedClass((WindowWrapperBase *)(a1 - 16));
      v4 = 1;
      goto LABEL_10;
    }
    v6 = *(_DWORD *)(a1 + 164) & 0xFFFFFFE7 | 0x10;
LABEL_7:
    *(_DWORD *)(a1 + 164) = v6;
    goto LABEL_9;
  }
  v7 = *(_DWORD *)(a1 + 164);
  if ( (v7 & 0x18) == 0 )
  {
    v6 = v7 | 8;
    goto LABEL_7;
  }
LABEL_10:
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v9);
  return v4;
}
