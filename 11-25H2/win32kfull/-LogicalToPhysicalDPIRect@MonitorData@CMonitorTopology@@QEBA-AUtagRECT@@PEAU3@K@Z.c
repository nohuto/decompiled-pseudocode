/*
 * XREFs of ?LogicalToPhysicalDPIRect@MonitorData@CMonitorTopology@@QEBA?AUtagRECT@@PEAU3@K@Z @ 0x1402ACE7C
 * Callers:
 *     ?TransformWindowActionToPhysical@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z @ 0x1402D5F10 (-TransformWindowActionToPhysical@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z.c)
 * Callees:
 *     CalculateLogicalMonitorRect @ 0x14002428C (CalculateLogicalMonitorRect.c)
 *     ScaleDPIRect @ 0x140159C30 (ScaleDPIRect.c)
 */

struct tagRECT *__fastcall CMonitorTopology::MonitorData::LogicalToPhysicalDPIRect(
        CMonitorTopology::MonitorData *this,
        struct tagRECT *__return_ptr retstr,
        __m128i *a3,
        unsigned int a4)
{
  unsigned __int16 v7; // di
  __m128i *v8; // rax
  __m128i v10[2]; // [rsp+30h] [rbp-28h] BYREF

  *retstr = *(struct tagRECT *)a3;
  v7 = (a4 >> 8) & 0x1FF;
  if ( v7 )
  {
    v8 = CalculateLogicalMonitorRect(
           v10,
           (__m128i *)((char *)this + 8),
           *((_WORD *)this + 20),
           v7,
           *((_WORD *)this + 32));
    ScaleDPIRect(retstr, a3, *((_WORD *)this + 20), v7, *((_QWORD *)this + 1), v8->m128i_i64[0]);
  }
  return retstr;
}
