/*
 * XREFs of ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1400A3000
 * Callers:
 *     NtDCompositionGetFrameSurfaceUpdates @ 0x1400A2A90 (NtDCompositionGetFrameSurfaceUpdates.c)
 *     NtDCompositionGetFrameStatistics @ 0x1400A2D90 (NtDCompositionGetFrameStatistics.c)
 *     NtDCompositionGetConnectionBatch @ 0x1400A4A90 (NtDCompositionGetConnectionBatch.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1400A9050 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     NtDCompositionWaitForCompositorClock @ 0x1400A9220 (NtDCompositionWaitForCompositorClock.c)
 *     ?Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1401D6EE0 (-Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ??1CConnection@DirectComposition@@AEAA@XZ @ 0x1401B55DC (--1CConnection@DirectComposition@@AEAA@XZ.c)
 */

DirectComposition::CConnection *__fastcall DirectComposition::CConnection::`scalar deleting destructor'(
        DirectComposition::CConnection *Buffer)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

  DirectComposition::CConnection::~CConnection(Buffer);
  GreDeleteFastMutex((char *)Buffer, v2, v3, v4);
  return Buffer;
}
