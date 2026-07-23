/*
 * XREFs of AslpMemorySpanInitViewFromFileMapping @ 0x140719BFC
 * Callers:
 *     AslpFileGetVersionBlock @ 0x140893EF8 (AslpFileGetVersionBlock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AslpMemorySpanInitViewFromFileMapping(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // r8

  result = 0LL;
  if ( a2 && (v3 = *(_QWORD *)(a2 + 32)) != 0 )
  {
    *a1 = v3;
    result = *(_QWORD *)(a2 + 40);
  }
  else
  {
    *a1 = 0LL;
  }
  a1[1] = result;
  return result;
}
