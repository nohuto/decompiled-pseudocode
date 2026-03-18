/*
 * XREFs of ExpSetBootLoaderMetadata @ 0x1406CAC98
 * Callers:
 *     NtSetSystemInformation @ 0x140833840 (NtSetSystemInformation.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x140444460 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     ExSystemExceptionFilter @ 0x140836A60 (ExSystemExceptionFilter.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpSetBootLoaderMetadata(void *Src, size_t Size, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  size_t v4; // r15
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v7; // rax
  volatile unsigned __int8 *v8; // rdx
  AutoBoost *v9; // rsi
  unsigned int v10; // edi
  _DWORD *Pool2; // rsi

  v4 = (unsigned int)Size;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = (AutoBoost *)KeAbPreAcquire((__int64)&ExpSysDbgLock.SavedApcStateFill[40], 0LL, 0LL, a4);
  v9 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpSysDbgLock.SavedApcStateFill[40], 0LL) )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&ExpSysDbgLock.SavedApcStateFill[40],
      v7,
      (__int64)&ExpSysDbgLock.SavedApcStateFill[40]);
  v10 = 0;
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
    {
      LOBYTE(v8) = 2;
      AutoBoost::KiAbpSetEntryValue((AutoBoost *)((char *)v9 + 33), v8, 1);
    }
    else
    {
      *((_BYTE *)v9 + 10) = 1;
    }
  }
  Pool2 = ExBootLoaderMetadata;
  if ( ExBootLoaderMetadata )
  {
    if ( (_DWORD)v4 != *(_DWORD *)ExBootLoaderMetadata )
    {
      ExFreePoolWithTag(ExBootLoaderMetadata, 0x64506142u);
      Pool2 = 0LL;
      ExBootLoaderMetadata = 0LL;
    }
    if ( Pool2 )
      goto LABEL_15;
  }
  if ( (_DWORD)v4 )
  {
    Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
    ExBootLoaderMetadata = Pool2;
    if ( !Pool2 )
    {
      v10 = -1073741670;
      goto LABEL_16;
    }
  }
  if ( Pool2 )
  {
LABEL_15:
    memmove(Pool2 + 1, Src, v4);
    *Pool2 = v4;
  }
LABEL_16:
  if ( (_InterlockedExchangeAdd64(
          (volatile signed __int64 *)&ExpSysDbgLock.SavedApcStateFill[40],
          0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpSysDbgLock.SavedApcStateFill[40]);
  KeAbPostRelease((unsigned __int64)&ExpSysDbgLock.SavedApcStateFill[40]);
  KeLeaveCriticalRegion();
  return v10;
}
