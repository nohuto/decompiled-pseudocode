/*
 * XREFs of KeForceEnableNx @ 0x140BFB2A0
 * Callers:
 *     HalpInterruptSetProcessorStartContext @ 0x14057F260 (HalpInterruptSetProcessorStartContext.c)
 * Callees:
 *     <none>
 */

char KeForceEnableNx()
{
  return KiNxForceEnable;
}
