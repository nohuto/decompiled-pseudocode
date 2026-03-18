/*
 * XREFs of ?OnDestroyed@CLastWokenThread@@QEAAXPEBUtagTHREADINFO@@@Z @ 0x140110FC8
 * Callers:
 *     xxxDestroyThreadInfo @ 0x140164194 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B1C0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B254 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?_SetForegroundPriority@ForegroundBoost@@YAXPEAUtagPROCESSINFO@@PEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@W4ForegroundBoostSource@1@@Z @ 0x14009D1A0 (-_SetForegroundPriority@ForegroundBoost@@YAXPEAUtagPROCESSINFO@@PEBUtagTHREADINFO@@W4ForegroundP.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CLastWokenThread::OnDestroyed(CLastWokenThread *this, const struct tagTHREADINFO *a2)
{
  __int64 v4; // rdx
  __int64 *v5; // r10
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx

  if ( (_InterlockedCompareExchange((volatile signed __int32 *)a2 + 132, 0, 0) & 1) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 95LL);
  W32AcquirePushLockExclusiveEx(this, 0);
  v5 = (__int64 *)*((_QWORD *)this + 1);
  if ( a2 == (const struct tagTHREADINFO *)v5 )
  {
    *((_BYTE *)this + 16) = 0;
    v6 = *(_QWORD *)(*((_QWORD *)a2 + 58) + 320LL);
    if ( !v6 )
    {
      if ( *((_BYTE *)this + 17) )
      {
        ForegroundBoost::_SetForegroundPriority(v5[58], (__int64)v5, 0, 0x10u);
        *((_BYTE *)this + 17) = 0;
        *((_QWORD *)this + 3) = 0LL;
      }
      if ( !*(_QWORD *)(W32GetUserSessionState(v6, v4) + 18904) )
      {
        *((_QWORD *)this + 1) = 0LL;
        goto LABEL_11;
      }
      v6 = *(_QWORD *)(W32GetUserSessionState(v8, v7) + 18904);
    }
    *((_QWORD *)this + 1) = v6;
  }
LABEL_11:
  W32ReleasePushLockExclusiveEx(this, 0LL);
}
