/*
 * XREFs of ?OnDestroyed@CLastWokenThread@@QEAAXPEBUtagTHREADINFO@@@Z @ 0x1400CFD9C
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1400BA274 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?SetForegroundPriority@ForegroundBoost@@YAXPEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@W4ForegroundBoostSource@1@@Z @ 0x1400CCB40 (-SetForegroundPriority@ForegroundBoost@@YAXPEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@W4Fore.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CLastWokenThread::OnDestroyed(CLastWokenThread *this, const struct tagTHREADINFO *a2)
{
  int v4; // edx
  int v5; // r8d
  const struct tagTHREADINFO *v6; // r9
  __int64 v7; // rcx
  int v8; // edx
  int v9; // ecx
  int v10; // r8d

  if ( (_InterlockedCompareExchange((volatile signed __int32 *)a2 + 130, 0, 0) & 1) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 95LL);
  W32AcquirePushLockExclusiveEx(this);
  v6 = (const struct tagTHREADINFO *)*((_QWORD *)this + 1);
  if ( a2 == v6 )
  {
    *((_BYTE *)this + 16) = 0;
    v7 = *(_QWORD *)(*((_QWORD *)a2 + 57) + 328LL);
    if ( !v7 )
    {
      if ( *((_BYTE *)this + 17) )
      {
        ForegroundBoost::SetForegroundPriority((__int64)v6, 0, 0x10u);
        *((_BYTE *)this + 17) = 0;
        *((_QWORD *)this + 3) = 0LL;
      }
      if ( !*(_QWORD *)(W32GetUserSessionState(v7, v4, v5) + 18944) )
      {
        *((_QWORD *)this + 1) = 0LL;
        goto LABEL_4;
      }
      v7 = *(_QWORD *)(W32GetUserSessionState(v9, v8, v10) + 18944);
    }
    *((_QWORD *)this + 1) = v7;
  }
LABEL_4:
  W32ReleasePushLockExclusiveEx(this);
}
