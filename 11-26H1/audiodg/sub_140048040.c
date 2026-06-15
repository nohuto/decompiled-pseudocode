/*
 * XREFs of sub_140048040 @ 0x140048040
 * Callers:
 *     sub_1400B27C3 @ 0x1400B27C3 (sub_1400B27C3.c)
 *     sub_1400B27F9 @ 0x1400B27F9 (sub_1400B27F9.c)
 * Callees:
 *     sub_1400031E4 @ 0x1400031E4 (sub_1400031E4.c)
 */

__int64 __fastcall sub_140048040(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return sub_1400031E4(result);
  return result;
}
