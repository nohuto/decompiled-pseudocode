/*
 * XREFs of RtlStringCbLengthW @ 0x14047EE24
 * Callers:
 *     AuthzBasepConvertRelativeToAbsoluteTokenAttribute @ 0x1404F0C10 (AuthzBasepConvertRelativeToAbsoluteTokenAttribute.c)
 *     RtlpGetTokenNamedObjectPath @ 0x14077E4E0 (RtlpGetTokenNamedObjectPath.c)
 *     IoReportDetectedDevice @ 0x14079E000 (IoReportDetectedDevice.c)
 *     PopFxValidateReturnedUnicodeString @ 0x1407CDDB4 (PopFxValidateReturnedUnicodeString.c)
 *     PpmRegisterProfiles @ 0x1407E1B0C (PpmRegisterProfiles.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x1408039A0 (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     AslpFileVerStringBlockGetValue @ 0x14088F2B8 (AslpFileVerStringBlockGetValue.c)
 *     RtlpPopulateLanguageConfigList @ 0x1408A92D4 (RtlpPopulateLanguageConfigList.c)
 *     NtPowerInformation @ 0x1409DE3E0 (NtPowerInformation.c)
 *     RtlpValidRelativeAttribute @ 0x1409F5010 (RtlpValidRelativeAttribute.c)
 *     LocalGetStringForRelativeAttribute @ 0x140A5FA78 (LocalGetStringForRelativeAttribute.c)
 *     PiSwIrpStartCreateWorker @ 0x140A7B9C8 (PiSwIrpStartCreateWorker.c)
 *     PopIdleWakeGenerateDescriptionString @ 0x140B28AFC (PopIdleWakeGenerateDescriptionString.c)
 *     PopPowerInformationInternal @ 0x140B6F6FC (PopPowerInformationInternal.c)
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
