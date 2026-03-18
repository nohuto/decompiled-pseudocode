/*
 * XREFs of PsReferenceImpersonationTokenEx @ 0x1408B6C40
 * Callers:
 *     SepReferenceTokenByHandle @ 0x1402AC430 (SepReferenceTokenByHandle.c)
 *     FsRtlpOplockGetThreadIntegrityLevel @ 0x14078F03C (FsRtlpOplockGetThreadIntegrityLevel.c)
 *     CmpCmdHiveOpen @ 0x1408B4674 (CmpCmdHiveOpen.c)
 *     CmpOpenHiveFile @ 0x1408B51B0 (CmpOpenHiveFile.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 */

void *__fastcall PsReferenceImpersonationTokenEx(
        __int64 a1,
        char a2,
        ULONG a3,
        struct _KLOCK_ENTRIES *a4,
        bool *a5,
        int *a6,
        _BYTE *a7)
{
  struct _KTHREAD *CurrentThread; // r12
  __int64 v12; // r13
  signed __int64 *v13; // r15
  void *v14; // rdx
  LegacyAutoBoost *v15; // rsi
  void *v16; // rdi
  char v17; // al
  __int64 v19; // rdx
  __int64 v20; // r8

  if ( (*(_DWORD *)(a1 + 1440) & 8) == 0 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v12 = *(_QWORD *)(a1 + 544);
  v13 = (signed __int64 *)(a1 + 1424);
  --CurrentThread->KernelApcDisable;
  v15 = (LegacyAutoBoost *)KeAbPreAcquire(a1 + 1424, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64(v13, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v13, 0, v15, (struct _KTHREAD *)v13);
  if ( v15 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v15, v14);
    else
      *((_BYTE *)v15 + 10) = 1;
  }
  if ( (*(_DWORD *)(a1 + 1440) & 8) != 0 )
  {
    if ( (a2 & 1) != 0 && (v16 = *(void **)(a1 + 1608)) != 0LL )
    {
      v17 = 0;
    }
    else
    {
      v16 = (void *)(*(_QWORD *)(a1 + 1336) & 0xFFFFFFFFFFFFFFF8uLL);
      v17 = BYTE1(*(_DWORD *)(a1 + 1440)) & 1;
    }
    LOBYTE(a4->Thread) = v17;
    ObfReferenceObjectWithTag(v16, a3);
    *a6 = *(_DWORD *)(a1 + 1336) & 3;
    *a5 = (*(_BYTE *)(a1 + 1336) & 4) != 0;
    if ( a7 )
      *a7 = *(_BYTE *)(v12 + 1530);
  }
  else
  {
    v16 = 0LL;
  }
  if ( _InterlockedCompareExchange64(v13, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v13);
  KeAbPostRelease((unsigned __int64)v13);
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v19, v20);
  return v16;
}
