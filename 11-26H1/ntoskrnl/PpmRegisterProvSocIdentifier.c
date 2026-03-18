/*
 * XREFs of PpmRegisterProvSocIdentifier @ 0x1407D62E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlDuplicateUnicodeString @ 0x14091E750 (RtlDuplicateUnicodeString.c)
 */

NTSTATUS __fastcall PpmRegisterProvSocIdentifier(PCUNICODE_STRING StringIn)
{
  if ( !StringIn || !StringIn->Buffer )
    return -1073741811;
  if ( unk_140F10DD0.Length )
    return -1073740008;
  return RtlDuplicateUnicodeString(1u, StringIn, &unk_140F10DD0);
}
