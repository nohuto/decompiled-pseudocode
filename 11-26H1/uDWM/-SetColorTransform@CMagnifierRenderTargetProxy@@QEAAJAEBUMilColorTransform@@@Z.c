/*
 * XREFs of ?SetColorTransform@CMagnifierRenderTargetProxy@@QEAAJAEBUMilColorTransform@@@Z @ 0x1800BB6F4
 * Callers:
 *     ?OnSetColorEffect@CMagnifier@@QEAAJAEBUMilColorTransform@@@Z @ 0x1800BA0FC (-OnSetColorEffect@CMagnifier@@QEAAJAEBUMilColorTransform@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMagnifierRenderTargetProxy::SetColorTransform(
        CMagnifierRenderTargetProxy *this,
        const struct MilColorTransform *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, const struct MilColorTransform *))(**((_QWORD **)this + 2) + 320LL))(
           *((_QWORD *)this + 2),
           *((unsigned int *)this + 6),
           a2);
}
