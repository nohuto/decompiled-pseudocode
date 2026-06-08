/*
 * XREFs of PepUpdateIdleStateWorker @ 0x14003ADA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 */

void __fastcall PepUpdateIdleStateWorker(PDEVICE_OBJECT DeviceObject, PVOID Context)
{
  _BYTE *DeviceExtension; // rbx

  DeviceExtension = DeviceObject->DeviceExtension;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1400191B8,
    0LL);
  DeviceExtension[1168] = 0;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1400191B8);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *((_QWORD *)DeviceExtension + 26),
    0LL);
  ((void (__fastcall *)(_BYTE *))qword_1400196F0)(DeviceExtension);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *((_QWORD *)DeviceExtension + 26));
}
