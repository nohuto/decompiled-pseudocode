/*
 * XREFs of sub_18008A458 @ 0x18008A458
 * Callers:
 *     sub_180089B38 @ 0x180089B38 (sub_180089B38.c)
 *     sub_180089CE8 @ 0x180089CE8 (sub_180089CE8.c)
 *     sub_18008A484 @ 0x18008A484 (sub_18008A484.c)
 *     sub_1800D5274 @ 0x1800D5274 (sub_1800D5274.c)
 *     sub_1800DDD60 @ 0x1800DDD60 (sub_1800DDD60.c)
 *     sub_1800DDD84 @ 0x1800DDD84 (sub_1800DDD84.c)
 *     sub_1800DDDC2 @ 0x1800DDDC2 (sub_1800DDDC2.c)
 *     sub_1800DDDF8 @ 0x1800DDDF8 (sub_1800DDDF8.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_18008A458(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 8LL))(v1, 1LL);
  return result;
}
