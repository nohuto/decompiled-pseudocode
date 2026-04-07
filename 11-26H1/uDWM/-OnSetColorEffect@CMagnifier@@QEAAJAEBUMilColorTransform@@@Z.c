/*
 * XREFs of ?OnSetColorEffect@CMagnifier@@QEAAJAEBUMilColorTransform@@@Z @ 0x1800BA0FC
 * Callers:
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x18007A548 (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 *     ?OnSetRenderTargetTextures@CMagnifier@@QEAAJPEBUMAGN_ADAPTERTEXTURES@@@Z @ 0x1800BA214 (-OnSetRenderTargetTextures@CMagnifier@@QEAAJPEBUMAGN_ADAPTERTEXTURES@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcmp_0 @ 0x18008EF18 (memcmp_0.c)
 *     ?SetColorTransform@CMagnifierRenderTargetProxy@@QEAAJAEBUMilColorTransform@@@Z @ 0x1800BB6F4 (-SetColorTransform@CMagnifierRenderTargetProxy@@QEAAJAEBUMilColorTransform@@@Z.c)
 */

__int64 __fastcall CMagnifier::OnSetColorEffect(CMagnifier *this, const struct MilColorTransform *a2)
{
  unsigned int v3; // edi
  int v5; // eax

  v3 = 0;
  if ( memcmp_0((char *)this + 60, a2, 0x64uLL) )
  {
    v5 = CMagnifierRenderTargetProxy::SetColorTransform(*((CMagnifierRenderTargetProxy **)this + 3), a2);
    v3 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0xAAu, 0LL);
    }
    else
    {
      *(_OWORD *)((char *)this + 60) = *(_OWORD *)a2;
      *(_OWORD *)((char *)this + 76) = *((_OWORD *)a2 + 1);
      *(_OWORD *)((char *)this + 92) = *((_OWORD *)a2 + 2);
      *(_OWORD *)((char *)this + 108) = *((_OWORD *)a2 + 3);
      *(_OWORD *)((char *)this + 124) = *((_OWORD *)a2 + 4);
      *(_OWORD *)((char *)this + 140) = *((_OWORD *)a2 + 5);
      *((_DWORD *)this + 39) = *((_DWORD *)a2 + 24);
    }
  }
  return v3;
}
