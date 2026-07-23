/*
 * XREFs of CcSetFileSizes @ 0x1404D92E0
 * Callers:
 *     <none>
 * Callees:
 *     CcSetFileSizesEx @ 0x1403A0060 (CcSetFileSizesEx.c)
 */

void __stdcall CcSetFileSizes(PFILE_OBJECT FileObject, PCC_FILE_SIZES FileSizes)
{
  CcSetFileSizesEx(FileObject, FileSizes);
}
