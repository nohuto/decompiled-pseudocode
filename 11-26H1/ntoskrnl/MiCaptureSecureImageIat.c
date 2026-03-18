/*
 * XREFs of MiCaptureSecureImageIat @ 0x140B32544
 * Callers:
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x140B3C35C (MiApplyImportOptimizationToRuntimeDriver.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14040E290 (RtlImageDirectoryEntryToData.c)
 *     VslCaptureSecureImageIat @ 0x140B3258C (VslCaptureSecureImageIat.c)
 */

__int64 __fastcall MiCaptureSecureImageIat(unsigned __int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  result = RtlImageDirectoryEntryToData(a1, 1, 0xCu, &v3);
  if ( result )
    return VslCaptureSecureImageIat(a1, result, v3);
  return result;
}
