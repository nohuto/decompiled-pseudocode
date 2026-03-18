/*
 * XREFs of ?WriteSystemMetricsKeyToAllHives@CInputSystemMetrics@@AEBAXK@Z @ 0x140190B78
 * Callers:
 *     ForceUpdatePointerDeviceSystemMetrics @ 0x1401919F0 (ForceUpdatePointerDeviceSystemMetrics.c)
 *     ?UpdatePointerDeviceSystemMetrics@CInputSystemMetrics@@QEAAXPEBUDEVICEINFO@@_N@Z @ 0x1401BF034 (-UpdatePointerDeviceSystemMetrics@CInputSystemMetrics@@QEAAXPEBUDEVICEINFO@@_N@Z.c)
 * Callees:
 *     ?WriteSystemMetricsKey@CInputSystemMetrics@@AEBAXKW4tagHPD_REGISTRY_HIVE@@@Z @ 0x1401BE224 (-WriteSystemMetricsKey@CInputSystemMetrics@@AEBAXKW4tagHPD_REGISTRY_HIVE@@@Z.c)
 */

void __fastcall CInputSystemMetrics::WriteSystemMetricsKeyToAllHives(CInputSystemMetrics *this, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx

  v2 = a2;
  CInputSystemMetrics::WriteSystemMetricsKey(this, a2, 0LL);
  CInputSystemMetrics::WriteSystemMetricsKey(v3, v2, 1LL);
}
