/*
 * XREFs of MmSectionToSectionObjectPointers @ 0x140A67440
 * Callers:
 *     IopIsFileOpenOrSection @ 0x140A67350 (IopIsFileOpenOrSection.c)
 * Callees:
 *     MiDereferenceControlAreaFile @ 0x1402649C0 (MiDereferenceControlAreaFile.c)
 *     MiSectionControlArea @ 0x14038A9B0 (MiSectionControlArea.c)
 *     MiReferenceControlAreaFile @ 0x140448EB0 (MiReferenceControlAreaFile.c)
 */

__int64 __fastcall MmSectionToSectionObjectPointers(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rdi
  ULONG_PTR v3; // rax
  __int64 v4; // rbx

  v1 = MiSectionControlArea(a1);
  v2 = v1;
  if ( !*(_QWORD *)(v1 + 64) )
    return 0LL;
  v3 = MiReferenceControlAreaFile(v1);
  v4 = *(_QWORD *)(v3 + 40);
  MiDereferenceControlAreaFile(v2, v3);
  return v4;
}
