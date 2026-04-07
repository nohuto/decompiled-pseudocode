/*
 * XREFs of ??$_Copy_memmove_tail@PEAPEAVCVisualProxy@@@std@@YAPEAPEAVCVisualProxy@@QEBDQEAPEAV1@_K2@Z @ 0x18008D540
 * Callers:
 *     ??$_Copy_memmove_n@PEAPEAXPEAPEAX@std@@YAPEAPEAXPEAPEAX_K0@Z @ 0x1800737B8 (--$_Copy_memmove_n@PEAPEAXPEAPEAX@std@@YAPEAPEAXPEAPEAX_K0@Z.c)
 *     ??$_Copy_memmove@PEAPEAUTrailPoint@CTouchDragVisual@@PEAPEAU12@@std@@YAPEAPEAUTrailPoint@CTouchDragVisual@@PEAPEAU12@00@Z @ 0x18008D528 (--$_Copy_memmove@PEAPEAUTrailPoint@CTouchDragVisual@@PEAPEAU12@@std@@YAPEAPEAUTrailPoint@CTouchD.c)
 * Callees:
 *     memmove_0 @ 0x1800E6C7C (memmove_0.c)
 */

__int64 __fastcall std::_Copy_memmove_tail<CVisualProxy * *>(void *Src, void *a2, size_t a3)
{
  memmove_0(a2, Src, a3);
  return (__int64)a2 + a3;
}
