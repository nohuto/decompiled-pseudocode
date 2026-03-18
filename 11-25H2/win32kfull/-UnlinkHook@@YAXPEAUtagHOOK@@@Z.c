/*
 * XREFs of ?UnlinkHook@@YAXPEAUtagHOOK@@@Z @ 0x1400C91F0
 * Callers:
 *     FreeHook @ 0x1400C8710 (FreeHook.c)
 *     FreeThreadsWindowHooks @ 0x1400C9110 (FreeThreadsWindowHooks.c)
 * Callees:
 *     ??$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z @ 0x1400B30B8 (--$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z @ 0x1400C79AC (-LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z.c)
 */

void __fastcall UnlinkHook(struct tagHOOK *a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  struct tagHOOK **i; // r8
  struct tagHOOK *v6; // rax
  struct tagHOOK *v7; // rcx
  struct tagHOOK *v8; // rax
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 42312);
  LockRefactorStagingAssertOwned((PERESOURCE *)&v9, v9);
  if ( (*((_DWORD *)a1 + 16) & 1) != 0 )
  {
    v4 = *((int *)a1 + 12) + 6LL;
    v3 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 504LL);
  }
  else
  {
    v3 = *((_QWORD *)a1 + 9);
    if ( !v3 )
      return;
    v4 = *((int *)a1 + 12) + 121LL;
    *((_QWORD *)a1 + 9) = 0LL;
  }
  i = (struct tagHOOK **)(v3 + 8 * v4);
  v6 = *i;
  if ( *i != a1 )
  {
    v7 = *i;
    do
    {
      v6 = v7;
      if ( !v7 )
        break;
      i = (struct tagHOOK **)((char *)v7 + 40);
      v6 = (struct tagHOOK *)*((_QWORD *)v7 + 5);
      v7 = v6;
    }
    while ( v6 != a1 );
  }
  if ( !v6 )
  {
    for ( i = (struct tagHOOK **)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 40LL + 8LL * (*((_DWORD *)a1 + 12) + 1));
          ;
          i = (struct tagHOOK **)((char *)v8 + 40) )
    {
      v8 = *i;
      if ( *i == a1 || !v8 )
        break;
    }
  }
  *i = (struct tagHOOK *)*((_QWORD *)a1 + 5);
  *((_QWORD *)a1 + 5) = 0LL;
  if ( *((_QWORD *)a1 + 10) )
    DeferrableUnlockObjectAssignment<tagDESKTOP>((_QWORD **)a1 + 10);
}
