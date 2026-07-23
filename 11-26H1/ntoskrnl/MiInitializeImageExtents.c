/*
 * XREFs of MiInitializeImageExtents @ 0x140873770
 * Callers:
 *     MiEnableImageDirectMap @ 0x1406FE504 (MiEnableImageDirectMap.c)
 * Callees:
 *     MiGetCommittedPages @ 0x1404560C0 (MiGetCommittedPages.c)
 *     MiDeleteSegmentPages @ 0x1404727CC (MiDeleteSegmentPages.c)
 *     MiAllocateFileExtents @ 0x140B62A58 (MiAllocateFileExtents.c)
 */

__int64 __fastcall MiInitializeImageExtents(_QWORD *a1)
{
  struct _KTHREAD *Blink; // rbx
  int FileExtents; // esi
  __int64 CommittedPages; // rbx

  Blink = (struct _KTHREAD *)(a1 + 16);
  FileExtents = 0;
  while ( Blink )
  {
    FileExtents = MiAllocateFileExtents(Blink, 0, 0LL);
    if ( FileExtents < 0 )
    {
      CommittedPages = MiGetCommittedPages(a1);
      if ( CommittedPages )
        *(_QWORD *)(*a1 + 16LL) = 0LL;
      MiDeleteSegmentPages(a1);
      if ( CommittedPages )
        *(_QWORD *)(*a1 + 16LL) = CommittedPages;
      return (unsigned int)FileExtents;
    }
    Blink = (struct _KTHREAD *)Blink->Header.WaitListHead.Blink;
  }
  return (unsigned int)FileExtents;
}
