/*
 * XREFs of PsReferenceImpersonationToken @ 0x1409E4930
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 */

PACCESS_TOKEN __stdcall PsReferenceImpersonationToken(
        PETHREAD Thread,
        PBOOLEAN CopyOnOpen,
        PBOOLEAN EffectiveOnly,
        PSECURITY_IMPERSONATION_LEVEL ImpersonationLevel)
{
  signed __int64 *p_WaitBlockList; // rbp
  struct _KTHREAD *CurrentThread; // r12
  void *v10; // rdx
  LegacyAutoBoost *v11; // rdi
  void *v12; // rdi
  BOOLEAN v13; // al

  if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 8) == 0 )
    return 0LL;
  p_WaitBlockList = (signed __int64 *)&Thread[1].WaitBlockList;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v11 = (LegacyAutoBoost *)KeAbPreAcquire(
                             (__int64)&Thread[1].WaitBlockList,
                             0LL,
                             0LL,
                             (struct _KLOCK_ENTRIES *)ImpersonationLevel);
  if ( _InterlockedCompareExchange64(p_WaitBlockList, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(p_WaitBlockList, 0, v11, (struct _KTHREAD *)p_WaitBlockList);
  if ( v11 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v11, v10);
    else
      *((_BYTE *)v11 + 10) = 1;
  }
  if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 8) != 0 )
  {
    v12 = Thread[1].WaitBlock[1].Thread;
    if ( v12 )
    {
      v13 = 0;
    }
    else
    {
      v12 = (void *)(*(_QWORD *)((char *)&Thread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
      v13 = BYTE1(*((_DWORD *)&Thread[1].SwapListEntry + 2)) & 1;
    }
    *CopyOnOpen = v13;
    ObfReferenceObjectWithTag(v12, 0x746C6644u);
    *ImpersonationLevel = *((_DWORD *)&Thread[1].0 + 1) & 3;
    *EffectiveOnly = (*(_BYTE *)(&Thread[1].MiscFlags + 1) & 4) != 0;
  }
  else
  {
    v12 = 0LL;
  }
  if ( _InterlockedCompareExchange64(p_WaitBlockList, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(p_WaitBlockList);
  KeAbPostRelease((unsigned __int64)p_WaitBlockList);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v12;
}
