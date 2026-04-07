/*
 * XREFs of floor @ 0x18008EEC4
 * Callers:
 *     ?GetNonClientAreaMargins@CWindowData@@QEBAXPEAU_MARGINS@@@Z @ 0x1800210AC (-GetNonClientAreaMargins@CWindowData@@QEBAXPEAU_MARGINS@@@Z.c)
 *     ?RoundToNearestInt@@YAHN@Z @ 0x180063DDC (-RoundToNearestInt@@YAHN@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
double __cdecl floor(double X)
{
  return __imp_floor(X);
}
