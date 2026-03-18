/*
 * XREFs of ?GetSystemMetricsKey@CInputSystemMetrics@@AEBAKKK@Z @ 0x1401C0660
 * Callers:
 *     ?UpdatePointerDeviceSystemMetrics@CInputSystemMetrics@@QEAAXPEBUDEVICEINFO@@_N@Z @ 0x1401BF034 (-UpdatePointerDeviceSystemMetrics@CInputSystemMetrics@@QEAAXPEBUDEVICEINFO@@_N@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CInputSystemMetrics::GetSystemMetricsKey(CInputSystemMetrics *this, int a2, unsigned int a3)
{
  char v4; // bl
  int v5; // eax

  v4 = a2;
  if ( (a2 & 0xFFFFFF30) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 159);
  v5 = 0xFFFF;
  if ( a3 <= 0xFFFF )
    v5 = a3;
  return v4 & 0xCF | (unsigned int)(v5 << 8);
}
