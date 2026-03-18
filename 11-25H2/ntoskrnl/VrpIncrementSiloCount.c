/*
 * XREFs of VrpIncrementSiloCount @ 0x14094BBA0
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x14094B860 (VrpHandleIoctlInitializeJobForVreg.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     CmRegisterInternalCallback @ 0x140994FAC (CmRegisterInternalCallback.c)
 */

__int64 VrpIncrementSiloCount()
{
  struct _KTHREAD *CurrentThread; // rax
  int v1; // esi
  __int64 *v2; // rax
  __int64 v3; // rcx
  signed __int8 v4; // cf
  __int64 *v5; // rdi
  _QWORD v7[3]; // [rsp+30h] [rbp-18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v1 = 0;
  --CurrentThread->KernelApcDisable;
  v2 = KeAbPreAcquire((__int64)&VrpActiveSilosLock, 0LL);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&VrpActiveSilosLock, 0LL);
  v5 = v2;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&VrpActiveSilosLock, v2, (__int64)&VrpActiveSilosLock);
  if ( v5 )
    *((_BYTE *)v5 + 10) = 1;
  if ( VrpNumActiveSilos || (v7[0] = 917516LL, v7[1] = L"189900", v1 = CmRegisterInternalCallback(v3, v7), v1 >= 0) )
    ++VrpNumActiveSilos;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&VrpActiveSilosLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&VrpActiveSilosLock);
  KeAbPostRelease((ULONG_PTR)&VrpActiveSilosLock);
  KeLeaveCriticalRegion();
  return (unsigned int)v1;
}
