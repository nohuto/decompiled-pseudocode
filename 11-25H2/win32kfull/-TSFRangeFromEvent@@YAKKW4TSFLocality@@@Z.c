/*
 * XREFs of ?TSFRangeFromEvent@@YAKKW4TSFLocality@@@Z @ 0x1400CAE54
 * Callers:
 *     xxxProcessTSFEvent @ 0x1400CADAC (xxxProcessTSFEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TSFRangeFromEvent(int a1, int a2)
{
  int v3; // ecx

  if ( !a2 )
  {
    if ( a1 != 2147483393 )
    {
      switch ( a1 )
      {
        case -2147483645:
          return 512LL;
        case -2147483643:
          return 4096LL;
        case -2147483647:
          return 256LL;
      }
      if ( a1 != 2147483392 )
      {
        if ( a1 != 0x80000000 )
        {
          if ( a1 != -2147483646 )
          {
            if ( a1 == -2147483644 )
              return 4096LL;
            return 0LL;
          }
          return 512LL;
        }
        return 256LL;
      }
    }
    return 1024LL;
  }
  v3 = a1 - 2147483408;
  if ( !v3 )
    return 1LL;
  if ( (unsigned int)(v3 - 1) >= 2 )
    return 0LL;
  return 2LL;
}
