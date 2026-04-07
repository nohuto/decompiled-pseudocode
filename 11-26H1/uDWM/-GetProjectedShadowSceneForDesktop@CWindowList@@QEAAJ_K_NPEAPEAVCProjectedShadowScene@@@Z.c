/*
 * XREFs of ?GetProjectedShadowSceneForDesktop@CWindowList@@QEAAJ_K_NPEAPEAVCProjectedShadowScene@@@Z @ 0x18007C6F4
 * Callers:
 *     ?ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x180017A70 (-ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 *     ??1CTopLevelWindow@@EEAA@XZ @ 0x18005A16C (--1CTopLevelWindow@@EEAA@XZ.c)
 *     ?AddProjectedShadowCaster@CWindowList@@QEAAJPEAUHWND__@@PEAX1@Z @ 0x1800DF8DC (-AddProjectedShadowCaster@CWindowList@@QEAAJPEAUHWND__@@PEAX1@Z.c)
 * Callees:
 *     ??$?8VCCachedBorderBrush@CWindowBorder@@@std@@YA_NAEBV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@0@$$T@Z @ 0x18000BDF0 (--$-8VCCachedBorderBrush@CWindowBorder@@@std@@YA_NAEBV-$shared_ptr@VCCachedBorderBrush@CWindowBo.c)
 *     ?InternalRelease@?$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ @ 0x18001727C (-InternalRelease@-$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?Initialize@CProjectedShadowScene@@QEAAJ_K@Z @ 0x18003517C (-Initialize@CProjectedShadowScene@@QEAAJ_K@Z.c)
 *     ?FindElement@?$CGenericTableMap@_KUCDesktop@@@@QEAAPEAUCDesktop@@_K@Z @ 0x180036090 (-FindElement@-$CGenericTableMap@_KUCDesktop@@@@QEAAPEAUCDesktop@@_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180085D34 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180085D88 (ModuleFailFastForHRESULT.c)
 *     ??0CProjectedShadowScene@@QEAA@XZ @ 0x1800BDBE4 (--0CProjectedShadowScene@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::GetProjectedShadowSceneForDesktop(
        CWindowList *this,
        unsigned __int64 a2,
        char a3,
        struct CProjectedShadowScene **a4)
{
  _QWORD *Element; // rax
  _QWORD *v8; // rsi
  unsigned int v9; // ebx
  CProjectedShadowScene *v11; // rax
  CBaseObject *v12; // rdi
  __int64 v13; // r9
  __int64 v14; // rdx
  int v15; // eax
  CBaseObject *v16; // rcx
  int v17; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  CBaseObject *v19; // [rsp+40h] [rbp+8h] BYREF

  Element = CGenericTableMap<unsigned __int64,CDesktop>::FindElement(
              (struct _RTL_GENERIC_TABLE *)((char *)this + 8),
              a2);
  v8 = Element;
  if ( !Element )
  {
    v9 = -2147319765;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCF5,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)0x8002802BLL,
      v17);
    return v9;
  }
  if ( !Element[6] && a3 )
  {
    v11 = (CProjectedShadowScene *)DefaultHeap::AllocClear(0x48uLL);
    if ( !v11 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    v12 = CProjectedShadowScene::CProjectedShadowScene(v11);
    v19 = v12;
    if ( std::operator==<CWindowBorder::CCachedBorderBrush>(&v19) )
    {
      v9 = -2147024882;
      v13 = 2147942414LL;
      v14 = 3322LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)v13,
        v17);
      Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(&v19);
      return v9;
    }
    v15 = CProjectedShadowScene::Initialize(v12, a2);
    v9 = v15;
    if ( v15 < 0 )
    {
      v13 = (unsigned int)v15;
      v14 = 3323LL;
      goto LABEL_12;
    }
    v8[6] = v12;
    if ( v12 )
      CBaseObject::AddRef(v12);
    Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(&v19);
  }
  *a4 = (struct CProjectedShadowScene *)v8[6];
  v16 = (CBaseObject *)v8[6];
  if ( v16 )
    CBaseObject::AddRef(v16);
  return 0LL;
}
