/*
 * XREFs of sub_18001C8C0 @ 0x18001C8C0
 * Callers:
 *     sub_180027EC8 @ 0x180027EC8 (sub_180027EC8.c)
 *     sub_18004AD40 @ 0x18004AD40 (sub_18004AD40.c)
 *     sub_1800597B4 @ 0x1800597B4 (sub_1800597B4.c)
 *     sub_180059AA0 @ 0x180059AA0 (sub_180059AA0.c)
 *     sub_180080F34 @ 0x180080F34 (sub_180080F34.c)
 *     sub_180086A80 @ 0x180086A80 (sub_180086A80.c)
 *     sub_1800870B0 @ 0x1800870B0 (sub_1800870B0.c)
 *     sub_180087164 @ 0x180087164 (sub_180087164.c)
 *     sub_18008720C @ 0x18008720C (sub_18008720C.c)
 *     sub_18008F8D0 @ 0x18008F8D0 (sub_18008F8D0.c)
 *     sub_1800C2320 @ 0x1800C2320 (sub_1800C2320.c)
 *     sub_1800C9978 @ 0x1800C9978 (sub_1800C9978.c)
 * Callees:
 *     sub_180012A10 @ 0x180012A10 (sub_180012A10.c)
 *     sub_1800142EC @ 0x1800142EC (sub_1800142EC.c)
 *     sub_1800148EC @ 0x1800148EC (sub_1800148EC.c)
 */

__int64 *__fastcall sub_18001C8C0(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // r9
  const void *v5; // rax
  __int64 v6; // rdx
  void *Src; // r8
  size_t v8; // r9
  size_t Size; // r10

  v4 = -1LL;
  do
    ++v4;
  while ( *(_BYTE *)(a3 + v4) );
  if ( 0x7FFFFFFFFFFFFFFFLL - *(_QWORD *)(a2 + 16) < v4 )
    sub_180012A10();
  v5 = (const void *)sub_1800148EC(a2);
  sub_1800142EC(a1, v6, (unsigned __int64)Src, v5, Size, Src, v8);
  return a1;
}
