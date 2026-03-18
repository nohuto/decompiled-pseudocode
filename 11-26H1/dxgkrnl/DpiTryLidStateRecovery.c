/*
 * XREFs of DpiTryLidStateRecovery @ 0x1400858F4
 * Callers:
 *     ?TryRecovery@DISPLAYSTATECHECKER@@QEAAXXZ @ 0x1401CC0B0 (-TryRecovery@DISPLAYSTATECHECKER@@QEAAXXZ.c)
 * Callees:
 *     DpiAcpiCallAcpiEventHandler @ 0x14005A5C8 (DpiAcpiCallAcpiEventHandler.c)
 */

bool DpiTryLidStateRecovery()
{
  int v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 1;
  return (int)DpiAcpiCallAcpiEventHandler(g_pDeviceObject, 2, 4, (__int64)&v1) >= 0;
}
