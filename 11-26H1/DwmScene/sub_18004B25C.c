/*
 * XREFs of sub_18004B25C @ 0x18004B25C
 * Callers:
 *     sub_180066AA4 @ 0x180066AA4 (sub_180066AA4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18004B25C(char a1, char a2)
{
  int v2; // r8d
  __int64 result; // rax

  v2 = 1 << a1;
  if ( a2 )
    result = v2 | (unsigned int)dword_1801C7CA0;
  else
    result = dword_1801C7CA0 & (unsigned int)~v2;
  dword_1801C7CA0 = result;
  return result;
}
