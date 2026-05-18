/*
 * XREFs of sub_18008F518 @ 0x18008F518
 * Callers:
 *     sub_18008F654 @ 0x18008F654 (sub_18008F654.c)
 * Callees:
 *     sub_18008F17C @ 0x18008F17C (sub_18008F17C.c)
 */

__int64 **__fastcall sub_18008F518(__int64 **a1, __int64 **a2)
{
  if ( a1 != a2 )
    sub_18008F17C(a1, *a2, ((char *)a2[1] - (char *)*a2) >> 4);
  return a1;
}
