/*
 * XREFs of sub_140037090 @ 0x140037090
 * Callers:
 *     sub_14001A620 @ 0x14001A620 (sub_14001A620.c)
 *     sub_140044660 @ 0x140044660 (sub_140044660.c)
 *     StorPortExtendedFunction @ 0x140046CC0 (StorPortExtendedFunction.c)
 *     StorPortNvmeofExtendedFunction @ 0x1400743C0 (StorPortNvmeofExtendedFunction.c)
 *     sub_1400A8194 @ 0x1400A8194 (sub_1400A8194.c)
 *     sub_1400D74A8 @ 0x1400D74A8 (sub_1400D74A8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140037090(int a1)
{
  unsigned int v1; // edx
  __int64 result; // rax

  if ( a1 <= -1073741661 )
  {
    if ( a1 != -1073741661 )
    {
      if ( a1 == -2147483643 )
        return 3238002692LL;
      if ( a1 != -1073741822 )
      {
        if ( a1 == -1073741811 )
          return 3238002694LL;
        if ( a1 != -1073741789 )
        {
          v1 = -1056964607;
          if ( a1 == -1073741670 )
            return (unsigned int)-1056964605;
          return v1;
        }
        return 3238002692LL;
      }
      return 3238002690LL;
    }
    return 3238002697LL;
  }
  switch ( a1 )
  {
    case -1073741637:
      return 3238002690LL;
    case -1073741496:
      return 3238002696LL;
    case -1073741436:
      return 3238002697LL;
  }
  result = 0LL;
  if ( a1 <= -1 )
    return 3238002689LL;
  return result;
}
