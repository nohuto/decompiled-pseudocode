/*
 * XREFs of PopAdaptiveStandbyCalculateBatteryRegion @ 0x1407E2E60
 * Callers:
 *     PopAdaptiveStandbyHandleBatteryUpdate @ 0x1407E3E3C (PopAdaptiveStandbyHandleBatteryUpdate.c)
 *     PopAdaptiveStandbySessionStart @ 0x1407E4FE4 (PopAdaptiveStandbySessionStart.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopAdaptiveStandbyCalculateBatteryRegion(int a1)
{
  unsigned int v1; // edx
  __int128 *v2; // rax
  __int64 result; // rax

  v1 = 0;
  v2 = &PopAdaptiveStandbyRegions;
  do
  {
    if ( a1 > *(_DWORD *)v2 )
      break;
    ++v1;
    v2 = (__int128 *)((char *)v2 + 20);
  }
  while ( v1 < 3 );
  result = 2LL;
  if ( v1 < 2 )
    return v1;
  return result;
}
