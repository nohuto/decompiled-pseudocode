/*
 * XREFs of ??$_Zero_range@PEAPEAUTrailPoint@CTouchDragVisual@@@std@@YAPEAPEAUTrailPoint@CTouchDragVisual@@QEAPEAU12@0@Z @ 0x1800CC544
 * Callers:
 *     ??$_Uninitialized_value_construct_n_unchecked1@PEAPEAUTrailPoint@CTouchDragVisual@@_K@std@@YAPEAPEAUTrailPoint@CTouchDragVisual@@PEAPEAU12@_K@Z @ 0x1800CC534 (--$_Uninitialized_value_construct_n_unchecked1@PEAPEAUTrailPoint@CTouchDragVisual@@_K@std@@YAPEA.c)
 * Callees:
 *     memset_0 @ 0x18008EF30 (memset_0.c)
 */

__int64 __fastcall std::_Zero_range<CTouchDragVisual::TrailPoint * *>(void *a1, __int64 a2)
{
  memset_0(a1, 0, a2 - (_QWORD)a1);
  return a2;
}
