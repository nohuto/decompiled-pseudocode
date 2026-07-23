/*
 * XREFs of ExpWnfDeleteProcessContext @ 0x1409FD874
 * Callers:
 *     PspExitLastThread @ 0x1409FD314 (PspExitLastThread.c)
 *     ExWnfExitProcess @ 0x1409FD6F4 (ExWnfExitProcess.c)
 *     ExpWnfCreateProcessContext @ 0x140ABC4C4 (ExpWnfCreateProcessContext.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ExpWnfDeleteNameInstance @ 0x1409C4B7C (ExpWnfDeleteNameInstance.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1409C81A0 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfDeleteSubscription @ 0x1409FDBC0 (ExpWnfDeleteSubscription.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall ExpWnfDeleteProcessContext(unsigned __int64 *P, int a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned __int64 *v4; // rdi
  AutoBoost *v7; // rax
  void *v8; // rdx
  AutoBoost *v9; // rbx
  struct _EX_RUNDOWN_REF **v10; // r14
  struct _EX_RUNDOWN_REF *v11; // rax
  struct _EX_RUNDOWN_REF *v12; // rbp
  struct _KLOCK_ENTRIES *v13; // r9
  AutoBoost *v14; // rax
  void *v15; // rdx
  AutoBoost *v16; // rbp
  volatile signed __int64 *v17; // rdi
  struct _KLOCK_ENTRIES *v18; // r9
  AutoBoost *v19; // rax
  void *v20; // rdx
  AutoBoost *v21; // rbp
  struct _EX_RUNDOWN_REF **v22; // r14
  struct _EX_RUNDOWN_REF *v23; // rax
  struct _KLOCK_ENTRIES *v24; // r9
  AutoBoost *v25; // rax
  void *v26; // rdx
  signed __int8 v27; // cf
  AutoBoost *v28; // rdi
  unsigned __int64 **v29; // r8
  PVOID *v30; // rdx
  void *v31; // rcx
  struct _EX_RUNDOWN_REF *v32; // rbp
  struct _KLOCK_ENTRIES *v33; // r9
  struct _KLOCK_ENTRIES *v34; // r9
  AutoBoost *v35; // rax
  void *v36; // rdx
  AutoBoost *v37; // rbp

  v4 = P + 10;
  v7 = (AutoBoost *)KeAbPreAcquire((__int64)(P + 10), 0LL, 0LL, a4);
  v9 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v7, (__int64)v4);
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v9, v8);
    else
      *((_BYTE *)v9 + 10) = 1;
  }
  v10 = (struct _EX_RUNDOWN_REF **)(P + 11);
  while ( 1 )
  {
    v11 = *v10;
    if ( *v10 == (struct _EX_RUNDOWN_REF *)v10 )
      break;
    v12 = v11 - 3;
    ExAcquireRundownProtection_0(v11 - 2);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v4);
    KeAbPostRelease((unsigned __int64)v4);
    ExpWnfDeleteSubscription(v12);
    v14 = (AutoBoost *)KeAbPreAcquire((__int64)v4, 0LL, 0LL, v13);
    v16 = v14;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
      ExfAcquirePushLockExclusiveEx(v4, v14, (__int64)v4);
    if ( v16 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v16, v15);
      else
        *((_BYTE *)v16 + 10) = 1;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v4);
  KeAbPostRelease((unsigned __int64)v4);
  v17 = (volatile signed __int64 *)(P + 7);
  v19 = (AutoBoost *)KeAbPreAcquire((__int64)(P + 7), 0LL, 0LL, v18);
  v21 = v19;
  if ( _interlockedbittestandset64((volatile signed __int32 *)P + 14, 0LL) )
    ExfAcquirePushLockExclusiveEx(P + 7, v19, (__int64)(P + 7));
  if ( v21 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v21, v20);
    else
      *((_BYTE *)v21 + 10) = 1;
  }
  v22 = (struct _EX_RUNDOWN_REF **)(P + 8);
  while ( 1 )
  {
    v23 = *v22;
    if ( *v22 == (struct _EX_RUNDOWN_REF *)v22 )
      break;
    v32 = v23 - 17;
    ExAcquireRundownProtection_0(v23 - 16);
    if ( (_InterlockedExchangeAdd64(v17, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)P + 7);
    KeAbPostRelease((unsigned __int64)(P + 7));
    ExpWnfNotifyNameSubscribers((__int64)v32, 16, 0, 0LL);
    ExpWnfDeleteNameInstance(v32[6].Count, v32, 1, v33);
    v35 = (AutoBoost *)KeAbPreAcquire((__int64)(P + 7), 0LL, 0LL, v34);
    v37 = v35;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v17, 0LL) )
      ExfAcquirePushLockExclusiveEx(P + 7, v35, (__int64)(P + 7));
    if ( v37 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v37, v36);
      else
        *((_BYTE *)v37 + 10) = 1;
    }
  }
  if ( (_InterlockedExchangeAdd64(v17, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)P + 7);
  KeAbPostRelease((unsigned __int64)(P + 7));
  if ( a2 )
  {
    v25 = (AutoBoost *)KeAbPreAcquire((__int64)&PspSiloMonitorLock.SuspendEvent, 0LL, 0LL, v24);
    v27 = _interlockedbittestandset64(&PspSiloMonitorLock.SuspendEvent.Header.Lock, 0LL);
    v28 = v25;
    if ( v27 )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)&PspSiloMonitorLock.SuspendEvent,
        v25,
        (__int64)&PspSiloMonitorLock.SuspendEvent);
    if ( v28 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v28, v26);
      else
        *((_BYTE *)v28 + 10) = 1;
    }
    v29 = (unsigned __int64 **)P[2];
    if ( v29[1] != P + 2 || (v30 = (PVOID *)P[3], *v30 != P + 2) )
      __fastfail(3u);
    *v30 = v29;
    v29[1] = (unsigned __int64 *)v30;
    if ( (_InterlockedExchangeAdd64(
            (volatile signed __int64 *)&PspSiloMonitorLock.SuspendEvent.Header.Lock,
            0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PspSiloMonitorLock.SuspendEvent.Header.Lock);
    KeAbPostRelease((unsigned __int64)&PspSiloMonitorLock.SuspendEvent);
    v31 = (void *)P[16];
    if ( v31 )
      ObfDereferenceObject(v31);
    ExFreePoolWithTag(P, 0x20666E57u);
  }
}
