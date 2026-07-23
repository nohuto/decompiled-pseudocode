/*
 * XREFs of MiFixupExtentCompare @ 0x1406FEDB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MiFixupExtentCompare(unsigned __int64 a1, __int64 *a2)
{
  __int64 v2; // r8
  unsigned __int64 v3; // r8

  v2 = *a2;
  if ( (*a2 & 1) != 0 )
    v3 = v2 & 0xFFFFFFFFFFFFFFFEuLL;
  else
    v3 = *(_QWORD *)(v2 + 8) | 0x8000000000000000uLL;
  if ( a1 >= v3 )
    return a1 > v3;
  else
    return 0xFFFFFFFFLL;
}
