/*
 * XREFs of ??0?$atomic@PEAUID2D1PathGeometry@@@std@@QEAA@QEAUID2D1PathGeometry@@@Z @ 0x180054E00
 * Callers:
 *     ??0CPathData@@QEAA@PEAUID2D1Factory@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x180054758 (--0CPathData@@QEAA@PEAUID2D1Factory@@V-$span@$$CBE$0-0@gsl@@@Z.c)
 *     ??0CPathData@@QEAA@PEAUID2D1Factory@@$$QEAV?$vector@EV?$allocator@E@std@@@std@@@Z @ 0x18005483C (--0CPathData@@QEAA@PEAUID2D1Factory@@$$QEAV-$vector@EV-$allocator@E@std@@@std@@@Z.c)
 * Callees:
 *     ??$?0PEAXUprocess_heap_deleter@wil@@@?$__compressed_pair@PEAXUprocess_heap_deleter@wil@@@wistd@@QEAA@$$QEAPEAX$$QEAUprocess_heap_deleter@wil@@@Z @ 0x1801D0B2C (--$-0PEAXUprocess_heap_deleter@wil@@@-$__compressed_pair@PEAXUprocess_heap_deleter@wil@@@wistd@@.c)
 */

__int64 __fastcall std::atomic<ID2D1PathGeometry *>::atomic<ID2D1PathGeometry *>(__int64 a1)
{
  __int64 v1; // rcx
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = 0LL;
  wistd::__compressed_pair<void *,wil::process_heap_deleter>::__compressed_pair<void *,wil::process_heap_deleter>(
    a1,
    v3);
  return v1;
}
