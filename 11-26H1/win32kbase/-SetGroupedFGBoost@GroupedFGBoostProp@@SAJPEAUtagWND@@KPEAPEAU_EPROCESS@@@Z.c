/*
 * XREFs of ?SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z @ 0x1400DDB98
 * Callers:
 *     ?Update@GroupedProcessForegroundBoost@@YA_NPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z @ 0x1400DDD10 (-Update@GroupedProcessForegroundBoost@@YA_NPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x1400489D0 (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     ?doImmediateBoostAll@GroupedFGBoostProp@@AEAAXW4BoostFlag@@@Z @ 0x1400DDE5C (-doImmediateBoostAll@GroupedFGBoostProp@@AEAAXW4BoostFlag@@@Z.c)
 *     ??$GetProp@VGroupedFGBoostProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVGroupedFGBoostProp@@@Z @ 0x1400DE160 (--$GetProp@VGroupedFGBoostProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVGroupedFGBoostProp@@@Z.c)
 *     ?cleanUpAndReplace@GroupedFGBoostProp@@AEAAXKPEAPEAU_EPROCESS@@@Z @ 0x1400DE540 (-cleanUpAndReplace@GroupedFGBoostProp@@AEAAXKPEAPEAU_EPROCESS@@@Z.c)
 *     ?deRefAll@GroupedFGBoostProp@@AEAAXXZ @ 0x1400DE584 (-deRefAll@GroupedFGBoostProp@@AEAAXXZ.c)
 *     ??$CreateWindowProp@VGroupedFGBoostProp@@@CWindowProp@@SAJPEAPEAVGroupedFGBoostProp@@@Z @ 0x1400DE9D8 (--$CreateWindowProp@VGroupedFGBoostProp@@@CWindowProp@@SAJPEAPEAVGroupedFGBoostProp@@@Z.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1400DEA38 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall GroupedFGBoostProp::SetGroupedFGBoost(struct _KTHREAD ***a1, unsigned int a2, struct _EPROCESS **a3)
{
  __int64 v4; // rsi
  int v6; // ebx
  __int64 v7; // r15
  struct _EPROCESS **v8; // rbp
  GroupedFGBoostProp *v9; // rdi
  struct _EPROCESS **v10; // rdx
  char *v11; // r14
  GroupedFGBoostProp *v12; // rcx
  struct _EPROCESS **v14; // rax
  struct _EPROCESS **v15; // r15
  GroupedFGBoostProp *v16; // rdi
  int v17; // eax
  GroupedFGBoostProp *v18; // [rsp+40h] [rbp+8h] BYREF

  v4 = a2;
  LockRefactorStagingAssertOwned(a1[18], a2, (int)a3);
  v6 = 0;
  v18 = 0LL;
  if ( !(unsigned int)CWindowProp::GetProp<GroupedFGBoostProp>(a1, &v18) )
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
    v12 = v16;
    if ( !v17 )
    {
      (**(void (__fastcall ***)(GroupedFGBoostProp *))v16)(v16);
      return (unsigned int)-1073741811;
    }
LABEL_7:
    GroupedFGBoostProp::doImmediateBoostAll(v12, 1LL);
    return (unsigned int)v6;
  }
  v7 = (unsigned int)v4;
  v8 = (struct _EPROCESS **)Win32AllocPoolZInitImpl(256LL, 8 * v4, 0x67667355u);
  if ( v8 )
  {
    v9 = v18;
    GroupedFGBoostProp::doImmediateBoostAll(v18, 0LL);
    if ( (_DWORD)v4 )
    {
      v10 = v8;
      v11 = (char *)((char *)a3 - (char *)v8);
      do
      {
        *v10 = *(struct _EPROCESS **)((char *)v10 + (_QWORD)v11);
        ++v10;
        --v7;
      }
      while ( v7 );
    }
    GroupedFGBoostProp::deRefAll(v9);
    GroupedFGBoostProp::cleanUpAndReplace(v9, v4, v8);
    v12 = v9;
    goto LABEL_7;
  }
  return 3221225495LL;
}
