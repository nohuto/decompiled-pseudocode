/*
 * XREFs of KeIsSubsetAffinityEx @ 0x14048CAB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeIsSubsetAffinityEx(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned __int16 *v2; // rbx
  unsigned __int16 v3; // r9
  unsigned __int16 v4; // di
  unsigned int v7; // r8d
  unsigned __int16 i; // dx
  __int64 v9; // rcx

  v2 = a2;
  v3 = *a1;
  v4 = *a2;
  if ( *a1 >= *a2 )
  {
    v4 = *a1;
    v2 = a1;
    v3 = *a2;
  }
  v7 = 0;
  for ( i = 0; i < v3; ++i )
  {
    v9 = *(_QWORD *)&a1[4 * i + 4];
    if ( (v9 & *(_QWORD *)&a2[4 * i + 4]) != v9 )
      return v7;
  }
  if ( v2 != a2 )
  {
    while ( i < v4 )
    {
      if ( *(_QWORD *)&a1[4 * i + 4] )
        return v7;
      ++i;
    }
  }
  return 1;
}
