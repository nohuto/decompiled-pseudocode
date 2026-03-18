/*
 * XREFs of BapdRegisterEtwProvider @ 0x14050AC94
 * Callers:
 *     BapdWriteEtwEvents @ 0x1406C9F80 (BapdWriteEtwEvents.c)
 *     BapdpRecordIumStatus @ 0x140CE30D8 (BapdpRecordIumStatus.c)
 * Callees:
 *     EtwSetInformation @ 0x1408287B0 (EtwSetInformation.c)
 *     EtwRegister @ 0x14093BDE0 (EtwRegister.c)
 */

NTSTATUS __fastcall BapdRegisterEtwProvider(const GUID *a1, char a2, ULONGLONG *a3)
{
  NTSTATUS result; // eax

  result = EtwRegister(a1, 0LL, 0LL, a3);
  if ( result >= 0 )
  {
    if ( a2 )
      EtwSetInformation(
        *a3,
        EventProviderSetTraits,
        &`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits,
        (unsigned __int16)`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits);
    return 0;
  }
  else
  {
    *a3 = 0LL;
  }
  return result;
}
