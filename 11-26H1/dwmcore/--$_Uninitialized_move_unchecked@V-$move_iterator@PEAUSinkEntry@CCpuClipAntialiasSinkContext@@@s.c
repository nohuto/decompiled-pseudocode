/*
 * XREFs of ??$_Uninitialized_move_unchecked@V?$move_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@std@@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@std@@YAPEAUSinkEntry@CCpuClipAntialiasSinkContext@@V?$move_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@0@V30@PEAU12@@Z @ 0x1802073D8
 * Callers:
 *     ??$uninitialized_move@V?$move_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@std@@V?$checked_array_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@stdext@@V?$move_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@0@0V12@@Z @ 0x180207314 (--$uninitialized_move@V-$move_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@std@@V-$chec.c)
 * Callees:
 *     ??0SinkEntry@CCpuClipAntialiasSinkContext@@QEAA@$$QEAU01@@Z @ 0x18025B5F4 (--0SinkEntry@CCpuClipAntialiasSinkContext@@QEAA@$$QEAU01@@Z.c)
 */

__int64 __fastcall std::_Uninitialized_move_unchecked<std::move_iterator<CCpuClipAntialiasSinkContext::SinkEntry *>,CCpuClipAntialiasSinkContext::SinkEntry *>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  while ( a1 != a2 )
  {
    CCpuClipAntialiasSinkContext::SinkEntry::SinkEntry(a3, a1);
    a3 += 432LL;
    a1 += 432LL;
  }
  return a3;
}
