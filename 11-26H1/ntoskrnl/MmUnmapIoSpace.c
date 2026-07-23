/*
 * XREFs of MmUnmapIoSpace @ 0x140345690
 * Callers:
 *     HalpDmaCvmMakeContiguousVirtualBufferPrivate @ 0x140785A30 (HalpDmaCvmMakeContiguousVirtualBufferPrivate.c)
 *     HvlDeleteProcessor @ 0x140794344 (HvlDeleteProcessor.c)
 *     WmipFindSMBiosStructure @ 0x1408289B4 (WmipFindSMBiosStructure.c)
 *     WmipFindSysIdTable @ 0x140828AD0 (WmipFindSysIdTable.c)
 *     WmipGetSMBiosEventlog @ 0x140828BC8 (WmipGetSMBiosEventlog.c)
 *     WmipGetSysIds @ 0x140828E1C (WmipGetSysIds.c)
 *     WmipParseSysIdTable @ 0x1408290D4 (WmipParseSysIdTable.c)
 *     WheapClearPoison @ 0x14084EF00 (WheapClearPoison.c)
 *     WmipGetSMBiosTableData @ 0x140AC6900 (WmipGetSMBiosTableData.c)
 *     ExpGetSystemPlatformBinary @ 0x140B6B030 (ExpGetSystemPlatformBinary.c)
 *     HalpInitGenericErrorSourceEntry @ 0x140BF1DF4 (HalpInitGenericErrorSourceEntry.c)
 *     HalpInitGenericErrorSourceEntryV2 @ 0x140BF205C (HalpInitGenericErrorSourceEntryV2.c)
 *     HalpFreeNvsBuffers @ 0x140C0EB14 (HalpFreeNvsBuffers.c)
 *     PopGetHwConfigurationSignature @ 0x140C0EC5C (PopGetHwConfigurationSignature.c)
 * Callees:
 *     MiUnmapContiguousMemory @ 0x1403456A8 (MiUnmapContiguousMemory.c)
 */

void __stdcall MmUnmapIoSpace(PVOID BaseAddress, SIZE_T NumberOfBytes)
{
  char v2; // r8

  v2 = 1;
  MiUnmapContiguousMemory(BaseAddress, NumberOfBytes, v2);
}
