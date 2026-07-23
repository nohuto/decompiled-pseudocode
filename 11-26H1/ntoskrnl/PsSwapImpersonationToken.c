/*
 * XREFs of PsSwapImpersonationToken @ 0x140A51750
 * Callers:
 *     NtOpenThreadTokenEx @ 0x140A50F30 (NtOpenThreadTokenEx.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PsSwapImpersonationToken(__int64 a1, void *a2, unsigned __int64 a3)
{
  int v3; // edi
  void *v7; // rsi
  struct _KTHREAD *CurrentThread; // r12
  struct _KLOCK_ENTRIES *v9; // r9
  AutoBoost *v10; // rax
  void *v11; // rdx
  AutoBoost *v12; // r13
  __int64 v13; // rcx
  void *v14; // rcx

  v3 = 0;
  v7 = 0LL;
  if ( (*(_DWORD *)(a1 + 1440) & 8) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    PsReferenceSiloContext((void *)a3);
    --CurrentThread->KernelApcDisable;
    v10 = (AutoBoost *)KeAbPreAcquire(a1 + 1424, 0LL, 0LL, v9);
    v12 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 1424), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 1424), v10, a1 + 1424);
    if ( v12 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v12, v11);
      else
        *((_BYTE *)v12 + 10) = 1;
    }
    if ( (*(_DWORD *)(a1 + 1440) & 8) != 0 )
    {
      v13 = *(_QWORD *)(a1 + 1336);
      if ( (void *)(v13 & 0xFFFFFFFFFFFFFFF8uLL) == a2 && (*(_DWORD *)(a1 + 1440) & 0x100) != 0 )
      {
        v7 = *(void **)(a1 + 1608);
        *(_QWORD *)(a1 + 1608) = 0LL;
        *(_QWORD *)(a1 + 1336) = a3 | v13 & 7;
        _InterlockedAnd((volatile signed __int32 *)(a1 + 1440), 0xFFFFFEFF);
      }
      else
      {
        v3 = -1073741823;
      }
    }
    else
    {
      v3 = -1073741700;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1424), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1424));
    KeAbPostRelease(a1 + 1424);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( v3 < 0 )
    {
      v14 = (void *)a3;
    }
    else
    {
      ObfDereferenceObject(a2);
      if ( !v7 )
        return (unsigned int)v3;
      v14 = v7;
    }
    ObfDereferenceObject(v14);
    return (unsigned int)v3;
  }
  return 3221225596LL;
}
