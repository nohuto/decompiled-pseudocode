/*
 * XREFs of ??0?$atomic@U_LUID@@@std@@QEAA@U_LUID@@@Z @ 0x18025F638
 * Callers:
 *     ??0CInteraction@@IEAA@PEAVCComposition@@@Z @ 0x18025F65C (--0CInteraction@@IEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??$?0PEAXUprocess_heap_deleter@wil@@@?$__compressed_pair@PEAXUprocess_heap_deleter@wil@@@wistd@@QEAA@$$QEAPEAX$$QEAUprocess_heap_deleter@wil@@@Z @ 0x1801D0B2C (--$-0PEAXUprocess_heap_deleter@wil@@@-$__compressed_pair@PEAXUprocess_heap_deleter@wil@@@wistd@@.c)
 */

__int64 __fastcall std::atomic<_LUID>::atomic<_LUID>(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  wistd::__compressed_pair<void *,wil::process_heap_deleter>::__compressed_pair<void *,wil::process_heap_deleter>(
    a1,
    &v4);
  return v2;
}
