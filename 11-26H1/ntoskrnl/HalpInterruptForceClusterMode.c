/*
 * XREFs of HalpInterruptForceClusterMode @ 0x14057F83C
 * Callers:
 *     HalpMiscGetParameters @ 0x140CB5644 (HalpMiscGetParameters.c)
 * Callees:
 *     <none>
 */

void __fastcall HalpInterruptForceClusterMode(int a1)
{
  HalpInterruptClusterModeForced = 1;
  if ( a1 )
    HalpInterruptMaxClusterSize = a1;
}
