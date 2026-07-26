/*
 * XREFs of ?Stop@KStopwatch@@QEAA_KXZ @ 0x140079BF0
 * Callers:
 *     ??1Filter@BindingMetrics@@QEAA@XZ @ 0x14005F2C0 (--1Filter@BindingMetrics@@QEAA@XZ.c)
 *     ??1Protocol@BindingMetrics@@QEAA@XZ @ 0x140063810 (--1Protocol@BindingMetrics@@QEAA@XZ.c)
 *     ??1NdisFreeSharedMemoryTelemetry@@QEAA@XZ @ 0x140065800 (--1NdisFreeSharedMemoryTelemetry@@QEAA@XZ.c)
 *     ??1UpdateBindings@BindingMetrics@@QEAA@XZ @ 0x14006BEA0 (--1UpdateBindings@BindingMetrics@@QEAA@XZ.c)
 *     ??1Miniport@BindingMetrics@@QEAA@XZ @ 0x14006E7C0 (--1Miniport@BindingMetrics@@QEAA@XZ.c)
 *     ??1MiniportHaltTelemetry@AzTelemetry@@UEAA@XZ @ 0x140070410 (--1MiniportHaltTelemetry@AzTelemetry@@UEAA@XZ.c)
 *     ??1MiniportDevicePnPEventNotify@AzTelemetry@@UEAA@XZ @ 0x1400745C0 (--1MiniportDevicePnPEventNotify@AzTelemetry@@UEAA@XZ.c)
 *     ??1MiniportDriverUnload@AzTelemetry@@UEAA@XZ @ 0x14008DAB0 (--1MiniportDriverUnload@AzTelemetry@@UEAA@XZ.c)
 *     ??1NdisAllocateSharedMemoryTelemetry@@QEAA@XZ @ 0x14008F1E0 (--1NdisAllocateSharedMemoryTelemetry@@QEAA@XZ.c)
 *     ??1MiniportAddDeviceTelemetry@AzTelemetry@@UEAA@XZ @ 0x1400E6C7C (--1MiniportAddDeviceTelemetry@AzTelemetry@@UEAA@XZ.c)
 *     ??1MiniportFilterResourceRequirements@AzTelemetry@@UEAA@XZ @ 0x1400E6D30 (--1MiniportFilterResourceRequirements@AzTelemetry@@UEAA@XZ.c)
 *     ??1MiniportRemoveDeviceTelemetry@AzTelemetry@@UEAA@XZ @ 0x1400E6DE4 (--1MiniportRemoveDeviceTelemetry@AzTelemetry@@UEAA@XZ.c)
 *     ??1MiniportStartDevice@AzTelemetry@@UEAA@XZ @ 0x1400E6E80 (--1MiniportStartDevice@AzTelemetry@@UEAA@XZ.c)
 * Callees:
 *     ?GetElapsedTimeInMilliseconds@KStopwatch@@QEBA_KXZ @ 0x14008E5A0 (-GetElapsedTimeInMilliseconds@KStopwatch@@QEBA_KXZ.c)
 */

unsigned __int64 __fastcall KStopwatch::Stop(LARGE_INTEGER *this)
{
  this[2] = KeQueryPerformanceCounter(0LL);
  return KStopwatch::GetElapsedTimeInMilliseconds((KStopwatch *)this);
}
