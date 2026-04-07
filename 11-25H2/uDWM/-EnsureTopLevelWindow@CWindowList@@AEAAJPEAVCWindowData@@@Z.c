/*
 * XREFs of ?EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x18001B874
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180019E20 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x1800051C4 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?UpdateRemoteAppRenderTargetOpacity@CTopLevelWindow@@QEAAJXZ @ 0x18001C080 (-UpdateRemoteAppRenderTargetOpacity@CTopLevelWindow@@QEAAJXZ.c)
 *     ?CreateWindowWithNotify@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@@Z @ 0x18001C830 (-CreateWindowWithNotify@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@@Z.c)
 *     ?Create@CTopLevelWindow3D@@SAJPEAPEAV1@@Z @ 0x18001CBE4 (-Create@CTopLevelWindow3D@@SAJPEAPEAV1@@Z.c)
 *     ?SetWindowData@CTopLevelWindow3D@@QEAAXPEAVCWindowData@@@Z @ 0x18001D180 (-SetWindowData@CTopLevelWindow3D@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?SetIsCursor@CVisual@@QEAAJ_N@Z @ 0x18007CE08 (-SetIsCursor@CVisual@@QEAAJ_N@Z.c)
 *     CWindowList::ForEachSoftwareCursorListener__lambda_7c5effa24c2ac0907debb037ead5d2df___ @ 0x18008C280 (CWindowList--ForEachSoftwareCursorListener__lambda_7c5effa24c2ac0907debb037ead5d2df___.c)
 *     ?SetVisualProtectContent@CTopLevelWindow@@QEAAJ_N@Z @ 0x18008C394 (-SetVisualProtectContent@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180095D90 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?CreateWindowTarget@CTopLevelWindow@@QEAAJPEAX@Z @ 0x1800CFCB4 (-CreateWindowTarget@CTopLevelWindow@@QEAAJPEAX@Z.c)
 *     ?SetIsMagnifier@CVisual@@QEAAJ_N@Z @ 0x1800E1588 (-SetIsMagnifier@CVisual@@QEAAJ_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::EnsureTopLevelWindow(CWindowList *this, struct CWindowData *a2)
{
  int updated; // ebx
  const char *v4; // r9
  wil::details::in1diag3 *v5; // rcx
  struct CTopLevelWindow3D *v6; // rbx
  bool v7; // dl
  struct CWindowData *v8; // rcx
  char v9; // al
  CBaseObject *v10; // rcx
  __int64 v12; // rdx
  CBaseObject *v13; // rcx
  int IsMagnifier; // eax
  __int64 v15; // rdx
  CTopLevelWindow *v16; // rbx
  void *v17; // rax
  int v18; // [rsp+20h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct CWindowData *v20; // [rsp+58h] [rbp+28h] BYREF
  CBaseObject *v21; // [rsp+60h] [rbp+30h] BYREF
  struct CTopLevelWindow3D *v22; // [rsp+68h] [rbp+38h] BYREF

  v20 = a2;
  if ( *((_QWORD *)a2 + 55) )
    return 0LL;
  v21 = 0LL;
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v21);
  updated = CTopLevelWindow::CreateWindowWithNotify(v20, &v21);
  if ( updated < 0 )
  {
    v12 = 1622LL;
    goto LABEL_16;
  }
  updated = CTopLevelWindow::UpdateRemoteAppRenderTargetOpacity(v21);
  if ( updated < 0 )
  {
    v12 = 1623LL;
LABEL_16:
    v5 = retaddr;
    goto LABEL_17;
  }
  v22 = 0LL;
  updated = CTopLevelWindow3D::Create(&v22);
  v5 = retaddr;
  if ( updated < 0 )
  {
    v12 = 1626LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      v5,
      (void *)v12,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)updated,
      v18);
    v13 = v21;
    if ( v21 )
    {
      v21 = 0LL;
      CBaseObject::Release(v13);
    }
    return (unsigned int)updated;
  }
  if ( *((_QWORD *)v20 + 56) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x660,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      v4);
  v6 = v22;
  CTopLevelWindow3D::SetWindowData(v22, v20);
  *((_QWORD *)v20 + 56) = v6;
  v8 = v20;
  if ( (*((_BYTE *)v20 + 675) & 2) != 0 )
  {
    IsMagnifier = CVisual::SetIsMagnifier(v21, v7);
    updated = IsMagnifier;
    if ( IsMagnifier < 0 )
    {
      v15 = 1639LL;
      goto LABEL_34;
    }
    *((_BYTE *)v20 + 675) &= ~2u;
    v8 = v20;
  }
  if ( (*((_BYTE *)v8 + 675) & 0x40) != 0 )
  {
    CTopLevelWindow::SetVisualProtectContent(v21, 1);
    v8 = v20;
  }
  if ( (*((_BYTE *)v8 + 676) & 2) != 0 )
  {
    IsMagnifier = CVisual::SetIsCursor(v21, 1);
    updated = IsMagnifier;
    if ( IsMagnifier < 0 )
    {
      v15 = 1650LL;
      goto LABEL_34;
    }
    v22 = (struct CTopLevelWindow3D *)&v20;
    CWindowList::ForEachSoftwareCursorListener__lambda_7c5effa24c2ac0907debb037ead5d2df___(this, &v22);
    v8 = v20;
  }
  v9 = *((_BYTE *)v8 + 677);
  if ( (v9 & 8) == 0 )
    goto LABEL_11;
  *((_BYTE *)v8 + 677) = v9 & 0xF7;
  IsMagnifier = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                             + 58)
                                                                          + 72LL))(
                  *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 58),
                  *(_QWORD *)(*((_QWORD *)v20 + 82) + 40LL),
                  *((_QWORD *)v20 + 5),
                  0LL);
  updated = IsMagnifier;
  if ( IsMagnifier >= 0 )
  {
    v8 = v20;
LABEL_11:
    if ( (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v8 + 3) + 424LL))(*((_QWORD *)v8 + 3)) )
    {
      v16 = v21;
      v17 = (void *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v20 + 3) + 424LL))(*((_QWORD *)v20 + 3));
      IsMagnifier = CTopLevelWindow::CreateWindowTarget(v16, v17);
      updated = IsMagnifier;
      if ( IsMagnifier < 0 )
      {
        v15 = 1671LL;
        goto LABEL_34;
      }
    }
    v10 = v21;
    if ( v21 )
    {
      v21 = 0LL;
      CBaseObject::Release(v10);
    }
    return 0LL;
  }
  v15 = 1666LL;
LABEL_34:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
    (const char *)(unsigned int)IsMagnifier,
    v18);
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v21);
  return (unsigned int)updated;
}
