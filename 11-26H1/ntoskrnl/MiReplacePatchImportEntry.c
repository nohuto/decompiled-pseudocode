/*
 * XREFs of MiReplacePatchImportEntry @ 0x1406FCE30
 * Callers:
 *     <none>
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14040E290 (RtlImageDirectoryEntryToData.c)
 *     MiReplaceImportEntry @ 0x1406E6D18 (MiReplaceImportEntry.c)
 */

__int64 __fastcall MiReplacePatchImportEntry(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v5; // r8
  _QWORD *v6; // rcx
  unsigned int v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v8 = 0;
  v5 = RtlImageDirectoryEntryToData(*(_QWORD *)(BugCheckParameter2 + 48), 1, 0xCu, &v8);
  if ( v5 && v8 >= 8 )
  {
    while ( v2 < v8 >> 3 )
    {
      v6 = (_QWORD *)(v5 + 8LL * v2);
      if ( *v6 == *(_QWORD *)(a2 + 16) )
      {
        MiReplaceImportEntry(BugCheckParameter2, (ULONG_PTR)v6, *(_QWORD *)(a2 + 8));
        return 1LL;
      }
      ++v2;
    }
  }
  return 1LL;
}
