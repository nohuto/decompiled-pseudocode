/*
 * XREFs of ?TryReadDWord@MonitorDataStore@DxgMonitor@@UEBA_NPEAXPEBGAEAK@Z @ 0x14027F560
 * Callers:
 *     <none>
 * Callees:
 *     ??$TryReadData@K@MonitorDataStore@DxgMonitor@@AEBA_NPEAXPEBGAEAK@Z @ 0x1403BF4F0 (--$TryReadData@K@MonitorDataStore@DxgMonitor@@AEBA_NPEAXPEBGAEAK@Z.c)
 */

__int64 __fastcall DxgMonitor::MonitorDataStore::TryReadDWord(
        DxgMonitor::MonitorDataStore *this,
        void *a2,
        const unsigned __int16 *a3,
        unsigned int *a4)
{
  return DxgMonitor::MonitorDataStore::TryReadData<unsigned long>(this, a2, a3, a4);
}
