/*
 * XREFs of AreHashesEqual @ 0x1401CF504
 * Callers:
 *     ?AnyHashPresentInCurrent@CMonitorTopology@@QEAA_NAEBUMonitorId@1@@Z @ 0x140029FC4 (-AnyHashPresentInCurrent@CMonitorTopology@@QEAA_NAEBUMonitorId@1@@Z.c)
 *     ?Compare@MonitorId@CMonitorTopology@@SA_NAEBU12@0@Z @ 0x1401CF468 (-Compare@MonitorId@CMonitorTopology@@SA_NAEBU12@0@Z.c)
 *     ?ContainsHash@MonitorId@CMonitorTopology@@QEBA_NAEBUD3DKMT_HASH@@PEAI@Z @ 0x140226878 (-ContainsHash@MonitorId@CMonitorTopology@@QEBA_NAEBUD3DKMT_HASH@@PEAI@Z.c)
 *     ?ValidateTopology@CMonitorTopology@@SAXPEBV1@@Z @ 0x1402AD624 (-ValidateTopology@CMonitorTopology@@SAXPEBV1@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall AreHashesEqual(const void *a1, const void *a2)
{
  return RtlCompareMemory(a1, a2, 0x14uLL) == 20;
}
