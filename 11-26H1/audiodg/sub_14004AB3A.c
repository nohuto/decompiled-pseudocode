/*
 * XREFs of sub_14004AB3A @ 0x14004AB3A
 * Callers:
 *     sub_14004ABB9 @ 0x14004ABB9 (sub_14004ABB9.c)
 *     sub_14004ABCB @ 0x14004ABCB (sub_14004ABCB.c)
 *     sub_14004ABDD @ 0x14004ABDD (sub_14004ABDD.c)
 *     sub_14004AC01 @ 0x14004AC01 (sub_14004AC01.c)
 *     sub_14004AD40 @ 0x14004AD40 (sub_14004AD40.c)
 *     sub_14004AD52 @ 0x14004AD52 (sub_14004AD52.c)
 *     sub_14004AD64 @ 0x14004AD64 (sub_14004AD64.c)
 *     sub_14004B92C @ 0x14004B92C (sub_14004B92C.c)
 *     sub_14004B94C @ 0x14004B94C (sub_14004B94C.c)
 * Callees:
 *     sub_14003D3C0 @ 0x14003D3C0 (sub_14003D3C0.c)
 */

__int64 __fastcall sub_14004AB3A(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *v5)(__int64, __int64, __int64, __int64); // rax

  v5 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))sub_14003D3C0((__int64)&RPCRT4_dll_import_table, v4);
  return v5(a1, a2, a3, a4);
}
