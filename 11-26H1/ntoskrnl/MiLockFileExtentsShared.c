/*
 * XREFs of MiLockFileExtentsShared @ 0x14087380C
 * Callers:
 *     MiIsExtentDangling @ 0x1406FF400 (MiIsExtentDangling.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 */

void __fastcall MiLockFileExtentsShared(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  LegacyAutoBoost *v5; // rbx
  __int64 v6; // rdx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v5 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&stru_140E2D2D0.WaitBlock[3].Object, 0LL, 0LL, a4);
  v6 = 17LL;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140E2D2D0.Spare18, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(
      (signed __int64 *)&stru_140E2D2D0.WaitBlock[3].Object,
      0,
      v5,
      (struct _KTHREAD *)&stru_140E2D2D0.Spare18);
  if ( v5 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v5, (void *)v6);
    else
      *((_BYTE *)v5 + 10) = 1;
  }
}
