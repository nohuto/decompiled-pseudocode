/*
 * XREFs of ??0CLight@@IEAA@PEAVCComposition@@@Z @ 0x1802641FC
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180155D14 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ??0CAmbientLight@@QEAA@PEAVCComposition@@@Z @ 0x180245808 (--0CAmbientLight@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CSpotLight@@QEAA@PEAVCComposition@@@Z @ 0x18024590C (--0CSpotLight@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CSceneWorld@@QEAA@PEAVCComposition@@PEAVCSceneVisual@@@Z @ 0x18028857C (--0CSceneWorld@@QEAA@PEAVCComposition@@PEAVCSceneVisual@@@Z.c)
 * Callees:
 *     <none>
 */

CLight *__fastcall CLight::CLight(CLight *this, struct CComposition *a2)
{
  CLight *result; // rax

  *(_QWORD *)this = &CBaseAnimation::`vftable'{for `IAnimationResource'};
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 4) = 2LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *((_BYTE *)this + 80) = 1;
  *((_QWORD *)this + 11) = &ISceneNotificationListener::`vftable';
  result = this;
  *((_BYTE *)this + 96) = 1;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 44) = 0;
  *((_BYTE *)this + 180) = 0;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  return result;
}
