/*
 * XREFs of HalpInterruptForceClusterMode @ 0x14057D31C
 * Callers:
 *     HalpMiscGetParameters @ 0x140CAF604 (HalpMiscGetParameters.c)
 * Callees:
 *     <none>
 */

void __fastcall HalpInterruptForceClusterMode(int a1)
{
  HalpInterruptClusterModeForced = 1;
  if ( a1 )
    HalpInterruptMaxClusterSize = a1;
}
