/*
 * XREFs of ?SetColorTransform@CVisualProxy@@QEAAJAEBUMilColorTransform@@@Z @ 0x1800DE558
 * Callers:
 *     ?SetColorTransform@CVisual@@QEAAJAEBUMilColorTransform@@@Z @ 0x1800DE3A4 (-SetColorTransform@CVisual@@QEAAJAEBUMilColorTransform@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisualProxy::SetColorTransform(CVisualProxy *this, const struct MilColorTransform *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, const struct MilColorTransform *))(**((_QWORD **)this + 2) + 208LL))(
           *((_QWORD *)this + 2),
           *((unsigned int *)this + 6),
           a2);
}
