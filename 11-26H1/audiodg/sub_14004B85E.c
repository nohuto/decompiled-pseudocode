/*
 * XREFs of sub_14004B85E @ 0x14004B85E
 * Callers:
 *     sub_14004B8DD @ 0x14004B8DD (sub_14004B8DD.c)
 *     sub_14004B8EF @ 0x14004B8EF (sub_14004B8EF.c)
 * Callees:
 *     sub_14003D3C0 @ 0x14003D3C0 (sub_14003D3C0.c)
 */

__int64 __fastcall sub_14004B85E(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *v5)(__int64, __int64, __int64, __int64); // rax

  v5 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))sub_14003D3C0((__int64)&PROPSYS_dll_import_table, v4);
  return v5(a1, a2, a3, a4);
}
