/*
 * XREFs of ExpQueryBootLoaderMetadata @ 0x140523504
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B145DC (ExpQuerySystemInformation.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x140444460 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     ExSystemExceptionFilter @ 0x140836A60 (ExSystemExceptionFilter.c)
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
  v8 = (AutoBoost *)KeAbPreAcquire((__int64)&ExpSysDbgLock.SavedApcStateFill[40], 0LL, 0LL, a4);
  v10 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpSysDbgLock.SavedApcStateFill[40], 0LL) )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&ExpSysDbgLock.SavedApcStateFill[40],
      v8,
      (__int64)&ExpSysDbgLock.SavedApcStateFill[40]);
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
          (volatile signed __int64 *)&ExpSysDbgLock.SavedApcStateFill[40],
          0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpSysDbgLock.SavedApcStateFill[40]);
  KeAbPostRelease((unsigned __int64)&ExpSysDbgLock.SavedApcStateFill[40]);
  KeLeaveCriticalRegion();
  return v11;
}
