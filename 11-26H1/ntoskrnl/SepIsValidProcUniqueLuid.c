/*
 * XREFs of SepIsValidProcUniqueLuid @ 0x14081C714
 * Callers:
 *     SepRmValidateProcUniqueLuidWrkr @ 0x14081BC70 (SepRmValidateProcUniqueLuidWrkr.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     SepFindMatchingLuidEntry @ 0x14081C678 (SepFindMatchingLuidEntry.c)
 */

__int64 __fastcall SepIsValidProcUniqueLuid(struct _LIST_ENTRY **a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v6; // edi
  signed __int64 *p_Lock; // rsi
  void *v8; // rdx
  LegacyAutoBoost *v9; // rbx
  signed __int64 *v10; // rbx
  unsigned __int64 v12; // [rsp+58h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v12 = 0LL;
  v6 = -1073741275;
  --CurrentThread->KernelApcDisable;
  p_Lock = (signed __int64 *)&SeLuidToIndexMapping->Header.Lock;
  v9 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)SeLuidToIndexMapping, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64(p_Lock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(p_Lock, 0, v9, (struct _KTHREAD *)p_Lock);
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v9, v8);
    else
      *((_BYTE *)v9 + 10) = 1;
  }
  SepFindMatchingLuidEntry((PRTL_DYNAMIC_HASH_TABLE)SeLuidToIndexMapping->Header.WaitListHead.Flink, a1, &v12);
  if ( v12 )
    v6 = *(_BYTE *)(v12 + 48) != 0 ? 0xC0000225 : 0;
  v10 = (signed __int64 *)&SeLuidToIndexMapping->Header.Lock;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&SeLuidToIndexMapping->Header.Lock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v10);
  KeAbPostRelease((unsigned __int64)v10);
  KeLeaveCriticalRegion();
  return v6;
}
