/*
 * XREFs of ObMakeTemporaryObject @ 0x140B03770
 * Callers:
 *     IoDeleteDevice @ 0x140426AC0 (IoDeleteDevice.c)
 *     IopCompleteUnloadOrDelete @ 0x140426EA4 (IopCompleteUnloadOrDelete.c)
 *     IoDeleteDriver @ 0x140798F00 (IoDeleteDriver.c)
 *     ObShutdownSystem @ 0x1407C5600 (ObShutdownSystem.c)
 *     ObpDirectoryTeardownCallback @ 0x1408AD8B0 (ObpDirectoryTeardownCallback.c)
 *     IopLoadDriver @ 0x140A3A064 (IopLoadDriver.c)
 *     NtMakeTemporaryObject @ 0x140B036D0 (NtMakeTemporaryObject.c)
 *     IopUnloadDriver @ 0x140B2CE78 (IopUnloadDriver.c)
 *     IoCreateDriver @ 0x140B5A8C0 (IoCreateDriver.c)
 *     IovpUnloadDriver @ 0x140C2701C (IovpUnloadDriver.c)
 *     IopInitializeBuiltinDriver @ 0x140D0F138 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ObpDeleteNameCheck @ 0x14092C880 (ObpDeleteNameCheck.c)
 */

void __stdcall ObMakeTemporaryObject(PVOID Object)
{
  struct _KLOCK_ENTRIES *v1; // r9
  struct _KTHREAD *CurrentThread; // rax
  char *v3; // rsi
  unsigned __int64 *v4; // rdi
  AutoBoost *v5; // rax
  void *v6; // rdx
  AutoBoost *v7; // rbx
  signed __int64 v8; // rax
  signed __int64 v9; // rdx
  __int64 v10; // rtt
  __int64 v11; // rdx
  __int64 v12; // r8
  struct _KLOCK_ENTRIES *v13; // r9

  CurrentThread = KeGetCurrentThread();
  v3 = (char *)Object - 48;
  v4 = (unsigned __int64 *)((char *)Object - 32);
  --CurrentThread->KernelApcDisable;
  v5 = (AutoBoost *)KeAbPreAcquire((__int64)v4, 0LL, 0LL, v1);
  v7 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v5, (__int64)v4);
  if ( v7 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v7, v6);
    else
      *((_BYTE *)v7 + 10) = 1;
  }
  v3[27] &= ~0x10u;
  _m_prefetchw(v3 + 16);
  v8 = *((_QWORD *)v3 + 2);
  v9 = v8 - 16;
  if ( (v8 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v9 = 0LL;
  if ( (v8 & 2) != 0
    || (v10 = *((_QWORD *)v3 + 2), v10 != _InterlockedCompareExchange64((volatile signed __int64 *)v3 + 2, v9, v8)) )
  {
    ExfReleasePushLock((_QWORD *)v3 + 2);
  }
  KeAbPostRelease((unsigned __int64)(v3 + 16));
  KeLeaveCriticalRegion();
  ObpDeleteNameCheck((__int64)v3, v11, v12, v13);
}
