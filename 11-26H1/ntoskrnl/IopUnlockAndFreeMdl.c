/*
 * XREFs of IopUnlockAndFreeMdl @ 0x14040FCD4
 * Callers:
 *     IopFreeCopyObjectsFromIrp @ 0x14040F98C (IopFreeCopyObjectsFromIrp.c)
 *     IopCopyCompleteReadIrp @ 0x14040FA00 (IopCopyCompleteReadIrp.c)
 *     IopMcTryUnlockMdl @ 0x1405D7788 (IopMcTryUnlockMdl.c)
 *     IopAllocateAndLockMdl @ 0x1407940EC (IopAllocateAndLockMdl.c)
 *     IopDeleteIoRing @ 0x140797E10 (IopDeleteIoRing.c)
 *     IopMcCreateBufferEntryMdl @ 0x14079B5CC (IopMcCreateBufferEntryMdl.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x140281690 (MmUnmapLockedPages.c)
 *     IoFreeMdl @ 0x14039F190 (IoFreeMdl.c)
 *     MmUnlockPages @ 0x140410C10 (MmUnlockPages.c)
 */

void __fastcall IopUnlockAndFreeMdl(PMDL Mdl)
{
  struct _MDL *Next; // rbx

  do
  {
    if ( (Mdl->MdlFlags & 5) == 1 )
      MmUnmapLockedPages(Mdl->MappedSystemVa, Mdl);
    if ( (Mdl->MdlFlags & 2) != 0 )
      MmUnlockPages(Mdl);
    Next = Mdl->Next;
    IoFreeMdl(Mdl);
    Mdl = Next;
  }
  while ( Next );
}
