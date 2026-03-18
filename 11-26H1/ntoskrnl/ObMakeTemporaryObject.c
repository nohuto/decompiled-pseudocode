/*
 * XREFs of ObMakeTemporaryObject @ 0x140B01A40
 * Callers:
 *     IoDeleteDevice @ 0x140437BA0 (IoDeleteDevice.c)
 *     IopCompleteUnloadOrDelete @ 0x140437F84 (IopCompleteUnloadOrDelete.c)
 *     IoDeleteDriver @ 0x1407963D0 (IoDeleteDriver.c)
 *     ObShutdownSystem @ 0x1407C25A0 (ObShutdownSystem.c)
 *     ObpDirectoryTeardownCallback @ 0x1408A7440 (ObpDirectoryTeardownCallback.c)
 *     IopLoadDriver @ 0x140A26FC4 (IopLoadDriver.c)
 *     NtMakeTemporaryObject @ 0x140B019A0 (NtMakeTemporaryObject.c)
 *     IopUnloadDriver @ 0x140B2ADF8 (IopUnloadDriver.c)
 *     IoCreateDriver @ 0x140B57970 (IoCreateDriver.c)
 *     IovpUnloadDriver @ 0x140C2100C (IovpUnloadDriver.c)
 *     IopInitializeBuiltinDriver @ 0x140D08E68 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 *     ObpDeleteNameCheck @ 0x1408FC8F0 (ObpDeleteNameCheck.c)
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
