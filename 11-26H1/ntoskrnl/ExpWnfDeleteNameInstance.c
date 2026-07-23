/*
 * XREFs of ExpWnfDeleteNameInstance @ 0x1409C4B7C
 * Callers:
 *     ExpWnfDeleteNameInstanceCallback @ 0x1409C4084 (ExpWnfDeleteNameInstanceCallback.c)
 *     NtDeleteWnfStateName @ 0x1409C4FD0 (NtDeleteWnfStateName.c)
 *     ExpWnfDeleteProcessContext @ 0x1409FD874 (ExpWnfDeleteProcessContext.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     RtlAvlRemoveNode @ 0x1402EE660 (RtlAvlRemoveNode.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x14045CD60 (ExWaitForRundownProtectionRelease.c)
 *     ObDereferenceSecurityDescriptor @ 0x14090D9C0 (ObDereferenceSecurityDescriptor.c)
 *     ExpWnfDeleteStateData @ 0x1409C4458 (ExpWnfDeleteStateData.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpWnfDeleteNameInstance(__int64 a1, struct _EX_RUNDOWN_REF *a2, char a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned __int64 *v4; // rsi
  AutoBoost *v8; // rax
  void *v9; // rdx
  struct _KLOCK_ENTRIES *v10; // r9
  AutoBoost *v11; // rbx
  volatile signed __int64 *v12; // rdi
  AutoBoost *v13; // rax
  void *v14; // rdx
  AutoBoost *v15; // rbx
  struct _KLOCK_ENTRIES *v16; // r9
  AutoBoost *v17; // rax
  void *v18; // rdx
  AutoBoost *v19; // rsi
  struct _EX_RUNDOWN_REF *Count; // rsi
  struct _KLOCK_ENTRIES *v21; // r9
  unsigned __int64 v22; // rax
  unsigned __int64 *v23; // rdi
  AutoBoost *v24; // rax
  void *v25; // rdx
  AutoBoost *v26; // rsi
  unsigned __int64 v27; // rdx
  struct _EX_RUNDOWN_REF **v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // r8
  struct _KLOCK_ENTRIES *v31; // r9
  __int64 v32; // r8
  struct _KLOCK_ENTRIES *v33; // r9
  unsigned __int64 v35; // r14
  unsigned __int64 *v36; // r14
  struct _KLOCK_ENTRIES *v37; // r9
  AutoBoost *v38; // rax
  void *v39; // rdx
  struct _KLOCK_ENTRIES *v40; // r9
  AutoBoost *v41; // r13
  AutoBoost *v42; // rax
  void *v43; // rdx
  AutoBoost *v44; // r13
  struct _EX_RUNDOWN_REF v45; // rcx
  struct _EX_RUNDOWN_REF **v46; // rax

  v4 = (unsigned __int64 *)(a1 + 48);
  v8 = (AutoBoost *)KeAbPreAcquire(a1 + 48, 0LL, 0LL, a4);
  v11 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v8, (__int64)v4);
  if ( v11 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v11, v9);
    else
      *((_BYTE *)v11 + 10) = 1;
  }
  if ( a2[6].Count )
  {
    v12 = (volatile signed __int64 *)&a2[14];
    v13 = (AutoBoost *)KeAbPreAcquire((__int64)&a2[14], 0LL, 0LL, v10);
    v15 = v13;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&a2[14], 0LL) )
      ExfAcquirePushLockExclusiveEx(&a2[14].Count, v13, (__int64)&a2[14]);
    if ( v15 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v15, v14);
      else
        *((_BYTE *)v15 + 10) = 1;
    }
    if ( a3 )
      RtlAvlRemoveNode((unsigned __int64 *)(a1 + 56), (__int64)&a2[2]);
    a2[6].Count = 0LL;
    if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&a2[14]);
    KeAbPostRelease((unsigned __int64)&a2[14]);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v4);
    KeAbPostRelease((unsigned __int64)v4);
    v17 = (AutoBoost *)KeAbPreAcquire((__int64)&a2[14], 0LL, 0LL, v16);
    v19 = v17;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v12, 0LL) )
      ExfAcquirePushLockExclusiveEx(&a2[14].Count, v17, (__int64)&a2[14]);
    if ( v19 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v19, v18);
      else
        *((_BYTE *)v19 + 10) = 1;
    }
    while ( 1 )
    {
      Count = (struct _EX_RUNDOWN_REF *)a2[15].Count;
      if ( Count == &a2[15] )
        break;
      ExAcquireRundownProtection_0(Count - 7);
      v35 = Count[-3].Count;
      if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&a2[14]);
      KeAbPostRelease((unsigned __int64)&a2[14]);
      v36 = (unsigned __int64 *)(*(_QWORD *)(v35 + 1512) + 80LL);
      v38 = (AutoBoost *)KeAbPreAcquire((__int64)v36, 0LL, 0LL, v37);
      v41 = v38;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v36, 0LL) )
        ExfAcquirePushLockExclusiveEx(v36, v38, (__int64)v36);
      if ( v41 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v41, v39);
        else
          *((_BYTE *)v41 + 10) = 1;
      }
      v42 = (AutoBoost *)KeAbPreAcquire((__int64)&a2[14], 0LL, 0LL, v40);
      v44 = v42;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v12, 0LL) )
        ExfAcquirePushLockExclusiveEx(&a2[14].Count, v42, (__int64)&a2[14]);
      if ( v44 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v44, v43);
        else
          *((_BYTE *)v44 + 10) = 1;
      }
      if ( Count[-2].Count )
      {
        v45.Count = Count->Count;
        if ( *(struct _EX_RUNDOWN_REF **)(Count->Count + 8) != Count )
          goto LABEL_58;
        v46 = (struct _EX_RUNDOWN_REF **)Count[1].Count;
        if ( *v46 != Count )
          goto LABEL_58;
        *v46 = (struct _EX_RUNDOWN_REF *)v45.Count;
        *(_QWORD *)(v45.Count + 8) = v46;
        Count[-2].Count = 0LL;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v36, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v36);
      KeAbPostRelease((unsigned __int64)v36);
      ExReleaseRundownProtection_0(Count - 7);
    }
    if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&a2[14]);
    KeAbPostRelease((unsigned __int64)&a2[14]);
    v22 = a2[19].Count;
    if ( v22 )
    {
      v23 = (unsigned __int64 *)(*(_QWORD *)(v22 + 1512) + 56LL);
      v24 = (AutoBoost *)KeAbPreAcquire((__int64)v23, 0LL, 0LL, v21);
      v26 = v24;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v23, 0LL) )
        ExfAcquirePushLockExclusiveEx(v23, v24, (__int64)v23);
      if ( v26 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v26, v25);
        else
          *((_BYTE *)v26 + 10) = 1;
      }
      v27 = a2[17].Count;
      if ( *(struct _EX_RUNDOWN_REF **)(v27 + 8) != &a2[17]
        || (v28 = (struct _EX_RUNDOWN_REF **)a2[18].Count, *v28 != &a2[17]) )
      {
LABEL_58:
        __fastfail(3u);
      }
      *v28 = (struct _EX_RUNDOWN_REF *)v27;
      *(_QWORD *)(v27 + 8) = v28;
      a2[19].Count = 0LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v23, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v23);
      KeAbPostRelease((unsigned __int64)v23);
    }
    ExReleaseRundownProtection_0(a2 + 1);
    ExWaitForRundownProtectionRelease(a2 + 1);
    ExpWnfDeleteStateData((__int64)a2, v29, v30, v31);
    ObDereferenceSecurityDescriptor(a2[9].Count, 1u, v32, v33);
    ExFreePoolWithTag(a2, 0x20666E57u);
    return 1LL;
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v4);
    KeAbPostRelease((unsigned __int64)v4);
    return 0LL;
  }
}
