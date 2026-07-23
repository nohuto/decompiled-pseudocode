/*
 * XREFs of CmSiEventTupleCleanup @ 0x1404AE7AC
 * Callers:
 *     CmpHiveCacheEntryCleanup @ 0x14086815C (CmpHiveCacheEntryCleanup.c)
 *     CmpOpenHiveFile @ 0x1408BB784 (CmpOpenHiveFile.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
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
