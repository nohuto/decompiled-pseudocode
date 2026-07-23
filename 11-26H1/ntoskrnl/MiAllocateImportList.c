/*
 * XREFs of MiAllocateImportList @ 0x14097F024
 * Callers:
 *     MiAddEntryToImportList @ 0x14087B2F0 (MiAddEntryToImportList.c)
 *     MiResolveImageReferences @ 0x14097E950 (MiResolveImageReferences.c)
 *     MiCompressImportList @ 0x14097F074 (MiCompressImportList.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
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
