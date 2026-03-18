/*
 * XREFs of SepRmDestroyCapTable @ 0x140773F58
 * Callers:
 *     SepRmDereferenceCapTable @ 0x1402ACB40 (SepRmDereferenceCapTable.c)
 *     SepBuildCapPolicyTable @ 0x14063BCE4 (SepBuildCapPolicyTable.c)
 * Callees:
 *     RtlEnumerateEntryHashTable @ 0x1403D8330 (RtlEnumerateEntryHashTable.c)
 *     RtlInitEnumerationHashTable @ 0x140466F60 (RtlInitEnumerationHashTable.c)
 *     RtlEndWeakEnumerationHashTable @ 0x14046DE30 (RtlEndWeakEnumerationHashTable.c)
 *     RtlRemoveEntryHashTable @ 0x140477880 (RtlRemoveEntryHashTable.c)
 *     RtlDeleteHashTable @ 0x1404B8B10 (RtlDeleteHashTable.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall SepRmDestroyCapTable(struct _RTL_DYNAMIC_HASH_TABLE *P)
{
  struct _RTL_DYNAMIC_HASH_TABLE_ENTRY *v2; // rax
  struct _RTL_DYNAMIC_HASH_TABLE_ENTRY *v3; // rdi
  void *v4; // rcx
  struct _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator; // [rsp+20h] [rbp-38h] BYREF

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
