/*
 * XREFs of CommonBuffer_ReleaseCommonBufferFromPhysicalAddress @ 0x1400402D0
 * Callers:
 *     CommonBuffer_ReleaseBuffer @ 0x14003D258 (CommonBuffer_ReleaseBuffer.c)
 * Callees:
 *     <none>
 */

void __fastcall CommonBuffer_ReleaseCommonBufferFromPhysicalAddress(PVOID P)
{
  struct _MDL *v1; // rdx
  void *v3; // rcx

  v1 = (struct _MDL *)*((_QWORD *)P + 11);
  if ( v1 )
  {
    v3 = (void *)*((_QWORD *)P + 2);
    if ( v3 )
      MmUnmapLockedPages(v3, v1);
    IoFreeMdl(*((PMDL *)P + 11));
  }
  ExFreePoolWithTag(P, 0x49434858u);
}
