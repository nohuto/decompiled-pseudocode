/*
 * XREFs of PpmRegisterProvSocIdentifier @ 0x1407D9490
 * Callers:
 *     <none>
 * Callees:
 *     RtlDuplicateUnicodeString @ 0x1409791B0 (RtlDuplicateUnicodeString.c)
 */

NTSTATUS __fastcall PpmRegisterProvSocIdentifier(PCUNICODE_STRING StringIn)
{
  if ( !StringIn || !StringIn->Buffer )
    return -1073741811;
  if ( PopProvSocIdentifier.Length )
    return -1073740008;
  return RtlDuplicateUnicodeString(1u, StringIn, &PopProvSocIdentifier);
}
