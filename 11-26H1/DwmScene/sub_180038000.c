/*
 * XREFs of sub_180038000 @ 0x180038000
 * Callers:
 *     sub_1800319D0 @ 0x1800319D0 (sub_1800319D0.c)
 *     sub_180076500 @ 0x180076500 (sub_180076500.c)
 *     sub_18007658C @ 0x18007658C (sub_18007658C.c)
 *     sub_180076C20 @ 0x180076C20 (sub_180076C20.c)
 *     sub_180079330 @ 0x180079330 (sub_180079330.c)
 *     sub_1800D9939 @ 0x1800D9939 (sub_1800D9939.c)
 *     sub_1800D9984 @ 0x1800D9984 (sub_1800D9984.c)
 *     sub_1800DA978 @ 0x1800DA978 (sub_1800DA978.c)
 *     sub_1800DAC1B @ 0x1800DAC1B (sub_1800DAC1B.c)
 *     ?dtor$0@?0??do_transform@?$collate@G@std@@MEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@PEBG0@Z@4HA_1 @ 0x1800DCB29 (-dtor$0@-0--do_transform@-$collate@G@std@@MEBA-AV-$basic_string@GU-$char_traits@G@s_ea_1800DCB29.c)
 *     sub_1800DDA38 @ 0x1800DDA38 (sub_1800DDA38.c)
 *     sub_1800DDF49 @ 0x1800DDF49 (sub_1800DDF49.c)
 *     sub_1800DE149 @ 0x1800DE149 (sub_1800DE149.c)
 *     sub_1800E53B2 @ 0x1800E53B2 (sub_1800E53B2.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 */

__int64 __fastcall sub_180038000(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    result = sub_18000E26C(v2, (*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
