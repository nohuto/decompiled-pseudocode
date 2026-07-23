/*
 * XREFs of MiTbFlushCostSort @ 0x140712E30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MiTbFlushCostSort(_QWORD *a1, _QWORD *a2)
{
  unsigned __int64 v2; // r9
  unsigned __int64 v3; // rcx

  v2 = *a2 + a2[1];
  v3 = a1[1] + *a1;
  if ( v3 >= v2 )
    return v3 > v2;
  else
    return 0xFFFFFFFFLL;
}
