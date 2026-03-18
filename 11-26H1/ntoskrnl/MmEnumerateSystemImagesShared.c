/*
 * XREFs of MmEnumerateSystemImagesShared @ 0x1404E5168
 * Callers:
 *     ExpQueryModuleInformation @ 0x140832D20 (ExpQueryModuleInformation.c)
 *     MmGetModuleRoutineAddress @ 0x140864A10 (MmGetModuleRoutineAddress.c)
 *     ExpQueryModuleInformationEx @ 0x140B3C7B8 (ExpQueryModuleInformationEx.c)
 * Callees:
 *     MiEnumerateSystemImages @ 0x1404E5184 (MiEnumerateSystemImages.c)
 */

__int64 __fastcall MmEnumerateSystemImagesShared(__int64 a1, __int64 a2)
{
  return MiEnumerateSystemImages(a1, a2, 2LL);
}
