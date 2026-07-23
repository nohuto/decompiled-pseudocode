/*
 * XREFs of ExpQueryBootLoaderMetadata @ 0x140525B74
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExSystemExceptionFilter @ 0x14083CCA0 (ExSystemExceptionFilter.c)
 */

__int64 __fastcall ExpQueryBootLoaderMetadata(void *a1, unsigned int a2, _DWORD *a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v8; // rax
  volatile unsigned __int8 *v9; // rdx
  AutoBoost *v10; // r14
  unsigned int v11; // edi
  char *v12; // rdx
  size_t v13; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = (AutoBoost *)KeAbPreAcquire((__int64)&ExpSysDbgLock.SchedulerApc.NormalContext, 0LL, 0LL, a4);
  v10 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpSysDbgLock.SchedulerApcFill5[56], 0LL) )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&ExpSysDbgLock.SchedulerApc.NormalContext,
      v8,
      (__int64)&ExpSysDbgLock.SchedulerApc.NormalContext);
  v11 = 0;
  if ( v10 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
    {
      LOBYTE(v9) = 2;
      AutoBoost::KiAbpSetEntryValue((AutoBoost *)((char *)v10 + 33), v9, 1);
    }
    else
    {
      *((_BYTE *)v10 + 10) = 1;
    }
  }
  v12 = (char *)ExBootLoaderMetadata;
  if ( ExBootLoaderMetadata )
  {
    v13 = *(unsigned int *)ExBootLoaderMetadata;
    *a3 = v13;
    if ( a1 )
    {
      if ( a2 >= (unsigned int)v13 )
        memmove(a1, v12 + 4, v13);
      else
        v11 = -1073741820;
    }
  }
  else
  {
    *a3 = 0;
  }
  if ( (_InterlockedExchangeAdd64(
          (volatile signed __int64 *)&ExpSysDbgLock.SchedulerApc.NormalContext,
          0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpSysDbgLock.SchedulerApc.NormalContext);
  KeAbPostRelease((unsigned __int64)&ExpSysDbgLock.SchedulerApc.NormalContext);
  KeLeaveCriticalRegion();
  return v11;
}
