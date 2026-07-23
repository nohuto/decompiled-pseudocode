/*
 * XREFs of ViAvlCompareNode @ 0x1404C9140
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViAvlCompareNode(_RTL_AVL_TABLE *a1, unsigned __int64 *a2, unsigned __int64 *a3)
{
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // r10

  v3 = *a3;
  v4 = *a2;
  if ( *a2 == *a3 )
  {
    return 2;
  }
  else if ( *a2 < *a3 )
  {
    return v3 < v4 + a2[1] ? 2u : 0;
  }
  else
  {
    return (unsigned int)((v4 < v3 + a3[1]) + 1);
  }
}
