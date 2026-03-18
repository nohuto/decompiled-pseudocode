/*
 * XREFs of MiFreeLoadedImportList @ 0x140B3D6A4
 * Callers:
 *     MiApplyDriverHotPatch @ 0x14086DAC4 (MiApplyDriverHotPatch.c)
 *     MiUnloadSystemImage @ 0x140AC76E8 (MiUnloadSystemImage.c)
 *     MiShutdownSystem @ 0x140C0025C (MiShutdownSystem.c)
 *     MiUpdateBootDriverHotPatchImports @ 0x140CFB77C (MiUpdateBootDriverHotPatchImports.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeLoadedImportList(void *a1)
{
  if ( a1 != (void *)1 && a1 != (void *)-2LL && ((unsigned __int8)a1 & 1) == 0 )
    ExFreePoolWithTag(a1, 0);
}
