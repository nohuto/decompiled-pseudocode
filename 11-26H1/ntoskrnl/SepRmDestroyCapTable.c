/*
 * XREFs of SepRmDestroyCapTable @ 0x140776F58
 * Callers:
 *     SepRmDereferenceCapTable @ 0x1403AF8B4 (SepRmDereferenceCapTable.c)
 *     SepBuildCapPolicyTable @ 0x14063F8C0 (SepBuildCapPolicyTable.c)
 * Callees:
 *     RtlEnumerateEntryHashTable @ 0x1403DB300 (RtlEnumerateEntryHashTable.c)
 *     RtlInitEnumerationHashTable @ 0x1404606B0 (RtlInitEnumerationHashTable.c)
 *     RtlEndWeakEnumerationHashTable @ 0x1404675B0 (RtlEndWeakEnumerationHashTable.c)
 *     RtlRemoveEntryHashTable @ 0x140471000 (RtlRemoveEntryHashTable.c)
 *     RtlDeleteHashTable @ 0x1404B2340 (RtlDeleteHashTable.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall SepRmDestroyCapTable(_RTL_DYNAMIC_HASH_TABLE *P)
{
  _RTL_DYNAMIC_HASH_TABLE_ENTRY *v2; // rax
  _RTL_DYNAMIC_HASH_TABLE_ENTRY *v3; // rdi
  void *v4; // rcx
  _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator; // [rsp+20h] [rbp-38h] BYREF

  memset(&Enumerator, 0, sizeof(Enumerator));
  RtlInitEnumerationHashTable(P, &Enumerator);
  while ( 1 )
  {
    v2 = RtlEnumerateEntryHashTable(P, &Enumerator);
    v3 = v2;
    if ( !v2 )
      break;
    RtlRemoveEntryHashTable(P, v2, 0LL);
    v3[1].Linkage.Blink = 0LL;
    ExFreePoolWithTag(v3, 0x70536553u);
  }
  RtlEndWeakEnumerationHashTable(P, &Enumerator);
  RtlDeleteHashTable(P);
  v4 = *(void **)&P[1].DivisorMask;
  if ( v4 )
    ExFreePoolWithTag(v4, 0x70536553u);
  ExFreePoolWithTag(P, 0x70536553u);
}
