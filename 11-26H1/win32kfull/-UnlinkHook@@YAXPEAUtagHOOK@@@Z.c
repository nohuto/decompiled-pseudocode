/*
 * XREFs of ?UnlinkHook@@YAXPEAUtagHOOK@@@Z @ 0x140026714
 * Callers:
 *     FreeThreadsWindowHooks @ 0x140026630 (FreeThreadsWindowHooks.c)
 *     FreeHook @ 0x1400267F0 (FreeHook.c)
 * Callees:
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z @ 0x1400265D4 (-LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z.c)
 *     ??$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z @ 0x14014FB64 (--$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z.c)
 */

void __fastcall UnlinkHook(struct tagHOOK *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // r8
  struct tagHOOK **i; // r8
  struct tagHOOK *v8; // rax
  struct tagHOOK *v9; // rax
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 42336);
  LockRefactorStagingAssertOwned((PERESOURCE *)&v10, v10);
  if ( (*((_DWORD *)a1 + 16) & 1) != 0 )
  {
    v6 = *((_DWORD *)a1 + 12) + 1;
    v4 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 496LL) + 40LL;
  }
  else
  {
    v4 = *((_QWORD *)a1 + 9);
    if ( !v4 )
      return;
    v5 = *((_DWORD *)a1 + 12) + 1;
    *((_QWORD *)a1 + 9) = 0LL;
    v6 = v5 + 119LL;
  }
  for ( i = (struct tagHOOK **)(v4 + 8 * v6); ; i = (struct tagHOOK **)((char *)v8 + 40) )
  {
    v8 = *i;
    if ( *i == a1 || !v8 )
      break;
  }
  if ( !*i )
  {
    for ( i = (struct tagHOOK **)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 40LL + 8LL * (*((_DWORD *)a1 + 12) + 1));
          ;
          i = (struct tagHOOK **)((char *)v9 + 40) )
    {
      v9 = *i;
      if ( *i == a1 || !v9 )
        break;
    }
  }
  *i = (struct tagHOOK *)*((_QWORD *)a1 + 5);
  *((_QWORD *)a1 + 5) = 0LL;
  if ( *((_QWORD *)a1 + 10) )
    DeferrableUnlockObjectAssignment<tagDESKTOP>((char *)a1 + 80, v3, i, 0LL);
}
