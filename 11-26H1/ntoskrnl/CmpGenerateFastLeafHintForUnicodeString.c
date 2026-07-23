/*
 * XREFs of CmpGenerateFastLeafHintForUnicodeString @ 0x140A20C44
 * Callers:
 *     CmpAddToLeaf @ 0x1408D7CDC (CmpAddToLeaf.c)
 *     CmpCheckLeaf @ 0x140A20814 (CmpCheckLeaf.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpGenerateFastLeafHintForUnicodeString(unsigned __int16 *a1)
{
  __int64 result; // rax
  unsigned int v2; // r8d
  unsigned int v3; // edx
  unsigned __int16 v4; // r10
  unsigned int v5; // [rsp+8h] [rbp+8h]

  result = 0LL;
  v2 = *a1 >> 1;
  v5 = 0;
  v3 = 0;
  if ( v2 >= 4 )
    v2 = 4;
  while ( v3 < v2 )
  {
    v4 = *(_WORD *)(*((_QWORD *)a1 + 1) + 2LL * v3);
    if ( v4 > 0xFFu )
      return result;
    *((_BYTE *)&v5 + v3++) = v4;
  }
  return v5;
}
