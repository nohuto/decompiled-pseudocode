/*
 * XREFs of SpcQueryKvaLeakagePresent @ 0x14071E36C
 * Callers:
 *     KeQueryKvaShadowInformation @ 0x140778BF4 (KeQueryKvaShadowInformation.c)
 *     KiEnableKvaShadowing @ 0x140BF8180 (KiEnableKvaShadowing.c)
 * Callees:
 *     <none>
 */

__int64 SpcQueryKvaLeakagePresent()
{
  return HIDWORD(WheapPfaLock.OtherTransferCount);
}
