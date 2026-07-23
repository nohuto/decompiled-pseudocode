/*
 * XREFs of SpcIsKvaLeakageSimulated @ 0x140722FEC
 * Callers:
 *     KiEnableKvaShadowing @ 0x140BFE180 (KiEnableKvaShadowing.c)
 * Callees:
 *     <none>
 */

char SpcIsKvaLeakageSimulated()
{
  return WheapPfaLock.RealtimePriorityFloor;
}
