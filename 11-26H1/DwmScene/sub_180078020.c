/*
 * XREFs of sub_180078020 @ 0x180078020
 * Callers:
 *     sub_1800765CC @ 0x1800765CC (sub_1800765CC.c)
 *     sub_180080018 @ 0x180080018 (sub_180080018.c)
 *     sub_18008009C @ 0x18008009C (sub_18008009C.c)
 *     sub_1800812CC @ 0x1800812CC (sub_1800812CC.c)
 *     sub_18008497C @ 0x18008497C (sub_18008497C.c)
 *     sub_1800849AC @ 0x1800849AC (sub_1800849AC.c)
 *     sub_180084D84 @ 0x180084D84 (sub_180084D84.c)
 *     sub_180084E40 @ 0x180084E40 (sub_180084E40.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_180076340 @ 0x180076340 (sub_180076340.c)
 */

__int64 __fastcall sub_180078020(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    sub_180076340((__int64)v2, *(_QWORD *)(a1 + 8));
    result = sub_18000E26C(*(void **)a1, 16 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 4));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
