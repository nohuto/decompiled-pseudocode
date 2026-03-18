/*
 * XREFs of VrpDecrementSiloCount @ 0x140AA61E8
 * Callers:
 *     VrpJobContextDelete @ 0x140A9A800 (VrpJobContextDelete.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     CmUnRegisterCallback @ 0x1407C1E10 (CmUnRegisterCallback.c)
 */

void VrpDecrementSiloCount()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v1; // rax
  signed __int8 v2; // cf
  __int64 *v3; // rdi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((__int64)&VrpActiveSilosLock, 0LL);
  v2 = _interlockedbittestandset64((volatile signed __int32 *)&VrpActiveSilosLock, 0LL);
  v3 = v1;
  if ( v2 )
    ExfAcquirePushLockExclusiveEx(&VrpActiveSilosLock, v1, (__int64)&VrpActiveSilosLock);
  if ( v3 )
    *((_BYTE *)v3 + 10) = 1;
  if ( !--VrpNumActiveSilos )
    CmUnRegisterCallback(VrpCallbackCookie);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&VrpActiveSilosLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&VrpActiveSilosLock);
  KeAbPostRelease((ULONG_PTR)&VrpActiveSilosLock);
  KeLeaveCriticalRegion();
}
