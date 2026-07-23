/*
 * XREFs of SpcQueryKvaLeakagePresent @ 0x140722FFC
 * Callers:
 *     KeQueryKvaShadowInformation @ 0x14077BA94 (KeQueryKvaShadowInformation.c)
 *     KiEnableKvaShadowing @ 0x140BFE180 (KiEnableKvaShadowing.c)
 * Callees:
 *     <none>
 */

__int64 SpcQueryKvaLeakagePresent()
{
  return (unsigned int)WheapPfaLock.SchedulerAssistPriorityFloor;
}
