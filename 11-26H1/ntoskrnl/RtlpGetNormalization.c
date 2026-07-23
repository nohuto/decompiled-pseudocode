/*
 * XREFs of RtlpGetNormalization @ 0x140814CE4
 * Callers:
 *     RtlIsNormalizedString @ 0x14080E810 (RtlIsNormalizedString.c)
 *     RtlNormalizeString @ 0x14080E8A0 (RtlNormalizeString.c)
 * Callees:
 *     NormalizationListEntry_Alloc @ 0x1406293C8 (NormalizationListEntry_Alloc.c)
 *     NormalizationList__InsertTail @ 0x1406293EC (NormalizationList__InsertTail.c)
 *     NormalizationList__Lock @ 0x140629420 (NormalizationList__Lock.c)
 *     NormalizationList__Lookup @ 0x1406294A4 (NormalizationList__Lookup.c)
 *     NormalizationList__Unlock @ 0x1406294D8 (NormalizationList__Unlock.c)
 *     ZwGetNlsSectionPtr @ 0x14072A000 (ZwGetNlsSectionPtr.c)
 *     Normalization__LoadTables @ 0x14080DC20 (Normalization__LoadTables.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpGetNormalization(__int64 a1, unsigned __int64 *a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned int v5; // edi
  __int64 result; // rax
  int v7; // ecx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rax
  NTSTATUS NlsSectionPtr; // ebx
  __int64 v11; // rax
  _DWORD *v12; // rbx
  int Tables; // ebp
  unsigned __int64 SectionSize; // [rsp+58h] [rbp+10h] BYREF
  PVOID SectionPointer; // [rsp+60h] [rbp+18h] BYREF

  v5 = a1;
  if ( !a2 )
    return 3221225712LL;
  NormalizationList__Lock(a1, (__int64)a2, a3, a4);
  v8 = NormalizationList__Lookup(v5);
  if ( !v8 )
  {
    SectionPointer = 0LL;
    SectionSize = 0LL;
    v9 = NormalizationList__Lookup(v7 ^ 0x100u);
    if ( v9 )
    {
      SectionPointer = *(PVOID *)(v9 + 8);
      SectionSize = *(_QWORD *)(v9 + 16);
    }
    else
    {
      NlsSectionPtr = ZwGetNlsSectionPtr(0xCu, v5 & 0xFFFFFEFF, 0LL, &SectionPointer, (PULONG)&SectionSize);
      if ( NlsSectionPtr < 0 )
        goto LABEL_12;
    }
    v11 = NormalizationListEntry_Alloc();
    v12 = (_DWORD *)v11;
    if ( !v11 )
    {
      NlsSectionPtr = -1073741801;
LABEL_12:
      NormalizationList__Unlock();
      return (unsigned int)NlsSectionPtr;
    }
    v8 = v11 + 24;
    Tables = Normalization__LoadTables(v5, (unsigned __int16 *)SectionPointer, SectionSize, (_DWORD *)(v11 + 24));
    if ( Tables < 0 )
    {
      ExFreePoolWithTag(v12, 0);
      NlsSectionPtr = Tables;
      goto LABEL_12;
    }
    v12[4] = v5;
    NormalizationList__InsertTail((unsigned __int64 **)v12);
  }
  NormalizationList__Unlock();
  result = 0LL;
  *a2 = v8;
  return result;
}
