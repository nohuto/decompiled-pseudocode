/*
 * XREFs of sub_140021998 @ 0x140021998
 * Callers:
 *     sub_1400204AC @ 0x1400204AC (sub_1400204AC.c)
 *     sub_1400205E0 @ 0x1400205E0 (sub_1400205E0.c)
 *     sub_140021650 @ 0x140021650 (sub_140021650.c)
 *     sub_140021754 @ 0x140021754 (sub_140021754.c)
 *     sub_140021954 @ 0x140021954 (sub_140021954.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140021998(__int64 a1)
{
  __int64 result; // rax

  result = -1LL;
  do
    ++result;
  while ( *(_WORD *)(a1 + 2 * result) );
  return result;
}
