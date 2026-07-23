/*
 * XREFs of SepCapabilitiesHasAppSiloBaseSID @ 0x1404052A8
 * Callers:
 *     SepCreateAppContainerToken @ 0x14063EAD8 (SepCreateAppContainerToken.c)
 *     NtCreateLowBoxToken @ 0x140819F50 (NtCreateLowBoxToken.c)
 * Callees:
 *     RtlEqualSid @ 0x140406680 (RtlEqualSid.c)
 */

char __fastcall SepCapabilitiesHasAppSiloBaseSID(unsigned int a1, __int64 a2)
{
  unsigned int i; // ebx

  for ( i = 0; ; ++i )
  {
    if ( i >= a1 )
      return 0;
    if ( RtlEqualSid(*(PSID *)&RtlpBootStatHandleLock.ApcStateFill[40], *(PSID *)(a2 + 16LL * i)) )
      break;
  }
  return 1;
}
