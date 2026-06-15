/*
 * XREFs of sub_140047484 @ 0x140047484
 * Callers:
 *     sub_1400AF1A9 @ 0x1400AF1A9 (sub_1400AF1A9.c)
 * Callees:
 *     sub_14001C260 @ 0x14001C260 (sub_14001C260.c)
 */

__int64 __fastcall sub_140047484(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return sub_14001C260(result);
  }
  return result;
}
