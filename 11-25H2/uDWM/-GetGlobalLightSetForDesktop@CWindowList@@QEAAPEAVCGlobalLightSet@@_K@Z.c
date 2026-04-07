/*
 * XREFs of ?GetGlobalLightSetForDesktop@CWindowList@@QEAAPEAVCGlobalLightSet@@_K@Z @ 0x18002514C
 * Callers:
 *     ?DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z @ 0x180024FD0 (-DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z.c)
 *     ?Initialize@CProjectedShadowScene@@QEAAJ_K@Z @ 0x180034928 (-Initialize@CProjectedShadowScene@@QEAAJ_K@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x1800051C4 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x180008530 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CGlobalLightSet@@SAJ_KPEAPEAV1@@Z @ 0x180034D9C (-Create@CGlobalLightSet@@SAJ_KPEAPEAV1@@Z.c)
 *     ?FindElement@?$CGenericTableMap@_KUCDesktop@@@@QEAAPEAUCDesktop@@_K@Z @ 0x18004BA30 (-FindElement@-$CGenericTableMap@_KUCDesktop@@@@QEAAPEAUCDesktop@@_K@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A0908 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
struct CGlobalLightSet *__fastcall CWindowList::GetGlobalLightSetForDesktop(CWindowList *this, unsigned __int64 a2)
{
  __int64 Element; // rbx
  int v5; // eax
  CMILRefCountBase *v6; // rcx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CMILRefCountBase *v9; // [rsp+30h] [rbp+8h] BYREF

  Element = CGenericTableMap<unsigned __int64,CDesktop>::FindElement((char *)this + 8);
  if ( *(_QWORD *)(Element + 56) )
    return *(struct CGlobalLightSet **)(Element + 56);
  v9 = 0LL;
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v9);
  v5 = CGlobalLightSet::Create(a2, &v9);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1D38,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)v5,
      v7);
  }
  else
  {
    v6 = v9;
    *(_QWORD *)(Element + 56) = v9;
    if ( !v6 )
      goto LABEL_7;
    CMILRefCountBase::AddRef(v6);
  }
  v6 = v9;
LABEL_7:
  if ( v6 )
  {
    v9 = 0LL;
    CBaseObject::Release(v6);
  }
  return *(struct CGlobalLightSet **)(Element + 56);
}
