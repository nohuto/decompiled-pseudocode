/*
 * XREFs of IopUnlockAndFreeMdl @ 0x14040F3F4
 * Callers:
 *     IopFreeCopyObjectsFromIrp @ 0x14040F0AC (IopFreeCopyObjectsFromIrp.c)
 *     IopCopyCompleteReadIrp @ 0x14040F120 (IopCopyCompleteReadIrp.c)
 *     IopMcTryUnlockMdl @ 0x1405D9F78 (IopMcTryUnlockMdl.c)
 *     IopAllocateAndLockMdl @ 0x140796C1C (IopAllocateAndLockMdl.c)
 *     IopDeleteIoRing @ 0x14079A940 (IopDeleteIoRing.c)
 *     IopMcCreateBufferEntryMdl @ 0x14079E10C (IopMcCreateBufferEntryMdl.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x140280C00 (MmUnmapLockedPages.c)
 *     IoFreeMdl @ 0x1403A0EF0 (IoFreeMdl.c)
 *     MmUnlockPages @ 0x140410330 (MmUnlockPages.c)
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
