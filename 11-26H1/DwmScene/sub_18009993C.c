/*
 * XREFs of sub_18009993C @ 0x18009993C
 * Callers:
 *     sub_1800597B4 @ 0x1800597B4 (sub_1800597B4.c)
 *     sub_180059AA0 @ 0x180059AA0 (sub_180059AA0.c)
 *     sub_18006EC64 @ 0x18006EC64 (sub_18006EC64.c)
 *     sub_18006F058 @ 0x18006F058 (sub_18006F058.c)
 *     sub_18008F8D0 @ 0x18008F8D0 (sub_18008F8D0.c)
 *     ?dtor$0@?0??do_put@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@_NAEAVios_base@2@_WO@Z@4HA_5 @ 0x1800DBF46 (-dtor$0@-0--do_put@-$money_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@s_ea_1800DBF46.c)
 *     sub_1800DBF8E @ 0x1800DBF8E (sub_1800DBF8E.c)
 *     sub_1800DC00C @ 0x1800DC00C (sub_1800DC00C.c)
 *     sub_1800DCCCB @ 0x1800DCCCB (sub_1800DCCCB.c)
 *     sub_1800DCCDD @ 0x1800DCCDD (sub_1800DCCDD.c)
 *     sub_1800DDFD7 @ 0x1800DDFD7 (sub_1800DDFD7.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_1800382B8 @ 0x1800382B8 (sub_1800382B8.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_18009993C(__int64 a1)
{
  __int64 result; // rax
  volatile signed __int32 *v3; // rcx
  __int64 (__fastcall ***v4)(_QWORD); // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+28h] [rbp-10h]

  result = (__int64)sub_1800382B8(a1, &v4);
  if ( v4 )
    result = (**v4)(v4);
  if ( v5 )
    result = sub_180010EC8(v5);
  v3 = *(volatile signed __int32 **)(a1 + 8);
  if ( v3 )
    return sub_180010F00(v3);
  return result;
}
