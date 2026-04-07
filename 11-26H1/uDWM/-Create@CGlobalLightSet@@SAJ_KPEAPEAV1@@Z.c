/*
 * XREFs of ?Create@CGlobalLightSet@@SAJ_KPEAPEAV1@@Z @ 0x1800360EC
 * Callers:
 *     ?GetGlobalLightSetForDesktop@CWindowList@@QEAAPEAVCGlobalLightSet@@_K@Z @ 0x1800359E0 (-GetGlobalLightSetForDesktop@CWindowList@@QEAAPEAVCGlobalLightSet@@_K@Z.c)
 * Callees:
 *     ??$?8VCCachedBorderBrush@CWindowBorder@@@std@@YA_NAEBV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@0@$$T@Z @ 0x18000BDF0 (--$-8VCCachedBorderBrush@CWindowBorder@@@std@@YA_NAEBV-$shared_ptr@VCCachedBorderBrush@CWindowBo.c)
 *     ?InternalRelease@?$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ @ 0x18001727C (-InternalRelease@-$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CGlobalLightSet@@AEAA@_K@Z @ 0x1800361C0 (--0CGlobalLightSet@@AEAA@_K@Z.c)
 *     ?Initialize@CGlobalLightSet@@AEAAJXZ @ 0x18003628C (-Initialize@CGlobalLightSet@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180085D34 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180085D88 (ModuleFailFastForHRESULT.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CGlobalLightSet::Create(unsigned __int64 a1, struct CGlobalLightSet **a2)
{
  CGlobalLightSet *v4; // rax
  CBaseObject *v5; // rbx
  int v6; // edi
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CBaseObject *v10; // [rsp+40h] [rbp+18h] BYREF

  v4 = (CGlobalLightSet *)DefaultHeap::AllocClear(0x88uLL);
  if ( !v4 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v5 = CGlobalLightSet::CGlobalLightSet(v4, a1);
  v10 = v5;
  if ( std::operator==<CWindowBorder::CCachedBorderBrush>(&v10) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x26,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)0x8007000ELL,
      v8);
    Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(&v10);
    return 2147942414LL;
  }
  else
  {
    v6 = CGlobalLightSet::Initialize(v5);
    if ( v6 >= 0 )
    {
      v10 = 0LL;
      *a2 = v5;
      Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(&v10);
      return 0LL;
    }
    else
    {
      if ( v5 )
        CBaseObject::Release(v5);
      return (unsigned int)v6;
    }
  }
}
