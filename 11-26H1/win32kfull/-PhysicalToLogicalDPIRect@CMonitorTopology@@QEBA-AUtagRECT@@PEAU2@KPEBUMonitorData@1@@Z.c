/*
 * XREFs of ?PhysicalToLogicalDPIRect@CMonitorTopology@@QEBA?AUtagRECT@@PEAU2@KPEBUMonitorData@1@@Z @ 0x1402C8ECC
 * Callers:
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402EAA34 (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 * Callees:
 *     ?MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@UtagRECT@@KK@Z @ 0x14015FDDC (-MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@UtagRECT@@KK@Z.c)
 *     ?PhysicalToLogicalDPIRect@MonitorData@CMonitorTopology@@QEBA?AUtagRECT@@PEAU3@K@Z @ 0x1402C8F38 (-PhysicalToLogicalDPIRect@MonitorData@CMonitorTopology@@QEBA-AUtagRECT@@PEAU3@K@Z.c)
 */

struct tagRECT *__fastcall CMonitorTopology::PhysicalToLogicalDPIRect(
        CMonitorTopology *this,
        struct tagRECT *__return_ptr retstr,
        struct tagRECT *a3,
        unsigned int a4,
        const struct CMonitorTopology::MonitorData *a5)
{
  CMonitorTopology::MonitorData *v5; // rax
  struct tagRECT v10; // [rsp+20h] [rbp-18h] BYREF

  v5 = a5;
  if ( !a5 )
  {
    v10 = *a3;
    v5 = CMonitorTopology::MonitorDataFromRect(this, &v10, 2, 0x12u);
  }
  CMonitorTopology::MonitorData::PhysicalToLogicalDPIRect(v5, retstr, a3, a4);
  return retstr;
}
