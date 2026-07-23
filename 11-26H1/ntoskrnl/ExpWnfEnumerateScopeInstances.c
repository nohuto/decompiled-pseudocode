/*
 * XREFs of ExpWnfEnumerateScopeInstances @ 0x1409C377C
 * Callers:
 *     NtDeleteWnfStateName @ 0x1409C4FD0 (NtDeleteWnfStateName.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     PsGetServerSiloGlobals @ 0x140216EA0 (PsGetServerSiloGlobals.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     HalSystemVectorDispatchEntry @ 0x1404B6E40 (HalSystemVectorDispatchEntry.c)
 */

struct _EX_RUNDOWN_REF *__fastcall ExpWnfEnumerateScopeInstances(unsigned int a1, struct _EX_RUNDOWN_REF *a2)
{
  __int64 v2; // rbx
  struct _EX_RUNDOWN_REF *v4; // rbp
  __int64 v5; // rax
  _QWORD *CurrentServerSiloGlobals; // rax
  struct _KLOCK_ENTRIES *v7; // r9
  __int64 v8; // rdx
  signed __int64 *v9; // rdi
  struct _EX_RUNDOWN_REF **v10; // r14
  void *v11; // rdx
  LegacyAutoBoost *v12; // rbx
  struct _EX_RUNDOWN_REF *Count; // rbx

  v2 = a1;
  v4 = 0LL;
  if ( a1 - 4 > 1 )
  {
    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  }
  else
  {
    v5 = HalSystemVectorDispatchEntry();
    CurrentServerSiloGlobals = PsGetServerSiloGlobals(v5);
  }
  v8 = CurrentServerSiloGlobals[110];
  if ( !v8 )
    return 0LL;
  v9 = (signed __int64 *)(v8 + 8 * (v2 + 2 * (v2 + 2)));
  v10 = (struct _EX_RUNDOWN_REF **)(v9 + 1);
  v12 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)v9, 0LL, 0LL, v7);
  if ( _InterlockedCompareExchange64(v9, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v9, 0, v12, (struct _KTHREAD *)v9);
  if ( v12 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v12, v11);
    else
      *((_BYTE *)v12 + 10) = 1;
  }
  if ( !a2 || (Count = (struct _EX_RUNDOWN_REF *)a2[4].Count) == 0LL )
    Count = *v10;
  while ( Count != (struct _EX_RUNDOWN_REF *)v10 )
  {
    v4 = Count - 4;
    if ( ExAcquireRundownProtection_0(Count - 3) )
      break;
    Count = (struct _EX_RUNDOWN_REF *)Count->Count;
    v4 = 0LL;
  }
  if ( _InterlockedCompareExchange64(v9, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v9);
  KeAbPostRelease((unsigned __int64)v9);
  if ( a2 )
    ExReleaseRundownProtection_0(a2 + 1);
  return v4;
}
