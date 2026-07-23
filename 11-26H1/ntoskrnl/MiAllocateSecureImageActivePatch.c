/*
 * XREFs of MiAllocateSecureImageActivePatch @ 0x140873E2C
 * Callers:
 *     MiLoadHotPatch @ 0x1408770BC (MiLoadHotPatch.c)
 *     MmInsertSecureImageActivePatch @ 0x14087AF00 (MmInsertSecureImageActivePatch.c)
 *     MmRegisterHotPatches @ 0x140D01F24 (MmRegisterHotPatches.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     RtlCopyUnicodeString @ 0x14040DFC0 (RtlCopyUnicodeString.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 */

UNICODE_STRING *__fastcall MiAllocateSecureImageActivePatch(PCUNICODE_STRING SourceString)
{
  __int64 Length; // rbx
  int CurrentProcessorColor; // eax
  UNICODE_STRING *PoolMm; // rax
  UNICODE_STRING *v5; // rbx

  Length = SourceString->Length;
  CurrentProcessorColor = MmGetCurrentProcessorColor();
  PoolMm = (UNICODE_STRING *)ExAllocatePoolMm(256LL, Length + 64, 1934126413, CurrentProcessorColor | 0x80000000);
  v5 = PoolMm;
  if ( PoolMm )
  {
    PoolMm[3].Buffer = &PoolMm[4].Length;
    PoolMm[3].MaximumLength = SourceString->Length;
    RtlCopyUnicodeString(PoolMm + 3, SourceString);
  }
  return v5;
}
