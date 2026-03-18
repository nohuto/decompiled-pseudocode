/*
 * XREFs of MiAllocateImportList @ 0x140ADD624
 * Callers:
 *     MiAddEntryToImportList @ 0x140874F0C (MiAddEntryToImportList.c)
 *     MiResolveImageReferences @ 0x140ADCF50 (MiResolveImageReferences.c)
 *     MiCompressImportList @ 0x140ADD674 (MiCompressImportList.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x1403985B0 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x14044ADC0 (MmGetCurrentProcessorColor.c)
 */

_QWORD *__fastcall MiAllocateImportList(unsigned __int64 a1)
{
  int CurrentProcessorColor; // eax
  _QWORD *result; // rax

  if ( a1 > 0x1FFFFFFE )
    return 0LL;
  CurrentProcessorColor = MmGetCurrentProcessorColor();
  result = (_QWORD *)ExAllocatePoolMm(256LL, (unsigned int)(8 * a1 + 8), 1413770573, CurrentProcessorColor | 0x80000000);
  if ( result )
    *result = a1;
  return result;
}
