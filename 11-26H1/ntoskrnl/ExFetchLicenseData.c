/*
 * XREFs of ExFetchLicenseData @ 0x14083DCD0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall ExFetchLicenseData(void *a1, unsigned int a2, unsigned int *a3)
{
  unsigned int v6; // ebx
  struct _KLOCK_ENTRIES *v7; // r9
  struct _LIST_ENTRY *Blink; // r15
  __int64 v9; // r8
  struct _KTHREAD *CurrentThread; // rax
  void *v11; // rdx
  LegacyAutoBoost *v12; // r14
  unsigned int *Flink; // rdx

  v6 = 0;
  Blink = PsGetCurrentServerSiloGlobals()[54].Blink;
  if ( v9 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v12 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&Blink[2927].Blink, 0LL, 0LL, v7);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Blink[2927].Blink, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)&Blink[2927].Blink, 0, v12, (struct _KTHREAD *)&Blink[2927].Blink);
    if ( v12 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v12, v11);
      else
        *((_BYTE *)v12 + 10) = 1;
    }
    if ( LOBYTE(Blink[2937].Flink) )
      goto LABEL_10;
    Flink = (unsigned int *)Blink[2927].Flink;
    if ( Blink->Flink )
      Flink = (unsigned int *)Blink->Flink;
    if ( !Flink )
    {
LABEL_10:
      v6 = -1073741595;
    }
    else
    {
      *a3 = *Flink;
      if ( a1 && a2 && a2 >= *Flink )
      {
        memmove(a1, Flink, *Flink);
        if ( a2 >= 0x14 )
          *((_DWORD *)a1 + 3) &= ~1u;
      }
      else
      {
        v6 = -1073741789;
      }
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Blink[2927].Blink, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&Blink[2927].Blink);
    KeAbPostRelease((unsigned __int64)&Blink[2927].Blink);
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
