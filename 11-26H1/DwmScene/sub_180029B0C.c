/*
 * XREFs of sub_180029B0C @ 0x180029B0C
 * Callers:
 *     sub_180029B2C @ 0x180029B2C (sub_180029B2C.c)
 *     sub_180029DD4 @ 0x180029DD4 (sub_180029DD4.c)
 *     sub_180033140 @ 0x180033140 (sub_180033140.c)
 *     sub_180033E4C @ 0x180033E4C (sub_180033E4C.c)
 *     sub_180033EEC @ 0x180033EEC (sub_180033EEC.c)
 *     sub_180033F34 @ 0x180033F34 (sub_180033F34.c)
 *     sub_180033FB8 @ 0x180033FB8 (sub_180033FB8.c)
 *     sub_18003412C @ 0x18003412C (sub_18003412C.c)
 *     sub_180035438 @ 0x180035438 (sub_180035438.c)
 *     sub_180036040 @ 0x180036040 (sub_180036040.c)
 *     sub_18003608C @ 0x18003608C (sub_18003608C.c)
 *     sub_180036410 @ 0x180036410 (sub_180036410.c)
 *     sub_1800553F4 @ 0x1800553F4 (sub_1800553F4.c)
 *     sub_18005DEB0 @ 0x18005DEB0 (sub_18005DEB0.c)
 *     ?dtor$0@?0??GetBitSet@SchedulerBase@details@Concurrency@@QEAA?AVQuickBitSet@23@PEBVlocation@3@@Z@4HA_0 @ 0x1800D92B9 (-dtor$0@-0--GetBitSet@SchedulerBase@details@Concurrency@@QEAA-AVQuickBitSet@23@PEBV_ea_1800D92B9.c)
 *     sub_1800D9F01 @ 0x1800D9F01 (sub_1800D9F01.c)
 *     sub_1800D9FC7 @ 0x1800D9FC7 (sub_1800D9FC7.c)
 *     sub_1800D9FD9 @ 0x1800D9FD9 (sub_1800D9FD9.c)
 *     sub_1800DA021 @ 0x1800DA021 (sub_1800DA021.c)
 *     sub_1800DA183 @ 0x1800DA183 (sub_1800DA183.c)
 *     sub_1800DA27F @ 0x1800DA27F (sub_1800DA27F.c)
 *     sub_1800DA2FB @ 0x1800DA2FB (sub_1800DA2FB.c)
 *     unknown_libname_45 @ 0x1800DBD2D (unknown_libname_45.c)
 * Callees:
 *     sub_1800298C4 @ 0x1800298C4 (sub_1800298C4.c)
 */

__int64 __fastcall sub_180029B0C(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
    return sub_1800298C4(*(_QWORD *)a1);
  return result;
}
