/*
 * XREFs of WmiVerifierTakeEventOwnership @ 0x14064047C
 * Callers:
 *     VerifierIoWMIWriteEvent @ 0x140B91670 (VerifierIoWMIWriteEvent.c)
 * Callees:
 *     <none>
 */

bool __fastcall WmiVerifierTakeEventOwnership(__int64 a1)
{
  return (*(_DWORD *)(a1 + 44) & 0x20000) == 0;
}
