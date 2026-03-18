/*
 * XREFs of PsSwapImpersonationToken @ 0x140A48460
 * Callers:
 *     NtOpenThreadTokenEx @ 0x140A47C40 (NtOpenThreadTokenEx.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x140277800 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
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
  __int64 v14; // rdx
  __int64 v15; // r8
  void *v16; // rcx

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
    KeLeaveCriticalRegionThread((__int64)CurrentThread, v14, v15);
    if ( v3 < 0 )
    {
      v16 = (void *)a3;
    }
    else
    {
      ObfDereferenceObject(a2);
      if ( !v7 )
        return (unsigned int)v3;
      v16 = v7;
    }
    ObfDereferenceObject(v16);
    return (unsigned int)v3;
  }
  return 3221225596LL;
}
