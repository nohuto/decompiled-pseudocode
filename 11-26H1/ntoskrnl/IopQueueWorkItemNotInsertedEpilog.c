/*
 * XREFs of IopQueueWorkItemNotInsertedEpilog @ 0x1405CE3E4
 * Callers:
 *     IoQueueWorkItemToNode @ 0x140202F90 (IoQueueWorkItemToNode.c)
 *     IoTryQueueWorkItem @ 0x1405CE2C0 (IoTryQueueWorkItem.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall IopQueueWorkItemNotInsertedEpilog(__int64 a1)
{
  LONG_PTR result; // rax
  void *v3; // rcx

  *(_QWORD *)(a1 + 88) = 0LL;
  result = ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 40), 0x746C6644u);
  v3 = *(void **)(a1 + 56);
  if ( v3 )
  {
    result = ObfDereferenceObjectWithTag(v3, 0x746C6644u);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  return result;
}
