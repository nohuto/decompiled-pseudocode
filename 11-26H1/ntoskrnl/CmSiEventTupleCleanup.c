/*
 * XREFs of CmSiEventTupleCleanup @ 0x1404B535C
 * Callers:
 *     CmpHiveCacheEntryCleanup @ 0x140861D7C (CmpHiveCacheEntryCleanup.c)
 *     CmpOpenHiveFile @ 0x1408B51B0 (CmpOpenHiveFile.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 */

NTSTATUS __fastcall CmSiEventTupleCleanup(__int64 a1)
{
  void *v2; // rcx
  NTSTATUS result; // eax

  v2 = *(void **)(a1 + 8);
  if ( v2 )
    result = ObfDereferenceObjectWithTag(v2, 0x746C6644u);
  if ( *(_QWORD *)a1 )
    return ZwClose(*(HANDLE *)a1);
  return result;
}
