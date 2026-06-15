/*
 * XREFs of sub_14004AD94 @ 0x14004AD94
 * Callers:
 *     sub_14004AE13 @ 0x14004AE13 (sub_14004AE13.c)
 *     sub_14004AE25 @ 0x14004AE25 (sub_14004AE25.c)
 *     sub_14004AE37 @ 0x14004AE37 (sub_14004AE37.c)
 *     sub_14004AE49 @ 0x14004AE49 (sub_14004AE49.c)
 * Callees:
 *     sub_14003D3C0 @ 0x14003D3C0 (sub_14003D3C0.c)
 */

__int64 __fastcall sub_14004AD94(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *v5)(__int64, __int64, __int64, __int64); // rax

  v5 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))sub_14003D3C0((__int64)&AVRT_dll_import_table, v4);
  return v5(a1, a2, a3, a4);
}
