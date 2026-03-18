/*
 * XREFs of KeForceEnableNx @ 0x140BF52A0
 * Callers:
 *     HalpInterruptSetProcessorStartContext @ 0x14057CD40 (HalpInterruptSetProcessorStartContext.c)
 * Callees:
 *     <none>
 */

char KeForceEnableNx()
{
  return KiNxForceEnable;
}
