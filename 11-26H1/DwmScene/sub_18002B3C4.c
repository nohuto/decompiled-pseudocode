/*
 * XREFs of sub_18002B3C4 @ 0x18002B3C4
 * Callers:
 *     sub_180033140 @ 0x180033140 (sub_180033140.c)
 *     sub_180034E70 @ 0x180034E70 (sub_180034E70.c)
 *     sub_1800364D0 @ 0x1800364D0 (sub_1800364D0.c)
 *     sub_18003797C @ 0x18003797C (sub_18003797C.c)
 *     sub_180054CD4 @ 0x180054CD4 (sub_180054CD4.c)
 *     sub_180055960 @ 0x180055960 (sub_180055960.c)
 *     sub_180055ABC @ 0x180055ABC (sub_180055ABC.c)
 *     sub_1800BB650 @ 0x1800BB650 (sub_1800BB650.c)
 *     sub_1800BB9A0 @ 0x1800BB9A0 (sub_1800BB9A0.c)
 *     sub_1800C0910 @ 0x1800C0910 (sub_1800C0910.c)
 *     sub_1800C1570 @ 0x1800C1570 (sub_1800C1570.c)
 *     sub_1800D543C @ 0x1800D543C (sub_1800D543C.c)
 *     sub_1800D54BC @ 0x1800D54BC (sub_1800D54BC.c)
 *     sub_1800D9F25 @ 0x1800D9F25 (sub_1800D9F25.c)
 *     sub_1800DA30D @ 0x1800DA30D (sub_1800DA30D.c)
 *     sub_1800E4A37 @ 0x1800E4A37 (sub_1800E4A37.c)
 *     unknown_libname_73 @ 0x1800E4A6D (unknown_libname_73.c)
 *     sub_1800E4C17 @ 0x1800E4C17 (sub_1800E4C17.c)
 * Callees:
 *     <none>
 */

int __fastcall sub_18002B3C4(__int64 a1)
{
  int result; // eax

  if ( *(_BYTE *)(a1 + 8) )
    return Mtx_unlock(*(_Mtx_t *)a1);
  return result;
}
