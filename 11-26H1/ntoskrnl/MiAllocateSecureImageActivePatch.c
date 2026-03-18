/*
 * XREFs of MiAllocateSecureImageActivePatch @ 0x14086DA5C
 * Callers:
 *     MiLoadHotPatch @ 0x140870D5C (MiLoadHotPatch.c)
 *     MmInsertSecureImageActivePatch @ 0x140874B1C (MmInsertSecureImageActivePatch.c)
 *     MmRegisterHotPatches @ 0x140CFBBA4 (MmRegisterHotPatches.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x1403985B0 (ExAllocatePoolMm.c)
 *     RtlCopyUnicodeString @ 0x140419A90 (RtlCopyUnicodeString.c)
 *     MmGetCurrentProcessorColor @ 0x14044ADC0 (MmGetCurrentProcessorColor.c)
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
