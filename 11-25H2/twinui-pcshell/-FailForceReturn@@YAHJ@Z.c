/*
 * XREFs of ?FailForceReturn@@YAHJ@Z @ 0x1806A3604
 * Callers:
 *     SimpleToRealIDListWithContext @ 0x1806A405C (SimpleToRealIDListWithContext.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall FailForceReturn(int a1)
{
  if ( a1 > -2147023696 )
  {
    if ( a1 > -2147021872 )
    {
      if ( a1 != -2144927486 && a1 != -1067646973 && a1 != -1067646972 )
        return a1 == -1067646971;
      return 1LL;
    }
    if ( a1 == -2147021872 || a1 == -2147023693 || a1 == -2147023673 || a1 == -2147023652 || a1 == -2147023624 )
      return 1LL;
    return a1 == -2147022959;
  }
  if ( a1 == -2147023696 )
    return 1LL;
  if ( a1 > -2147024881 )
  {
    if ( a1 == -2147024843 || a1 == -2147024829 || a1 == -2147024672 )
      return 1LL;
    return a1 == -2147024542;
  }
  if ( a1 != -2147024881 && a1 != -2147221008 && a1 != -2147024894 && a1 != -2147024893 && a1 != -2147024891 )
    return a1 == -2147024882;
  return 1LL;
}
