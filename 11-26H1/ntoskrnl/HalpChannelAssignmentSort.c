/*
 * XREFs of HalpChannelAssignmentSort @ 0x140CBACA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpChannelAssignmentSort(_WORD *a1, _WORD *a2)
{
  unsigned __int16 v2; // ax
  unsigned __int16 v3; // dx
  unsigned __int16 v4; // cx

  v2 = a2[5];
  if ( a1[5] >= v2 )
  {
    if ( a1[5] > v2 )
      return 1LL;
    v3 = a2[4];
    v4 = a1[4];
    if ( v4 >= v3 )
      return v4 > v3;
  }
  return 0xFFFFFFFFLL;
}
