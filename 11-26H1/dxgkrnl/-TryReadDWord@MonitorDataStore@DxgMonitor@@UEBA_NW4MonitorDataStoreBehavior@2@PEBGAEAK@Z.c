/*
 * XREFs of ?TryReadDWord@MonitorDataStore@DxgMonitor@@UEBA_NW4MonitorDataStoreBehavior@2@PEBGAEAK@Z @ 0x14027F580
 * Callers:
 *     <none>
 * Callees:
 *     ??$TryReadData@K@MonitorDataStore@DxgMonitor@@AEBA_NW4MonitorDataStoreBehavior@1@PEBGAEAK@Z @ 0x1403BF364 (--$TryReadData@K@MonitorDataStore@DxgMonitor@@AEBA_NW4MonitorDataStoreBehavior@1@PEBGAEAK@Z.c)
 */

__int64 __fastcall DxgMonitor::MonitorDataStore::TryReadDWord(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return DxgMonitor::MonitorDataStore::TryReadData<unsigned long>(a1, a2, a3, a4);
}
