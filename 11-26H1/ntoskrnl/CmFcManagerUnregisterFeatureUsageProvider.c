/*
 * XREFs of CmFcManagerUnregisterFeatureUsageProvider @ 0x140B36148
 * Callers:
 *     RtlUnregisterFeatureUsageProvider @ 0x140B36130 (RtlUnregisterFeatureUsageProvider.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     CmpWorkItemRundown @ 0x14077EF24 (CmpWorkItemRundown.c)
 *     CmFcManagerFlushFeatureUsage @ 0x140B3625C (CmFcManagerFlushFeatureUsage.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall CmFcManagerUnregisterFeatureUsageProvider(__int64 a1, struct _EX_RUNDOWN_REF *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KLOCK_ENTRIES *v4; // r9
  AutoBoost *v5; // rax
  void *v6; // rdx
  signed __int8 v7; // cf
  AutoBoost *v8; // rsi
  unsigned __int64 Count; // rdx
  struct _EX_RUNDOWN_REF **v10; // rax

  CmFcManagerFlushFeatureUsage(a1, 1LL, a2);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140EFBCA8, 0LL, 0LL, v4);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&stru_140EFBCA8, 0LL);
  v8 = v5;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140EFBCA8, v5, (__int64)&stru_140EFBCA8);
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v8, v6);
    else
      *((_BYTE *)v8 + 10) = 1;
  }
  Count = a2->Count;
  if ( *(struct _EX_RUNDOWN_REF **)(a2->Count + 8) != a2 || (v10 = (struct _EX_RUNDOWN_REF **)a2[1].Count, *v10 != a2) )
    __fastfail(3u);
  *v10 = (struct _EX_RUNDOWN_REF *)Count;
  *(_QWORD *)(Count + 8) = v10;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140EFBCA8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&stru_140EFBCA8);
  KeAbPostRelease((unsigned __int64)&stru_140EFBCA8);
  KeLeaveCriticalRegion();
  CmpWorkItemRundown(a2 + 2);
  if ( a2 < (struct _EX_RUNDOWN_REF *)&unk_140EFBCB0 || a2 >= (struct _EX_RUNDOWN_REF *)&dword_140EFBE48 )
    ExFreePoolWithTag(a2, 0);
}
