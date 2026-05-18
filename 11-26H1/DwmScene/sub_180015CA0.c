/*
 * XREFs of sub_180015CA0 @ 0x180015CA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001552C @ 0x18001552C (sub_18001552C.c)
 */

__int64 __fastcall sub_180015CA0(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  result = *a2 - 0x4BD1CD637052B94FLL;
  if ( *a2 == 0x4BD1CD637052B94FLL )
    result = a2[1] + 0x2492ED948E7B4D49LL;
  if ( !result )
    return sub_18001552C(a1 + 16);
  return result;
}
