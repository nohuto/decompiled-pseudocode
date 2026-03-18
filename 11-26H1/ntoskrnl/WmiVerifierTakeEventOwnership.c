/*
 * XREFs of WmiVerifierTakeEventOwnership @ 0x1406C35E4
 * Callers:
 *     VerifierIoWMIWriteEvent @ 0x140C40470 (VerifierIoWMIWriteEvent.c)
 * Callees:
 *     <none>
 */

bool __fastcall WmiVerifierTakeEventOwnership(__int64 a1)
{
  return (*(_DWORD *)(a1 + 44) & 0x20000) == 0;
}
