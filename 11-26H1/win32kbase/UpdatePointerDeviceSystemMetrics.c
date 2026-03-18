/*
 * XREFs of UpdatePointerDeviceSystemMetrics @ 0x140185818
 * Callers:
 *     ?OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1401857A0 (-OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 *     ?OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x140219730 (-OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     ?UpdatePointerDeviceSystemMetrics@CInputSystemMetrics@@QEAAXPEBUDEVICEINFO@@_N@Z @ 0x1401BF034 (-UpdatePointerDeviceSystemMetrics@CInputSystemMetrics@@QEAAXPEBUDEVICEINFO@@_N@Z.c)
 */

void __fastcall UpdatePointerDeviceSystemMetrics(struct DEVICEINFO *a1, BOOL a2, int a3)
{
  bool v3; // bl
  __int64 UserSessionState; // rax

  v3 = a2;
  UserSessionState = W32GetUserSessionState((_DWORD)a1, a2, a3);
  CInputSystemMetrics::UpdatePointerDeviceSystemMetrics(*(CInputSystemMetrics **)(UserSessionState + 18992), a1, v3);
}
