/*
 * XREFs of ExQueryHandleExceptionsPermanency @ 0x14047EBD4
 * Callers:
 *     ObpCloseHandle @ 0x140929C00 (ObpCloseHandle.c)
 *     NtClose @ 0x140929EC0 (NtClose.c)
 *     NtQueryInformationProcess @ 0x140A534E0 (NtQueryInformationProcess.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall ExQueryHandleExceptionsPermanency(__int64 a1, _BYTE *a2, _BYTE *a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int64 *v5; // rdi
  AutoBoost *v9; // rax
  void *v10; // rdx
  AutoBoost *v11; // rsi
  __int64 v12; // rax

  CurrentThread = KeGetCurrentThread();
  v5 = (unsigned __int64 *)(a1 + 56);
  --CurrentThread->KernelApcDisable;
  v9 = (AutoBoost *)KeAbPreAcquire(a1 + 56, 0LL, 0LL, a4);
  v11 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    ExfAcquirePushLockExclusiveEx(v5, v9, (__int64)v5);
  if ( v11 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v11, v10);
    else
      *((_BYTE *)v11 + 10) = 1;
  }
  v12 = *(_QWORD *)(a1 + 96);
  if ( v12 )
  {
    *a2 = 1;
    LOBYTE(v12) = (*(_DWORD *)(v12 + 8) & 8) != 0;
  }
  else if ( (*(_BYTE *)(a1 + 44) & 2) != 0 )
  {
    *a2 = 1;
    LOBYTE(v12) = 1;
  }
  else
  {
    *a2 = 0;
  }
  *a3 = v12;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v5);
  KeAbPostRelease((unsigned __int64)v5);
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
