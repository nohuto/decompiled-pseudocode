/*
 * XREFs of ??3@YAXPEAX@Z @ 0x14008EAB0
 * Callers:
 *     ??_G?$ObjectTriageData@U_NDIS_COMMON_OPEN_BLOCK@@@@UEAAPEAXI@Z @ 0x140093200 (--_G-$ObjectTriageData@U_NDIS_COMMON_OPEN_BLOCK@@@@UEAAPEAXI@Z.c)
 *     ??_E?$DriverCallbackBase@U_NDIS_M_DRIVER_BLOCK@@X@Details@AzTelemetry@@UEAAPEAXI@Z @ 0x14009EF90 (--_E-$DriverCallbackBase@U_NDIS_M_DRIVER_BLOCK@@X@Details@AzTelemetry@@UEAAPEAXI@Z.c)
 *     ??_GMiniportAddDeviceTelemetry@AzTelemetry@@UEAAPEAXI@Z @ 0x14009EFC0 (--_GMiniportAddDeviceTelemetry@AzTelemetry@@UEAAPEAXI@Z.c)
 *     ??_GMiniportDriverUnload@AzTelemetry@@UEAAPEAXI@Z @ 0x14009F000 (--_GMiniportDriverUnload@AzTelemetry@@UEAAPEAXI@Z.c)
 *     ??_EMiniportFilterResourceRequirements@AzTelemetry@@UEAAPEAXI@Z @ 0x14009F040 (--_EMiniportFilterResourceRequirements@AzTelemetry@@UEAAPEAXI@Z.c)
 *     ??_GMiniportRemoveDeviceTelemetry@AzTelemetry@@UEAAPEAXI@Z @ 0x14009F080 (--_GMiniportRemoveDeviceTelemetry@AzTelemetry@@UEAAPEAXI@Z.c)
 *     ??_GMiniportStartDevice@AzTelemetry@@UEAAPEAXI@Z @ 0x14009F0C0 (--_GMiniportStartDevice@AzTelemetry@@UEAAPEAXI@Z.c)
 *     ??_EMiniportDevicePnPEventNotify@AzTelemetry@@UEAAPEAXI@Z @ 0x1400E6F40 (--_EMiniportDevicePnPEventNotify@AzTelemetry@@UEAAPEAXI@Z.c)
 *     ??_EMiniportHaltTelemetry@AzTelemetry@@UEAAPEAXI@Z @ 0x1400E6F80 (--_EMiniportHaltTelemetry@AzTelemetry@@UEAAPEAXI@Z.c)
 *     ??_ETriageData@@UEAAPEAXI@Z @ 0x1400E7B40 (--_ETriageData@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall operator delete(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0);
}
