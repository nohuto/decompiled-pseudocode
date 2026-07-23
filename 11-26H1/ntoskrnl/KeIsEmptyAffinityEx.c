/*
 * XREFs of KeIsEmptyAffinityEx @ 0x14046E100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeIsEmptyAffinityEx(unsigned __int16 *a1)
{
  unsigned int v1; // edx
  unsigned __int16 i; // r8

  v1 = 0;
  for ( i = 0; i < *a1; ++i )
  {
    if ( *(_QWORD *)&a1[4 * i + 4] )
      return v1;
  }
  return 1;
}
