/*
 * XREFs of KeIsEqualAffinityEx @ 0x1404773E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeIsEqualAffinityEx(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned __int16 *v2; // r9
  unsigned __int16 v4; // r10
  unsigned int v5; // r8d
  unsigned __int16 i; // dx

  v2 = a2;
  v4 = *a1;
  if ( *a1 >= *a2 )
  {
    v4 = *a2;
    v2 = a1;
  }
  v5 = 0;
  for ( i = 0; i < v4; ++i )
  {
    if ( *(_QWORD *)&a1[4 * i + 4] != *(_QWORD *)&a2[4 * i + 4] )
      return v5;
  }
  while ( i < *v2 )
  {
    if ( *(_QWORD *)&v2[4 * i + 4] )
      return v5;
    ++i;
  }
  return 1;
}
