/*
 * XREFs of ExRegisterExtension @ 0x1408469D0
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ExpDereferenceHost @ 0x140846F98 (ExpDereferenceHost.c)
 *     ExpFindHost @ 0x140846FD0 (ExpFindHost.c)
 *     ExpVerifyCallbackResult @ 0x140847018 (ExpVerifyCallbackResult.c)
 */

__int64 __fastcall ExRegisterExtension(__int64 *a1, int a2, unsigned __int16 *a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned int v4; // edi
  __int64 v7; // r12
  struct _KTHREAD *CurrentThread; // rax
  void *v9; // rdx
  LegacyAutoBoost *v10; // rsi
  __int64 Host; // rax
  __int16 v12; // r8
  __int16 v13; // r11
  __int64 v14; // rsi
  unsigned __int16 v15; // r10
  unsigned __int16 i; // dx
  int v17; // eax
  struct _KLOCK_ENTRIES *v18; // r9
  struct _KTHREAD *v19; // rax
  AutoBoost *v20; // rax
  void *v21; // rdx
  AutoBoost *v22; // rbp
  int v23; // ebp
  PVOID v24; // rcx
  unsigned int v25; // eax
  _QWORD *v26; // rcx
  int v28; // [rsp+78h] [rbp+10h]

  v4 = 0;
  v7 = 0LL;
  if ( a2 == 65537 && (*((_QWORD *)a3 + 1) || !a3[3]) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v10 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&PspSiloMonitorLock.WaitBlock[3], 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64(
           (volatile signed __int64 *)&PspSiloMonitorLock.WaitBlock[3].WaitListEntry.Flink,
           17LL,
           0LL) )
    {
      ExfAcquirePushLockSharedEx(
        (signed __int64 *)&PspSiloMonitorLock.WaitBlock[3],
        0,
        v10,
        (struct _KTHREAD *)&PspSiloMonitorLock.WaitBlockFill11[144]);
    }
    if ( v10 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v10, v9);
      else
        *((_BYTE *)v10 + 10) = 1;
    }
    v28 = *(_DWORD *)(a3 + 1);
    Host = ExpFindHost(*a3);
    v14 = Host;
    if ( Host )
    {
      v15 = *(_WORD *)(Host + 48);
      for ( i = 0; i < v15; i += v13 )
      {
        v17 = *(_DWORD *)(*(_QWORD *)(v14 + 40) + 16LL * i);
        if ( (_WORD)v17 == v12 && HIWORD(v17) >= HIWORD(v28) )
        {
          v7 = *(_QWORD *)(v14 + 40) + 16LL * i;
          goto LABEL_19;
        }
      }
      ExpDereferenceHost(v14);
    }
    v14 = 0LL;
LABEL_19:
    if ( _InterlockedCompareExchange64(
           (volatile signed __int64 *)&PspSiloMonitorLock.WaitBlock[3].WaitListEntry.Flink,
           0LL,
           17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PspSiloMonitorLock.WaitBlock[3]);
    KeAbPostRelease((unsigned __int64)&PspSiloMonitorLock.WaitBlock[3]);
    KeLeaveCriticalRegion();
    if ( !v14 )
      return (unsigned int)-1073741275;
    v19 = KeGetCurrentThread();
    --v19->KernelApcDisable;
    v20 = (AutoBoost *)KeAbPreAcquire(v14 + 32, 0LL, 0LL, v18);
    v22 = v20;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 32), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v14 + 32), v20, v14 + 32);
    if ( v22 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v22, v21);
      else
        *((_BYTE *)v22 + 10) = 1;
    }
    if ( *(_QWORD *)(v14 + 96) || (*(_BYTE *)(v14 + 112) & 1) != 0 )
    {
      v23 = -1073741771;
    }
    else if ( !*(_QWORD *)(v14 + 64) || (v23 = guard_dispatch_icall_no_overrides(0LL, *(_QWORD *)(v14 + 72)), v23 >= 0) )
    {
      v24 = (PVOID)*((_QWORD *)a3 + 1);
      if ( !v24 )
        v24 = MmBadPointer;
      *(_DWORD *)(v14 + 80) = *(_DWORD *)(a3 + 1);
      *(_QWORD *)(v14 + 96) = v24;
      *(_WORD *)(v14 + 104) = a3[3];
      *(_QWORD *)(v14 + 56) = v7;
      _InterlockedExchange64((volatile __int64 *)(v14 + 88), 0LL);
      if ( *(_QWORD *)(v14 + 64) )
      {
        v25 = guard_dispatch_icall_no_overrides(1LL, *(_QWORD *)(v14 + 72));
        ExpVerifyCallbackResult(1LL, v25);
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 32), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v14 + 32));
      KeAbPostRelease(v14 + 32);
      KeLeaveCriticalRegion();
      v26 = (_QWORD *)*((_QWORD *)a3 + 2);
      if ( v26 )
        *v26 = *(_QWORD *)(v7 + 8);
      *a1 = v14;
      return v4;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 32), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v14 + 32));
    KeAbPostRelease(v14 + 32);
    KeLeaveCriticalRegion();
    ExpDereferenceHost(v14);
    return (unsigned int)v23;
  }
  return 3221225485LL;
}
