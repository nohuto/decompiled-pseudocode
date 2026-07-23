/*
 * XREFs of AccelpCodeSort @ 0x1406E37D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AccelpCodeSort(_QWORD *a1, _QWORD *a2)
{
  if ( *a1 < *a2 )
    return 0xFFFFFFFFLL;
  if ( *a1 > *a2 )
    return 1LL;
  if ( *a1 == *a2 )
    return (unsigned int)-(a1[2] < a2[2]);
  return 0LL;
}
