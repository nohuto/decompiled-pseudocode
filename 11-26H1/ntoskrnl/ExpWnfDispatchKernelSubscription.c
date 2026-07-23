/*
 * XREFs of ExpWnfDispatchKernelSubscription @ 0x1409C7D10
 * Callers:
 *     ExpWnfStartKernelDispatcher @ 0x1409C2020 (ExpWnfStartKernelDispatcher.c)
 *     ExpWnfWorkItemRoutine @ 0x1409C7C90 (ExpWnfWorkItemRoutine.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1409C81A0 (ExpWnfNotifyNameSubscribers.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfAcquireRundownProtection @ 0x1402D2650 (ExfAcquireRundownProtection.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1409C81A0 (ExpWnfNotifyNameSubscribers.c)
 */

void __fastcall ExpWnfDispatchKernelSubscription(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // r13
  volatile signed __int64 *v5; // rsi
  AutoBoost *v6; // rax
  void *v7; // rdx
  AutoBoost *v8; // rbx
  _QWORD **v9; // r14
  _QWORD *v10; // rdi
  ULONG_PTR v11; // rbp
  unsigned __int64 v12; // rtt
  __int64 v13; // rcx
  _QWORD *v14; // rax
  signed __int64 *v15; // r13
  int v16; // r12d
  struct _KLOCK_ENTRIES *v17; // r9
  void *v18; // rdx
  LegacyAutoBoost *v19; // rdi
  __int64 v20; // rdi
  unsigned __int64 v21; // rtt
  unsigned int v22; // eax
  signed __int64 v23; // rax
  struct _KLOCK_ENTRIES *v24; // r9
  struct _KTHREAD *BugCheckParameter4; // rdx
  AutoBoost *v26; // rax
  void *v27; // rdx
  AutoBoost *v28; // rdi
  struct _KLOCK_ENTRIES *v29; // r9
  AutoBoost *v30; // rax
  void *v31; // rdx
  AutoBoost *v32; // rdi
  __int64 Src; // [rsp+40h] [rbp-48h] BYREF
  __int64 v34; // [rsp+48h] [rbp-40h]
  __int64 v35; // [rsp+50h] [rbp-38h] BYREF

  v35 = 0LL;
  v4 = *(_QWORD *)&PsInitialSystemProcess[3].BasePriority;
  v34 = v4;
  v5 = (volatile signed __int64 *)(v4 + 104);
  v6 = (AutoBoost *)KeAbPreAcquire(v4 + 104, 0LL, 0LL, a4);
  v8 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 104), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v4 + 104), v6, v4 + 104);
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v8, v7);
    else
      *((_BYTE *)v8 + 10) = 1;
  }
  v9 = (_QWORD **)(v4 + 112);
LABEL_7:
  v10 = *v9;
  if ( *v9 != v9 )
  {
    v11 = (ULONG_PTR)(v10 - 13);
    _m_prefetchw(v10 - 12);
    v12 = *(v10 - 12) & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v12 != _InterlockedCompareExchange64(v10 - 12, v12 + 2, v12) )
      ExfAcquireRundownProtection((PEX_RUNDOWN_REF)(v11 + 8));
    *(_DWORD *)(v11 + 120) = 2;
    v13 = *v10;
    if ( *(_QWORD **)(*v10 + 8LL) != v10 || (v14 = (_QWORD *)v10[1], (_QWORD *)*v14 != v10) )
      __fastfail(3u);
    v15 = (signed __int64 *)(v4 + 80);
    *v14 = v13;
    *(_QWORD *)(v13 + 8) = v14;
    while ( 1 )
    {
      v16 = *(_DWORD *)(v11 + 124);
      *(_DWORD *)(v11 + 124) = 0;
      if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v5);
      KeAbPostRelease((unsigned __int64)v5);
      v19 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)v15, 0LL, 0LL, v17);
      if ( _InterlockedCompareExchange64(v15, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(v15, 0, v19, (struct _KTHREAD *)v15);
      if ( v19 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v19, v18);
        else
          *((_BYTE *)v19 + 10) = 1;
      }
      v20 = *(_QWORD *)(v11 + 48);
      if ( v20 )
      {
        _m_prefetchw((const void *)(v20 + 8));
        v21 = *(_QWORD *)(v20 + 8) & 0xFFFFFFFFFFFFFFFEuLL;
        if ( v21 == _InterlockedCompareExchange64((volatile signed __int64 *)(v20 + 8), v21 + 2, v21)
          || ExfAcquireRundownProtection((PEX_RUNDOWN_REF)(v20 + 8)) )
        {
          goto LABEL_25;
        }
        v20 = 0LL;
      }
      v16 &= ~1u;
LABEL_25:
      if ( (v16 & 1) != 0 )
      {
        v22 = *(_DWORD *)(v20 + 96);
        if ( v22 <= *(_DWORD *)(v11 + 96) )
          v16 &= ~1u;
        else
          *(_DWORD *)(v11 + 96) = v22;
      }
      v23 = _InterlockedCompareExchange64(v15, 0LL, 17LL);
      if ( v16 )
      {
        if ( v23 != 17 )
          ExfReleasePushLockShared(v15);
        KeAbPostRelease((unsigned __int64)v15);
        Src = *(_QWORD *)(v11 + 56) ^ 0x41C64E6DA3BC0074LL;
        RtlCopyVolatileMemory(&v35, &Src, 8uLL);
        guard_dispatch_icall_no_overrides(v11, (__int64)&v35);
        BugCheckParameter4 = KeGetCurrentThread();
        if ( KeGetCurrentIrql() )
          KeBugCheckEx(0xE1u, *(_QWORD *)(v11 + 80), KeGetCurrentIrql(), *(_QWORD *)(v11 + 88), v11);
        if ( KeGetCurrentThread()->ApcStateIndex == 1 )
          KeBugCheckEx(
            5u,
            (ULONG_PTR)BugCheckParameter4->Process,
            (ULONG_PTR)BugCheckParameter4->ApcState.Process,
            BugCheckParameter4->ApcStateIndex,
            (ULONG_PTR)BugCheckParameter4);
        if ( (v16 & 1) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v20 + 164), 0xFFFFFFFF) == 1 )
          ExpWnfNotifyNameSubscribers(v20, 8LL, 0LL, 0LL);
        if ( v20 )
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v20 + 8));
        v26 = (AutoBoost *)KeAbPreAcquire((__int64)v5, 0LL, 0LL, v24);
        v28 = v26;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v5, v26, (__int64)v5);
        if ( v28 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v28, v27);
          else
            *((_BYTE *)v28 + 10) = 1;
        }
        if ( !*(_DWORD *)(v11 + 124) )
          goto LABEL_44;
      }
      else
      {
        if ( v23 != 17 )
          ExfReleasePushLockShared(v15);
        KeAbPostRelease((unsigned __int64)v15);
        if ( v20 )
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v20 + 8));
        v30 = (AutoBoost *)KeAbPreAcquire((__int64)v5, 0LL, 0LL, v29);
        v32 = v30;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v5, v30, (__int64)v5);
        if ( v32 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v32, v31);
          else
            *((_BYTE *)v32 + 10) = 1;
        }
        if ( !*(_DWORD *)(v11 + 124) )
        {
LABEL_44:
          *(_DWORD *)(v11 + 120) = 0;
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v11 + 8));
          v4 = v34;
          goto LABEL_7;
        }
      }
    }
  }
  if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v5);
  KeAbPostRelease((unsigned __int64)v5);
}
