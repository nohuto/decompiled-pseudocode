/*
 * XREFs of RtlCapabilityCheckForSingleSessionSku @ 0x180110150
 * Callers:
 *     <none>
 * Callees:
 *     RtlIsMultiSessionSku @ 0x1800596E0 (RtlIsMultiSessionSku.c)
 *     RtlCapabilityCheck @ 0x180059720 (RtlCapabilityCheck.c)
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
