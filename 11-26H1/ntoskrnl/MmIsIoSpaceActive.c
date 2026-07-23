/*
 * XREFs of MmIsIoSpaceActive @ 0x1406F9BE0
 * Callers:
 *     <none>
 * Callees:
 *     MiIsProbeActive @ 0x1406F91A4 (MiIsProbeActive.c)
 */

LOGICAL __stdcall MmIsIoSpaceActive(PHYSICAL_ADDRESS StartAddress, SIZE_T NumberOfBytes)
{
  return MiIsProbeActive(
           (unsigned __int64)StartAddress.QuadPart >> 12,
           ((StartAddress.QuadPart - 1 + NumberOfBytes) >> 12) - ((unsigned __int64)StartAddress.QuadPart >> 12) + 1);
}
