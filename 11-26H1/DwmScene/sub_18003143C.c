/*
 * XREFs of sub_18003143C @ 0x18003143C
 * Callers:
 *     sub_18002DC64 @ 0x18002DC64 (sub_18002DC64.c)
 *     sub_18008F0C0 @ 0x18008F0C0 (sub_18008F0C0.c)
 *     sub_18008F33C @ 0x18008F33C (sub_18008F33C.c)
 *     sub_18009B754 @ 0x18009B754 (sub_18009B754.c)
 * Callees:
 *     sub_1800141F0 @ 0x1800141F0 (sub_1800141F0.c)
 */

__int64 __fastcall sub_18003143C(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_1800141F0(v1);
  return result;
}
