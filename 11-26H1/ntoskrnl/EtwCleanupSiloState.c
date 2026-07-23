/*
 * XREFs of EtwCleanupSiloState @ 0x14082A79C
 * Callers:
 *     PspDeleteServerSiloGlobals @ 0x1407F499C (PspDeleteServerSiloGlobals.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     KeBugCheck @ 0x140535E10 (KeBugCheck.c)
 *     EtwpCleanupSiloState @ 0x14082B430 (EtwpCleanupSiloState.c)
 */

__int64 __fastcall EtwCleanupSiloState(_QWORD *P, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned int i; // edx
  unsigned int j; // esi
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v8; // r14
  void *v9; // rdx
  LegacyAutoBoost *v10; // rbp
  unsigned int k; // ecx

  if ( !P )
LABEL_22:
    KeBugCheck(0x11Du);
  for ( i = 0; i < *((_DWORD *)P + 4); ++i )
  {
    if ( *(_QWORD *)(P[89] + 8LL * i) != 1LL )
      goto LABEL_22;
  }
  for ( j = 0; j < 0x40; ++j )
  {
    CurrentThread = KeGetCurrentThread();
    v8 = &P[7 * j + 90];
    --CurrentThread->KernelApcDisable;
    v10 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)(v8 + 6), 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64(v8 + 6, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v8 + 6, 0, v10, (struct _KTHREAD *)(v8 + 6));
    if ( v10 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v10, v9);
      else
        *((_BYTE *)v10 + 10) = 1;
    }
    for ( k = 0; k < 3; ++k )
    {
      if ( (signed __int64 *)v8[2 * k] != &v8[2 * k] )
        goto LABEL_22;
    }
    if ( _InterlockedCompareExchange64(v8 + 6, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v8 + 6);
    KeAbPostRelease((unsigned __int64)(v8 + 6));
    KeLeaveCriticalRegion();
  }
  return EtwpCleanupSiloState(P);
}
