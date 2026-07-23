/*
 * XREFs of ExpWnfResolveScopeInstance @ 0x1409C6D00
 * Callers:
 *     ExpNtDeleteWnfStateData @ 0x1408454E8 (ExpNtDeleteWnfStateData.c)
 *     NtQueryWnfStateNameInformation @ 0x1409C3B60 (NtQueryWnfStateNameInformation.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x1409C46A4 (ExpWnfSubscribeWnfStateChange.c)
 *     NtDeleteWnfStateName @ 0x1409C4FD0 (NtDeleteWnfStateName.c)
 *     NtQueryWnfStateData @ 0x1409C5400 (NtQueryWnfStateData.c)
 *     ExpNtUpdateWnfStateData @ 0x1409C6210 (ExpNtUpdateWnfStateData.c)
 *     NtCreateWnfStateName @ 0x1409CAAE0 (NtCreateWnfStateName.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     PsGetServerSiloGlobals @ 0x140216EA0 (PsGetServerSiloGlobals.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     ExfAcquireRundownProtection @ 0x1402D2650 (ExfAcquireRundownProtection.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     RtlLengthSid @ 0x140480CA0 (RtlLengthSid.c)
 *     HalSystemVectorDispatchEntry @ 0x1404B6E40 (HalSystemVectorDispatchEntry.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 *     ExpWnfFreeScopeInstance @ 0x1409C3FD4 (ExpWnfFreeScopeInstance.c)
 *     ExpWnfAllocateScopeMap @ 0x1409C7268 (ExpWnfAllocateScopeMap.c)
 *     ExpWnfAllocateScopeInstance @ 0x1409C850C (ExpWnfAllocateScopeInstance.c)
 *     ExpWnfFindScopeInstance @ 0x1409C85C0 (ExpWnfFindScopeInstance.c)
 *     ExpWnfGetCurrentScopeInstance @ 0x1409C8634 (ExpWnfGetCurrentScopeInstance.c)
 *     ExpWnfCreateProcessContext @ 0x140ABC4C4 (ExpWnfCreateProcessContext.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpWnfResolveScopeInstance(
        struct _EX_RUNDOWN_REF **a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 *Buf1)
{
  void *v6; // r12
  __int64 v9; // rax
  _QWORD *CurrentServerSiloGlobals; // rax
  struct _KLOCK_ENTRIES *v11; // r9
  _QWORD *v12; // r15
  char *v13; // r8
  __int64 *v14; // r14
  BOOL v15; // edx
  volatile signed __int64 *v16; // rdx
  volatile signed __int64 *v17; // rdi
  struct _EX_RUNDOWN_REF *v18; // rdi
  unsigned __int64 v19; // rtt
  int CurrentScopeInstance; // ebx
  PVOID v22; // rcx
  ULONG v23; // esi
  __int64 v24; // rcx
  __int64 v25; // rax
  signed __int64 *v26; // r13
  struct _EX_RUNDOWN_REF **v27; // r15
  void *v28; // rdx
  LegacyAutoBoost *v29; // rbx
  struct _EX_RUNDOWN_REF **i; // rbx
  struct _KLOCK_ENTRIES *v31; // r9
  AutoBoost *v32; // rax
  void *v33; // rdx
  AutoBoost *v34; // rbx
  struct _EX_RUNDOWN_REF *ScopeInstance; // rax
  struct _EX_RUNDOWN_REF *v36; // rcx
  struct _EX_RUNDOWN_REF *v37; // rax
  BOOLEAN v38; // bl
  unsigned int v39; // esi
  __int64 Pool2; // rax
  BOOLEAN v41; // bl
  __int64 v42; // r8
  struct _KLOCK_ENTRIES *v43; // r9
  int v44; // [rsp+30h] [rbp-38h] BYREF
  int v45; // [rsp+34h] [rbp-34h] BYREF
  volatile signed __int64 *v46; // [rsp+38h] [rbp-30h]
  PVOID P; // [rsp+40h] [rbp-28h] BYREF
  __int64 v48; // [rsp+48h] [rbp-20h] BYREF
  __int64 *v49; // [rsp+50h] [rbp-18h]
  int v51; // [rsp+B0h] [rbp+48h]

  v51 = a3;
  v6 = 0LL;
  v48 = 0LL;
  P = 0LL;
  if ( KeGetCurrentThread()->PreviousMode && a4 - 4 > 1 )
  {
    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  }
  else
  {
    v9 = HalSystemVectorDispatchEntry();
    CurrentServerSiloGlobals = PsGetServerSiloGlobals(v9);
  }
  v12 = CurrentServerSiloGlobals;
  if ( !CurrentServerSiloGlobals[110] )
  {
    CurrentScopeInstance = ExpWnfAllocateScopeMap(&P);
    if ( CurrentScopeInstance < 0 )
      return (unsigned int)CurrentScopeInstance;
    v22 = P;
    if ( _InterlockedCompareExchange64(v12 + 110, (signed __int64)P, 0LL) )
      ExFreePoolWithTag(v22, 0x20666E57u);
  }
  v13 = *(char **)(a2 + 1512);
  P = v13;
  if ( !v13 )
  {
    CurrentScopeInstance = ExpWnfCreateProcessContext(a2, &P);
    if ( CurrentScopeInstance < 0 )
      return (unsigned int)CurrentScopeInstance;
    v13 = (char *)P;
  }
  v14 = Buf1;
  v15 = !Buf1 && !a3;
  v44 = v15;
  switch ( a4 )
  {
    case 0u:
      v16 = (volatile signed __int64 *)(v12[110] + 8LL);
      goto LABEL_11;
    case 4u:
      v16 = (volatile signed __int64 *)(v12[110] + 16LL);
LABEL_11:
      v46 = v16;
      v15 = 1;
      v17 = v46;
      v44 = 1;
      goto LABEL_12;
    case 5u:
      v15 = 1;
      v17 = (volatile signed __int64 *)(v12[110] + 24LL);
      v44 = 1;
      break;
    default:
      v17 = (volatile signed __int64 *)&v13[8 * a4 + 24];
      break;
  }
  v46 = v17;
LABEL_12:
  v18 = (struct _EX_RUNDOWN_REF *)*v17;
  P = v18;
  if ( v15 && v18 )
    goto LABEL_14;
  if ( Buf1 )
  {
    if ( a4 != 4 )
    {
      if ( a4 == 3 )
      {
        v23 = 8;
        goto LABEL_35;
      }
      if ( a4 )
      {
        v39 = a4 - 1;
        if ( !v39 )
        {
          v23 = 4;
          goto LABEL_35;
        }
        if ( v39 == 1 )
        {
          v23 = RtlLengthSid(Buf1);
          goto LABEL_35;
        }
      }
    }
    v23 = 0;
LABEL_35:
    v45 = 0;
LABEL_36:
    v24 = 3LL * (int)a4;
    v25 = v12[110];
    v26 = (signed __int64 *)(v25 + 8 * (v24 + 4));
    v27 = (struct _EX_RUNDOWN_REF **)(v25 + 8 * (v24 + 5));
    v29 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)v26, 0LL, 0LL, v11);
    if ( _InterlockedCompareExchange64(v26, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v26, 0, v29, (struct _KTHREAD *)v26);
    if ( v29 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v29, v28);
      else
        *((_BYTE *)v29 + 10) = 1;
    }
    for ( i = (struct _EX_RUNDOWN_REF **)*v27; i != v27; i = (struct _EX_RUNDOWN_REF **)*i )
    {
      v18 = (struct _EX_RUNDOWN_REF *)(i - 4);
      if ( v23 == *((_DWORD *)i - 3) && !memcmp(v14, v18[3].Ptr, v23) )
      {
        if ( i != (struct _EX_RUNDOWN_REF **)32 )
        {
          v38 = ExAcquireRundownProtection_0(v18 + 1);
          if ( _InterlockedCompareExchange64(v26, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v26);
          KeAbPostRelease((unsigned __int64)v26);
          if ( !v38 )
          {
            CurrentScopeInstance = -1073741772;
            goto LABEL_22;
          }
          goto LABEL_21;
        }
        break;
      }
    }
    if ( _InterlockedCompareExchange64(v26, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v26);
    KeAbPostRelease((unsigned __int64)v26);
    CurrentScopeInstance = ExpWnfAllocateScopeInstance(&P, a4, v14, v23);
    if ( CurrentScopeInstance < 0 )
      goto LABEL_22;
    v32 = (AutoBoost *)KeAbPreAcquire((__int64)v26, 0LL, 0LL, v31);
    v34 = v32;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v26, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v26, v32, (__int64)v26);
    if ( v34 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v34, v33);
      else
        *((_BYTE *)v34 + 10) = 1;
    }
    ScopeInstance = (struct _EX_RUNDOWN_REF *)ExpWnfFindScopeInstance(v27, v14, v23);
    v18 = ScopeInstance;
    if ( ScopeInstance )
    {
      v41 = ExAcquireRundownProtection_0(ScopeInstance + 1);
      if ( (_InterlockedExchangeAdd64(v26, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v26);
      KeAbPostRelease((unsigned __int64)v26);
      ExpWnfFreeScopeInstance((struct _EX_RUNDOWN_REF *)P, 0LL, v42, v43);
      if ( !v41 )
      {
        CurrentScopeInstance = -1073741772;
        goto LABEL_22;
      }
    }
    else
    {
      v18 = (struct _EX_RUNDOWN_REF *)P;
      ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)P + 1);
      v36 = *v27;
      v37 = v18 + 4;
      if ( (struct _EX_RUNDOWN_REF **)(*v27)[1].Count != v27 )
        __fastfail(3u);
      v37->Count = (unsigned __int64)v36;
      v18[5].Count = (unsigned __int64)v27;
      v36[1].Count = (unsigned __int64)v37;
      *v27 = v37;
      if ( (_InterlockedExchangeAdd64(v26, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v26);
      KeAbPostRelease((unsigned __int64)v26);
      if ( v45 )
        _InterlockedCompareExchange64(v46, (signed __int64)v18, 0LL);
    }
    goto LABEL_21;
  }
  v49 = &v48;
  v45 = 8;
  CurrentScopeInstance = ExpWnfGetCurrentScopeInstance(a2, v51, a4, (unsigned int)&v48, (__int64)&v45, (__int64)&v44);
  if ( CurrentScopeInstance == -1073741789 )
  {
    Pool2 = ExAllocatePool2(0x100uLL);
    v6 = (void *)Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    v49 = (__int64 *)Pool2;
    CurrentScopeInstance = ExpWnfGetCurrentScopeInstance(a2, v51, a4, Pool2, (__int64)&v45, (__int64)&v44);
  }
  if ( CurrentScopeInstance < 0 )
    goto LABEL_22;
  v23 = v45;
  if ( v45 )
    v14 = v49;
  v45 = v44;
  if ( !v44 || !v18 )
    goto LABEL_36;
LABEL_14:
  _m_prefetchw(&v18[1]);
  v19 = v18[1].Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v19 != _InterlockedCompareExchange64((volatile signed __int64 *)&v18[1], v19 + 2, v19)
    && !ExfAcquireRundownProtection(v18 + 1) )
  {
    CurrentScopeInstance = -1073741772;
    goto LABEL_22;
  }
LABEL_21:
  *a1 = v18;
  CurrentScopeInstance = 0;
LABEL_22:
  if ( v6 )
    ExFreePoolWithTag(v6, 0x20666E57u);
  return (unsigned int)CurrentScopeInstance;
}
