/*
 * XREFs of ?UninitializeSensor@CBaseInput@@QEAAXXZ @ 0x14021896C
 * Callers:
 *     CleanupSensorExplicitly @ 0x140196C90 (CleanupSensorExplicitly.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ @ 0x1400CFCDC (-ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ.c)
 *     ?CleanupHandles@CRIMBase@@IEAAXXZ @ 0x140129C98 (-CleanupHandles@CRIMBase@@IEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall CBaseInput::UninitializeSensor(CBaseInput *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

  if ( !CBaseInput::ExecutingOnSensorHostingThread(this) )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 979);
  (*(void (__fastcall **)(CBaseInput *))(*(_QWORD *)this + 40LL))(this);
  CRIMBase::CleanupHandles(this, v2, v3, v4);
  W32AcquirePushLockExclusiveEx((CBaseInput *)((char *)this + 1312));
  *((_QWORD *)this + 165) = 0LL;
  W32ReleasePushLockExclusiveEx((CBaseInput *)((char *)this + 1312));
}
