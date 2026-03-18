/*
 * XREFs of MiLockDriverMappings @ 0x1404F45A8
 * Callers:
 *     MiReleaseDriverPtes @ 0x140A80038 (MiReleaseDriverPtes.c)
 *     MiReserveDriverPtes @ 0x140B0A2B4 (MiReserveDriverPtes.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 */

void __fastcall MiLockDriverMappings(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  AutoBoost *v4; // rax
  void *v5; // rdx
  AutoBoost *v6; // rbx

  --*(_WORD *)(a1 + 486);
  v4 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140E2D150.SchedulerApc.NormalContext, 0LL, 0LL, a4);
  v6 = v4;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&stru_140E2D150.SchedulerApcFill5[56], 0LL) )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&stru_140E2D150.SchedulerApc.NormalContext,
      v4,
      (__int64)&stru_140E2D150.SchedulerApc.NormalContext);
  if ( v6 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v6, v5);
    else
      *((_BYTE *)v6 + 10) = 1;
  }
}
