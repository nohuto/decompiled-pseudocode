/*
 * XREFs of ?HampUtilIsOverlappingInterval@@YAK_K000@Z @ 0x18000BCF0
 * Callers:
 *     HamQueryPackageUsageInfo @ 0x18000B410 (HamQueryPackageUsageInfo.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall HampUtilIsOverlappingInterval(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  if ( a1 > a2 )
  {
    if ( a3 <= a4 )
      return a1 <= a4;
  }
  else if ( a3 <= a4 && a1 > a4 || a3 > a2 )
  {
    return 0LL;
  }
  return 1LL;
}
