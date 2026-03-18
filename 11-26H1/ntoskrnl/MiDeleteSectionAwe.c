/*
 * XREFs of MiDeleteSectionAwe @ 0x1407014B8
 * Callers:
 *     MiCreatePagingFileCleanup @ 0x140868838 (MiCreatePagingFileCleanup.c)
 *     MiDeletePageFileSectionNodes @ 0x140A8186C (MiDeletePageFileSectionNodes.c)
 *     MiDereferenceFailedControlArea @ 0x140B25454 (MiDereferenceFailedControlArea.c)
 * Callees:
 *     MiDeleteAweInfo @ 0x140878E84 (MiDeleteAweInfo.c)
 *     MiDeleteAweInfoPages @ 0x140878ECC (MiDeleteAweInfoPages.c)
 */

__int64 __fastcall MiDeleteSectionAwe(__int64 a1)
{
  void *v1; // rbx

  v1 = *(void **)(a1 + 8);
  MiDeleteAweInfoPages(v1);
  return MiDeleteAweInfo(v1);
}
