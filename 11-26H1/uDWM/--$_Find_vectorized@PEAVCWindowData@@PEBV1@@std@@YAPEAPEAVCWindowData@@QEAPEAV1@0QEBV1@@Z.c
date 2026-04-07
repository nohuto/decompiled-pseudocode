/*
 * XREFs of ??$_Find_vectorized@PEAVCWindowData@@PEBV1@@std@@YAPEAPEAVCWindowData@@QEAPEAV1@0QEBV1@@Z @ 0x18008DE68
 * Callers:
 *     ?DoStackCapture@@YAXJIPEAX@Z @ 0x1800735C4 (-DoStackCapture@@YAXJIPEAX@Z.c)
 *     ?OnWindowDataDeleted@CLivePreview@@QEAAXPEBVCWindowData@@@Z @ 0x1800B9414 (-OnWindowDataDeleted@CLivePreview@@QEAAXPEBVCWindowData@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::_Find_vectorized<CWindowData *,CWindowData const *>(__int64 a1, __int64 a2, __int64 a3)
{
  return _std_find_trivial_8(a1, a2, a3);
}
