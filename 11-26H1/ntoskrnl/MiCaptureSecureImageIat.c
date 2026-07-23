/*
 * XREFs of MiCaptureSecureImageIat @ 0x140B34998
 * Callers:
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x140B3E5DC (MiApplyImportOptimizationToRuntimeDriver.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14042B1C0 (RtlImageDirectoryEntryToData.c)
 *     VslCaptureSecureImageIat @ 0x140B349E0 (VslCaptureSecureImageIat.c)
 */

PVOID __fastcall MiCaptureSecureImageIat(void *a1)
{
  PVOID result; // rax
  ULONG Size; // [rsp+38h] [rbp+10h] BYREF

  Size = 0;
  result = RtlImageDirectoryEntryToData(a1, 1u, 0xCu, &Size);
  if ( result )
    return (PVOID)VslCaptureSecureImageIat(a1, result, Size);
  return result;
}
