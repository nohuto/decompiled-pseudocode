/*
 * XREFs of DbgkpTriageDumpIsMemoryBlockPresent @ 0x14078F540
 * Callers:
 *     <none>
 * Callees:
 *     DbgkpTriageDumpCheckPresentHashTable @ 0x1405B6F88 (DbgkpTriageDumpCheckPresentHashTable.c)
 */

bool __fastcall DbgkpTriageDumpIsMemoryBlockPresent(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // r9
  __int64 v5; // rax
  unsigned int i; // ecx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_QWORD *)a1;
  if ( !*(_QWORD *)(a1 + 32) || *(_DWORD *)(a1 + 40) >= 0x6F9u )
  {
    v5 = v3 + *(unsigned int *)(v3 + 8312);
    for ( i = 0; i < *(_DWORD *)(v3 + 8316); ++i )
    {
      if ( *(_QWORD *)v5 == a2 && (!a3 || *(_DWORD *)(v5 + 12) == a3) )
        return 1;
      v5 += 16LL;
    }
    return 0;
  }
  return DbgkpTriageDumpCheckPresentHashTable(a1, a2, a3, &v7) != 0;
}
