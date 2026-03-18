/*
 * XREFs of HvlpAllocatePageListResources @ 0x140B4E9F8
 * Callers:
 *     HvlAllocateHibernateResources @ 0x140772C6C (HvlAllocateHibernateResources.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall HvlpAllocatePageListResources(__int64 a1, int a2)
{
  volatile unsigned int v2; // edi
  unsigned int v3; // ebx

  v2 = a2 + 2;
  v3 = -1073741670;
  VslpReservedTransferLock.QueueListEntry.Blink = (struct _LIST_ENTRY *)ExAllocatePool2(0x40uLL);
  if ( VslpReservedTransferLock.QueueListEntry.Blink )
  {
    VslpReservedTransferLock.NextProcessor = v2;
    return 0;
  }
  return v3;
}
