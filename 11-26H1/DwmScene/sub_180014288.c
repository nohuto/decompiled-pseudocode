/*
 * XREFs of sub_180014288 @ 0x180014288
 * Callers:
 *     sub_180014760 @ 0x180014760 (sub_180014760.c)
 *     sub_18002C03C @ 0x18002C03C (sub_18002C03C.c)
 *     sub_180044C70 @ 0x180044C70 (sub_180044C70.c)
 *     sub_180092860 @ 0x180092860 (sub_180092860.c)
 * Callees:
 *     sub_180012A10 @ 0x180012A10 (sub_180012A10.c)
 *     sub_1800142EC @ 0x1800142EC (sub_1800142EC.c)
 *     sub_1800148EC @ 0x1800148EC (sub_1800148EC.c)
 */

void *__fastcall sub_180014288(void *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  void *Src; // rax
  size_t Size; // r10
  size_t v7; // r11

  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - *(_QWORD *)(a2 + 16)) < *(_QWORD *)(a3 + 16) )
    sub_180012A10();
  sub_1800148EC(a2);
  Src = (void *)sub_1800148EC(v4);
  sub_1800142EC(a1, Size, Src, v7);
  return a1;
}
