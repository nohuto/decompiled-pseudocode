/*
 * XREFs of ?DeleteBaseWindowProperties@@YAXPEAUtagBWND@@@Z @ 0x1401C167C
 * Callers:
 *     DestroyBaseWindow @ 0x1401C17B0 (DestroyBaseWindow.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x14003F3E0 (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     ??$vInitAndLock@UtagObjLock@@@?$ObjectLockBase@UtagObjLock@@@?$DomainExclusiveBase@$$V@?$DomainSharedBase@$$V@@IEAAXAEAUtagObjLock@@@Z @ 0x14009CE8C (--$vInitAndLock@UtagObjLock@@@-$ObjectLockBase@UtagObjLock@@@-$DomainExclusiveBase@$$V@-$DomainS.c)
 *     ??0?$ObjectLockBase@UtagObjLock@@@?$DomainExclusiveBase@$$V@?$DomainSharedBase@$$V@@IEAA@AEAUtagObjLock@@@Z @ 0x14010F360 (--0-$ObjectLockBase@UtagObjLock@@@-$DomainExclusiveBase@$$V@-$DomainSharedBase@$$V@@IEAA@AEAUtag.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??1?$ObjectLock@UtagObjLock@@@?$DomainExclusive@$$V@?$DomainShared@$$V@@QEAA@XZ @ 0x1401C164C (--1-$ObjectLock@UtagObjLock@@@-$DomainExclusive@$$V@-$DomainShared@$$V@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall DeleteBaseWindowProperties(struct tagBWND *a1, __int64 a2)
{
  tagObjLock *v2; // rbx
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rbx
  _BYTE v11[40]; // [rsp+28h] [rbp-50h] BYREF

  v2 = (tagObjLock *)*((_QWORD *)a1 + 10);
  v4 = 0LL;
  DomainSharedBase<>::DomainExclusiveBase<>::ObjectLockBase<tagObjLock>::ObjectLockBase<tagObjLock>((__int64)v11, a2);
  DomainSharedBase<>::DomainExclusiveBase<>::ObjectLockBase<tagObjLock>::vInitAndLock<tagObjLock>((__int64)v11, v2);
  LockRefactorStagingAssertOwned(*((struct _KTHREAD ***)a1 + 10), v5);
  v6 = *(_QWORD *)(*((_QWORD *)a1 + 10) + 24LL);
  if ( v6 )
  {
    v7 = *(unsigned int *)(v6 + 4);
    v8 = (__int64 *)(v6 + 8);
    if ( *(_DWORD *)(v6 + 4) )
    {
      do
      {
        if ( (*((_WORD *)v8 + 5) & 0x8001) == 0x8001 )
        {
          v9 = *v8;
          if ( v4 )
            *(_QWORD *)(v9 + 8) = v4;
          v4 = v9;
        }
        else
        {
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 166);
        }
        v8 += 2;
        --v7;
      }
      while ( v7 );
    }
    GreDeleteFastMutex(*(char **)(*((_QWORD *)a1 + 10) + 24LL));
    *(_QWORD *)(*((_QWORD *)a1 + 10) + 24LL) = 0LL;
  }
  DomainShared<>::DomainExclusive<>::ObjectLock<tagObjLock>::~ObjectLock<tagObjLock>((__int64)v11);
  if ( v4 )
  {
    do
    {
      v10 = *(_QWORD *)(v4 + 8);
      (**(void (__fastcall ***)(__int64))v4)(v4);
      v4 = v10;
    }
    while ( v10 );
  }
}
