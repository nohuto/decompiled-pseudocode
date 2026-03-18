/*
 * XREFs of EtwpCreateUmReplyObject @ 0x140B12A84
 * Callers:
 *     EtwpNotifyGuid @ 0x140938434 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x140ADA008 (EtwpEnableGuid.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     KeInitializeQueue @ 0x1404CBEC0 (KeInitializeQueue.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ObCreateObjectEx @ 0x1408FD7D0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14092B470 (ObInsertObjectEx.c)
 *     EtwpReferenceGuidEntry @ 0x140935A40 (EtwpReferenceGuidEntry.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpCreateUmReplyObject(ULONG_PTR BugCheckParameter2, _QWORD *a2, _QWORD *a3)
{
  struct _KQUEUE *Pool2; // rax
  struct _KQUEUE *v7; // rsi
  int inserted; // edi
  char *v9; // rbx
  struct _KLOCK_ENTRIES *v10; // r9
  AutoBoost *v11; // rax
  void *v12; // rdx
  signed __int8 v13; // cf
  AutoBoost *v14; // rdi
  __int64 v15; // rax
  __int64 v17; // [rsp+20h] [rbp-39h]
  __int64 v18; // [rsp+50h] [rbp-9h] BYREF
  _QWORD v19[4]; // [rsp+58h] [rbp-1h] BYREF
  __int128 v20; // [rsp+78h] [rbp+1Fh]
  void *v21; // [rsp+D8h] [rbp+7Fh] BYREF

  v19[0] = 48LL;
  v19[3] = 64LL;
  v18 = 0LL;
  v21 = 0LL;
  v19[1] = 0LL;
  v19[2] = 0LL;
  v20 = 0LL;
  Pool2 = (struct _KQUEUE *)ExAllocatePool2(0x40uLL);
  v7 = Pool2;
  if ( Pool2 )
  {
    KeInitializeQueue(Pool2, 0);
    inserted = ObCreateObjectEx(0, EtwpRegistrationObjectType, (__int64)v19, 1u, v17, 120, 0, 0, &v21, 0LL);
    if ( inserted < 0 )
    {
      ExFreePoolWithTag(v7, 0);
    }
    else
    {
      v9 = (char *)v21;
      memset_0(v21, 0, 0x78uLL);
      *((_WORD *)v9 + 49) = 4;
      *((_QWORD *)v9 + 6) = v7;
      EtwpReferenceGuidEntry(BugCheckParameter2);
      *((_QWORD *)v9 + 4) = BugCheckParameter2;
      v11 = (AutoBoost *)KeAbPreAcquire((__int64)&ExpSysDbgLock.1144, 0LL, 0LL, v10);
      v13 = _interlockedbittestandset64((volatile signed __int32 *)&ExpSysDbgLock.1144, 0LL);
      v14 = v11;
      if ( v13 )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&ExpSysDbgLock.1144, v11, (__int64)&ExpSysDbgLock.1144);
      if ( v14 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v14, v12);
        else
          *((_BYTE *)v14 + 10) = 1;
      }
      v15 = *(_QWORD *)&ExpSysDbgLock.SchedulerAssistYieldCounter;
      if ( *(struct _KTHREAD **)(*(_QWORD *)&ExpSysDbgLock.SchedulerAssistYieldCounter + 8LL) != (struct _KTHREAD *)&ExpSysDbgLock.SchedulerAssistYieldCounter )
        __fastfail(3u);
      *(_QWORD *)v9 = *(_QWORD *)&ExpSysDbgLock.SchedulerAssistYieldCounter;
      *((_QWORD *)v9 + 1) = &ExpSysDbgLock.SchedulerAssistYieldCounter;
      *(_QWORD *)(v15 + 8) = v9;
      *(_QWORD *)&ExpSysDbgLock.SchedulerAssistYieldCounter = v9;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpSysDbgLock.Spare32, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&ExpSysDbgLock.1144);
      KeAbPostRelease((unsigned __int64)&ExpSysDbgLock.1144);
      *((_QWORD *)v9 + 3) = v9 + 16;
      *((_QWORD *)v9 + 2) = v9 + 16;
      _InterlockedOr16((volatile signed __int16 *)v9 + 49, 0x40u);
      inserted = ObInsertObjectEx(v9, 0LL, 0x804u, 1, 0, (__int64)&v18, a2);
      if ( inserted >= 0 )
        *a3 = v9;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)inserted;
}
