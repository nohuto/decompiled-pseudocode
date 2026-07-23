/*
 * XREFs of MiReplaceImportEntriesForVerifier @ 0x140870B18
 * Callers:
 *     MmApplyVerifierToRunningImage @ 0x140C49760 (MmApplyVerifierToRunningImage.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14042B1C0 (RtlImageDirectoryEntryToData.c)
 *     MiReplaceImportEntry @ 0x1406EB9C8 (MiReplaceImportEntry.c)
 *     MiEnumerateBasePatches @ 0x140C07908 (MiEnumerateBasePatches.c)
 */

__int64 __fastcall MiReplaceImportEntriesForVerifier(ULONG_PTR BugCheckParameter2, int *a2, unsigned int a3)
{
  __int64 v3; // rdi
  _QWORD *v6; // r14
  int *v7; // rsi
  ULONG v9; // [rsp+40h] [rbp+8h] BYREF

  v3 = a3;
  v9 = 0;
  v6 = RtlImageDirectoryEntryToData(*(PVOID *)(BugCheckParameter2 + 48), 1u, 0xCu, &v9);
  if ( !v6 || v9 < 8 )
    return 3221225659LL;
  if ( (_DWORD)v3 )
  {
    v7 = a2;
    do
    {
      *((_QWORD *)a2 + 2) = v6[*a2];
      MiEnumerateBasePatches(BugCheckParameter2, MiReplacePatchImportEntry, v7);
      MiReplaceImportEntry(BugCheckParameter2, (ULONG_PTR)&v6[*a2], *((_QWORD *)a2 + 1));
      v7 += 6;
      a2 += 6;
      --v3;
    }
    while ( v3 );
  }
  return 0LL;
}
