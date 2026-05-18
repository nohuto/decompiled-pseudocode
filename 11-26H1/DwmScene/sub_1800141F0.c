/*
 * XREFs of sub_1800141F0 @ 0x1800141F0
 * Callers:
 *     sub_1800134D0 @ 0x1800134D0 (sub_1800134D0.c)
 *     sub_180013A30 @ 0x180013A30 (sub_180013A30.c)
 *     sub_180027EC8 @ 0x180027EC8 (sub_180027EC8.c)
 *     sub_18003143C @ 0x18003143C (sub_18003143C.c)
 *     sub_1800319D0 @ 0x1800319D0 (sub_1800319D0.c)
 *     sub_180034028 @ 0x180034028 (sub_180034028.c)
 *     sub_18003587C @ 0x18003587C (sub_18003587C.c)
 *     sub_18003ADE8 @ 0x18003ADE8 (sub_18003ADE8.c)
 *     sub_18004D70C @ 0x18004D70C (sub_18004D70C.c)
 *     sub_180052460 @ 0x180052460 (sub_180052460.c)
 *     sub_180052670 @ 0x180052670 (sub_180052670.c)
 *     sub_180053894 @ 0x180053894 (sub_180053894.c)
 *     sub_18006B170 @ 0x18006B170 (sub_18006B170.c)
 *     sub_1800778D0 @ 0x1800778D0 (sub_1800778D0.c)
 *     sub_18007A430 @ 0x18007A430 (sub_18007A430.c)
 *     sub_18007A86C @ 0x18007A86C (sub_18007A86C.c)
 *     sub_180081920 @ 0x180081920 (sub_180081920.c)
 *     sub_180082100 @ 0x180082100 (sub_180082100.c)
 *     sub_180083E30 @ 0x180083E30 (sub_180083E30.c)
 *     sub_180084E40 @ 0x180084E40 (sub_180084E40.c)
 *     sub_18008819C @ 0x18008819C (sub_18008819C.c)
 *     sub_18008F4EC @ 0x18008F4EC (sub_18008F4EC.c)
 *     sub_18008F654 @ 0x18008F654 (sub_18008F654.c)
 *     sub_18009BCD8 @ 0x18009BCD8 (sub_18009BCD8.c)
 *     sub_1800D8FF4 @ 0x1800D8FF4 (sub_1800D8FF4.c)
 *     sub_1800D9A1A @ 0x1800D9A1A (sub_1800D9A1A.c)
 *     sub_1800D9CEB @ 0x1800D9CEB (sub_1800D9CEB.c)
 *     sub_1800DA5DA @ 0x1800DA5DA (sub_1800DA5DA.c)
 *     sub_1800DBF6A @ 0x1800DBF6A (sub_1800DBF6A.c)
 *     ?dtor$0@?0??_Current_exception@exception_ptr@std@@SA?AV12@XZ@4HA_0 @ 0x1800DCB56 (-dtor$0@-0--_Current_exception@exception_ptr@std@@SA-AV12@XZ@4HA_0.c)
 *     ?dtor$0@?0???1ScheduleGroupSegmentBase@details@Concurrency@@UEAA@XZ@4HA_0 @ 0x1800DCBA7 (-dtor$0@-0---1ScheduleGroupSegmentBase@details@Concurrency@@UEAA@XZ@4HA_0.c)
 *     unknown_libname_53 @ 0x1800DCC4A (unknown_libname_53.c)
 *     sub_1800DCC9E @ 0x1800DCC9E (sub_1800DCC9E.c)
 *     ?dtor$0@?0??do_transform@?$collate@G@std@@MEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@PEBG0@Z@4HA_3 @ 0x1800E4F7B (-dtor$0@-0--do_transform@-$collate@G@std@@MEBA-AV-$basic_string@GU-$char_traits@G@s_ea_1800E4F7B.c)
 *     sub_1800E542B @ 0x1800E542B (sub_1800E542B.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_1800130CC @ 0x1800130CC (sub_1800130CC.c)
 */

__int64 __fastcall sub_1800141F0(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    sub_1800130CC((__int64)v2, *(_QWORD *)(a1 + 8));
    result = sub_18000E26C(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
