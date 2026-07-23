/*
 * XREFs of MiBadPageSort @ 0x1406F5950
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MiBadPageSort(_QWORD *a1, _QWORD *a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rdx

  v2 = *a2 & 0xFFFFFFFFFFFFFLL;
  v3 = *a1 & 0xFFFFFFFFFFFFFLL;
  if ( v3 >= v2 )
    return v3 > v2;
  else
    return 0xFFFFFFFFLL;
}
