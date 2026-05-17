/*
 * XREFs of RtlFindAceByType @ 0x1800E0410
 * Callers:
 *     RtlIsUntrustedObject @ 0x18013CE80 (RtlIsUntrustedObject.c)
 * Callees:
 *     <none>
 */

unsigned __int8 *__fastcall RtlFindAceByType(__int64 a1, int a2, unsigned int *a3)
{
  unsigned __int8 *v4; // r9
  unsigned int i; // r10d

  if ( a1 )
  {
    v4 = (unsigned __int8 *)(a1 + 8);
    for ( i = 0; i < *(unsigned __int16 *)(a1 + 4); ++i )
    {
      if ( a3 )
      {
        if ( i >= *a3 && *v4 == a2 )
        {
          *a3 = i;
          return v4;
        }
      }
      else if ( *v4 == a2 )
      {
        return v4;
      }
      v4 += *((unsigned __int16 *)v4 + 1);
    }
  }
  return 0LL;
}
