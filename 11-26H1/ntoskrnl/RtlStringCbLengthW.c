/*
 * XREFs of RtlStringCbLengthW @ 0x140478794
 * Callers:
 *     AuthzBasepConvertRelativeToAbsoluteTokenAttribute @ 0x1404EA1F0 (AuthzBasepConvertRelativeToAbsoluteTokenAttribute.c)
 *     RtlpGetTokenNamedObjectPath @ 0x140780FE0 (RtlpGetTokenNamedObjectPath.c)
 *     IoReportDetectedDevice @ 0x1407A0B40 (IoReportDetectedDevice.c)
 *     PopFxValidateReturnedUnicodeString @ 0x1407D0E54 (PopFxValidateReturnedUnicodeString.c)
 *     PpmRegisterProfiles @ 0x1407E6B9C (PpmRegisterProfiles.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x140809440 (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     AslpFileVerStringBlockGetValue @ 0x1408956B4 (AslpFileVerStringBlockGetValue.c)
 *     RtlpPopulateLanguageConfigList @ 0x1408AF744 (RtlpPopulateLanguageConfigList.c)
 *     RtlpValidRelativeAttribute @ 0x1409E0D60 (RtlpValidRelativeAttribute.c)
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 *     LocalGetStringForRelativeAttribute @ 0x140A6CA38 (LocalGetStringForRelativeAttribute.c)
 *     PiSwIrpStartCreateWorker @ 0x140A8CB08 (PiSwIrpStartCreateWorker.c)
 *     PopIdleWakeGenerateDescriptionString @ 0x140B2AFCC (PopIdleWakeGenerateDescriptionString.c)
 *     PopPowerInformationInternal @ 0x140B73EF0 (PopPowerInformationInternal.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCbLengthW(STRSAFE_PCNZWCH psz, size_t cbMax, size_t *pcbLength)
{
  size_t v3; // rdx
  __int64 v5; // rax
  size_t i; // r8
  NTSTATUS v7; // ecx

  v3 = cbMax >> 1;
  v5 = 0LL;
  if ( psz && v3 <= 0x7FFFFFFF )
  {
    for ( i = v3; i; --i )
    {
      if ( !*psz )
        break;
      ++psz;
    }
    v7 = i == 0 ? 0xC000000D : 0;
    v5 = (v3 - i) & -(__int64)(i != 0);
  }
  else
  {
    v7 = -1073741811;
  }
  if ( pcbLength )
  {
    if ( v7 < 0 )
      *pcbLength = 0LL;
    else
      *pcbLength = 2 * v5;
  }
  return v7;
}
