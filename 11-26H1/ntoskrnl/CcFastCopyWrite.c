/*
 * XREFs of CcFastCopyWrite @ 0x1404F15F0
 * Callers:
 *     DifCcFastCopyWriteWrapper @ 0x140651550 (DifCcFastCopyWriteWrapper.c)
 * Callees:
 *     CcCopyWriteEx @ 0x14026C4B0 (CcCopyWriteEx.c)
 */

void __stdcall CcFastCopyWrite(PFILE_OBJECT FileObject, ULONG FileOffset, ULONG Length, PVOID Buffer)
{
  __int64 v4[3]; // [rsp+30h] [rbp-18h] BYREF

  v4[0] = FileOffset;
  CcCopyWriteEx((__int64)FileObject, v4, Length, 1, (__int64)Buffer, 0LL);
}
