/*
 * XREFs of RtlpGetNormalization @ 0x14080F254
 * Callers:
 *     RtlIsNormalizedString @ 0x140808D80 (RtlIsNormalizedString.c)
 *     RtlNormalizeString @ 0x140808E10 (RtlNormalizeString.c)
 * Callees:
 *     NormalizationListEntry_Alloc @ 0x140626378 (NormalizationListEntry_Alloc.c)
 *     NormalizationList__InsertTail @ 0x14062639C (NormalizationList__InsertTail.c)
 *     NormalizationList__Lock @ 0x1406263D0 (NormalizationList__Lock.c)
 *     NormalizationList__Lookup @ 0x140626454 (NormalizationList__Lookup.c)
 *     NormalizationList__Unlock @ 0x140626488 (NormalizationList__Unlock.c)
 *     ZwGetNlsSectionPtr @ 0x140725430 (ZwGetNlsSectionPtr.c)
 *     Normalization__LoadTables @ 0x140808180 (Normalization__LoadTables.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpGetNormalization(__int64 a1, unsigned __int64 *a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned int v5; // edi
  __int64 result; // rax
  int v7; // ecx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  int NlsSectionPtr; // ebx
  __int64 v12; // rax
  _DWORD *v13; // rbx
  int Tables; // ebp
  unsigned __int64 v15; // [rsp+58h] [rbp+10h]
  unsigned __int16 *v16; // [rsp+60h] [rbp+18h]

  v5 = a1;
  if ( !a2 )
    return 3221225712LL;
  NormalizationList__Lock(a1, (__int64)a2, a3, a4);
  v8 = NormalizationList__Lookup(v5);
  if ( !v8 )
  {
    v16 = 0LL;
    v15 = 0LL;
    v9 = NormalizationList__Lookup(v7 ^ 0x100u);
    if ( v9 )
    {
      v16 = *(unsigned __int16 **)(v9 + 8);
      v15 = *(_QWORD *)(v9 + 16);
    }
    else
    {
      v10 = v5;
      LODWORD(v10) = v5 & 0xFFFFFEFF;
      NlsSectionPtr = ZwGetNlsSectionPtr(12LL, v10);
      if ( NlsSectionPtr < 0 )
        goto LABEL_12;
    }
    v12 = NormalizationListEntry_Alloc();
    v13 = (_DWORD *)v12;
    if ( !v12 )
    {
      NlsSectionPtr = -1073741801;
LABEL_12:
      NormalizationList__Unlock();
      return (unsigned int)NlsSectionPtr;
    }
    v8 = v12 + 24;
    Tables = Normalization__LoadTables(v5, v16, v15, (_DWORD *)(v12 + 24));
    if ( Tables < 0 )
    {
      ExFreePoolWithTag(v13, 0);
      NlsSectionPtr = Tables;
      goto LABEL_12;
    }
    v13[4] = v5;
    NormalizationList__InsertTail((unsigned __int64 **)v13);
  }
  NormalizationList__Unlock();
  result = 0LL;
  *a2 = v8;
  return result;
}
