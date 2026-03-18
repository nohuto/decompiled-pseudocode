/*
 * XREFs of MmUnmapIoSpace @ 0x140343610
 * Callers:
 *     HalpDmaCvmMakeContiguousVirtualBufferPrivate @ 0x140782EFC (HalpDmaCvmMakeContiguousVirtualBufferPrivate.c)
 *     HvlDeleteProcessor @ 0x140791814 (HvlDeleteProcessor.c)
 *     WmipFindSMBiosStructure @ 0x1408227A4 (WmipFindSMBiosStructure.c)
 *     WmipFindSysIdTable @ 0x1408228C0 (WmipFindSysIdTable.c)
 *     WmipGetSMBiosEventlog @ 0x1408229B8 (WmipGetSMBiosEventlog.c)
 *     WmipGetSysIds @ 0x140822C0C (WmipGetSysIds.c)
 *     WmipParseSysIdTable @ 0x140822EC4 (WmipParseSysIdTable.c)
 *     WheapClearPoison @ 0x140848C30 (WheapClearPoison.c)
 *     WmipGetSMBiosTableData @ 0x140AC4C90 (WmipGetSMBiosTableData.c)
 *     ExpGetSystemPlatformBinary @ 0x140B680A0 (ExpGetSystemPlatformBinary.c)
 *     HalpInitGenericErrorSourceEntry @ 0x140BEBDF4 (HalpInitGenericErrorSourceEntry.c)
 *     HalpInitGenericErrorSourceEntryV2 @ 0x140BEC05C (HalpInitGenericErrorSourceEntryV2.c)
 *     HalpFreeNvsBuffers @ 0x140C08904 (HalpFreeNvsBuffers.c)
 *     PopGetHwConfigurationSignature @ 0x140C08A4C (PopGetHwConfigurationSignature.c)
 * Callees:
 *     MiUnmapContiguousMemory @ 0x140343628 (MiUnmapContiguousMemory.c)
 */

void __stdcall MmUnmapIoSpace(PVOID BaseAddress, SIZE_T NumberOfBytes)
{
  char v2; // r8

  v2 = 1;
  MiUnmapContiguousMemory(BaseAddress, NumberOfBytes, v2);
}
