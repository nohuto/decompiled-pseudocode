/*
 * XREFs of RtlIsSubsetAffinityEx @ 0x18013F960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlIsSubsetAffinityEx(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned __int16 v2; // r8
  unsigned __int16 *v3; // r11
  unsigned __int16 v5; // bx
  unsigned __int16 i; // dx
  __int64 v8; // rcx

  v2 = *a1;
  v3 = a2;
  v5 = *a2;
  if ( *a1 >= *a2 )
    v3 = a1;
  if ( v2 >= v5 )
  {
    v5 = *a1;
    v2 = *a2;
  }
  for ( i = 0; i < v2; ++i )
  {
    v8 = *(_QWORD *)&a1[4 * i + 4];
    if ( (v8 & *(_QWORD *)&a2[4 * i + 4]) != v8 )
      return 0LL;
  }
  if ( v3 != a2 )
  {
    while ( i < v5 )
    {
      if ( *(_QWORD *)&a1[4 * i + 4] )
        return 0LL;
      ++i;
    }
  }
  return 1LL;
}
