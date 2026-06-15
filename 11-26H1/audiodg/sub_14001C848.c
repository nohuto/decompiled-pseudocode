/*
 * XREFs of sub_14001C848 @ 0x14001C848
 * Callers:
 *     sub_1400B2654 @ 0x1400B2654 (sub_1400B2654.c)
 * Callees:
 *     sub_14001C6F0 @ 0x14001C6F0 (sub_14001C6F0.c)
 */

__int64 __fastcall sub_14001C848(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return sub_14001C6F0(result);
  }
  return result;
}
