/*
 * XREFs of DpiGetWholeMonitorDescriptor @ 0x140094D34
 * Callers:
 *     ?GetWholeMonitorDescriptor@KernelDriver@@UEBAJPEAU_DXGK_MONITOR_DESCRIPTOR@@@Z @ 0x14027E9F0 (-GetWholeMonitorDescriptor@KernelDriver@@UEBAJPEAU_DXGK_MONITOR_DESCRIPTOR@@@Z.c)
 * Callees:
 *     DpiFdoGetMonitorDescriptorFromDriver @ 0x140241C14 (DpiFdoGetMonitorDescriptorFromDriver.c)
 *     DxgkReleaseAdapterDdiSync @ 0x140319D70 (DxgkReleaseAdapterDdiSync.c)
 *     DxgkAcquireAdapterDdiSync @ 0x140319DFC (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterOpmI2CSync @ 0x1403DF030 (DxgkReleaseAdapterOpmI2CSync.c)
 *     DxgkAcquireAdapterOpmI2CSync @ 0x1403EA9FC (DxgkAcquireAdapterOpmI2CSync.c)
 */

__int64 __fastcall DpiGetWholeMonitorDescriptor(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // rsi

  v2 = *(_QWORD *)(a1 + 64);
  v4 = *(_QWORD *)(*(_QWORD *)(v2 + 32) + 64LL);
  DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(v4 + 4032));
  KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v2 + 936) + 72LL), Executive, 0, 0, 0LL);
  DxgkAcquireAdapterDdiSync(*(_QWORD *)(v4 + 4032), 1LL);
  LODWORD(a2) = DpiFdoGetMonitorDescriptorFromDriver(v4, *(unsigned int *)(*(_QWORD *)(v2 + 936) + 24LL), a2);
  DxgkReleaseAdapterDdiSync(*(_QWORD *)(v4 + 4032));
  KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v2 + 936) + 72LL), 0);
  DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(v4 + 4032));
  return (unsigned int)a2;
}
