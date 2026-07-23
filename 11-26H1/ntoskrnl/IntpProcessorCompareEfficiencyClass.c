/*
 * XREFs of IntpProcessorCompareEfficiencyClass @ 0x140D08980
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IntpProcessorCompareEfficiencyClass(_BYTE *a1, _BYTE *a2)
{
  unsigned __int8 v2; // r8
  unsigned __int8 v3; // dl

  v2 = a2[1];
  v3 = a1[1];
  if ( v3 >= v2 )
    return v3 > v2;
  else
    return 0xFFFFFFFFLL;
}
