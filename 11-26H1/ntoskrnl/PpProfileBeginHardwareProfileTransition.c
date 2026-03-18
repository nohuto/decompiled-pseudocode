/*
 * XREFs of PpProfileBeginHardwareProfileTransition @ 0x1407AD23C
 * Callers:
 *     PipProcessStartPhase1 @ 0x1409108E0 (PipProcessStartPhase1.c)
 *     PnpProcessQueryRemoveAndEject @ 0x140911B30 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 */

NTSTATUS __fastcall PpProfileBeginHardwareProfileTransition(char a1)
{
  NTSTATUS result; // eax

  if ( !a1 )
    return KeWaitForSingleObject(&PiProfileChangeSemaphore, Executive, 0, 0, 0LL);
  return result;
}
