/*
 * XREFs of ExpWnfDeleteScopeById @ 0x140A41D9C
 * Callers:
 *     ExWnfExitProcess @ 0x140A41D44 (ExWnfExitProcess.c)
 *     PspDereferenceSessionFinal @ 0x140B4AB84 (PspDereferenceSessionFinal.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402150C0 (PsGetCurrentServerSiloGlobals.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     ExpWnfFreeScopeInstance @ 0x140948664 (ExpWnfFreeScopeInstance.c)
 *     ExpWnfFindScopeInstance @ 0x14094CC50 (ExpWnfFindScopeInstance.c)
 */

void __fastcall ExpWnfDeleteScopeById(__int64 a1, const void *a2, unsigned int a3)
{
  struct _LIST_ENTRY *Flink; // r9
  __int64 v6; // r10
  char *v7; // r14
  unsigned __int64 *v8; // rbx
  AutoBoost *v9; // rax
  void *v10; // rdx
  AutoBoost *v11; // rdi
  struct _EX_RUNDOWN_REF *ScopeInstance; // rax
  struct _EX_RUNDOWN_REF *v13; // rdi
  struct _EX_RUNDOWN_REF *v14; // rcx
  unsigned __int64 Count; // rdx
  struct _EX_RUNDOWN_REF **v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  struct _KLOCK_ENTRIES *v19; // r9

  Flink = PsGetCurrentServerSiloGlobals()[55].Flink;
  if ( Flink )
  {
    v7 = (char *)Flink + 24 * v6;
    v8 = (unsigned __int64 *)&Flink[2] + 3 * v6;
    v9 = (AutoBoost *)KeAbPreAcquire((__int64)v8, 0LL, 0LL, (struct _KLOCK_ENTRIES *)Flink);
    v11 = v9;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
      ExfAcquirePushLockExclusiveEx(v8, v9, (__int64)v8);
    if ( v11 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v11, v10);
      else
        *((_BYTE *)v11 + 10) = 1;
    }
    ScopeInstance = (struct _EX_RUNDOWN_REF *)ExpWnfFindScopeInstance((_QWORD **)v7 + 5, a2, a3);
    v13 = ScopeInstance;
    if ( ScopeInstance )
    {
      v14 = ScopeInstance + 4;
      Count = ScopeInstance[4].Count;
      v16 = (struct _EX_RUNDOWN_REF **)ScopeInstance[5].Count;
      if ( *(struct _EX_RUNDOWN_REF **)(Count + 8) != v14 || *v16 != v14 )
        __fastfail(3u);
      *v16 = (struct _EX_RUNDOWN_REF *)Count;
      *(_QWORD *)(Count + 8) = v16;
      v14->Count = 0LL;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v8);
    KeAbPostRelease((unsigned __int64)v8);
    if ( v13 )
    {
      LOBYTE(v17) = 1;
      ExpWnfFreeScopeInstance(v13, v17, v18, v19);
    }
  }
}
