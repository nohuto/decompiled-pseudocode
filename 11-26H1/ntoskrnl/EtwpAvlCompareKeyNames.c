/*
 * XREFs of EtwpAvlCompareKeyNames @ 0x1404E42A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x140943110 (RtlCompareUnicodeStrings.c)
 */

__int64 __fastcall EtwpAvlCompareKeyNames(_RTL_AVL_TABLE *a1, const WCHAR *a2, const WCHAR *a3)
{
  SIZE_T v4; // rdx
  SIZE_T v5; // r9
  unsigned int v6; // ebx
  LONG v7; // eax

  v4 = -1LL;
  v5 = -1LL;
  v6 = 0;
  do
    ++v5;
  while ( a3[v5] );
  do
    ++v4;
  while ( a2[v4] );
  v7 = RtlCompareUnicodeStrings(a2, v4, a3, v5, 1u);
  if ( v7 >= 0 )
  {
    LOBYTE(v6) = v7 <= 0;
    ++v6;
  }
  return v6;
}
