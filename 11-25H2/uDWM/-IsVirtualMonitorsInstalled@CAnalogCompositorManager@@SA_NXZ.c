/*
 * XREFs of ?IsVirtualMonitorsInstalled@CAnalogCompositorManager@@SA_NXZ @ 0x1800A2A40
 * Callers:
 *     ?OnMonitorChangedNotification@CAnalogCompositorManager@@AEAAJXZ @ 0x1800A2C40 (-OnMonitorChangedNotification@CAnalogCompositorManager@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool CAnalogCompositorManager::IsVirtualMonitorsInstalled(void)
{
  int v1; // [rsp+50h] [rbp+8h] BYREF
  DWORD v2; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0;
  v2 = 4;
  return !RegGetValueW(
            HKEY_LOCAL_MACHINE,
            L"System\\CurrentControlSet\\Control\\GraphicsDrivers",
            L"IsVirtualMonitorsInstalled",
            0x18u,
            0LL,
            &v1,
            &v2)
      && v1 == 1;
}
