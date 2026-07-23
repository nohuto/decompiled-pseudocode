/*
 * XREFs of CompareVersions @ 0x140621220
 * Callers:
 *     RtlGetProductInfo @ 0x140621260 (RtlGetProductInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CompareVersions(_DWORD *a1, _DWORD *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // eax
  unsigned int v4; // eax

  if ( *a1 <= *a2 )
  {
    if ( *a1 < *a2 )
      return 0xFFFFFFFFLL;
    v2 = a2[1];
    if ( a1[1] <= v2 )
    {
      if ( a1[1] < v2 )
        return 0xFFFFFFFFLL;
      v3 = a2[2];
      if ( a1[2] <= v3 )
      {
        if ( a1[2] >= v3 )
        {
          v4 = a2[3];
          if ( a1[3] <= v4 )
            return (unsigned int)-(a1[3] < v4);
          return 1LL;
        }
        return 0xFFFFFFFFLL;
      }
    }
  }
  return 1LL;
}
