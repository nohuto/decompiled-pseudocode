/*
 * XREFs of sub_140A83AB0 @ 0x140A83AB0
 * Callers:
 *     sub_1406D1320 @ 0x1406D1320 (sub_1406D1320.c)
 *     Phase1InitializationIoReady @ 0x140CB3060 (Phase1InitializationIoReady.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     PsGetCurrentServerSilo @ 0x1402161A0 (PsGetCurrentServerSilo.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     PsIsHostSilo @ 0x140467DB0 (PsIsHostSilo.c)
 *     ClipInitHandles @ 0x1406D1060 (ClipInitHandles.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExGetExpirationDate @ 0x14083DE1C (ExGetExpirationDate.c)
 *     ntoskrnl_24 @ 0x14083E510 (ntoskrnl_24.c)
 *     sub_14083F638 @ 0x14083F638 (sub_14083F638.c)
 *     SLUpdateLicenseDataInternal @ 0x14083F9C8 (SLUpdateLicenseDataInternal.c)
 *     ntoskrnl_20 @ 0x140A83F40 (ntoskrnl_20.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     sub_140D081D0 @ 0x140D081D0 (sub_140D081D0.c)
 */

void sub_140A83AB0()
{
  struct _LIST_ENTRY *Blink; // rdi
  char Flink; // r12
  unsigned __int64 CurrentServerSilo; // rax
  struct _KLOCK_ENTRIES *v3; // r9
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *p_Blink; // rsi
  AutoBoost *v6; // rax
  void *v7; // rdx
  AutoBoost *v8; // r14
  struct _KTHREAD *v9; // rax
  struct _KLOCK_ENTRIES *v10; // r9
  AutoBoost *v11; // rax
  void *v12; // rdx
  AutoBoost *v13; // r14
  struct _KLOCK_ENTRIES *v14; // r9
  struct _KTHREAD *v15; // rax
  AutoBoost *v16; // rax
  void *v17; // rdx
  AutoBoost *v18; // r14
  int v19; // r15d
  char v20; // r14
  struct _KLOCK_ENTRIES *v21; // r9
  __int64 Flink_low; // rdx
  struct _LIST_ENTRY *v23; // rcx
  __int64 v24; // r8
  unsigned __int64 v25; // rax
  struct _KTHREAD *v26; // rax
  AutoBoost *v27; // rax
  void *v28; // rdx
  AutoBoost *v29; // rsi
  struct _KTHREAD *v30; // rax
  struct _KLOCK_ENTRIES *v31; // r9
  AutoBoost *v32; // rax
  void *v33; // rdx
  AutoBoost *v34; // rsi
  unsigned __int64 v35; // rax
  unsigned int v36; // eax
  int ExpirationDate; // eax
  LARGE_INTEGER v38; // rcx
  LARGE_INTEGER Time; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v40[5]; // [rsp+28h] [rbp-48h] BYREF
  char v41; // [rsp+50h] [rbp-20h]
  int v42; // [rsp+51h] [rbp-1Fh]
  __int16 v43; // [rsp+55h] [rbp-1Bh]
  char v44; // [rsp+57h] [rbp-19h]
  struct _LIST_ENTRY v45; // [rsp+58h] [rbp-18h] BYREF

  Time.QuadPart = 0LL;
  Blink = PsGetCurrentServerSiloGlobals()[54].Blink;
  Flink = (char)Blink[2937].Flink;
  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( PsIsHostSilo(CurrentServerSilo) )
  {
    ClipInitHandles();
    sub_140D081D0();
  }
  CurrentThread = KeGetCurrentThread();
  p_Blink = (volatile signed __int64 *)&Blink[2927].Blink;
  --CurrentThread->KernelApcDisable;
  v6 = (AutoBoost *)KeAbPreAcquire((__int64)&Blink[2927].Blink, 0LL, 0LL, v3);
  v8 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&Blink[2927].Blink, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&Blink[2927].Blink, v6, (__int64)&Blink[2927].Blink);
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v8, v7);
    else
      *((_BYTE *)v8 + 10) = 1;
  }
  v42 = 0;
  v43 = 0;
  v44 = 0;
  memset(v40, 0, 32);
  v40[4] = 10800LL;
  v41 = 1;
  if ( InitSafeBootMode || InitIsWinPEMode )
    v41 = 0;
  ntoskrnl_20(Blink, v40, 0xFFFFFFFFLL, 1LL);
  if ( (_InterlockedExchangeAdd64(p_Blink, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&Blink[2927].Blink);
  KeAbPostRelease((unsigned __int64)&Blink[2927].Blink);
  KeLeaveCriticalRegion();
  v9 = KeGetCurrentThread();
  --v9->KernelApcDisable;
  v11 = (AutoBoost *)KeAbPreAcquire((__int64)&Blink[2927].Blink, 0LL, 0LL, v10);
  v13 = v11;
  if ( _interlockedbittestandset64((volatile signed __int32 *)p_Blink, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&Blink[2927].Blink, v11, (__int64)&Blink[2927].Blink);
  if ( v13 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v13, v12);
    else
      *((_BYTE *)v13 + 10) = 1;
  }
  LODWORD(Blink->Blink) = 0;
  if ( (_InterlockedExchangeAdd64(p_Blink, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&Blink[2927].Blink);
  KeAbPostRelease((unsigned __int64)&Blink[2927].Blink);
  KeLeaveCriticalRegion();
  if ( Blink->Flink )
  {
    v15 = KeGetCurrentThread();
    --v15->KernelApcDisable;
    v16 = (AutoBoost *)KeAbPreAcquire((__int64)&Blink[2927].Blink, 0LL, 0LL, v14);
    v18 = v16;
    if ( _interlockedbittestandset64((volatile signed __int32 *)p_Blink, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&Blink[2927].Blink, v16, (__int64)&Blink[2927].Blink);
    if ( v18 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v18, v17);
      else
        *((_BYTE *)v18 + 10) = 1;
    }
    v19 = sub_14083F638((unsigned int **)Blink);
    if ( v19 == -1073741762 )
      LOBYTE(Blink[2937].Flink) = 1;
    v20 = (char)Blink[2937].Flink;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Blink[2927].Blink, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&Blink[2927].Blink);
    KeAbPostRelease((unsigned __int64)&Blink[2927].Blink);
    KeLeaveCriticalRegion();
    if ( !Flink && v20 )
      ntoskrnl_24(&KernelLicensingCacheCorrupt);
    if ( v19 >= 0 && !v20 )
    {
      Flink_low = LODWORD(Blink->Flink[5120].Flink);
      if ( ExpPlatformBinaryLock.UserWaitTime )
        guard_dispatch_icall_no_overrides((__int64)Blink, Flink_low);
      else
        SLUpdateLicenseDataInternal((__int64)Blink, Flink_low, (unsigned int *)Blink->Flink);
    }
    v23 = &v45;
    v24 = 16LL;
    do
    {
      v25 = __rdtsc();
      LOBYTE(v23->Flink) = v25;
      v23 = (struct _LIST_ENTRY *)((char *)v23 + 1);
      --v24;
    }
    while ( v24 );
    v26 = KeGetCurrentThread();
    --v26->KernelApcDisable;
    v27 = (AutoBoost *)KeAbPreAcquire((__int64)&Blink[2927].Blink, 0LL, 0LL, v21);
    v29 = v27;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&Blink[2927].Blink, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&Blink[2927].Blink, v27, (__int64)&Blink[2927].Blink);
    if ( v29 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v29, v28);
      else
        *((_BYTE *)v29 + 10) = 1;
    }
    *(struct _LIST_ENTRY *)((char *)Blink + 46993) = v45;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Blink[2927].Blink, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&Blink[2927].Blink);
    KeAbPostRelease((unsigned __int64)&Blink[2927].Blink);
    KeLeaveCriticalRegion();
    v30 = KeGetCurrentThread();
    --v30->KernelApcDisable;
    v32 = (AutoBoost *)KeAbPreAcquire((__int64)&Blink[2927].Blink, 0LL, 0LL, v31);
    v34 = v32;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&Blink[2927].Blink, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&Blink[2927].Blink, v32, (__int64)&Blink[2927].Blink);
    if ( v34 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v34, v33);
      else
        *((_BYTE *)v34 + 10) = 1;
    }
    v35 = PsGetCurrentServerSilo();
    if ( !PsIsHostSilo(v35) && Blink->Flink )
      ExFreePoolWithTag(Blink->Flink, 0x69534C53u);
    Blink->Flink = 0LL;
    if ( !Blink[2927].Flink )
    {
      v36 = (unsigned int)Blink[2926].Blink;
      if ( v36 )
      {
        memset_0(&Blink[1].Blink, 0, 16LL * v36);
        LODWORD(Blink[2926].Blink) = 0;
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Blink[2927].Blink, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&Blink[2927].Blink);
    KeAbPostRelease((unsigned __int64)&Blink[2927].Blink);
    KeLeaveCriticalRegion();
  }
  if ( !ExpSysDbgLock.ApcStateFill[4] )
  {
    ExpirationDate = ExGetExpirationDate(&Time);
    v38 = Time;
    if ( ExpirationDate < 0 )
      v38.QuadPart = 0LL;
    *(LARGE_INTEGER *)(MmWriteableSharedUserData + 712) = v38;
  }
}
