/*
 * XREFs of CmFcManagerUnregisterFeatureConfigurationChangeNotification @ 0x1408610C0
 * Callers:
 *     RtlUnregisterFeatureConfigurationChangeNotification @ 0x1408011C0 (RtlUnregisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     CmpWorkItemRundown @ 0x14077C430 (CmpWorkItemRundown.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall CmFcManagerUnregisterFeatureConfigurationChangeNotification(
        __int64 a1,
        struct _EX_RUNDOWN_REF *a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v6; // rax
  void *v7; // rdx
  signed __int8 v8; // cf
  AutoBoost *v9; // rsi
  unsigned __int64 Count; // rdx
  struct _EX_RUNDOWN_REF **v11; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = (AutoBoost *)KeAbPreAcquire((__int64)&CmpFreezeListLock.Spare36, 0LL, 0LL, a4);
  v8 = _interlockedbittestandset64((volatile signed __int32 *)&CmpFreezeListLock.Spare36, 0LL);
  v9 = v6;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&CmpFreezeListLock.Spare36,
      v6,
      (__int64)&CmpFreezeListLock.Spare36);
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v9, v7);
    else
      *((_BYTE *)v9 + 10) = 1;
  }
  Count = a2->Count;
  if ( *(struct _EX_RUNDOWN_REF **)(a2->Count + 8) != a2 || (v11 = (struct _EX_RUNDOWN_REF **)a2[1].Count, *v11 != a2) )
    __fastfail(3u);
  *v11 = (struct _EX_RUNDOWN_REF *)Count;
  *(_QWORD *)(Count + 8) = v11;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&CmpFreezeListLock.Spare36, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&CmpFreezeListLock.Spare36);
  KeAbPostRelease((unsigned __int64)&CmpFreezeListLock.Spare36);
  KeLeaveCriticalRegion();
  CmpWorkItemRundown(a2 + 2);
  if ( a2 < (struct _EX_RUNDOWN_REF *)&CmpFreezeListLock.ResourceIndex || a2 >= (struct _EX_RUNDOWN_REF *)&unk_140EFB970 )
    ExFreePoolWithTag(a2, 0);
}
