/*
 * XREFs of IoAllocateGenericErrorLogEntry @ 0x1405CD638
 * Callers:
 *     IopLogBlockedDriverEvent @ 0x140797CB0 (IopLogBlockedDriverEvent.c)
 *     MiBadMemoryLogger @ 0x1408702D0 (MiBadMemoryLogger.c)
 *     PnpLogEvent @ 0x140A37B48 (PnpLogEvent.c)
 *     MiLogFailedDriverLoad @ 0x140B54190 (MiLogFailedDriverLoad.c)
 * Callees:
 *     IopAllocateErrorLogEntry @ 0x1404D572C (IopAllocateErrorLogEntry.c)
 */

__int64 __fastcall IoAllocateGenericErrorLogEntry(char a1)
{
  return IopAllocateErrorLogEntry(0LL, 0LL, a1);
}
