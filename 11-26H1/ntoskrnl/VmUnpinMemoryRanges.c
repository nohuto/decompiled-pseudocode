/*
 * XREFs of VmUnpinMemoryRanges @ 0x140823890
 * Callers:
 *     VmUnpinMemoryRange @ 0x1408237E0 (VmUnpinMemoryRange.c)
 * Callees:
 *     KeQueryUnbiasedInterruptTimePrecise @ 0x140207CD0 (KeQueryUnbiasedInterruptTimePrecise.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     VmpUnpinMemoryRanges @ 0x140823DB8 (VmpUnpinMemoryRanges.c)
 *     VmpLogPin @ 0x14082497C (VmpLogPin.c)
 */

__int64 __fastcall VmUnpinMemoryRanges(int a1, int a2, __int16 a3, struct _KLOCK_ENTRIES *a4, __int64 a5)
{
  ULONG64 v9; // rsi
  signed __int64 *v10; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v12; // rcx
  void *v13; // rdx
  LegacyAutoBoost *v14; // rdi
  unsigned int v15; // edi
  int v16; // ecx
  __int64 v17; // r8
  unsigned __int64 QpcTimeStamp; // [rsp+50h] [rbp-38h] BYREF
  unsigned __int64 v20; // [rsp+58h] [rbp-30h] BYREF

  if ( stru_140F06A28.InitialStack
    && *(_DWORD *)stru_140F06A28.InitialStack
    && tlgKeywordOn((__int64)stru_140F06A28.InitialStack, 32LL) )
  {
    v9 = KeQueryUnbiasedInterruptTimePrecise(&QpcTimeStamp);
  }
  else
  {
    v9 = 0LL;
  }
  QpcTimeStamp = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[3].ProcessListEntry.Blink;
  v10 = (signed __int64 *)(QpcTimeStamp + 136);
  CurrentThread = KeGetCurrentThread();
  v12 = QpcTimeStamp + 136;
  --CurrentThread->KernelApcDisable;
  v14 = (LegacyAutoBoost *)KeAbPreAcquire(v12, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64(v10, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v10, 0, v14, (struct _KTHREAD *)v10);
  if ( v14 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v14, v13);
    else
      *((_BYTE *)v14 + 10) = 1;
  }
  v15 = VmpUnpinMemoryRanges((PEX_SPIN_LOCK)QpcTimeStamp, (__int64)a4, 0, a5);
  if ( _InterlockedCompareExchange64(v10, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v10);
  KeAbPostRelease((unsigned __int64)v10);
  KeLeaveCriticalRegion();
  if ( v9 )
  {
    KeQueryUnbiasedInterruptTimePrecise(&v20);
    if ( stru_140F06A28.InitialStack )
    {
      if ( *(_DWORD *)stru_140F06A28.InitialStack && tlgKeywordOn((__int64)stru_140F06A28.InitialStack, 32LL) )
        VmpLogPin(v16, a5, a1, a2, a3, 0, (__int64)a4, v15, v17);
    }
  }
  return v15;
}
