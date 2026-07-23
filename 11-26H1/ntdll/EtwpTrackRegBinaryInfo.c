/*
 * XREFs of EtwpTrackRegBinaryInfo @ 0x1800E89C0
 * Callers:
 *     EtwpTrackProviderBinary @ 0x180117C5C (EtwpTrackProviderBinary.c)
 * Callees:
 *     EtwpGetUmProcessImageInfo @ 0x18005E274 (EtwpGetUmProcessImageInfo.c)
 */

__int64 __fastcall EtwpTrackRegBinaryInfo(__int64 a1, __int64 a2, __int64 a3, char *a4)
{
  unsigned __int8 i; // bl
  unsigned int j; // ecx
  __int64 result; // rax

  if ( *(__int16 *)(a1 + 86) < 0 )
  {
    for ( i = 0; i < 0x40u; ++i )
    {
      for ( j = 0; j < 4; ++j )
      {
        result = j;
        if ( *(_BYTE *)(a1 + 24LL * j + 140) && *(_BYTE *)(a1 + 24LL * j + 142) == i )
        {
          result = a1 + 120 + 24LL * j;
          if ( result )
            result = EtwpGetUmProcessImageInfo(i, a1, a3, a4);
          break;
        }
      }
    }
  }
  return result;
}
