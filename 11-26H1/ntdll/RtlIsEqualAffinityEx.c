/*
 * XREFs of RtlIsEqualAffinityEx @ 0x18013F860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlIsEqualAffinityEx(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned __int16 v2; // r9
  unsigned __int16 *v3; // r8
  unsigned __int16 i; // dx

  v2 = *a1;
  v3 = a2;
  if ( *a1 >= *a2 )
  {
    v2 = *a2;
    v3 = a1;
  }
  for ( i = 0; i < v2; ++i )
  {
    if ( *(_QWORD *)&a1[4 * i + 4] != *(_QWORD *)&a2[4 * i + 4] )
      return 0LL;
  }
  while ( i < *v3 )
  {
    if ( *(_QWORD *)&v3[4 * i + 4] )
      return 0LL;
    ++i;
  }
  return 1LL;
}
