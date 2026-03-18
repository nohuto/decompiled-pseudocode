/*
 * XREFs of DeleteProperties @ 0x1400DE260
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x1400489D0 (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x140049888 (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     ?LockExclusive@tagObjLock@@QEBAXXZ @ 0x1400DE460 (-LockExclusive@tagObjLock@@QEBAXXZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall DeleteProperties(__int64 a1, int a2, int a3)
{
  __int64 v3; // rbx
  _QWORD *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  __int64 UserSessionState; // rax
  __int64 v12; // rcx
  int v13; // esi
  tagObjLock **v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  int v19; // esi
  __int64 i; // rbx
  __int16 v21; // cx
  _QWORD *v22; // rax
  _QWORD *v23; // rbx
  __int128 v24; // [rsp+30h] [rbp-20h] BYREF
  char v25; // [rsp+40h] [rbp-10h]
  char v26; // [rsp+48h] [rbp-8h]

  v3 = *(_QWORD *)(a1 + 144);
  v5 = 0LL;
  v25 = 0;
  W32GetUserSessionState(a1, a2, a3);
  v24 = 0LL;
  v26 = 0;
  if ( IS_USERCRIT_OWNED_SHAREDONLY(v7, v6) )
  {
    v26 = 1;
    UserSessionState = W32GetUserSessionState(v9, v8, v10);
    v12 = 0LL;
    if ( v3 != UserSessionState + 42480 )
      v12 = v3;
    *(_QWORD *)&v24 = v12;
    v13 = 0;
    v14 = (tagObjLock **)&v24;
    do
    {
      if ( *v14 )
        tagObjLock::LockExclusive(*v14);
      ++v13;
      ++v14;
    }
    while ( !v13 );
    v25 = 1;
  }
  LockRefactorStagingAssertOwned(*(struct _KTHREAD ***)(a1 + 144), v8, v10);
  v18 = *(_QWORD *)(*(_QWORD *)(a1 + 144) + 24LL);
  if ( v18 )
  {
    v19 = *(_DWORD *)(v18 + 4);
    for ( i = v18 + 8; v19; --v19 )
    {
      v21 = *(_WORD *)(i + 10);
      if ( (v21 & 1) != 0 )
      {
        if ( (v21 & 0x8001) == 0x8001 )
        {
          v22 = *(_QWORD **)i;
          if ( v5 )
            v22[1] = v5;
          v5 = v22;
        }
        else if ( (v21 & 8) != 0 )
        {
          RtlFreeHeap(*(PVOID *)(*(_QWORD *)(a1 + 24) + 136LL), 0, *(PVOID *)i);
        }
        else if ( (v21 & 4) == 0 )
        {
          GreDeleteFastMutex(*(char **)i, v15, v16, v17);
        }
      }
      i += 16LL;
    }
    GreDeleteFastMutex(*(char **)(*(_QWORD *)(a1 + 144) + 24LL), v15, v16, v17);
    *(_QWORD *)(*(_QWORD *)(a1 + 144) + 24LL) = 0LL;
    if ( v25 && v26 )
    {
      if ( (_QWORD)v24 )
        RIMUnlockExclusive(v24);
      v25 = 0;
    }
    if ( v5 )
    {
      do
      {
        v23 = (_QWORD *)v5[1];
        (*(void (__fastcall **)(_QWORD *))*v5)(v5);
        v5 = v23;
      }
      while ( v23 );
    }
  }
  else if ( v25 && v26 )
  {
    if ( (_QWORD)v24 )
      RIMUnlockExclusive(v24);
  }
}
