/*
 * XREFs of ExpWnfSubscribeNameInstance @ 0x1409C8720
 * Callers:
 *     ExpWnfSubscribeWnfStateChange @ 0x1409C46A4 (ExpWnfSubscribeWnfStateChange.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1409C81A0 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfUpdateSubscription @ 0x1409C8C80 (ExpWnfUpdateSubscription.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpWnfSubscribeNameInstance(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        struct _KLOCK_ENTRIES *a4,
        int a5,
        int a6,
        char a7,
        struct _EX_RUNDOWN_REF **a8,
        struct _EX_RUNDOWN_REF **a9,
        struct _EX_RUNDOWN_REF **a10,
        int *a11)
{
  unsigned int v11; // edi
  __int64 v12; // rsi
  struct _KLOCK_ENTRIES *v13; // r14
  int v16; // r12d
  signed __int64 *v17; // rsi
  void *v18; // rdx
  LegacyAutoBoost *v19; // r14
  int updated; // r14d
  struct _EX_RUNDOWN_REF *Pool2; // rax
  struct _EX_RUNDOWN_REF *v22; // r15
  struct _KLOCK_ENTRIES *v23; // r9
  signed __int64 v24; // r15
  unsigned __int64 *v25; // r14
  AutoBoost *v26; // rax
  void *v27; // rdx
  struct _KLOCK_ENTRIES *v28; // r9
  AutoBoost *v29; // rsi
  volatile signed __int64 *v30; // rsi
  AutoBoost *v31; // rax
  signed __int8 v32; // cf
  AutoBoost *v33; // rcx
  char v34; // dl
  struct _EX_RUNDOWN_REF *v35; // rcx
  unsigned __int64 v36; // rax
  struct _EX_RUNDOWN_REF **v37; // rdx
  int v39; // esi
  struct _EX_RUNDOWN_REF **v40; // rdx
  struct _EX_RUNDOWN_REF *v41; // rax
  int v42; // [rsp+50h] [rbp-30h] BYREF
  int v43; // [rsp+54h] [rbp-2Ch] BYREF
  struct _EX_RUNDOWN_REF *v44; // [rsp+58h] [rbp-28h] BYREF
  __int64 v45; // [rsp+60h] [rbp-20h]
  struct _EX_RUNDOWN_REF *v46; // [rsp+68h] [rbp-18h]
  PVOID P; // [rsp+70h] [rbp-10h]

  v11 = 0;
  v12 = *(_QWORD *)(a2 + 1512);
  v13 = a4;
  v44 = 0LL;
  v45 = v12;
  *a11 = 0;
  v42 = 0;
  v16 = 0;
  v43 = 0;
  if ( a7 == 1 )
  {
    v17 = (signed __int64 *)(v12 + 80);
    v19 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)v17, 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64(v17, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v17, 0, v19, (struct _KTHREAD *)v17);
    if ( v19 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v19, v18);
      else
        *((_BYTE *)v19 + 10) = 1;
    }
    updated = ExpWnfUpdateSubscription(
                a1,
                v45,
                a3,
                (_DWORD)a4,
                a6,
                (__int64)&v44,
                (__int64)&v42,
                (__int64)&v43,
                (__int64)a8);
    if ( _InterlockedCompareExchange64(v17, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v17);
    KeAbPostRelease((unsigned __int64)v17);
    v16 = v42;
    if ( updated >= 0 )
    {
      *a10 = v44;
      goto LABEL_36;
    }
    v12 = v45;
    v13 = a4;
  }
  Pool2 = (struct _EX_RUNDOWN_REF *)ExAllocatePool2((PsInitialSystemProcess != (PEPROCESS)a2) + 256LL);
  P = Pool2;
  v22 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  memset_0(Pool2, 0, 0x88uLL);
  LODWORD(v22->Count) = 8915205;
  v22[10].Count = a3;
  LODWORD(v22[12].Count) = a5;
  HIDWORD(v22[12].Ptr) = a6;
  v22[11].Count = (unsigned __int64)v13;
  v22[1].Count = 0LL;
  v22[7].Count = *(unsigned __int64 *)(a1 + 40);
  if ( a7 )
  {
    do
    {
      v24 = _InterlockedExchangeAdd64(
              (volatile signed __int64 *)KiSystemServiceTraceCallbackLock.PriorityFloorCounts,
              1uLL);
      v46 = (struct _EX_RUNDOWN_REF *)(v24 + 1);
    }
    while ( v24 == -1 );
    v22 = (struct _EX_RUNDOWN_REF *)P;
    if ( a8 )
      *a8 = v46;
  }
  else
  {
    v46 = v22;
    if ( a9 )
      *a9 = v22;
  }
  v25 = (unsigned __int64 *)(v12 + 80);
  v26 = (AutoBoost *)KeAbPreAcquire(v12 + 80, 0LL, 0LL, v23);
  v29 = v26;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v25, 0LL) )
    ExfAcquirePushLockExclusiveEx(v25, v26, (__int64)v25);
  if ( v29 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v29, v27);
    else
      *((_BYTE *)v29 + 10) = 1;
  }
  v30 = (volatile signed __int64 *)(a1 + 112);
  v31 = (AutoBoost *)KeAbPreAcquire(a1 + 112, 0LL, 0LL, v28);
  v32 = _interlockedbittestandset64((volatile signed __int32 *)(a1 + 112), 0LL);
  v33 = v31;
  P = v31;
  if ( v32 )
  {
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 112), v31, a1 + 112);
    v33 = (AutoBoost *)P;
  }
  v34 = 1;
  if ( v33 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v33, (void *)1);
    else
      *((_BYTE *)v33 + 10) = 1;
  }
  if ( *(_QWORD *)(a1 + 48) )
  {
    if ( a7 == v34 )
    {
      if ( (int)ExpWnfUpdateSubscription(
                  a1,
                  v45,
                  a3,
                  (_DWORD)a4,
                  a6,
                  (__int64)&v44,
                  (__int64)&v42,
                  (__int64)&v43,
                  (__int64)a8) >= 0 )
      {
        if ( (_InterlockedExchangeAdd64(v30, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 112));
        KeAbPostRelease(a1 + 112);
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v25, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)v25);
        KeAbPostRelease((unsigned __int64)v25);
        ExFreePoolWithTag(v22, 0x20666E57u);
        v16 = v42;
        *a10 = v44;
        goto LABEL_36;
      }
      v16 = v42;
    }
    v22[5].Count = a2;
    v22[2].Count = (unsigned __int64)v46;
    v22[6].Count = a1;
    ExAcquireRundownProtection_0(v22 + 1);
    if ( a9 )
      ExAcquireRundownProtection_0(v22 + 1);
    v35 = v22 + 3;
    v36 = v45 + 88;
    v37 = *(struct _EX_RUNDOWN_REF ***)(v45 + 96);
    if ( *v37 != (struct _EX_RUNDOWN_REF *)(v45 + 88)
      || (v35->Count = v36,
          v22[4].Count = (unsigned __int64)v37,
          *v37 = v35,
          *(_QWORD *)(v36 + 8) = v35,
          v40 = *(struct _EX_RUNDOWN_REF ***)(a1 + 128),
          v41 = v22 + 8,
          *v40 != (struct _EX_RUNDOWN_REF *)(a1 + 120)) )
    {
      __fastfail(3u);
    }
    v41->Count = a1 + 120;
    v22[9].Count = (unsigned __int64)v40;
    *v40 = v41;
    *(_QWORD *)(a1 + 128) = v41;
    if ( (BYTE4(v22[12].Ptr) & 1) != 0 && _InterlockedIncrement((volatile signed __int32 *)(a1 + 160)) == 1 )
      v16 = 1;
    if ( (_InterlockedExchangeAdd64(v30, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 112));
    KeAbPostRelease(a1 + 112);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v25, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v25);
    KeAbPostRelease((unsigned __int64)v25);
    *a10 = v22;
LABEL_36:
    v39 = 0;
    if ( v43 < 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 164), 0xFFFFFFFF) == 1 )
      v39 = 8;
    if ( v16 > 0 )
    {
      v39 |= 2u;
    }
    else if ( v16 < 0 )
    {
      v39 |= 4u;
    }
    if ( v39 )
    {
      LOBYTE(v11) = a7 != 0;
      ExpWnfNotifyNameSubscribers(a1, v39, 1, (struct _KLOCK_ENTRIES *)v11);
      *a11 = v39;
    }
    return 0LL;
  }
  if ( (_InterlockedExchangeAdd64(v30, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 112));
  KeAbPostRelease(a1 + 112);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v25, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v25);
  KeAbPostRelease((unsigned __int64)v25);
  ExFreePoolWithTag(v22, 0x20666E57u);
  return 3221225524LL;
}
