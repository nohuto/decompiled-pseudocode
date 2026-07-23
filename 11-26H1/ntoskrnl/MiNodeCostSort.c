/*
 * XREFs of MiNodeCostSort @ 0x140CD0410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MiNodeCostSort(_QWORD *a1, _QWORD *a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rdx

  v2 = a2[1];
  v3 = a1[1];
  if ( v3 >= v2 )
    return v3 > v2;
  else
    return 0xFFFFFFFFLL;
}
