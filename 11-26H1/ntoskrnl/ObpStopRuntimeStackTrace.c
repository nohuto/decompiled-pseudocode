/*
 * XREFs of ObpStopRuntimeStackTrace @ 0x1407C5588
 * Callers:
 *     ObSetRefTraceInformation @ 0x1407C4514 (ObSetRefTraceInformation.c)
 *     ObSetRefTraceInformationEx @ 0x1407C45C8 (ObSetRefTraceInformationEx.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x14027DB10 (KeLeaveGuardedRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     RtlInitUnicodeStringEx @ 0x14045D040 (RtlInitUnicodeStringEx.c)
 *     ObpTraceFreeMemory @ 0x140530A70 (ObpTraceFreeMemory.c)
 *     RtlpInterlockedFlushSList @ 0x140730D10 (RtlpInterlockedFlushSList.c)
 *     ObpDestroyStackAndObjectTables @ 0x1407C4A14 (ObpDestroyStackAndObjectTables.c)
 *     ObpProcessPushStackInfoList @ 0x1407C4F58 (ObpProcessPushStackInfoList.c)
 *     ObpSetPoolTags @ 0x1407C50D8 (ObpSetPoolTags.c)
 */

__int64 __fastcall ObpStopRuntimeStackTrace(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v5; // rax
  void *v6; // rdx
  signed __int8 v7; // cf
  AutoBoost *v8; // rdi
  char v9; // bp
  void **p_SListFaultAddress; // rcx
  __int64 v11; // rdx
  __int64 **v12; // rsi
  PSLIST_ENTRY v13; // rax
  __int64 v14; // rdi
  __int64 v15; // r8
  struct _KLOCK_ENTRIES *v16; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v5 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140F132C8, 0LL, 0LL, a4);
  v7 = _interlockedbittestandset64(&stru_140F132C8.Header.Lock, 0LL);
  v8 = v5;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140F132C8, v5, (__int64)&stru_140F132C8);
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
    if ( (stru_140F132C8.SavedApcStateFill[16] & (unsigned __int8)v6) != 0 )
    {
      ObpTraceFlags = *(_DWORD *)&stru_140F132C8.SavedApcStateFill[16] | ObpTraceFlags & 0xFFFFFF0C;
      if ( (stru_140F132C8.SavedApcStateFill[16] & 0x10) != 0 && LOWORD(stru_140F132C8.SListFaultAddress) )
      {
        p_SListFaultAddress = &stru_140F132C8.SListFaultAddress;
        v11 = -1LL;
        do
          ++v11;
        while ( *((_WORD *)&stru_140F132C8.SListFaultAddress + v11) );
      }
      else
      {
        p_SListFaultAddress = 0LL;
        LODWORD(v11) = 0;
      }
      ObpSetPoolTags((__int64)p_SListFaultAddress, v11);
      stru_140F132C8.NpxState = (unsigned __int64)&stru_140F132C8.AffinityVersion & -(__int64)((ObpTraceFlags & 0x20) != 0);
    }
    else
    {
      v12 = (__int64 **)qword_140F13228;
      stru_140F132C8.NpxState = 0LL;
      dword_140F13260[0] = 0;
      v13 = RtlpInterlockedFlushSList(&ObpWorkItemFreeList);
      qword_140F13228 = 0LL;
      v14 = (__int64)v13;
      ObpSetPoolTags(0LL, 0);
      LOBYTE(v15) = v9;
      ObpDestroyStackAndObjectTables(v12, v14, v15, v16);
      ObpTraceFlags &= 0xFFFFFF0C;
    }
    if ( stru_140F132C8.SavedApcState.ApcListHead[0].Blink )
    {
      ObpTraceFreeMemory(stru_140F132C8.SavedApcState.ApcListHead[0].Blink);
      RtlInitUnicodeStringEx((PUNICODE_STRING)&stru_140F132C8.600, 0LL);
    }
    ObpProcessPushStackInfoList();
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140F132C8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&stru_140F132C8.Header.Lock);
  KeAbPostRelease((unsigned __int64)&stru_140F132C8);
  KeLeaveGuardedRegion();
  return 0LL;
}
