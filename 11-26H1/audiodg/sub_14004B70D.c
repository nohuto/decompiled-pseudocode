/*
 * XREFs of sub_14004B70D @ 0x14004B70D
 * Callers:
 *     sub_14004B78C @ 0x14004B78C (sub_14004B78C.c)
 *     sub_14004B79E @ 0x14004B79E (sub_14004B79E.c)
 *     sub_14004B7B0 @ 0x14004B7B0 (sub_14004B7B0.c)
 *     sub_14004B7C2 @ 0x14004B7C2 (sub_14004B7C2.c)
 *     sub_14004B7D4 @ 0x14004B7D4 (sub_14004B7D4.c)
 *     sub_14004B7E6 @ 0x14004B7E6 (sub_14004B7E6.c)
 *     sub_14004B7F8 @ 0x14004B7F8 (sub_14004B7F8.c)
 *     sub_14004B80A @ 0x14004B80A (sub_14004B80A.c)
 *     sub_14004B81C @ 0x14004B81C (sub_14004B81C.c)
 *     sub_14004B82E @ 0x14004B82E (sub_14004B82E.c)
 *     sub_14004B840 @ 0x14004B840 (sub_14004B840.c)
 *     sub_14004B852 @ 0x14004B852 (sub_14004B852.c)
 * Callees:
 *     sub_14003D3C0 @ 0x14003D3C0 (sub_14003D3C0.c)
 */

__int64 __fastcall sub_14004B70D(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *v5)(__int64, __int64, __int64, __int64); // rax

  v5 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))sub_14003D3C0((__int64)&RTWorkQ_DLL_import_table, v4);
  return v5(a1, a2, a3, a4);
}
