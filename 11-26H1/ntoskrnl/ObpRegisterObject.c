/*
 * XREFs of ObpRegisterObject @ 0x140778F98
 * Callers:
 *     ObpEnableObjectRefTrace @ 0x1407C4AB4 (ObpEnableObjectRefTrace.c)
 *     NtCreateEvent @ 0x1408EF8C0 (NtCreateEvent.c)
 *     CmpCreateKeyBody @ 0x1408FBCB0 (CmpCreateKeyBody.c)
 *     ObCreateObjectEx @ 0x1408FD7D0 (ObCreateObjectEx.c)
 *     ObCreateObject @ 0x140932FB0 (ObCreateObject.c)
 *     IopAllocRealFileObject @ 0x1409337E0 (IopAllocRealFileObject.c)
 *     EtwpRegisterUMProvider @ 0x140934B00 (EtwpRegisterUMProvider.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x14027DB10 (KeLeaveGuardedRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     ObpInitializeObjectRefInfo @ 0x1407C4CA8 (ObpInitializeObjectRefInfo.c)
 *     ObpInitializeObjectRefsByStack @ 0x1407C4D98 (ObpInitializeObjectRefsByStack.c)
 *     ObpProcessPushStackInfoList @ 0x1407C4F58 (ObpProcessPushStackInfoList.c)
 *     EtwTraceObject @ 0x140827AC4 (EtwTraceObject.c)
 *     ObpIsObjectPoolTagTraced @ 0x140ADF6E4 (ObpIsObjectPoolTagTraced.c)
 */

void __fastcall ObpRegisterObject(__int64 a1, char a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v7; // rax
  void *v8; // rdx
  signed __int8 v9; // cf
  AutoBoost *v10; // rsi

  if ( (xmmword_140FBFC10 & 0x80u) != 0LL && a2 == 1 )
    EtwTraceObject(4400LL, a1);
  if ( (ObpTraceFlags & 0xF3) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v7 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140F132C8, 0LL, 0LL, a4);
    v9 = _interlockedbittestandset64(&stru_140F132C8.Header.Lock, 0LL);
    v10 = v7;
    if ( v9 )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140F132C8, v7, (__int64)&stru_140F132C8);
    if ( v10 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v10, v8);
      else
        *((_BYTE *)v10 + 10) = 1;
    }
    if ( (ObpTraceFlags & 0xF3) != 0
      && (*(_BYTE *)(a1 + 25) & 1) == 0
      && (a2 != 1
       || ((ObpTraceFlags & 0x20) == 0 || (KeGetCurrentThread()->ApcState.Process[1].DirectoryTableBase & 0x200) != 0)
       && (unsigned __int8)ObpIsObjectPoolTagTraced(a1)) )
    {
      ObpProcessPushStackInfoList();
      if ( (ObpTraceFlags & 0x80u) != 0 )
        ObpInitializeObjectRefsByStack(a1);
      else
        ObpInitializeObjectRefInfo(a1);
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140F132C8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&stru_140F132C8.Header.Lock);
    KeAbPostRelease((unsigned __int64)&stru_140F132C8);
    KeLeaveGuardedRegion();
  }
}
