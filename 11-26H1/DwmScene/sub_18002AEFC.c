/*
 * XREFs of sub_18002AEFC @ 0x18002AEFC
 * Callers:
 *     sub_18002BDC0 @ 0x18002BDC0 (sub_18002BDC0.c)
 *     sub_180034E70 @ 0x180034E70 (sub_180034E70.c)
 *     sub_1800364D0 @ 0x1800364D0 (sub_1800364D0.c)
 *     sub_18003797C @ 0x18003797C (sub_18003797C.c)
 *     sub_180054CD4 @ 0x180054CD4 (sub_180054CD4.c)
 *     sub_180055960 @ 0x180055960 (sub_180055960.c)
 *     sub_180055ABC @ 0x180055ABC (sub_180055ABC.c)
 *     sub_1800D543C @ 0x1800D543C (sub_1800D543C.c)
 *     sub_1800D54BC @ 0x1800D54BC (sub_1800D54BC.c)
 * Callees:
 *     sub_180012AC4 @ 0x180012AC4 (sub_180012AC4.c)
 */

__int64 __fastcall sub_18002AEFC(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a1 = a2;
  *(_BYTE *)(a1 + 8) = 0;
  sub_180012AC4(a2);
  result = a1;
  *(_BYTE *)(a1 + 8) = 1;
  return result;
}
