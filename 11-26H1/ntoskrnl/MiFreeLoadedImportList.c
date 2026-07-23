/*
 * XREFs of MiFreeLoadedImportList @ 0x140B3F774
 * Callers:
 *     MiApplyDriverHotPatch @ 0x140873E94 (MiApplyDriverHotPatch.c)
 *     MiUnloadSystemImage @ 0x140AC92D8 (MiUnloadSystemImage.c)
 *     MiShutdownSystem @ 0x140C0646C (MiShutdownSystem.c)
 *     MiUpdateBootDriverHotPatchImports @ 0x140D01AFC (MiUpdateBootDriverHotPatchImports.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeLoadedImportList(void *a1)
{
  if ( a1 != (void *)1 && a1 != (void *)-2LL && ((unsigned __int8)a1 & 1) == 0 )
    ExFreePoolWithTag(a1, 0);
}
