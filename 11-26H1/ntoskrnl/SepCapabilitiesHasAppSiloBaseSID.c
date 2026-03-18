/*
 * XREFs of SepCapabilitiesHasAppSiloBaseSID @ 0x14025F0C4
 * Callers:
 *     NtCreateLowBoxToken @ 0x1408140F0 (NtCreateLowBoxToken.c)
 * Callees:
 *     RtlEqualSid @ 0x1402604A0 (RtlEqualSid.c)
 */

char __fastcall SepCapabilitiesHasAppSiloBaseSID(unsigned int a1, __int64 a2)
{
  unsigned int i; // ebx

  for ( i = 0; ; ++i )
  {
    if ( i >= a1 )
      return 0;
    if ( RtlEqualSid(RtlpBootStatHandleLock.ApcState.ApcListHead[1].Flink, *(PSID *)(a2 + 16LL * i)) )
      break;
  }
  return 1;
}
