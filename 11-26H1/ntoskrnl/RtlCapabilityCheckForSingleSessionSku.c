/*
 * XREFs of RtlCapabilityCheckForSingleSessionSku @ 0x140809A30
 * Callers:
 *     PopPowerInformationInternal @ 0x140B73EF0 (PopPowerInformationInternal.c)
 * Callees:
 *     RtlCapabilityCheck @ 0x140A96450 (RtlCapabilityCheck.c)
 *     RtlIsMultiSessionSku @ 0x140A968C0 (RtlIsMultiSessionSku.c)
 */

__int64 __fastcall RtlCapabilityCheckForSingleSessionSku(
        HANDLE TokenHandle,
        PUNICODE_STRING CapabilityName,
        PBOOLEAN HasCapability)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( HasCapability )
  {
    if ( RtlIsMultiSessionSku() )
      *HasCapability = 0;
    else
      return (unsigned int)RtlCapabilityCheck(TokenHandle, CapabilityName, HasCapability);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
