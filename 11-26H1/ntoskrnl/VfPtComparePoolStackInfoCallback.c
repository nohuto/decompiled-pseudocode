/*
 * XREFs of VfPtComparePoolStackInfoCallback @ 0x140C2FC40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VfPtComparePoolStackInfoCallback(_RTL_AVL_TABLE *a1, _DWORD *a2, _DWORD *a3)
{
  unsigned int v4; // eax
  unsigned int v5; // ecx

  if ( *a2 < *a3 )
    return 0LL;
  if ( *a2 > *a3 )
    return 1LL;
  v4 = a3[1];
  v5 = a2[1];
  if ( v4 <= v5 )
    return 2 - (unsigned int)(v4 < v5);
  else
    return 0LL;
}
