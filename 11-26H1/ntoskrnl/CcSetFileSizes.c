/*
 * XREFs of CcSetFileSizes @ 0x1404DFC00
 * Callers:
 *     <none>
 * Callees:
 *     CcSetFileSizesEx @ 0x14039E300 (CcSetFileSizesEx.c)
 */

void __stdcall CcSetFileSizes(PFILE_OBJECT FileObject, PCC_FILE_SIZES FileSizes)
{
  CcSetFileSizesEx(FileObject, FileSizes);
}
