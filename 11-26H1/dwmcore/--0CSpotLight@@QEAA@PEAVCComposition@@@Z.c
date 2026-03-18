/*
 * XREFs of ??0CSpotLight@@QEAA@PEAVCComposition@@@Z @ 0x18024590C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180155D14 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CLight@@IEAA@PEAVCComposition@@@Z @ 0x1802641FC (--0CLight@@IEAA@PEAVCComposition@@@Z.c)
 */

CSpotLight *__fastcall CSpotLight::CSpotLight(CSpotLight *this, struct CComposition *a2)
{
  __int64 v2; // rcx
  CSpotLight *result; // rax

  CLight::CLight(this, a2);
  *(_QWORD *)(v2 + 240) = 1065353216LL;
  *(_DWORD *)(v2 + 248) = 0;
  *(_DWORD *)(v2 + 252) = -1082130432;
  *(_DWORD *)(v2 + 256) = 1057360530;
  *(_DWORD *)(v2 + 260) = 1065353216;
  *(_DWORD *)(v2 + 264) = 1065353216;
  *(_DWORD *)(v2 + 268) = 1065353216;
  *(_DWORD *)(v2 + 272) = 1065353216;
  *(_DWORD *)(v2 + 276) = 1065353216;
  *(_QWORD *)(v2 + 292) = 0LL;
  *(_DWORD *)(v2 + 300) = 1120403456;
  *(_DWORD *)(v2 + 304) = 1070141403;
  *(_DWORD *)(v2 + 308) = 1065353216;
  *(_DWORD *)(v2 + 312) = 1065353216;
  *(_DWORD *)(v2 + 316) = 1065353216;
  *(_DWORD *)(v2 + 320) = 1065353216;
  *(_QWORD *)v2 = &CSpotLight::`vftable'{for `CLightGeneratedT<CLight,CPropertyChangeResource>'};
  *(_QWORD *)(v2 + 88) = &CSpotLight::`vftable'{for `ISceneNotificationListener'};
  result = (CSpotLight *)v2;
  *(_DWORD *)(v2 + 324) = 1065353216;
  *(_QWORD *)(v2 + 336) = 2LL;
  return result;
}
