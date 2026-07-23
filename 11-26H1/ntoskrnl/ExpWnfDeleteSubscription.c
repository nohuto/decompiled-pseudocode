/*
 * XREFs of ExpWnfDeleteSubscription @ 0x1409FDBC0
 * Callers:
 *     NtUnsubscribeWnfStateChange @ 0x1409C41C0 (NtUnsubscribeWnfStateChange.c)
 *     ExUnsubscribeWnfStateChange @ 0x1409FD2E0 (ExUnsubscribeWnfStateChange.c)
 *     ExpWnfDeleteProcessContext @ 0x1409FD874 (ExpWnfDeleteProcessContext.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x14045CD60 (ExWaitForRundownProtectionRelease.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1409C81A0 (ExpWnfNotifyNameSubscribers.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall ExpWnfDeleteSubscription(
        struct _EX_RUNDOWN_REF *P,
        PEPROCESS a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // r13
  int v6; // edi
  AutoBoost *v7; // rax
  void *v8; // rdx
  AutoBoost *v9; // rbx
  __int64 Count; // rbp
  int v11; // r12d
  AutoBoost *v12; // rax
  void *v13; // rdx
  AutoBoost *v14; // r14
  struct _EX_RUNDOWN_REF **v15; // rdx
  PVOID *v16; // rcx
  int v17; // eax
  struct _EX_RUNDOWN_REF **v18; // rdx
  PVOID *v19; // rcx
  AutoBoost *v20; // rax
  void *v21; // rdx
  AutoBoost *v22; // r15
  int v23; // ecx
  int v24; // r15d
  struct _EX_RUNDOWN_REF **v25; // rdx
  PVOID *v26; // rcx
  BOOL v28; // [rsp+70h] [rbp+18h]

  v4 = *(_QWORD *)&a2[3].BasePriority;
  v6 = 1;
  if ( v4 )
  {
    v7 = (AutoBoost *)KeAbPreAcquire(v4 + 80, 0LL, 0LL, a4);
    v9 = v7;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 80), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v4 + 80), v7, v4 + 80);
    if ( v9 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v9, v8);
      else
        *((_BYTE *)v9 + 10) = 1;
    }
  }
  if ( !P[5].Count )
  {
    v6 = 0;
    goto LABEL_45;
  }
  Count = P[6].Count;
  v11 = 0;
  v28 = 0;
  if ( Count )
  {
    v12 = (AutoBoost *)KeAbPreAcquire(Count + 112, 0LL, 0LL, a4);
    v14 = v12;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(Count + 112), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(Count + 112), v12, Count + 112);
    if ( v14 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v14, v13);
      else
        *((_BYTE *)v14 + 10) = 1;
    }
    v15 = (struct _EX_RUNDOWN_REF **)P[8].Count;
    if ( v15[1] != &P[8] )
      goto LABEL_52;
    v16 = (PVOID *)P[9].Count;
    if ( *v16 != &P[8] )
      goto LABEL_52;
    *v16 = v15;
    v15[1] = (struct _EX_RUNDOWN_REF *)v16;
    v17 = HIDWORD(P[12].Ptr) & 1;
    P[6].Count = 0LL;
    if ( (_BYTE)v17 )
      LOBYTE(v11) = _InterlockedExchangeAdd((volatile signed __int32 *)(Count + 160), 0xFFFFFFFF) == 1;
  }
  v18 = (struct _EX_RUNDOWN_REF **)P[3].Count;
  if ( v18[1] != &P[3] )
    goto LABEL_52;
  v19 = (PVOID *)P[4].Count;
  if ( *v19 != &P[3] )
    goto LABEL_52;
  *v19 = v18;
  v18[1] = (struct _EX_RUNDOWN_REF *)v19;
  v20 = (AutoBoost *)KeAbPreAcquire(v4 + 104, 0LL, 0LL, a4);
  v22 = v20;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 104), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v4 + 104), v20, v4 + 104);
  if ( v22 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v22, v21);
    else
      *((_BYTE *)v22 + 10) = 1;
  }
  v23 = P[15].Count;
  if ( v23 != 1 && ((PEPROCESS)P[5].Count == PsInitialSystemProcess || !v23) )
    goto LABEL_28;
  v25 = (struct _EX_RUNDOWN_REF **)P[13].Count;
  if ( v25[1] != &P[13] || (v26 = (PVOID *)P[14].Count, *v26 != &P[13]) )
LABEL_52:
    __fastfail(3u);
  *v26 = v25;
  v25[1] = (struct _EX_RUNDOWN_REF *)v26;
  if ( Count && (BYTE4(P[12].Ptr) & 1) != 0 && ((BYTE4(P[15].Ptr) & 1) != 0 || (P[16].Count & 1) != 0) )
    v28 = _InterlockedExchangeAdd((volatile signed __int32 *)(Count + 164), 0xFFFFFFFF) == 1;
LABEL_28:
  P[5].Count = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 104), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v4 + 104));
  KeAbPostRelease(v4 + 104);
  if ( Count )
  {
    v24 = 0;
    if ( v11 || v28 )
    {
      if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(Count + 8)) )
      {
        v24 = 1;
      }
      else
      {
        v11 = 0;
        v28 = 0;
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(Count + 112), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(Count + 112));
    KeAbPostRelease(Count + 112);
    if ( v4 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v4 + 80));
      KeAbPostRelease(v4 + 80);
      v4 = 0LL;
    }
    if ( v28 )
      ExpWnfNotifyNameSubscribers(Count, 8, 1, (struct _KLOCK_ENTRIES *)(a2 != PsInitialSystemProcess));
    if ( v11 )
      ExpWnfNotifyNameSubscribers(Count, 4, 1, (struct _KLOCK_ENTRIES *)(a2 != PsInitialSystemProcess));
    if ( v24 )
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(Count + 8));
  }
LABEL_45:
  if ( v4 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v4 + 80));
    KeAbPostRelease(v4 + 80);
  }
  ExReleaseRundownProtection_0(P + 1);
  if ( v6 )
  {
    ExWaitForRundownProtectionRelease(P + 1);
    ExFreePoolWithTag(P, 0x20666E57u);
  }
}
