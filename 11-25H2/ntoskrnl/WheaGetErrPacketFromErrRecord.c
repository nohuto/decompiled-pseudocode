/*
 * XREFs of WheaGetErrPacketFromErrRecord @ 0x140552750
 * Callers:
 *     HalpMceRecovery @ 0x140552090 (HalpMceRecovery.c)
 *     KiMcheckAlternateReturn @ 0x1405C5660 (KiMcheckAlternateReturn.c)
 *     WheapAttemptArchitecturalErrorRecovery @ 0x14064FD70 (WheapAttemptArchitecturalErrorRecovery.c)
 * Callees:
 *     RtlCompareMemory @ 0x1406A86C0 (RtlCompareMemory.c)
 */

PWHEA_ERROR_PACKET __stdcall WheaGetErrPacketFromErrRecord(PWHEA_ERROR_RECORD Record)
{
  struct _WHEA_ERROR_PACKET_V2 *v1; // rdi
  _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR *SectionDescriptor; // rsi
  unsigned int i; // ebp
  __int64 SectionOffset; // rax
  struct _WHEA_ERROR_PACKET_V2 *v6; // rcx

  v1 = 0LL;
  if ( Record->Header.Signature == 1380274243
    && Record->Header.Length >= 72 * (unsigned int)Record->Header.SectionCount + 128 )
  {
    SectionDescriptor = Record->SectionDescriptor;
    for ( i = 0; i < Record->Header.SectionCount; ++i )
    {
      if ( RtlCompareMemory(&SectionDescriptor->SectionType, &WHEA_ERROR_PACKET_SECTION_GUID, 0x10uLL) == 16 )
      {
        SectionOffset = SectionDescriptor->SectionOffset;
        if ( Record->Header.Length >= (unsigned int)(SectionOffset + SectionDescriptor->SectionLength) )
        {
          v6 = (struct _WHEA_ERROR_PACKET_V2 *)((char *)Record + SectionOffset);
          if ( *(unsigned int *)((char *)&Record->Header.Signature + SectionOffset) != 1095059543 )
            return 0LL;
          return v6;
        }
        return v1;
      }
      ++SectionDescriptor;
    }
  }
  return v1;
}
