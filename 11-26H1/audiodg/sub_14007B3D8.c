/*
 * XREFs of sub_14007B3D8 @ 0x14007B3D8
 * Callers:
 *     sub_14007ADA0 @ 0x14007ADA0 (sub_14007ADA0.c)
 * Callees:
 *     sub_14007D310 @ 0x14007D310 (sub_14007D310.c)
 */

__int64 __fastcall sub_14007B3D8(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return sub_14007D310(v1);
  }
  return result;
}
