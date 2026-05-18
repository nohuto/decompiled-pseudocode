/*
 * XREFs of sub_180057224 @ 0x180057224
 * Callers:
 *     sub_1800DBEAD @ 0x1800DBEAD (sub_1800DBEAD.c)
 *     ?dtor$0@?0??GetBitSet@SchedulerBase@details@Concurrency@@QEAA?AVQuickBitSet@23@PEBVlocation@3@@Z@4HA_2 @ 0x1800DBF07 (-dtor$0@-0--GetBitSet@SchedulerBase@details@Concurrency@@QEAA-AVQuickBitSet@23@PEBV_ea_1800DBF07.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 */

__int64 __fastcall sub_180057224(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 40);
  if ( v1 )
    return sub_180010EC8(v1);
  return result;
}
