/*
 * XREFs of ??1CQoSReport@@QEAA@XZ @ 0x1401CBBA0
 * Callers:
 *     ?Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1401D6EE0 (-Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_AgenticSessionCapQoSPolicy__private_IsEnabledDeviceUsageNoInline @ 0x1401CC878 (Feature_AgenticSessionCapQoSPolicy__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall CQoSReport::~CQoSReport(CQoSReport **this)
{
  if ( (unsigned int)Feature_AgenticSessionCapQoSPolicy__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( this[1] != (CQoSReport *)(this + 1) )
      MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 494);
    if ( this[3] != (CQoSReport *)(this + 3) )
      MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 495);
  }
}
