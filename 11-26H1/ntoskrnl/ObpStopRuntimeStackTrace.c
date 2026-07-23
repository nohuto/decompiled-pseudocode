/*
 * XREFs of ObpStopRuntimeStackTrace @ 0x1407C85E8
 * Callers:
 *     ObSetRefTraceInformation @ 0x1407C7574 (ObSetRefTraceInformation.c)
 *     ObSetRefTraceInformationEx @ 0x1407C7628 (ObSetRefTraceInformationEx.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x14027D080 (KeLeaveGuardedRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     ObpTraceFreeMemory @ 0x140532F70 (ObpTraceFreeMemory.c)
 *     RtlpInterlockedFlushSList @ 0x1407358E0 (RtlpInterlockedFlushSList.c)
 *     ObpDestroyStackAndObjectTables @ 0x1407C7A74 (ObpDestroyStackAndObjectTables.c)
 *     ObpProcessPushStackInfoList @ 0x1407C7FB8 (ObpProcessPushStackInfoList.c)
 *     ObpSetPoolTags @ 0x1407C8138 (ObpSetPoolTags.c)
 */

__int64 __fastcall ObpStopRuntimeStackTrace(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v5; // rax
  void *v6; // rdx
  signed __int8 v7; // cf
  AutoBoost *v8; // rdi
  char v9; // bp
  struct _LIST_ENTRY **p_Blink; // rcx
  __int64 v11; // rdx
  __int64 **Flink; // rsi
  PSLIST_ENTRY v13; // rax
  __int64 v14; // rdi
  __int64 v15; // r8
  struct _KLOCK_ENTRIES *v16; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v5 = (AutoBoost *)KeAbPreAcquire((__int64)&ObpStackTraceLock, 0LL, 0LL, a4);
  v7 = _interlockedbittestandset64(&ObpStackTraceLock.Header.Lock, 0LL);
  v8 = v5;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&ObpStackTraceLock, v5, (__int64)&ObpStackTraceLock);
  LOBYTE(v6) = 1;
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v8, v6);
    else
      *((_BYTE *)v8 + 10) = 1;
  }
  if ( (ObpTraceFlags & 2) != 0 )
  {
    v9 = (unsigned __int8)v6 & ((unsigned int)ObpTraceFlags >> 7);
    if ( ((__int64)ObpStackTraceLock.UserAffinity & (unsigned __int8)v6) != 0 )
    {
      ObpTraceFlags = LODWORD(ObpStackTraceLock.UserAffinity) | ObpTraceFlags & 0xFFFFFF0C;
      if ( ((__int64)ObpStackTraceLock.UserAffinity & 0x10) != 0 && LOWORD(ObpStackTraceLock.Timer.TimerListEntry.Blink) )
      {
        p_Blink = &ObpStackTraceLock.Timer.TimerListEntry.Blink;
        v11 = -1LL;
        do
          ++v11;
        while ( *((_WORD *)&ObpStackTraceLock.Timer.TimerListEntry.Blink + v11) );
      }
      else
      {
        p_Blink = 0LL;
        LODWORD(v11) = 0;
      }
      ObpSetPoolTags((__int64)p_Blink, v11);
      ObpStackTraceLock.SavedApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)((unsigned __int64)&ObpStackTraceLock.AffinityVersion & -(__int64)((ObpTraceFlags & 0x20) != 0));
    }
    else
    {
      Flink = (__int64 **)ObpStackTraceLock.SavedApcState.ApcListHead[1].Flink;
      ObpStackTraceLock.SavedApcState.ApcListHead[0].Flink = 0LL;
      *(_DWORD *)&ObpStackTraceLock.SchedulerApcFill5[80] = 0;
      v13 = RtlpInterlockedFlushSList(&ObpWorkItemFreeList);
      ObpStackTraceLock.SavedApcState.ApcListHead[1].Flink = 0LL;
      v14 = (__int64)v13;
      ObpSetPoolTags(0LL, 0);
      LOBYTE(v15) = v9;
      ObpDestroyStackAndObjectTables(Flink, v14, v15, v16);
      ObpTraceFlags &= 0xFFFFFF0C;
    }
    if ( ObpStackTraceLock.NpxState )
    {
      ObpTraceFreeMemory((PVOID)ObpStackTraceLock.NpxState);
      RtlInitUnicodeStringEx((PUNICODE_STRING)&ObpStackTraceLock.AffinityPrimaryGroup, 0LL);
    }
    ObpProcessPushStackInfoList();
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock.Header.Lock);
  KeAbPostRelease((unsigned __int64)&ObpStackTraceLock);
  KeLeaveGuardedRegion();
  return 0LL;
}
