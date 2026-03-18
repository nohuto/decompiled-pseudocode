/*
 * XREFs of ?PhysicalToLogicalDPIRect@MonitorData@CMonitorTopology@@QEBA?AUtagRECT@@PEAU3@K@Z @ 0x1402C8F38
 * Callers:
 *     ?PhysicalToLogicalDPIRect@CMonitorTopology@@QEBA?AUtagRECT@@PEAU2@KPEBUMonitorData@1@@Z @ 0x1402C8ECC (-PhysicalToLogicalDPIRect@CMonitorTopology@@QEBA-AUtagRECT@@PEAU2@KPEBUMonitorData@1@@Z.c)
 *     ?xxxAdjustRectsForMonitor@AdvancedWindowPos@@YAXPEAUtagWND@@PEBUWindowAction@1@PEAUCHECKPOINT@@PEAUtagRECT@@3PEAPEBUMonitorData@CMonitorTopology@@@Z @ 0x1402E9F0C (-xxxAdjustRectsForMonitor@AdvancedWindowPos@@YAXPEAUtagWND@@PEBUWindowAction@1@PEAUCHECKPOINT@@P.c)
 *     ?xxxModifyActionForArrangement@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z @ 0x1402EBB1C (-xxxModifyActionForArrangement@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z.c)
 * Callees:
 *     CalculateLogicalMonitorRect @ 0x140160158 (CalculateLogicalMonitorRect.c)
 *     ScaleDPIRect @ 0x140176948 (ScaleDPIRect.c)
 */

struct tagRECT *__fastcall CMonitorTopology::MonitorData::PhysicalToLogicalDPIRect(
        CMonitorTopology::MonitorData *this,
        struct tagRECT *__return_ptr retstr,
        __m128i *a3,
        unsigned int a4)
{
  unsigned __int16 v7; // di
  __m128i v8; // xmm0
  __m128i v10[2]; // [rsp+30h] [rbp-28h] BYREF

  *retstr = *(struct tagRECT *)a3;
  v7 = (a4 >> 8) & 0x1FF;
  if ( v7 )
  {
    v8 = *CalculateLogicalMonitorRect(
            v10,
            (__m128i *)((char *)this + 8),
            *((_WORD *)this + 20),
            v7,
            *((_WORD *)this + 32));
    ScaleDPIRect(retstr, a3, v7, *((_WORD *)this + 20), v8.m128i_i64[0], *((_QWORD *)this + 1));
  }
  return retstr;
}
