/*
 * XREFs of RtlCapabilityCheckForSingleSessionSku @ 0x140803F90
 * Callers:
 *     PopPowerInformationInternal @ 0x140B6F6FC (PopPowerInformationInternal.c)
 * Callees:
 *     RtlCapabilityCheck @ 0x140A91900 (RtlCapabilityCheck.c)
 *     RtlIsMultiSessionSku @ 0x140A91D70 (RtlIsMultiSessionSku.c)
 */

__int64 __fastcall RtlCapabilityCheckForSingleSessionSku(
        HANDLE ExistingTokenHandle,
        PCUNICODE_STRING String2,
        _BYTE *a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( a3 )
  {
    if ( (unsigned __int8)RtlIsMultiSessionSku() )
      *a3 = 0;
    else
      return (unsigned int)RtlCapabilityCheck(ExistingTokenHandle, String2);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
