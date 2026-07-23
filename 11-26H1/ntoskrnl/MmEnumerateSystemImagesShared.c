/*
 * XREFs of MmEnumerateSystemImagesShared @ 0x1404DE708
 * Callers:
 *     ExpQueryModuleInformation @ 0x140838F60 (ExpQueryModuleInformation.c)
 *     MmGetModuleRoutineAddress @ 0x14086ADF0 (MmGetModuleRoutineAddress.c)
 *     ExpQueryModuleInformationEx @ 0x140B3EA38 (ExpQueryModuleInformationEx.c)
 * Callees:
 *     MiEnumerateSystemImages @ 0x1404DE724 (MiEnumerateSystemImages.c)
 */

__int64 __fastcall MmEnumerateSystemImagesShared(__int64 a1, __int64 a2)
{
  return MiEnumerateSystemImages(a1, a2, 2LL);
}
