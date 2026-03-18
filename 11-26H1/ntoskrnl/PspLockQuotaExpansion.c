/*
 * XREFs of PspLockQuotaExpansion @ 0x1403BDC84
 * Callers:
 *     ExReturnPoolQuota @ 0x140264B30 (ExReturnPoolQuota.c)
 *     ExFreeHeapPool @ 0x1403A7BB0 (ExFreeHeapPool.c)
 *     PsReturnProcessPagedPoolQuota @ 0x1403BCF90 (PsReturnProcessPagedPoolQuota.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1403BD130 (PsReturnProcessNonPagedPoolQuota.c)
 *     PspReturnResourceQuota @ 0x1403BD4F0 (PspReturnResourceQuota.c)
 *     PsReturnPoolQuota @ 0x1403BD700 (PsReturnPoolQuota.c)
 *     PspExpandQuota @ 0x1403BD8E8 (PspExpandQuota.c)
 *     PspExpandLimit @ 0x140614CE0 (PspExpandLimit.c)
 *     PspInsertExpansionEntry @ 0x140614D5C (PspInsertExpansionEntry.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall PspLockQuotaExpansion(_DWORD *a1, KIRQL *a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  bool v4; // zf
  unsigned __int64 *v5; // rdi
  KSPIN_LOCK *v6; // rcx
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v8; // rax
  void *v9; // rdx
  AutoBoost *v10; // rbx

  v4 = *a1 == 0;
  v5 = (unsigned __int64 *)(a1 + 4);
  v6 = (KSPIN_LOCK *)(a1 + 4);
  if ( v4 )
  {
    CurrentThread = KeGetCurrentThread();
    *a2 = 0;
    --CurrentThread->SpecialApcDisable;
    v8 = (AutoBoost *)KeAbPreAcquire((__int64)v6, 0LL, 0LL, a4);
    v10 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
      ExfAcquirePushLockExclusiveEx(v5, v8, (__int64)v5);
    if ( v10 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v10, v9);
      else
        *((_BYTE *)v10 + 10) = 1;
    }
  }
  else
  {
    *a2 = KeAcquireSpinLockRaiseToDpc(v6);
  }
}
