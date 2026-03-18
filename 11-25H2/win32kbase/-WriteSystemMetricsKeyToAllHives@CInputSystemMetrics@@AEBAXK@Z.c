/*
 * XREFs of ?WriteSystemMetricsKeyToAllHives@CInputSystemMetrics@@AEBAXK@Z @ 0x140152E44
 * Callers:
 *     ?UpdatePointerDeviceSystemMetrics@CInputSystemMetrics@@QEAAXPEBUDEVICEINFO@@_N@Z @ 0x14014B6F8 (-UpdatePointerDeviceSystemMetrics@CInputSystemMetrics@@QEAAXPEBUDEVICEINFO@@_N@Z.c)
 *     ?ForceUpdatePointerDeviceSystemMetrics@CInputSystemMetrics@@QEBAXXZ @ 0x14015B8B8 (-ForceUpdatePointerDeviceSystemMetrics@CInputSystemMetrics@@QEBAXXZ.c)
 * Callees:
 *     ?WriteSystemMetricsKey@CInputSystemMetrics@@AEBAXKW4tagHPD_REGISTRY_HIVE@@@Z @ 0x140223C8C (-WriteSystemMetricsKey@CInputSystemMetrics@@AEBAXKW4tagHPD_REGISTRY_HIVE@@@Z.c)
 */

void __fastcall CInputSystemMetrics::WriteSystemMetricsKeyToAllHives(CInputSystemMetrics *this, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx

  v2 = a2;
  CInputSystemMetrics::WriteSystemMetricsKey(this, a2, 0LL);
  CInputSystemMetrics::WriteSystemMetricsKey(v3, v2, 1LL);
}
