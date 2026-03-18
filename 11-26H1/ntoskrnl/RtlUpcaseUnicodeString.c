/*
 * XREFs of RtlUpcaseUnicodeString @ 0x1409E9B60
 * Callers:
 *     RtlDeriveCapabilitySidsFromName @ 0x1404984A0 (RtlDeriveCapabilitySidsFromName.c)
 *     DifRtlUpcaseUnicodeStringWrapper @ 0x140696DD0 (DifRtlUpcaseUnicodeStringWrapper.c)
 *     IoReportDetectedDevice @ 0x14079E000 (IoReportDetectedDevice.c)
 *     PiDevCfgResolveVariableGenerateGuid @ 0x1407AB590 (PiDevCfgResolveVariableGenerateGuid.c)
 *     PiCMGenerateDeviceInstance @ 0x1407B0AD8 (PiCMGenerateDeviceInstance.c)
 *     PiCMOpenClassKey @ 0x140916DFC (PiCMOpenClassKey.c)
 *     AslStringUpcaseToMultiByteN @ 0x1409E418C (AslStringUpcaseToMultiByteN.c)
 *     SdbMakeIndexKeyFromStringEx @ 0x1409E8AF0 (SdbMakeIndexKeyFromStringEx.c)
 *     PfSnLogVolumeCreate @ 0x1409E8C8C (PfSnLogVolumeCreate.c)
 *     PfCalculateProcessHash @ 0x1409E9560 (PfCalculateProcessHash.c)
 *     PfSnLogStreamCreate @ 0x1409E9998 (PfSnLogStreamCreate.c)
 *     PipMakeGloballyUniqueId @ 0x140AF2168 (PipMakeGloballyUniqueId.c)
 *     ViCreateProcessCallbackInternal @ 0x140C34B80 (ViCreateProcessCallbackInternal.c)
 *     ViFaultsAddAppNoDuplicates @ 0x140C34CA0 (ViFaultsAddAppNoDuplicates.c)
 *     PipInitComputerIds @ 0x140D056B0 (PipInitComputerIds.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402150C0 (PsGetCurrentServerSiloGlobals.c)
 *     AllocateOrValidateUnicodeStringBuffer @ 0x1404621F0 (AllocateOrValidateUnicodeStringBuffer.c)
 *     ExFreePool @ 0x140C10E30 (ExFreePool.c)
 */

NTSTATUS __stdcall RtlUpcaseUnicodeString(
        PUNICODE_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  struct _LIST_ENTRY *Flink; // rsi
  unsigned __int16 *v6; // rdx
  char v7; // r10
  NTSTATUS result; // eax
  unsigned int v9; // r11d
  __int64 i; // r9
  unsigned __int64 v11; // r10

  if ( AllocateDestinationString || SourceString->Length )
  {
    Flink = PsGetCurrentServerSiloGlobals()[75].Flink;
    result = AllocateOrValidateUnicodeStringBuffer(
               v7,
               *v6,
               (__int64 *)&DestinationString->Buffer,
               &DestinationString->MaximumLength);
    if ( result < 0 )
      return result;
    v9 = SourceString->Length >> 1;
    for ( i = 0LL; (unsigned int)i < v9; i = (unsigned int)(i + 1) )
    {
      v11 = SourceString->Buffer[i];
      if ( (unsigned int)v11 >= 0x61 )
      {
        if ( (unsigned int)v11 > 0x7A )
        {
          if ( Flink )
          {
            if ( (unsigned __int16)v11 >= 0xC0u )
              LOWORD(v11) = *((_WORD *)&Flink->Flink
                            + (v11 & 0xF)
                            + *((unsigned __int16 *)&Flink->Flink
                              + ((unsigned __int8)v11 >> 4)
                              + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v11 >> 8))))
                          + v11;
          }
        }
        else
        {
          LOWORD(v11) = v11 - 32;
        }
      }
      DestinationString->Buffer[i] = v11;
    }
    DestinationString->Length = SourceString->Length;
  }
  else
  {
    DestinationString->Length = 0;
  }
  return 0;
}
