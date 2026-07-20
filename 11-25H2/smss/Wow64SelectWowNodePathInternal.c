/*
 * XREFs of Wow64SelectWowNodePathInternal @ 0x14001A2EC
 * Callers:
 *     CreateRegistryLinksForMachine @ 0x14000CCA8 (CreateRegistryLinksForMachine.c)
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
