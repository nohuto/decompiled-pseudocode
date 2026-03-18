/*
 * XREFs of EtwpStackDeleteProcessor @ 0x1406C6A00
 * Callers:
 *     EtwInitializeProcessor @ 0x140824894 (EtwInitializeProcessor.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140730C90 (RtlpInterlockedPopEntrySList.c)
 *     KeFreeCalloutStack @ 0x140B22C70 (KeFreeCalloutStack.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

PSLIST_ENTRY __fastcall EtwpStackDeleteProcessor(union _SLIST_HEADER *a1)
{
  union _SLIST_HEADER *v1; // rdi
  PSLIST_ENTRY result; // rax
  PSLIST_ENTRY v3; // rbx

  v1 = a1 + 24;
  while ( 1 )
  {
    result = RtlpInterlockedPopEntrySList(v1);
    v3 = result;
    if ( !result )
      break;
    KeFreeCalloutStack(*((PVOID *)&result[1].Next + 1));
    ExFreePoolWithTag(v3, 0);
  }
  return result;
}
