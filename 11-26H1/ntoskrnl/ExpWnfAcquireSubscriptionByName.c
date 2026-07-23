/*
 * XREFs of ExpWnfAcquireSubscriptionByName @ 0x1409C40C0
 * Callers:
 *     NtUnsubscribeWnfStateChange @ 0x1409C41C0 (NtUnsubscribeWnfStateChange.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 */

__int64 __fastcall ExpWnfAcquireSubscriptionByName(
        __int64 a1,
        __int64 a2,
        struct _EX_RUNDOWN_REF **a3,
        struct _KLOCK_ENTRIES *a4)
{
  signed __int64 *v4; // rdi
  void *v8; // rdx
  LegacyAutoBoost *v9; // rsi
  _QWORD *i; // rax
  struct _EX_RUNDOWN_REF *v11; // rsi
  __int64 result; // rax

  v4 = (signed __int64 *)(a2 + 80);
  v9 = (LegacyAutoBoost *)KeAbPreAcquire(a2 + 80, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64(v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4, 0, v9, (struct _KTHREAD *)v4);
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v9, v8);
    else
      *((_BYTE *)v9 + 10) = 1;
  }
  for ( i = *(_QWORD **)(a2 + 88); i != (_QWORD *)(a2 + 88); i = (_QWORD *)*i )
  {
    v11 = (struct _EX_RUNDOWN_REF *)(i - 3);
    if ( i[4] == a1 )
    {
      ExAcquireRundownProtection_0(v11 + 1);
      if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v4);
      KeAbPostRelease((unsigned __int64)v4);
      result = 0LL;
      *a3 = v11;
      return result;
    }
  }
  if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v4);
  KeAbPostRelease((unsigned __int64)v4);
  return 3221225524LL;
}
