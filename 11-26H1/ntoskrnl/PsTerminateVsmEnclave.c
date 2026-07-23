/*
 * XREFs of PsTerminateVsmEnclave @ 0x1408047F8
 * Callers:
 *     PsDispatchIumService @ 0x140518438 (PsDispatchIumService.c)
 *     MiTerminateEnclave @ 0x14087D03C (MiTerminateEnclave.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

NTSTATUS __fastcall PsTerminateVsmEnclave(__int64 a1, int a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  signed __int64 *v4; // r14
  struct _KTHREAD *CurrentThread; // rax
  void *v8; // rdx
  LegacyAutoBoost *v9; // rbp
  struct _KLOCK_ENTRIES *v10; // r9
  int v11; // eax
  AutoBoost *v12; // rax
  void *v13; // rdx
  AutoBoost *v14; // r15
  _QWORD *v15; // r15
  _QWORD *v16; // rcx
  __int64 v17; // rdx
  _QWORD *v18; // rax
  NTSTATUS result; // eax
  __int64 v20; // [rsp+30h] [rbp-B8h] BYREF
  _BYTE v21[8]; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v22; // [rsp+48h] [rbp-A0h]

  v4 = (signed __int64 *)(a1 + 48);
  v20 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = (LegacyAutoBoost *)KeAbPreAcquire(a1 + 48, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64(v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4, 0, v9, (struct _KTHREAD *)v4);
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v9, v8);
    else
      *((_BYTE *)v9 + 10) = 1;
  }
  v11 = *(_DWORD *)(a1 + 44);
  if ( v11 )
  {
    if ( (a2 & 4) == 0 && v11 == 1 )
    {
      *(_DWORD *)(a1 + 40) = 0;
      *(_DWORD *)(a1 + 44) = 2;
      v12 = (AutoBoost *)KeAbPreAcquire(a1 + 112, 0LL, 0LL, v10);
      v14 = v12;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 112), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 112), v12, a1 + 112);
      if ( v14 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v14, v13);
        else
          *((_BYTE *)v14 + 10) = 1;
      }
      *(_DWORD *)(a1 + 72) = 0;
      v15 = (_QWORD *)(a1 + 56);
      while ( 1 )
      {
        v16 = (_QWORD *)*v15;
        if ( (_QWORD *)*v15 == v15 )
          break;
        v17 = *v16;
        if ( *(_QWORD **)(*v16 + 8LL) != v16 || (v18 = (_QWORD *)v16[1], (_QWORD *)*v18 != v16) )
          __fastfail(3u);
        *v18 = v17;
        *(_QWORD *)(v17 + 8) = v18;
        *v16 = 0LL;
        *((_DWORD *)v16 + 10) = -1073740526;
        KeSetEvent((PRKEVENT)(v16 + 2), 0, 0);
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 112), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 112));
      KeAbPostRelease(a1 + 112);
      if ( a2 >= 0 )
      {
        memset_0(v21, 0, 0x68uLL);
        v22 = *(_QWORD *)(a1 + 24);
        VslpEnterIumSecureMode(2u, 0x33u, 0, (__int64)v21);
      }
    }
  }
  else
  {
    *(_DWORD *)(a1 + 44) = 2;
    KeSetEvent((PRKEVENT)(a1 + 80), 0, 0);
  }
  if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v4);
  KeAbPostRelease((unsigned __int64)v4);
  KeLeaveCriticalRegion();
  if ( a2 < 0 )
    return 0;
  result = KeWaitForSingleObject(
             (PVOID)(a1 + 80),
             Executive,
             KeGetCurrentThread()->PreviousMode,
             0,
             (PLARGE_INTEGER)((unsigned __int64)&v20 & -(__int64)((a2 & 5) != 0)));
  if ( result == 258 )
    return (a2 & 4) != 0 ? -1073740527 : 259;
  return result;
}
