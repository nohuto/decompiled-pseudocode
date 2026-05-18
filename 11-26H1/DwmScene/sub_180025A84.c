/*
 * XREFs of sub_180025A84 @ 0x180025A84
 * Callers:
 *     sub_18004FD4C @ 0x18004FD4C (sub_18004FD4C.c)
 *     sub_180052ED8 @ 0x180052ED8 (sub_180052ED8.c)
 *     sub_180052F54 @ 0x180052F54 (sub_180052F54.c)
 *     sub_1800532C4 @ 0x1800532C4 (sub_1800532C4.c)
 *     sub_180053894 @ 0x180053894 (sub_180053894.c)
 *     sub_1800C4100 @ 0x1800C4100 (sub_1800C4100.c)
 *     sub_1800CD8D4 @ 0x1800CD8D4 (sub_1800CD8D4.c)
 *     unknown_libname_40 @ 0x1800DBAC7 (unknown_libname_40.c)
 *     sub_1800DBB21 @ 0x1800DBB21 (sub_1800DBB21.c)
 *     unknown_libname_74 @ 0x1800E4CFB (unknown_libname_74.c)
 *     sub_1800E4D0D @ 0x1800E4D0D (sub_1800E4D0D.c)
 *     sub_1800E4EE1 @ 0x1800E4EE1 (sub_1800E4EE1.c)
 * Callees:
 *     sub_18001C574 @ 0x18001C574 (sub_18001C574.c)
 */

void __fastcall sub_180025A84(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    sub_18001C574(v1);
}
