/*
 * XREFs of ??$?0PEAXUprocess_heap_deleter@wil@@@?$__compressed_pair@PEAXUprocess_heap_deleter@wil@@@wistd@@QEAA@$$QEAPEAX$$QEAUprocess_heap_deleter@wil@@@Z @ 0x1801D0B2C
 * Callers:
 *     ??0?$atomic@PEAUID2D1PathGeometry@@@std@@QEAA@QEAUID2D1PathGeometry@@@Z @ 0x180054E00 (--0-$atomic@PEAUID2D1PathGeometry@@@std@@QEAA@QEAUID2D1PathGeometry@@@Z.c)
 *     ??0?$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAA@$$QEAV01@@Z @ 0x180222808 (--0-$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAA@$$QEAV01@@Z.c)
 *     ??0?$atomic@U_LUID@@@std@@QEAA@U_LUID@@@Z @ 0x18025F638 (--0-$atomic@U_LUID@@@std@@QEAA@U_LUID@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall wistd::__compressed_pair<void *,wil::process_heap_deleter>::__compressed_pair<void *,wil::process_heap_deleter>(
        _QWORD *a1,
        _QWORD *a2)
{
  *a1 = *a2;
  return a1;
}
