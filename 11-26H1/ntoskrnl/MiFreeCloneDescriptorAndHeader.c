/*
 * XREFs of MiFreeCloneDescriptorAndHeader @ 0x1405330A4
 * Callers:
 *     MiReturnCloneResources @ 0x1409620A4 (MiReturnCloneResources.c)
 * Callees:
 *     MiFreeCloneDescriptor @ 0x140B44944 (MiFreeCloneDescriptor.c)
 */

__int64 __fastcall MiFreeCloneDescriptorAndHeader(ULONG_PTR a1, void *a2)
{
  return MiFreeCloneDescriptor(a1, a2);
}
