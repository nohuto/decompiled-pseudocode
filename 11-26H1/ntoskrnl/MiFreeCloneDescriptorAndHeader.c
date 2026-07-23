/*
 * XREFs of MiFreeCloneDescriptorAndHeader @ 0x140535524
 * Callers:
 *     MiReturnCloneResources @ 0x140A07D98 (MiReturnCloneResources.c)
 * Callees:
 *     MiFreeCloneDescriptor @ 0x140B46704 (MiFreeCloneDescriptor.c)
 */

__int64 __fastcall MiFreeCloneDescriptorAndHeader(ULONG_PTR a1, void *a2)
{
  return MiFreeCloneDescriptor(a1, a2);
}
