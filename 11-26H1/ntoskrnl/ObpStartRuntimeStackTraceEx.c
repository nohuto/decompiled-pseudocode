/*
 * XREFs of ObpStartRuntimeStackTraceEx @ 0x1407C53D4
 * Callers:
 *     ObSetRefTraceInformationEx @ 0x1407C45C8 (ObSetRefTraceInformationEx.c)
 *     ObpStartRuntimeStackTrace @ 0x1407C51E8 (ObpStartRuntimeStackTrace.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x14027DB10 (KeLeaveGuardedRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     ObpTraceFreeMemory @ 0x140530A70 (ObpTraceFreeMemory.c)
 *     ObpInitStackAndObjectTables @ 0x1407C4BE8 (ObpInitStackAndObjectTables.c)
 *     ObpSetPoolTags @ 0x1407C50D8 (ObpSetPoolTags.c)
 */

__int64 __fastcall ObpStartRuntimeStackTraceEx(
        int a1,
        unsigned __int16 *a2,
        _LIST_ENTRY *a3,
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
  $B3FD53340A977CC9CDA66D808670C106 *v16; // rax
  int v17; // eax
  int v18; // eax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v11 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140F132C8, 0LL, 0LL, a4);
  v13 = _interlockedbittestandset64(&stru_140F132C8.Header.Lock, 0LL);
  v14 = v11;
  if ( v13 )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140F132C8, v11, (__int64)&stru_140F132C8);
  if ( v14 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v14, v12);
    else
      *((_BYTE *)v14 + 10) = 1;
  }
  *(_QWORD *)&stru_140E66B30.WaitBlockFill11[16] = a4;
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
    if ( stru_140F132C8.SavedApcState.ApcListHead[0].Blink )
      ObpTraceFreeMemory(stru_140F132C8.SavedApcState.ApcListHead[0].Blink);
    v16 = &stru_140F132C8.600;
    stru_140F132C8.SavedApcState.ApcListHead[0] = *a3;
    *a3 = 0LL;
  }
  else
  {
    v16 = 0LL;
  }
  stru_140F132C8.NpxState = (unsigned __int64)v16;
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
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140F132C8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&stru_140F132C8.Header.Lock);
  KeAbPostRelease((unsigned __int64)&stru_140F132C8);
  KeLeaveGuardedRegion();
  return (unsigned int)inited;
}
