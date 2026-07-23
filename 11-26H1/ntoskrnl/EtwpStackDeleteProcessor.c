/*
 * XREFs of EtwpStackDeleteProcessor @ 0x1406CA700
 * Callers:
 *     EtwInitializeProcessor @ 0x14082AAD4 (EtwInitializeProcessor.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140735860 (RtlpInterlockedPopEntrySList.c)
 *     KeFreeCalloutStack @ 0x140B25070 (KeFreeCalloutStack.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

PSLIST_ENTRY __fastcall EtwpStackDeleteProcessor(_SLIST_HEADER *a1)
{
  _SLIST_HEADER *v1; // rdi
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
