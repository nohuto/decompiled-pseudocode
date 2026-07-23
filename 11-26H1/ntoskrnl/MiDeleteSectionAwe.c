/*
 * XREFs of MiDeleteSectionAwe @ 0x140706188
 * Callers:
 *     MiCreatePagingFileCleanup @ 0x14086EC18 (MiCreatePagingFileCleanup.c)
 *     MiDeletePageFileSectionNodes @ 0x140A876DC (MiDeletePageFileSectionNodes.c)
 *     MiDereferenceFailedControlArea @ 0x140B275E4 (MiDereferenceFailedControlArea.c)
 * Callees:
 *     MiDeleteAweInfo @ 0x14087F264 (MiDeleteAweInfo.c)
 *     MiDeleteAweInfoPages @ 0x14087F2AC (MiDeleteAweInfoPages.c)
 */

__int64 __fastcall MiDeleteSectionAwe(__int64 a1)
{
  void *v1; // rbx

  v1 = *(void **)(a1 + 8);
  MiDeleteAweInfoPages(v1);
  return MiDeleteAweInfo(v1);
}
