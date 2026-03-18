/*
 * XREFs of WheapPfaReset @ 0x1407B9C34
 * Callers:
 *     WheaRegChangeNotifyCallback @ 0x1407B9290 (WheaRegChangeNotifyCallback.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void WheapPfaReset()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v1; // rax
  signed __int8 v2; // cf
  __int64 *v3; // rdi
  PVOID *v4; // rdi
  PVOID *v5; // rax
  PVOID *v6; // rcx
  PVOID **v7; // rdx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((__int64)&WheapPfaLock, 0LL);
  v2 = _interlockedbittestandset64((volatile signed __int32 *)&WheapPfaLock, 0LL);
  v3 = v1;
  if ( v2 )
    ExfAcquirePushLockExclusiveEx(&WheapPfaLock, v1, (__int64)&WheapPfaLock);
  if ( v3 )
    *((_BYTE *)v3 + 10) = 1;
  v4 = (PVOID *)WheapPfaList;
  while ( v4 != &WheapPfaList )
  {
    v5 = (PVOID *)*v4;
    v6 = v4;
    v4 = v5;
    if ( v5[1] != v6 || (v7 = (PVOID **)v6[1], *v7 != v6) )
      __fastfail(3u);
    *v7 = v5;
    v5[1] = v7;
    ExFreePoolWithTag(v6, 0x61656857u);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&WheapPfaLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&WheapPfaLock);
  KeAbPostRelease((ULONG_PTR)&WheapPfaLock);
  KeLeaveCriticalRegion();
}
