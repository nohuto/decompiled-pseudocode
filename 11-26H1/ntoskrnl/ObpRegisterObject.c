/*
 * XREFs of ObpRegisterObject @ 0x14077BE38
 * Callers:
 *     ObpEnableObjectRefTrace @ 0x1407C7B14 (ObpEnableObjectRefTrace.c)
 *     NtCreateEvent @ 0x1408F5E80 (NtCreateEvent.c)
 *     ObCreateObject @ 0x14090EB60 (ObCreateObject.c)
 *     IopAllocRealFileObject @ 0x14090F390 (IopAllocRealFileObject.c)
 *     EtwpRegisterUMProvider @ 0x1409106B0 (EtwpRegisterUMProvider.c)
 *     CmpCreateKeyBody @ 0x14092BC40 (CmpCreateKeyBody.c)
 *     ObCreateObjectEx @ 0x14092D760 (ObCreateObjectEx.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x14027D080 (KeLeaveGuardedRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ObpInitializeObjectRefInfo @ 0x1407C7D08 (ObpInitializeObjectRefInfo.c)
 *     ObpInitializeObjectRefsByStack @ 0x1407C7DF8 (ObpInitializeObjectRefsByStack.c)
 *     ObpProcessPushStackInfoList @ 0x1407C7FB8 (ObpProcessPushStackInfoList.c)
 *     EtwTraceObject @ 0x14082DD04 (EtwTraceObject.c)
 *     ObpIsObjectPoolTagTraced @ 0x140ADCF24 (ObpIsObjectPoolTagTraced.c)
 */

void __fastcall ObpRegisterObject(__int64 a1, char a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v7; // rax
  void *v8; // rdx
  signed __int8 v9; // cf
  AutoBoost *v10; // rsi

  if ( (xmmword_140FC0C10 & 0x80u) != 0LL && a2 == 1 )
    EtwTraceObject(4400LL, a1);
  if ( (ObpTraceFlags & 0xF3) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v7 = (AutoBoost *)KeAbPreAcquire((__int64)&ObpStackTraceLock, 0LL, 0LL, a4);
    v9 = _interlockedbittestandset64(&ObpStackTraceLock.Header.Lock, 0LL);
    v10 = v7;
    if ( v9 )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&ObpStackTraceLock, v7, (__int64)&ObpStackTraceLock);
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
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock.Header.Lock);
    KeAbPostRelease((unsigned __int64)&ObpStackTraceLock);
    KeLeaveGuardedRegion();
  }
}
