/*
 * XREFs of SepFindSharedSidEntry @ 0x1409E470C
 * Callers:
 *     SepInsertOrReferenceSharedSidEntries @ 0x1409E43BC (SepInsertOrReferenceSharedSidEntries.c)
 *     SepDeReferenceSharedSidEntries @ 0x1409E45E0 (SepDeReferenceSharedSidEntries.c)
 * Callees:
 *     RtlEqualSid @ 0x140406680 (RtlEqualSid.c)
 *     RtlLookupEntryHashTable @ 0x14040CA60 (RtlLookupEntryHashTable.c)
 *     RtlGetNextEntryHashTable @ 0x14046B0C0 (RtlGetNextEntryHashTable.c)
 */

PRTL_DYNAMIC_HASH_TABLE_ENTRY __fastcall SepFindSharedSidEntry(unsigned int *Sid1)
{
  struct _KTHREAD *v1; // rbp
  __int64 v2; // rbx
  __int64 v4; // r8
  ULONG_PTR v5; // rdx
  PRTL_DYNAMIC_HASH_TABLE_ENTRY i; // rax
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v7; // rdi
  _RTL_DYNAMIC_HASH_TABLE_CONTEXT Context; // [rsp+20h] [rbp-28h] BYREF

  v1 = g_SepSidMapping;
  v2 = 0LL;
  memset(&Context, 0, sizeof(Context));
  v4 = Sid1[*((unsigned __int8 *)Sid1 + 1) + 1];
  v5 = v4 + 1;
  if ( (_DWORD)v4 )
    v5 = Sid1[*((unsigned __int8 *)Sid1 + 1) + 1];
  for ( i = RtlLookupEntryHashTable((PRTL_DYNAMIC_HASH_TABLE)g_SepSidMapping->Header.WaitListHead.Flink, v5, &Context);
        ;
        i = RtlGetNextEntryHashTable((PRTL_DYNAMIC_HASH_TABLE)v1->Header.WaitListHead.Flink, &Context) )
  {
    v7 = i;
    if ( !i )
      break;
    if ( RtlEqualSid(Sid1, i[1].Linkage.Blink) )
      return v7;
  }
  return (PRTL_DYNAMIC_HASH_TABLE_ENTRY)v2;
}
