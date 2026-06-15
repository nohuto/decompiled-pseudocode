/*
 * XREFs of sub_14007B3B0 @ 0x14007B3B0
 * Callers:
 *     sub_140079E90 @ 0x140079E90 (sub_140079E90.c)
 *     sub_14007B908 @ 0x14007B908 (sub_14007B908.c)
 * Callees:
 *     sub_14007D280 @ 0x14007D280 (sub_14007D280.c)
 */

__int64 __fastcall sub_14007B3B0(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return sub_14007D280(v1);
  }
  return result;
}
