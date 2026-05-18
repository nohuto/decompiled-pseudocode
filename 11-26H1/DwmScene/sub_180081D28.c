/*
 * XREFs of sub_180081D28 @ 0x180081D28
 * Callers:
 *     sub_180081B78 @ 0x180081B78 (sub_180081B78.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180081D28(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
    return o__aligned_free(*(_QWORD *)a1);
  return result;
}
