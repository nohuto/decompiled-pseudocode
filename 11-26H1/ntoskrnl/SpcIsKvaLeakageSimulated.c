/*
 * XREFs of SpcIsKvaLeakageSimulated @ 0x14071E35C
 * Callers:
 *     KiEnableKvaShadowing @ 0x140BF8180 (KiEnableKvaShadowing.c)
 * Callees:
 *     <none>
 */

char SpcIsKvaLeakageSimulated()
{
  return WheapPfaLock.OtherTransferCount;
}
