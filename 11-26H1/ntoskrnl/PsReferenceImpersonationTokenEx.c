/*
 * XREFs of PsReferenceImpersonationTokenEx @ 0x1408BD210
 * Callers:
 *     SepReferenceTokenByHandle @ 0x1403ABB50 (SepReferenceTokenByHandle.c)
 *     FsRtlpOplockGetThreadIntegrityLevel @ 0x140791B6C (FsRtlpOplockGetThreadIntegrityLevel.c)
 *     CmpCmdHiveOpen @ 0x1408BAC48 (CmpCmdHiveOpen.c)
 *     CmpOpenHiveFile @ 0x1408BB784 (CmpOpenHiveFile.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
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
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v16;
}
