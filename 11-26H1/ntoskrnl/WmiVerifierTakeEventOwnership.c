/*
 * XREFs of WmiVerifierTakeEventOwnership @ 0x1406C71C4
 * Callers:
 *     VerifierIoWMIWriteEvent @ 0x140C46480 (VerifierIoWMIWriteEvent.c)
 * Callees:
 *     <none>
 */

bool __fastcall WmiVerifierTakeEventOwnership(__int64 a1)
{
  return (*(_DWORD *)(a1 + 44) & 0x20000) == 0;
}
