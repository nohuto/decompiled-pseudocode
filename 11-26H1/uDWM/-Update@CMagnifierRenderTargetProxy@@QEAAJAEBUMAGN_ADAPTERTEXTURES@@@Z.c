/*
 * XREFs of ?Update@CMagnifierRenderTargetProxy@@QEAAJAEBUMAGN_ADAPTERTEXTURES@@@Z @ 0x1800BB768
 * Callers:
 *     ?OnSetRenderTargetTextures@CMagnifier@@QEAAJPEBUMAGN_ADAPTERTEXTURES@@@Z @ 0x1800BA214 (-OnSetRenderTargetTextures@CMagnifier@@QEAAJPEBUMAGN_ADAPTERTEXTURES@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMagnifierRenderTargetProxy::Update(
        CMagnifierRenderTargetProxy *this,
        const struct MAGN_ADAPTERTEXTURES *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, const struct MAGN_ADAPTERTEXTURES *))(**((_QWORD **)this + 2) + 328LL))(
           *((_QWORD *)this + 2),
           *((unsigned int *)this + 6),
           a2);
}
