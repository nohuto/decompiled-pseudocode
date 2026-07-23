/*
 * XREFs of BgkpLockBgfxCodeSection @ 0x140C55820
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14045C380 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkResumePrepare @ 0x140BF744C (BgkResumePrepare.c)
 *     BgkInitialize @ 0x140D19A1C (BgkInitialize.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     MmLockPagableDataSection @ 0x140ABC640 (MmLockPagableDataSection.c)
 */

void __fastcall BgkpLockBgfxCodeSection(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v5; // rax
  void *v6; // rdx
  signed __int8 v7; // cf
  AutoBoost *v8; // rdi
  int v9; // eax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140E3EAA8.OtherTransferCount, 0LL, 0LL, a4);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&stru_140E3EAA8.OtherTransferCount, 0LL);
  v8 = v5;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&stru_140E3EAA8.OtherTransferCount,
      v5,
      (__int64)&stru_140E3EAA8.OtherTransferCount);
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v8, v6);
    else
      *((_BYTE *)v8 + 10) = 1;
  }
  v9 = dword_140E65F30;
  if ( !dword_140E65F30 )
  {
    ImageSectionHandle = MmLockPagableDataSection(BgkpLockBgfxCodeSection);
    v9 = dword_140E65F30;
  }
  dword_140E65F30 = v9 + 1;
  if ( (_InterlockedExchangeAdd64(&stru_140E3EAA8.OtherTransferCount, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&stru_140E3EAA8.OtherTransferCount);
  KeAbPostRelease((unsigned __int64)&stru_140E3EAA8.OtherTransferCount);
  KeLeaveCriticalRegion();
}
