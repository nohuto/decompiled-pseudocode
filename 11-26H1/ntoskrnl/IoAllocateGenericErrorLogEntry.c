/*
 * XREFs of IoAllocateGenericErrorLogEntry @ 0x1405CAD68
 * Callers:
 *     IopLogBlockedDriverEvent @ 0x140795180 (IopLogBlockedDriverEvent.c)
 *     MiBadMemoryLogger @ 0x140869EF0 (MiBadMemoryLogger.c)
 *     PnpLogEvent @ 0x140AA4138 (PnpLogEvent.c)
 *     MiLogFailedDriverLoad @ 0x140B518F0 (MiLogFailedDriverLoad.c)
 * Callees:
 *     IopAllocateErrorLogEntry @ 0x1404DC04C (IopAllocateErrorLogEntry.c)
 */

__int64 __fastcall IoAllocateGenericErrorLogEntry(char a1)
{
  return IopAllocateErrorLogEntry(0LL, 0LL, a1);
}
