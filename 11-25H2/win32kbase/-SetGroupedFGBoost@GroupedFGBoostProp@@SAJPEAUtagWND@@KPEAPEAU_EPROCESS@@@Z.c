/*
 * XREFs of ?SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z @ 0x14009C5A8
 * Callers:
 *     ?Update@GroupedProcessForegroundBoost@@YA_NPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z @ 0x14009C720 (-Update@GroupedProcessForegroundBoost@@YA_NPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z.c)
 * Callees:
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x14003F3E0 (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?doImmediateBoostAll@GroupedFGBoostProp@@AEAAXW4BoostFlag@@@Z @ 0x14009C850 (-doImmediateBoostAll@GroupedFGBoostProp@@AEAAXW4BoostFlag@@@Z.c)
 *     ??$GetProp@VGroupedFGBoostProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVGroupedFGBoostProp@@@Z @ 0x14009D0E0 (--$GetProp@VGroupedFGBoostProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVGroupedFGBoostProp@@@Z.c)
 *     ?deRefAll@GroupedFGBoostProp@@AEAAXXZ @ 0x14009D764 (-deRefAll@GroupedFGBoostProp@@AEAAXXZ.c)
 *     ?cleanUpAndReplace@GroupedFGBoostProp@@AEAAXKPEAPEAU_EPROCESS@@@Z @ 0x14009D7A8 (-cleanUpAndReplace@GroupedFGBoostProp@@AEAAXKPEAPEAU_EPROCESS@@@Z.c)
 *     ??$CreateWindowProp@VGroupedFGBoostProp@@@CWindowProp@@SAJPEAPEAVGroupedFGBoostProp@@@Z @ 0x14009DBA8 (--$CreateWindowProp@VGroupedFGBoostProp@@@CWindowProp@@SAJPEAPEAVGroupedFGBoostProp@@@Z.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x14015B7A8 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

__int64 __fastcall GroupedFGBoostProp::SetGroupedFGBoost(struct _KTHREAD ***a1, __int64 a2, struct _EPROCESS **a3)
{
  __int64 v4; // rsi
  int v6; // ebx
  __int64 v7; // r15
  struct _EPROCESS **v8; // rbp
  GroupedFGBoostProp *v10; // rdi
  struct _EPROCESS **v11; // rdx
  char *v12; // r14
  GroupedFGBoostProp *v13; // rcx
  struct _EPROCESS **v14; // rax
  struct _EPROCESS **v15; // r15
  GroupedFGBoostProp *v16; // rdi
  int v17; // eax
  GroupedFGBoostProp *v18; // [rsp+40h] [rbp+8h] BYREF

  v4 = (unsigned int)a2;
  LockRefactorStagingAssertOwned(a1[18], a2);
  v6 = 0;
  v18 = 0LL;
  if ( (unsigned int)CWindowProp::GetProp<GroupedFGBoostProp>(a1, &v18) )
  {
    v7 = (unsigned int)v4;
    v8 = (struct _EPROCESS **)Win32AllocPoolZInitImpl(256LL, 8 * v4, 0x67667355u);
    if ( !v8 )
      return 3221225495LL;
    v10 = v18;
    GroupedFGBoostProp::doImmediateBoostAll(v18, 0LL);
    if ( (_DWORD)v4 )
    {
      v11 = v8;
      v12 = (char *)((char *)a3 - (char *)v8);
      do
      {
        *v11 = *(struct _EPROCESS **)((char *)v11 + (_QWORD)v12);
        ++v11;
        --v7;
      }
      while ( v7 );
    }
    GroupedFGBoostProp::deRefAll(v10);
    GroupedFGBoostProp::cleanUpAndReplace(v10, v4, v8);
    v13 = v10;
  }
  else
  {
    v6 = CWindowProp::CreateWindowProp<GroupedFGBoostProp>(&v18);
    if ( v6 < 0 )
      return (unsigned int)v6;
    v14 = (struct _EPROCESS **)Win32AllocPoolZInitImpl(256LL, 8 * v4, 0x67667355u);
    v15 = v14;
    if ( !v14 )
    {
      (**(void (__fastcall ***)(GroupedFGBoostProp *))v18)(v18);
      return (unsigned int)-1073741801;
    }
    memmove(v14, a3, 8 * v4);
    v16 = v18;
    GroupedFGBoostProp::cleanUpAndReplace(v18, v4, v15);
    v17 = CWindowProp::SetProp(v16, (struct tagWND *)a1);
    v13 = v16;
    if ( !v17 )
    {
      (**(void (__fastcall ***)(GroupedFGBoostProp *))v16)(v16);
      return (unsigned int)-1073741811;
    }
  }
  GroupedFGBoostProp::doImmediateBoostAll(v13, 1LL);
  return (unsigned int)v6;
}
