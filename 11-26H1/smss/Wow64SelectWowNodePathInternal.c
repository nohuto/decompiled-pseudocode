/*
 * XREFs of Wow64SelectWowNodePathInternal @ 0x14001AA34
 * Callers:
 *     CreateRegistryLinksForMachine @ 0x14000B980 (CreateRegistryLinksForMachine.c)
 * Callees:
 *     <none>
 */

void *__fastcall Wow64SelectWowNodePathInternal(__int16 a1)
{
  if ( a1 == 332 )
    return &Wowx86NodeString;
  if ( a1 == 452 )
    return &WowArmNodeString;
  return 0LL;
}
