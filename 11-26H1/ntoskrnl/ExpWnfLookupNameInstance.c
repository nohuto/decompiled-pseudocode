/*
 * XREFs of ExpWnfLookupNameInstance @ 0x1409C7310
 * Callers:
 *     ExpNtDeleteWnfStateData @ 0x1408454E8 (ExpNtDeleteWnfStateData.c)
 *     NtQueryWnfStateNameInformation @ 0x1409C3B60 (NtQueryWnfStateNameInformation.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x1409C46A4 (ExpWnfSubscribeWnfStateChange.c)
 *     NtDeleteWnfStateName @ 0x1409C4FD0 (NtDeleteWnfStateName.c)
 *     NtQueryWnfStateData @ 0x1409C5400 (NtQueryWnfStateData.c)
 *     ExpNtUpdateWnfStateData @ 0x1409C6210 (ExpNtUpdateWnfStateData.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfAcquireRundownProtection @ 0x1402D2650 (ExfAcquireRundownProtection.c)
 */

__int64 __fastcall ExpWnfLookupNameInstance(
        __int64 a1,
        unsigned __int64 a2,
        struct _EX_RUNDOWN_REF **a3,
        struct _KLOCK_ENTRIES *a4)
{
  void *v7; // rdx
  LegacyAutoBoost *v8; // rdi
  _QWORD *v9; // rcx
  struct _EX_RUNDOWN_REF *v10; // rbx
  unsigned __int64 v11; // rtt

  v8 = (LegacyAutoBoost *)KeAbPreAcquire(a1 + 48, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 48), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)(a1 + 48), 0, v8, (struct _KTHREAD *)(a1 + 48));
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v8, v7);
    else
      *((_BYTE *)v8 + 10) = 1;
  }
  v9 = *(_QWORD **)(a1 + 56);
  while ( v9 )
  {
    if ( a2 < v9[3] )
    {
      v9 = (_QWORD *)*v9;
    }
    else
    {
      if ( a2 <= v9[3] )
        break;
      v9 = (_QWORD *)v9[1];
    }
  }
  v10 = 0LL;
  if ( v9 )
    v10 = (struct _EX_RUNDOWN_REF *)(v9 - 2);
  if ( v10 )
  {
    _m_prefetchw(&v10[1]);
    v11 = v10[1].Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v11 != _InterlockedCompareExchange64((volatile signed __int64 *)&v10[1], v11 + 2, v11)
      && !ExfAcquireRundownProtection(v10 + 1) )
    {
      v10 = 0LL;
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 48), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 48));
  KeAbPostRelease(a1 + 48);
  if ( !v10 )
    return 3221225524LL;
  *a3 = v10;
  return 0LL;
}
