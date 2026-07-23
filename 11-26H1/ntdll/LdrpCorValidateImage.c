/*
 * XREFs of LdrpCorValidateImage @ 0x180108014
 * Callers:
 *     LdrpInitializeProcess @ 0x1800CD028 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x1800785F0 (RtlImageDirectoryEntryToData.c)
 */

__int64 __fastcall LdrpCorValidateImage(void *a1)
{
  ULONG Size; // [rsp+38h] [rbp+10h] BYREF

  return RtlImageDirectoryEntryToData(a1, 1u, 9u, &Size) != 0LL ? 0xC000007B : 0;
}
