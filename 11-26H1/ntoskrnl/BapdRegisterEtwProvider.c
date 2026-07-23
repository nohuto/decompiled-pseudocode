/*
 * XREFs of BapdRegisterEtwProvider @ 0x140504704
 * Callers:
 *     BapdWriteEtwEvents @ 0x1406CDFBC (BapdWriteEtwEvents.c)
 *     BapdpRecordIumStatus @ 0x140CE9478 (BapdpRecordIumStatus.c)
 * Callees:
 *     EtwSetInformation @ 0x14082E9F0 (EtwSetInformation.c)
 *     EtwRegister @ 0x140917980 (EtwRegister.c)
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
