/*
 * XREFs of HvlpPreallocatePageListResources @ 0x140775CA4
 * Callers:
 *     HvlAllocateHibernateResources @ 0x140775C6C (HvlAllocateHibernateResources.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MmAllocateIndependentPagesEx @ 0x140B3F88C (MmAllocateIndependentPagesEx.c)
 */

__int64 HvlpPreallocatePageListResources()
{
  unsigned int v0; // ebx
  struct _LIST_ENTRY *IndependentPages; // rax

  v0 = 0;
  if ( !VslpReservedTransferLock.WaitListEntry.Blink )
  {
    IndependentPages = (struct _LIST_ENTRY *)MmAllocateIndependentPagesEx(4096LL, 0xFFFFFFFFLL, 0LL, 0LL);
    VslpReservedTransferLock.WaitListEntry.Blink = IndependentPages;
    if ( IndependentPages )
      memset_0(IndependentPages, 0, 0x1000uLL);
    else
      return (unsigned int)-1073741670;
  }
  return v0;
}
