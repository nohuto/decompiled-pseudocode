/*
 * XREFs of sub_180031F70 @ 0x180031F70
 * Callers:
 *     sub_18002ECF8 @ 0x18002ECF8 (sub_18002ECF8.c)
 *     unknown_libname_5 @ 0x18002F180 (unknown_libname_5.c)
 *     sub_1800357BC @ 0x1800357BC (sub_1800357BC.c)
 *     sub_18004AD40 @ 0x18004AD40 (sub_18004AD40.c)
 *     sub_180099888 @ 0x180099888 (sub_180099888.c)
 * Callees:
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 */

_QWORD *__fastcall sub_180031F70(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // r8
  volatile signed __int32 *v5; // rcx

  v2 = *a2;
  v4 = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  *a1 = v2;
  v5 = (volatile signed __int32 *)a1[1];
  a1[1] = v4;
  if ( v5 )
    sub_180010F00(v5);
  return a1;
}
