/*
 * XREFs of sub_18007EAEC @ 0x18007EAEC
 * Callers:
 *     sub_180014680 @ 0x180014680 (sub_180014680.c)
 *     sub_180014760 @ 0x180014760 (sub_180014760.c)
 *     sub_180063230 @ 0x180063230 (sub_180063230.c)
 *     sub_18006624C @ 0x18006624C (sub_18006624C.c)
 *     sub_180092860 @ 0x180092860 (sub_180092860.c)
 *     sub_1800929B0 @ 0x1800929B0 (sub_1800929B0.c)
 * Callees:
 *     sub_18007C6F4 @ 0x18007C6F4 (sub_18007C6F4.c)
 */

__int64 __fastcall sub_18007EAEC(__int64 a1, __int64 a2, char a3)
{
  unsigned __int16 v5; // ax
  __int64 v6; // r8

  v5 = sub_18007C6F4(*(_QWORD *)(a1 + 16), a2);
  LOBYTE(v6) = a3;
  return sub_18007EB24(a1, v5, v6);
}
