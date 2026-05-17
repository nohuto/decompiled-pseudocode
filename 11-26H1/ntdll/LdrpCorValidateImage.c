/*
 * XREFs of LdrpCorValidateImage @ 0x180108614
 * Callers:
 *     LdrpInitializeProcess @ 0x1800CF8B8 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x180081250 (RtlImageDirectoryEntryToData.c)
 */

__int64 __fastcall LdrpCorValidateImage(unsigned __int64 a1)
{
  int v2; // [rsp+38h] [rbp+10h] BYREF

  return RtlImageDirectoryEntryToData(a1, 1, 9u, &v2) != 0LL ? 0xC000007B : 0;
}
