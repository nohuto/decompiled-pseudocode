/*
 * XREFs of ExpWnfEnumerateScopeInstances @ 0x140947E0C
 * Callers:
 *     NtDeleteWnfStateName @ 0x140949660 (NtDeleteWnfStateName.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402150C0 (PsGetCurrentServerSiloGlobals.c)
 *     PsGetServerSiloGlobals @ 0x140216B70 (PsGetServerSiloGlobals.c)
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     HalSystemVectorDispatchEntry @ 0x1404BD660 (HalSystemVectorDispatchEntry.c)
 */

struct _EX_RUNDOWN_REF *__fastcall ExpWnfEnumerateScopeInstances(unsigned int a1, struct _EX_RUNDOWN_REF *a2)
{
  __int64 v2; // rbx
  __int64 v4; // rax
  _QWORD *CurrentServerSiloGlobals; // rax
  struct _KLOCK_ENTRIES *v6; // r9
  __int64 v7; // rdx
  signed __int64 *v8; // rdi
  struct _EX_RUNDOWN_REF **v9; // r14
  void *v10; // rdx
  LegacyAutoBoost *v11; // rbx
  struct _EX_RUNDOWN_REF *Count; // rbx
  struct _EX_RUNDOWN_REF *v13; // rsi

  v2 = a1;
  if ( a1 - 4 > 1 )
  {
    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  }
  else
  {
    v4 = HalSystemVectorDispatchEntry();
    CurrentServerSiloGlobals = PsGetServerSiloGlobals(v4);
  }
  v7 = CurrentServerSiloGlobals[110];
  if ( !v7 )
    return 0LL;
  v8 = (signed __int64 *)(v7 + 8 * (v2 + 2 * (v2 + 2)));
  v9 = (struct _EX_RUNDOWN_REF **)(v8 + 1);
  v11 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)v8, 0LL, 0LL, v6);
  if ( _InterlockedCompareExchange64(v8, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v8, 0, v11, (struct _KTHREAD *)v8);
  if ( v11 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v11, v10);
    else
      *((_BYTE *)v11 + 10) = 1;
  }
  if ( !a2 || (Count = (struct _EX_RUNDOWN_REF *)a2[4].Count) == 0LL )
    Count = *v9;
  while ( 1 )
  {
    v13 = 0LL;
    if ( Count == (struct _EX_RUNDOWN_REF *)v9 )
      break;
    v13 = Count - 4;
    if ( ExAcquireRundownProtection_0(Count - 3) )
      break;
    Count = (struct _EX_RUNDOWN_REF *)Count->Count;
  }
  if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v8);
  KeAbPostRelease((unsigned __int64)v8);
  if ( a2 )
    ExReleaseRundownProtection_0(a2 + 1);
  return v13;
}
