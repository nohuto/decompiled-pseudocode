/*
 * XREFs of KeCopyAffinityEx2 @ 0x140404EE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int16 __fastcall KeCopyAffinityEx2(__int64 a1, unsigned __int16 *a2)
{
  unsigned __int16 v2; // ax
  unsigned __int16 v3; // r8
  unsigned __int16 v5; // r10
  unsigned __int16 result; // ax
  __int64 v7; // rcx
  __int64 v8; // rcx

  v2 = *a2;
  v3 = *(_WORD *)(a1 + 2);
  *(_WORD *)(a1 + 2) = v3;
  v5 = v3;
  if ( v2 <= v3 )
    v5 = v2;
  *(_WORD *)a1 = v5;
  result = 0;
  for ( *(_DWORD *)(a1 + 4) = 0; result < v5; *(_QWORD *)(8 * v7 + a1 + 8) = *(_QWORD *)&a2[4 * v7 + 4] )
    v7 = result++;
  for ( ; result < *(_WORD *)(a1 + 2); *(_QWORD *)(a1 + 8 * v8 + 8) = 0LL )
    v8 = result++;
  return result;
}
