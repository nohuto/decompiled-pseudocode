/*
 * XREFs of CcInitializeCacheMap @ 0x1403E43C0
 * Callers:
 *     <none>
 * Callees:
 *     CcInitializeCacheMapInternal @ 0x1403E4420 (CcInitializeCacheMapInternal.c)
 */

void __stdcall CcInitializeCacheMap(
        PFILE_OBJECT FileObject,
        PCC_FILE_SIZES FileSizes,
        BOOLEAN PinAccess,
        PCACHE_MANAGER_CALLBACKS Callbacks,
        PVOID LazyWriteContext)
{
  CcInitializeCacheMapInternal(FileObject, 0LL, (__int64)LazyWriteContext, 0);
}
