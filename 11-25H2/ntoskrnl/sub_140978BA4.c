/*
 * XREFs of sub_140978BA4 @ 0x140978BA4
 * Callers:
 *     sub_140649A2C @ 0x140649A2C (sub_140649A2C.c)
 *     Phase1InitializationIoReady @ 0x140C4E7F4 (Phase1InitializationIoReady.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     PsGetCurrentServerSilo @ 0x1403D73D0 (PsGetCurrentServerSilo.c)
 *     PsIsHostSilo @ 0x14043DF70 (PsIsHostSilo.c)
 *     ClipInitHandles @ 0x140649760 (ClipInitHandles.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExGetExpirationDate @ 0x1407A8A18 (ExGetExpirationDate.c)
 *     ntoskrnl_24 @ 0x1407A90D0 (ntoskrnl_24.c)
 *     sub_1407AA1F8 @ 0x1407AA1F8 (sub_1407AA1F8.c)
 *     SLUpdateLicenseDataInternal @ 0x1407AAD54 (SLUpdateLicenseDataInternal.c)
 *     ntoskrnl_20 @ 0x140978FD0 (ntoskrnl_20.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     sub_140C4B44C @ 0x140C4B44C (sub_140C4B44C.c)
 */

void sub_140978BA4()
{
  struct _LIST_ENTRY *Blink; // rdi
  char Flink; // r12
  unsigned __int64 CurrentServerSilo; // rax
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *p_Blink; // rsi
  __int64 *v5; // rax
  __int64 *v6; // r14
  struct _KTHREAD *v7; // rax
  __int64 *v8; // rax
  __int64 *v9; // r14
  struct _KTHREAD *v10; // rax
  __int64 *v11; // rax
  __int64 *v12; // r14
  int v13; // r15d
  char v14; // r14
  struct _LIST_ENTRY *v15; // rcx
  __int64 v16; // r8
  unsigned __int64 v17; // rax
  struct _KTHREAD *v18; // rax
  __int64 *v19; // rax
  __int64 *v20; // r14
  struct _KTHREAD *v21; // rax
  __int64 *v22; // rax
  __int64 *v23; // rsi
  unsigned __int64 v24; // rax
  unsigned int v25; // eax
  int ExpirationDate; // eax
  LARGE_INTEGER v27; // rcx
  LARGE_INTEGER Time; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v29[5]; // [rsp+28h] [rbp-48h] BYREF
  char v30; // [rsp+50h] [rbp-20h]
  int v31; // [rsp+51h] [rbp-1Fh]
  __int16 v32; // [rsp+55h] [rbp-1Bh]
  char v33; // [rsp+57h] [rbp-19h]
  struct _LIST_ENTRY v34; // [rsp+58h] [rbp-18h] BYREF

  Time.QuadPart = 0LL;
  Blink = PsGetCurrentServerSiloGlobals()[54].Blink;
  Flink = (char)Blink[2937].Flink;
  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( PsIsHostSilo(CurrentServerSilo) )
  {
    ClipInitHandles();
    sub_140C4B44C();
  }
  CurrentThread = KeGetCurrentThread();
  p_Blink = (volatile signed __int64 *)&Blink[2927].Blink;
  --CurrentThread->KernelApcDisable;
  v5 = KeAbPreAcquire((__int64)&Blink[2927].Blink, 0LL);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&Blink[2927].Blink, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&Blink[2927].Blink, v5, (__int64)&Blink[2927].Blink);
  if ( v6 )
    *((_BYTE *)v6 + 10) = 1;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  memset(v29, 0, 32);
  v29[4] = 10800LL;
  v30 = 1;
  if ( InitSafeBootMode || InitIsWinPEMode )
    v30 = 0;
  ntoskrnl_20(Blink, v29, 0xFFFFFFFFLL, 1LL);
  if ( (_InterlockedExchangeAdd64(p_Blink, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&Blink[2927].Blink);
  KeAbPostRelease((ULONG_PTR)&Blink[2927].Blink);
  KeLeaveCriticalRegion();
  v7 = KeGetCurrentThread();
  --v7->KernelApcDisable;
  v8 = KeAbPreAcquire((__int64)&Blink[2927].Blink, 0LL);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)p_Blink, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&Blink[2927].Blink, v8, (__int64)&Blink[2927].Blink);
  if ( v9 )
    *((_BYTE *)v9 + 10) = 1;
  LODWORD(Blink->Blink) = 0;
  if ( (_InterlockedExchangeAdd64(p_Blink, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&Blink[2927].Blink);
  KeAbPostRelease((ULONG_PTR)&Blink[2927].Blink);
  KeLeaveCriticalRegion();
  if ( Blink->Flink )
  {
    v10 = KeGetCurrentThread();
    --v10->KernelApcDisable;
    v11 = KeAbPreAcquire((__int64)&Blink[2927].Blink, 0LL);
    v12 = v11;
    if ( _interlockedbittestandset64((volatile signed __int32 *)p_Blink, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&Blink[2927].Blink, v11, (__int64)&Blink[2927].Blink);
    if ( v12 )
      *((_BYTE *)v12 + 10) = 1;
    v13 = sub_1407AA1F8((unsigned int **)Blink);
    if ( v13 == -1073741762 )
      LOBYTE(Blink[2937].Flink) = 1;
    v14 = (char)Blink[2937].Flink;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Blink[2927].Blink, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&Blink[2927].Blink);
    KeAbPostRelease((ULONG_PTR)&Blink[2927].Blink);
    KeLeaveCriticalRegion();
    if ( !Flink && v14 )
      ntoskrnl_24(&KernelLicensingCacheCorrupt);
    if ( v13 >= 0 && !v14 )
    {
      if ( qword_140FD74A0 )
        guard_dispatch_icall_no_overrides(Blink);
      else
        SLUpdateLicenseDataInternal((__int64)Blink, (int)Blink->Flink[5120].Flink, (unsigned int *)Blink->Flink);
    }
    v15 = &v34;
    v16 = 16LL;
    do
    {
      v17 = __rdtsc();
      LOBYTE(v15->Flink) = v17;
      v15 = (struct _LIST_ENTRY *)((char *)v15 + 1);
      --v16;
    }
    while ( v16 );
    v18 = KeGetCurrentThread();
    --v18->KernelApcDisable;
    v19 = KeAbPreAcquire((__int64)&Blink[2927].Blink, 0LL);
    v20 = v19;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&Blink[2927].Blink, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&Blink[2927].Blink, v19, (__int64)&Blink[2927].Blink);
    if ( v20 )
      *((_BYTE *)v20 + 10) = 1;
    *(struct _LIST_ENTRY *)((char *)Blink + 46993) = v34;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Blink[2927].Blink, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&Blink[2927].Blink);
    KeAbPostRelease((ULONG_PTR)&Blink[2927].Blink);
    KeLeaveCriticalRegion();
    v21 = KeGetCurrentThread();
    --v21->KernelApcDisable;
    v22 = KeAbPreAcquire((__int64)&Blink[2927].Blink, 0LL);
    v23 = v22;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&Blink[2927].Blink, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&Blink[2927].Blink, v22, (__int64)&Blink[2927].Blink);
    if ( v23 )
      *((_BYTE *)v23 + 10) = 1;
    v24 = PsGetCurrentServerSilo();
    if ( !PsIsHostSilo(v24) && Blink->Flink )
      ExFreePoolWithTag(Blink->Flink, 0x69534C53u);
    Blink->Flink = 0LL;
    if ( !Blink[2927].Flink )
    {
      v25 = (unsigned int)Blink[2926].Blink;
      if ( v25 )
      {
        memset_0(&Blink[1].Blink, 0, 16LL * v25);
        LODWORD(Blink[2926].Blink) = 0;
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Blink[2927].Blink, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&Blink[2927].Blink);
    KeAbPostRelease((ULONG_PTR)&Blink[2927].Blink);
    KeLeaveCriticalRegion();
  }
  if ( !ExpSystemSetupInProgress )
  {
    ExpirationDate = ExGetExpirationDate(&Time);
    v27 = Time;
    if ( ExpirationDate < 0 )
      v27.QuadPart = 0LL;
    *(LARGE_INTEGER *)(MmWriteableSharedUserData + 712) = v27;
  }
}
