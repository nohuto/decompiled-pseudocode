/*
 * XREFs of sub_1800D6104 @ 0x1800D6104
 * Callers:
 *     sub_1800D668C @ 0x1800D668C (sub_1800D668C.c)
 *     sub_1800D6984 @ 0x1800D6984 (sub_1800D6984.c)
 *     sub_1800D6DF0 @ 0x1800D6DF0 (sub_1800D6DF0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800D6104(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
    return o__aligned_free(*(_QWORD *)a1);
  return result;
}
