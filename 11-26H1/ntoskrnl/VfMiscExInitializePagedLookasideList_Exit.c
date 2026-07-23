/*
 * XREFs of VfMiscExInitializePagedLookasideList_Exit @ 0x140C42990
 * Callers:
 *     <none>
 * Callees:
 *     VfLookasideAdd @ 0x140C44C64 (VfLookasideAdd.c)
 */

__int64 __fastcall VfMiscExInitializePagedLookasideList_Exit(__int64 a1)
{
  return VfLookasideAdd(*(_QWORD *)(a1 + 56), *(_QWORD *)a1);
}
