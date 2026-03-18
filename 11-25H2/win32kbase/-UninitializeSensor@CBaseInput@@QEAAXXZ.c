/*
 * XREFs of ?UninitializeSensor@CBaseInput@@QEAAXXZ @ 0x14018AB08
 * Callers:
 *     CleanupSensorExplicitly @ 0x140215F30 (CleanupSensorExplicitly.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B1C0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B254 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?CleanupHandles@CRIMBase@@IEAAXXZ @ 0x14009C4B8 (-CleanupHandles@CRIMBase@@IEAAXXZ.c)
 *     ?ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ @ 0x14018A4C0 (-ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_KeyboardLEDImprovements__private_IsEnabledDeviceUsageNoInline @ 0x1401B0DA4 (Feature_KeyboardLEDImprovements__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall CBaseInput::UninitializeSensor(CBaseInput *this)
{
  if ( (unsigned int)Feature_KeyboardLEDImprovements__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !CBaseInput::ExecutingOnSensorHostingThread(this) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 990LL);
    (*(void (__fastcall **)(CBaseInput *))(*(_QWORD *)this + 40LL))(this);
    CRIMBase::CleanupHandles((HANDLE *)this);
    W32AcquirePushLockExclusiveEx((CBaseInput *)((char *)this + 1320), 0);
    *((_QWORD *)this + 166) = 0LL;
    W32ReleasePushLockExclusiveEx((CBaseInput *)((char *)this + 1320), 0LL);
  }
  else if ( CBaseInput::ExecutingOnSensorHostingThread(this) )
  {
    (*(void (__fastcall **)(CBaseInput *))(*(_QWORD *)this + 40LL))(this);
    CRIMBase::CleanupHandles((HANDLE *)this);
    *((_QWORD *)this + 164) = 0LL;
  }
}
