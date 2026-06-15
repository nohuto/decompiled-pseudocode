/*
 * XREFs of sub_140077F60 @ 0x140077F60
 * Callers:
 *     sub_14007E350 @ 0x14007E350 (sub_14007E350.c)
 * Callees:
 *     sub_14007D1C0 @ 0x14007D1C0 (sub_14007D1C0.c)
 */

__int64 __fastcall sub_140077F60(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_14007D1C0(v1);
  return result;
}
