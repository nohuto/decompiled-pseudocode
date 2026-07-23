/*
 * XREFs of CcFastCopyRead @ 0x140B0F2D0
 * Callers:
 *     <none>
 * Callees:
 *     CcCopyReadEx @ 0x14021E590 (CcCopyReadEx.c)
 */

void __stdcall CcFastCopyRead(
        PFILE_OBJECT FileObject,
        ULONG FileOffset,
        ULONG Length,
        ULONG PageCount,
        PVOID Buffer,
        PIO_STATUS_BLOCK IoStatus)
{
  __int64 v6[3]; // [rsp+40h] [rbp-18h] BYREF

  v6[0] = FileOffset;
  CcCopyReadEx(FileObject, v6, Length, 1u, (__int64)Buffer, IoStatus, 0LL);
}
