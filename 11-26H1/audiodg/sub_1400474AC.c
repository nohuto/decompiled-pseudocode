/*
 * XREFs of sub_1400474AC @ 0x1400474AC
 * Callers:
 *     sub_1400AF1F1 @ 0x1400AF1F1 (sub_1400AF1F1.c)
 * Callees:
 *     sub_14001C0D0 @ 0x14001C0D0 (sub_14001C0D0.c)
 */

__int64 __fastcall sub_1400474AC(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return sub_14001C0D0(result);
  }
  return result;
}
