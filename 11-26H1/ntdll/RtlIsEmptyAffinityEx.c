/*
 * XREFs of RtlIsEmptyAffinityEx @ 0x18013F830
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlIsEmptyAffinityEx(unsigned __int16 *a1)
{
  unsigned __int16 i; // dx

  for ( i = 0; i < *a1; ++i )
  {
    if ( *(_QWORD *)&a1[4 * i + 4] )
      return 0LL;
  }
  return 1LL;
}
