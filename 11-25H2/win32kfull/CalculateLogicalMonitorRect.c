/*
 * XREFs of CalculateLogicalMonitorRect @ 0x14002428C
 * Callers:
 *     ?MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@UtagRECT@@KK@Z @ 0x140022A24 (-MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@UtagRECT@@KK@Z.c)
 *     ?NeedsMigration@CRecalcState@@AEBA_NPEBUtagWND@@@Z @ 0x140024CF0 (-NeedsMigration@CRecalcState@@AEBA_NPEBUtagWND@@@Z.c)
 *     _anonymous_namespace_::xxxNormalizeRect_0 @ 0x14014DEF4 (_anonymous_namespace_--xxxNormalizeRect_0.c)
 *     ?LogicalWorkArea@MonitorData@CMonitorTopology@@QEBA?AUtagRECT@@PEBUtagWND@@@Z @ 0x14026BFEC (-LogicalWorkArea@MonitorData@CMonitorTopology@@QEBA-AUtagRECT@@PEBUtagWND@@@Z.c)
 *     ?LogicalToPhysicalDPIRect@MonitorData@CMonitorTopology@@QEBA?AUtagRECT@@PEAU3@K@Z @ 0x1402ACE7C (-LogicalToPhysicalDPIRect@MonitorData@CMonitorTopology@@QEBA-AUtagRECT@@PEAU3@K@Z.c)
 *     ?PhysicalToLogicalDPIRect@MonitorData@CMonitorTopology@@QEBA?AUtagRECT@@PEAU3@K@Z @ 0x1402ACFA0 (-PhysicalToLogicalDPIRect@MonitorData@CMonitorTopology@@QEBA-AUtagRECT@@PEAU3@K@Z.c)
 *     ?PostRecalcMessages@CRecalcProp@@AEAAXPEAUtagWND@@PEBVCMonitorTopology@@1@Z @ 0x1402C5040 (-PostRecalcMessages@CRecalcProp@@AEAAXPEAUtagWND@@PEBVCMonitorTopology@@1@Z.c)
 *     ?SetPreviousMonitorData@CWindowAction@AdvancedWindowPos@@QEAAXPEBUMonitorData@CMonitorTopology@@PEAUtagWND@@@Z @ 0x1402C5B14 (-SetPreviousMonitorData@CWindowAction@AdvancedWindowPos@@QEAAXPEBUMonitorData@CMonitorTopology@@.c)
 *     ?xxxResolveArrangePosition@@YA_NPEAUtagWND@@PEBVCMonitorTopology@@PEAU_WINDOW_ACTION@@@Z @ 0x1402D2C50 (-xxxResolveArrangePosition@@YA_NPEAUtagWND@@PEBVCMonitorTopology@@PEAU_WINDOW_ACTION@@@Z.c)
 *     ?xxxTransformRectToMonitor@AdvancedWindowPos@@YA?AUtagRECT@@PEAUtagWND@@AEBU2@PEBUMonitorData@CMonitorTopology@@2_N@Z @ 0x1402D9920 (-xxxTransformRectToMonitor@AdvancedWindowPos@@YA-AUtagRECT@@PEAUtagWND@@AEBU2@PEBUMonitorData@CM.c)
 * Callees:
 *     <none>
 */

__m128i *__fastcall CalculateLogicalMonitorRect(
        __m128i *a1,
        __m128i *a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        unsigned __int16 a5)
{
  INT v6; // esi
  INT v7; // r14d
  INT v8; // edi
  INT v9; // eax
  INT v10; // ebp
  __m128i v11; // xmm6
  INT v12; // r8d
  INT v13; // ebx
  int v14; // esi
  int v15; // eax
  int v16; // edi
  __int64 a; // [rsp+60h] [rbp+8h]
  __int64 v19; // [rsp+68h] [rbp+10h]

  v6 = a3;
  *a1 = *a2;
  if ( a4 )
  {
    v7 = a4;
    a = a1->m128i_i64[0];
    v8 = EngMulDiv(a1->m128i_i64[0], a4, a5);
    v9 = EngMulDiv(SHIDWORD(a), v7, a5);
    v10 = v6;
    v11 = *a1;
    v19 = a1->m128i_i64[0];
    v12 = v6;
    v13 = v9;
    v14 = _mm_cvtsi128_si32(*a1);
    v15 = v8 + EngMulDiv(v14 - a1->m128i_i64[0], v7, v12);
    v16 = _mm_cvtsi128_si32(_mm_srli_si128(v11, 4));
    a1->m128i_i32[0] = v15;
    a1->m128i_i32[1] = v13 + EngMulDiv(v16 - HIDWORD(v19), v7, v10);
    a1->m128i_i32[2] = EngMulDiv(_mm_cvtsi128_si32(_mm_srli_si128(v11, 8)) - v14, v7, v10) + a1->m128i_i32[0];
    a1->m128i_i32[3] = EngMulDiv(_mm_cvtsi128_si32(_mm_srli_si128(v11, 12)) - v16, v7, v10) + a1->m128i_i32[1];
  }
  return a1;
}
