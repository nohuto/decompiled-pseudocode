/*
 * XREFs of EtwpCreateUmReplyObject @ 0x140B14804
 * Callers:
 *     EtwpNotifyGuid @ 0x140913FD4 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x140AD6AB8 (EtwpEnableGuid.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     KeInitializeQueue @ 0x1404C58F0 (KeInitializeQueue.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ObInsertObjectEx @ 0x140906FA0 (ObInsertObjectEx.c)
 *     EtwpReferenceGuidEntry @ 0x1409115F0 (EtwpReferenceGuidEntry.c)
 *     ObCreateObjectEx @ 0x14092D760 (ObCreateObjectEx.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
  unsigned __int64 v15; // rax
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
      v11 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140F03830, 0LL, 0LL, v10);
      v13 = _interlockedbittestandset64(&stru_140F03830.Header.Lock, 0LL);
      v14 = v11;
      if ( v13 )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140F03830, v11, (__int64)&stru_140F03830);
      if ( v14 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v14, v12);
        else
          *((_BYTE *)v14 + 10) = 1;
      }
      v15 = ExpSysDbgLock.Padding[3];
      if ( *(struct _KTHREAD **)(ExpSysDbgLock.Padding[3] + 8) != (struct _KTHREAD *)&ExpSysDbgLock.Padding[3] )
        __fastfail(3u);
      *(_QWORD *)v9 = ExpSysDbgLock.Padding[3];
      *((_QWORD *)v9 + 1) = &ExpSysDbgLock.Padding[3];
      *(_QWORD *)(v15 + 8) = v9;
      ExpSysDbgLock.Padding[3] = (unsigned __int64)v9;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140F03830, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&stru_140F03830.Header.Lock);
      KeAbPostRelease((unsigned __int64)&stru_140F03830);
      *((_QWORD *)v9 + 3) = v9 + 16;
      *((_QWORD *)v9 + 2) = v9 + 16;
      _InterlockedOr16((volatile signed __int16 *)v9 + 49, 0x40u);
      inserted = ObInsertObjectEx(v9, 0LL, 2052, 1, 0, (__int64)&v18, a2);
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
