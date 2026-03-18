/*
 * XREFs of ??0CAmbientLight@@QEAA@PEAVCComposition@@@Z @ 0x180245808
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180155D14 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CLight@@IEAA@PEAVCComposition@@@Z @ 0x1802641FC (--0CLight@@IEAA@PEAVCComposition@@@Z.c)
 */

CAmbientLight *__fastcall CAmbientLight::CAmbientLight(CAmbientLight *this, struct CComposition *a2)
{
  __int64 v2; // rcx

  CLight::CLight(this, a2);
  *(_DWORD *)(v2 + 232) = 1065353216;
  *(_DWORD *)(v2 + 236) = 1065353216;
  *(_DWORD *)(v2 + 240) = 1065353216;
  *(_DWORD *)(v2 + 244) = 1065353216;
  *(_DWORD *)(v2 + 248) = 1065353216;
  *(_QWORD *)v2 = &CAmbientLight::`vftable'{for `CLightGeneratedT<CLight,CPropertyChangeResource>'};
  *(_QWORD *)(v2 + 88) = &CSpotLight::`vftable'{for `ISceneNotificationListener'};
  return (CAmbientLight *)v2;
}
