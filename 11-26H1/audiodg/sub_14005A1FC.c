/*
 * XREFs of sub_14005A1FC @ 0x14005A1FC
 * Callers:
 *     sub_14005A364 @ 0x14005A364 (sub_14005A364.c)
 *     sub_14005A370 @ 0x14005A370 (sub_14005A370.c)
 *     sub_14005A3AC @ 0x14005A3AC (sub_14005A3AC.c)
 * Callees:
 *     memmove @ 0x1400ADF04 (memmove.c)
 */

__int64 __fastcall sub_14005A1FC(void *Src, __int64 a2, void *a3)
{
  __int64 v4; // rbx

  v4 = a2 - (_QWORD)Src;
  memmove(a3, Src, a2 - (_QWORD)Src);
  return (__int64)a3 + v4;
}
