/*
 * XREFs of ??$?0PEAXUprocess_heap_deleter@wil@@@?$__compressed_pair@PEAXUprocess_heap_deleter@wil@@@wistd@@QEAA@$$QEAPEAX$$QEAUprocess_heap_deleter@wil@@@Z @ 0x18007A4A4
 * Callers:
 *     ??0?$atomic@_K@std@@QEAA@_K@Z @ 0x18002FB94 (--0-$atomic@_K@std@@QEAA@_K@Z.c)
 *     ??0?$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAA@$$QEAV01@@Z @ 0x180090634 (--0-$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAA@$$QEAV01@@Z.c)
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
