/*
 * XREFs of ObpStartRuntimeStackTraceEx @ 0x1407C8434
 * Callers:
 *     ObSetRefTraceInformationEx @ 0x1407C7628 (ObSetRefTraceInformationEx.c)
 *     ObpStartRuntimeStackTrace @ 0x1407C8248 (ObpStartRuntimeStackTrace.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x14027D080 (KeLeaveGuardedRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ObpTraceFreeMemory @ 0x140532F70 (ObpTraceFreeMemory.c)
 *     ObpInitStackAndObjectTables @ 0x1407C7C48 (ObpInitStackAndObjectTables.c)
 *     ObpSetPoolTags @ 0x1407C8138 (ObpSetPoolTags.c)
 */

__int64 __fastcall ObpStartRuntimeStackTraceEx(
        int a1,
        unsigned __int16 *a2,
        _OWORD *a3,
        struct _KLOCK_ENTRIES *a4,
        int a5,
        int a6)
{
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v11; // rax
  void *v12; // rdx
  signed __int8 v13; // cf
  AutoBoost *v14; // rdi
  int inited; // edi
  unsigned __int16 *p_AffinityPrimaryGroup; // rax
  int v17; // eax
  int v18; // eax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v11 = (AutoBoost *)KeAbPreAcquire((__int64)&ObpStackTraceLock, 0LL, 0LL, a4);
  v13 = _interlockedbittestandset64(&ObpStackTraceLock.Header.Lock, 0LL);
  v14 = v11;
  if ( v13 )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&ObpStackTraceLock, v11, (__int64)&ObpStackTraceLock);
  if ( v14 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v14, v12);
    else
      *((_BYTE *)v14 + 10) = 1;
  }
  stru_140E66D40.WaitBlock[0].SparePtr = a4;
  if ( (ObpTraceFlags & 0xF3) != 0 )
  {
    if ( (a1 & 0x80u) == 0 )
    {
      if ( (ObpTraceFlags & 0x80) == 0 )
        goto LABEL_14;
    }
    else if ( (ObpTraceFlags & 0x80) != 0 )
    {
      goto LABEL_14;
    }
    inited = -1073741811;
    goto LABEL_28;
  }
  inited = ObpInitStackAndObjectTables();
  if ( inited < 0 )
    goto LABEL_28;
LABEL_14:
  ObpTraceFlags = a1 | ObpTraceFlags & 0xFFFFFF0E | 2;
  if ( (ObpTraceFlags & 0x10) != 0 )
  {
    inited = ObpSetPoolTags(*((_QWORD *)a2 + 1), *a2 >> 1);
    if ( inited < 0 )
      goto LABEL_28;
  }
  else
  {
    ObpSetPoolTags(0LL, 0);
  }
  if ( (ObpTraceFlags & 0x20) != 0 )
  {
    if ( ObpStackTraceLock.NpxState )
      ObpTraceFreeMemory((PVOID)ObpStackTraceLock.NpxState);
    p_AffinityPrimaryGroup = &ObpStackTraceLock.AffinityPrimaryGroup;
    *(_OWORD *)&ObpStackTraceLock.AffinityPrimaryGroup = *a3;
    *a3 = 0LL;
  }
  else
  {
    p_AffinityPrimaryGroup = 0LL;
  }
  ObpStackTraceLock.SavedApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)p_AffinityPrimaryGroup;
  v17 = a5;
  if ( !a5 )
    v17 = 0xFFFF;
  ObpMaxObjectRefTraces = v17;
  v18 = a6;
  if ( !a6 )
    v18 = -1;
  inited = 0;
  ObpTracedObjectLimit = v18;
LABEL_28:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock.Header.Lock);
  KeAbPostRelease((unsigned __int64)&ObpStackTraceLock);
  KeLeaveGuardedRegion();
  return (unsigned int)inited;
}
