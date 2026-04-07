/*
 * XREFs of ?SetColorTransform@CMagnifierRenderTargetProxy@@QEAAJPEBVCColorTransformResourceProxy@@@Z @ 0x1800BBEEC
 * Callers:
 *     ?OnSetColorEffect@CMagnifier@@QEAAJAEBUMilColorTransform@@@Z @ 0x1800BA820 (-OnSetColorEffect@CMagnifier@@QEAAJAEBUMilColorTransform@@@Z.c)
 *     ?OnSetRenderTargetTextures@CMagnifier@@QEAAJPEBUMAGN_ADAPTERTEXTURES@@@Z @ 0x1800BAA2C (-OnSetRenderTargetTextures@CMagnifier@@QEAAJPEBUMAGN_ADAPTERTEXTURES@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMagnifierRenderTargetProxy::SetColorTransform(
        CMagnifierRenderTargetProxy *this,
        const struct CColorTransformResourceProxy *a2)
{
  __int64 v2; // r8

  v2 = 0LL;
  if ( a2 )
    v2 = *(unsigned int *)(*((_QWORD *)a2 + 2) + 24LL);
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 400LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           v2);
}
