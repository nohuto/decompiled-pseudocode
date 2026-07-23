/*
 * XREFs of VmUnlockPages @ 0x1406C4560
 * Callers:
 *     <none>
 * Callees:
 *     MmUnlockPages @ 0x140410330 (MmUnlockPages.c)
 *     MmUpdateMdlTrackerForMdlSwitch @ 0x1406EF760 (MmUpdateMdlTrackerForMdlSwitch.c)
 */

void __fastcall VmUnlockPages(PMDL MemoryDescriptorList, unsigned int a2)
{
  CSHORT MdlFlags; // ax
  CSHORT v4; // ax

  if ( a2 > 1 )
    NT_ASSERT("(Operation == IoReadAccess) || (Operation == IoWriteAccess)");
  MdlFlags = MemoryDescriptorList->MdlFlags;
  if ( (MdlFlags & 0xFFF7) != 0 )
    NT_ASSERT("(Mdl->MdlFlags & ~(0x0008)) == 0");
  v4 = MdlFlags | 0x102;
  MemoryDescriptorList->MdlFlags = v4;
  if ( a2 == 1 )
    MemoryDescriptorList->MdlFlags = v4 | 0x80;
  MmUpdateMdlTrackerForMdlSwitch((ULONG_PTR)MemoryDescriptorList);
  MmUnlockPages(MemoryDescriptorList);
}
