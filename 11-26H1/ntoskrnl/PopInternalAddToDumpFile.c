/*
 * XREFs of PopInternalAddToDumpFile @ 0x1406032D4
 * Callers:
 *     IopAddBugcheckTriageDataFromParameters @ 0x1404424BC (IopAddBugcheckTriageDataFromParameters.c)
 *     PopSetRange @ 0x1404A9650 (PopSetRange.c)
 *     KiCollectTriageDumpDataBlocks @ 0x1405EA4DC (KiCollectTriageDumpDataBlocks.c)
 *     PopIrpWatchdogBugcheck @ 0x140603508 (PopIrpWatchdogBugcheck.c)
 *     PopPowerActionWatchdog @ 0x14060A380 (PopPowerActionWatchdog.c)
 *     PoShutdownBugCheck @ 0x1407D4050 (PoShutdownBugCheck.c)
 *     PopThermalWorker @ 0x140AC58C0 (PopThermalWorker.c)
 *     PopFreeHiberContext @ 0x140B1CE40 (PopFreeHiberContext.c)
 *     PopAllocateHiberContext @ 0x140B75B48 (PopAllocateHiberContext.c)
 *     PopCreateDumpMdl @ 0x140C0018C (PopCreateDumpMdl.c)
 *     PopDecompressHiberBlocks @ 0x140C002A4 (PopDecompressHiberBlocks.c)
 *     PopRequestRead @ 0x140C013E8 (PopRequestRead.c)
 *     PopRequestWrite @ 0x140C01804 (PopRequestWrite.c)
 *     PopSaveHiberContext @ 0x140C01D50 (PopSaveHiberContext.c)
 *     PopRestoreHiberContext @ 0x140C09348 (PopRestoreHiberContext.c)
 *     PopHiberReadChecksums @ 0x140C0F654 (PopHiberReadChecksums.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x140442C84 (IoAddTriageDumpDataBlock.c)
 *     PopInternalSaveStackToDumpFile @ 0x140603390 (PopInternalSaveStackToDumpFile.c)
 */

char __fastcall PopInternalAddToDumpFile(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned __int64 v4; // rdx

  if ( a1 )
  {
    if ( a2 )
      v4 = ((a1 & 0xFFF) + (unsigned __int64)a2 + 4095) >> 12;
    else
      LODWORD(v4) = 1;
    IoAddTriageDumpDataBlock(a1 & 0xFFFFF000, (PVOID)(unsigned int)((_DWORD)v4 << 12));
  }
  if ( a3 )
    PopInternalSaveStackToDumpFile(a3);
  IoAddTriageDumpDataBlock((ULONG)&PopHiberInfo, (PVOID)0xE8);
  IoAddTriageDumpDataBlock((ULONG)&PopAction, (PVOID)0x1E0);
  if ( *(_QWORD *)&qword_140F10468 )
    IoAddTriageDumpDataBlock(qword_140F10468, (PVOID)0x1D8);
  if ( qword_140F10470 )
    IoAddTriageDumpDataBlock(qword_140F10470, (PVOID)0x1F0);
  return IoAddTriageDumpDataBlock((ULONG)&PopCB, (PVOID)0x2B8);
}
