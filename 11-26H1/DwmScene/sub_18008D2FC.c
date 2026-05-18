/*
 * XREFs of sub_18008D2FC @ 0x18008D2FC
 * Callers:
 *     sub_18008C5BC @ 0x18008C5BC (sub_18008C5BC.c)
 *     sub_18008C6C0 @ 0x18008C6C0 (sub_18008C6C0.c)
 * Callees:
 *     sub_180017A18 @ 0x180017A18 (sub_180017A18.c)
 */

_OWORD *__fastcall sub_18008D2FC(__int128 *a1, void *a2, __int64 a3)
{
  __int128 v3; // xmm6
  _OWORD *result; // rax

  v3 = *a1;
  result = (_OWORD *)sub_180017A18(a2, a3, a1);
  *result = v3;
  return result;
}
