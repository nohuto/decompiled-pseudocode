/*
 * XREFs of DeleteProperties @ 0x14009CCD0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x14003F3E0 (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x140040DDC (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     ??$vInitAndLock@UtagObjLock@@@?$ObjectLockBase@UtagObjLock@@@?$DomainExclusiveBase@$$V@?$DomainSharedBase@$$V@@IEAAXAEAUtagObjLock@@@Z @ 0x14009CE8C (--$vInitAndLock@UtagObjLock@@@-$ObjectLockBase@UtagObjLock@@@-$DomainExclusiveBase@$$V@-$DomainS.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall DeleteProperties(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _QWORD *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // r14d
  __int64 i; // rbx
  __int16 v9; // cx
  _QWORD *v10; // rax
  _QWORD *v11; // rbx
  __int64 v12; // [rsp+20h] [rbp-40h] BYREF
  char v13; // [rsp+28h] [rbp-38h]
  __int128 v14; // [rsp+30h] [rbp-30h]
  char v15; // [rsp+40h] [rbp-20h]
  char v16; // [rsp+48h] [rbp-18h]

  v2 = *(_QWORD *)(a1 + 144);
  v4 = 0LL;
  v13 = 0;
  v15 = 0;
  v12 = W32GetUserSessionState(a1, a2) + 42360;
  v14 = 0LL;
  v16 = 0;
  if ( IS_USERCRIT_OWNED_SHAREDONLY() )
  {
    v16 = 1;
    DomainSharedBase<>::DomainExclusiveBase<>::ObjectLockBase<tagObjLock>::vInitAndLock<tagObjLock>(&v12, v2);
  }
  LockRefactorStagingAssertOwned(*(struct _KTHREAD ***)(a1 + 144), v5);
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 144) + 24LL);
  if ( v6 )
  {
    v7 = *(_DWORD *)(v6 + 4);
    for ( i = v6 + 8; v7; --v7 )
    {
      v9 = *(_WORD *)(i + 10);
      if ( (v9 & 1) != 0 )
      {
        if ( (v9 & 0x8001) == 0x8001 )
        {
          v10 = *(_QWORD **)i;
          if ( v4 )
            v10[1] = v4;
          v4 = v10;
        }
        else if ( (v9 & 8) != 0 )
        {
          RtlFreeHeap(*(PVOID *)(*(_QWORD *)(a1 + 24) + 136LL), 0, *(PVOID *)i);
        }
        else if ( (v9 & 4) == 0 )
        {
          GreDeleteFastMutex(*(char **)i);
        }
      }
      i += 16LL;
    }
    GreDeleteFastMutex(*(char **)(*(_QWORD *)(a1 + 144) + 24LL));
    *(_QWORD *)(*(_QWORD *)(a1 + 144) + 24LL) = 0LL;
    if ( v15 && v16 )
    {
      if ( (_QWORD)v14 )
        RIMUnlockExclusive(v14);
      v15 = 0;
    }
    if ( v4 )
    {
      do
      {
        v11 = (_QWORD *)v4[1];
        (*(void (__fastcall **)(_QWORD *))*v4)(v4);
        v4 = v11;
      }
      while ( v11 );
    }
  }
  else if ( v15 && v16 )
  {
    if ( (_QWORD)v14 )
      RIMUnlockExclusive(v14);
  }
}
