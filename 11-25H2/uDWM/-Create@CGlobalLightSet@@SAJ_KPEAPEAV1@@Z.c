/*
 * XREFs of ?Create@CGlobalLightSet@@SAJ_KPEAPEAV1@@Z @ 0x180034D9C
 * Callers:
 *     ?GetGlobalLightSetForDesktop@CWindowList@@QEAAPEAVCGlobalLightSet@@_K@Z @ 0x18002514C (-GetGlobalLightSetForDesktop@CWindowList@@QEAAPEAVCGlobalLightSet@@_K@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x1800051C4 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??$?8VCCachedBorderBrush@CWindowBorder@@@std@@YA_NAEBV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@0@$$T@Z @ 0x18001CBD4 (--$-8VCCachedBorderBrush@CWindowBorder@@@std@@YA_NAEBV-$shared_ptr@VCCachedBorderBrush@CWindowBo.c)
 *     ?Initialize@CGlobalLightSet@@AEAAJXZ @ 0x180034E64 (-Initialize@CGlobalLightSet@@AEAAJXZ.c)
 *     ??0CGlobalLightSet@@AEAA@_K@Z @ 0x18003543C (--0CGlobalLightSet@@AEAA@_K@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180093F78 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CGlobalLightSet::Create(unsigned __int64 a1, struct CGlobalLightSet **a2)
{
  CBaseObject *v4; // rax
  unsigned int v5; // ebx
  CBaseObject *v6; // rdi
  int v7; // esi
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CBaseObject *v11; // [rsp+40h] [rbp+18h] BYREF

  v4 = (CBaseObject *)DefaultHeap::AllocClear(0x88uLL);
  v11 = v4;
  v5 = 0;
  if ( v4 )
    v6 = CGlobalLightSet::CGlobalLightSet(v4, a1);
  else
    v6 = 0LL;
  v11 = v6;
  if ( std::operator==<CWindowBorder::CCachedBorderBrush>(&v11) )
  {
    v5 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x26,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)0x8007000ELL,
      v9);
LABEL_11:
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v11);
    return v5;
  }
  v7 = CGlobalLightSet::Initialize(v6);
  if ( v7 >= 0 )
  {
    v11 = 0LL;
    *a2 = v6;
    goto LABEL_11;
  }
  if ( v6 )
    CBaseObject::Release(v6);
  return (unsigned int)v7;
}
