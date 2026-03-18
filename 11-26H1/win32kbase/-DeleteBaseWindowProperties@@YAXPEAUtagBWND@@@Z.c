/*
 * XREFs of ?DeleteBaseWindowProperties@@YAXPEAUtagBWND@@@Z @ 0x1401EA218
 * Callers:
 *     DestroyBaseWindow @ 0x1401EA340 (DestroyBaseWindow.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x1400489D0 (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     ??$vInitAndLock@UtagObjLock@@@?$ObjectLockBase@UtagObjLock@@@?$DomainExclusiveBase@$$V@?$DomainSharedBase@$$V@@IEAAXAEAUtagObjLock@@@Z @ 0x1400DE0EC (--$vInitAndLock@UtagObjLock@@@-$ObjectLockBase@UtagObjLock@@@-$DomainExclusiveBase@$$V@-$DomainS.c)
 *     ??0?$ObjectLockBase@UtagObjLock@@@?$DomainExclusiveBase@$$V@?$DomainSharedBase@$$V@@IEAA@AEAUtagObjLock@@@Z @ 0x14014CA20 (--0-$ObjectLockBase@UtagObjLock@@@-$DomainExclusiveBase@$$V@-$DomainSharedBase@$$V@@IEAA@AEAUtag.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??1?$ObjectLock@UtagObjLock@@@?$DomainExclusive@$$V@?$DomainShared@$$V@@QEAA@XZ @ 0x1401EA1E8 (--1-$ObjectLock@UtagObjLock@@@-$DomainExclusive@$$V@-$DomainShared@$$V@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall DeleteBaseWindowProperties(struct tagBWND *a1, int a2, int a3)
{
  tagObjLock *v3; // rbx
  __int64 v5; // rdi
  int v6; // r8d
  int v7; // edx
  int v8; // r8d
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rbx
  _BYTE v17[40]; // [rsp+28h] [rbp-50h] BYREF

  v3 = (tagObjLock *)*((_QWORD *)a1 + 10);
  v5 = 0LL;
  DomainSharedBase<>::DomainExclusiveBase<>::ObjectLockBase<tagObjLock>::ObjectLockBase<tagObjLock>(
    (__int64)v17,
    a2,
    a3);
  DomainSharedBase<>::DomainExclusiveBase<>::ObjectLockBase<tagObjLock>::vInitAndLock<tagObjLock>((__int64)v17, v3, v6);
  LockRefactorStagingAssertOwned(*((struct _KTHREAD ***)a1 + 10), v7, v8);
  v12 = *(_QWORD *)(*((_QWORD *)a1 + 10) + 24LL);
  if ( v12 )
  {
    v13 = *(unsigned int *)(v12 + 4);
    v14 = (__int64 *)(v12 + 8);
    if ( *(_DWORD *)(v12 + 4) )
    {
      do
      {
        if ( (*((_WORD *)v14 + 5) & 0x8001) == 0x8001 )
        {
          v15 = *v14;
          if ( v5 )
            *(_QWORD *)(v15 + 8) = v5;
          v5 = v15;
        }
        else
        {
          MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 166);
        }
        v14 += 2;
        --v13;
      }
      while ( v13 );
    }
    GreDeleteFastMutex(*(char **)(*((_QWORD *)a1 + 10) + 24LL), v9, v10, v11);
    *(_QWORD *)(*((_QWORD *)a1 + 10) + 24LL) = 0LL;
  }
  DomainShared<>::DomainExclusive<>::ObjectLock<tagObjLock>::~ObjectLock<tagObjLock>((__int64)v17);
  if ( v5 )
  {
    do
    {
      v16 = *(_QWORD *)(v5 + 8);
      (**(void (__fastcall ***)(__int64))v5)(v5);
      v5 = v16;
    }
    while ( v16 );
  }
}
