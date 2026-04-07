/*
 * XREFs of ?EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x180016FEC
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18003C3A0 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?UpdateRemoteAppRenderTargetOpacity@CTopLevelWindow@@QEAAJXZ @ 0x180016700 (-UpdateRemoteAppRenderTargetOpacity@CTopLevelWindow@@QEAAJXZ.c)
 *     ?InternalRelease@?$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ @ 0x18001727C (-InternalRelease@-$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateWindowWithNotify@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@@Z @ 0x1800172A4 (-CreateWindowWithNotify@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@@Z.c)
 *     ?Create@CTopLevelWindow3D@@SAJPEAPEAV1@@Z @ 0x1800174A8 (-Create@CTopLevelWindow3D@@SAJPEAPEAV1@@Z.c)
 *     ?SetWindowData@CTopLevelWindow3D@@QEAAXPEAVCWindowData@@@Z @ 0x18001760C (-SetWindowData@CTopLevelWindow3D@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetIsCursor@CVisual@@QEAAJ_N@Z @ 0x18006AE6C (-SetIsCursor@CVisual@@QEAAJ_N@Z.c)
 *     ?SetVisualProtectContent@CTopLevelWindow@@QEAAJ_N@Z @ 0x18007B4B0 (-SetVisualProtectContent@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180088754 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     CWindowList::ForEachSoftwareCursorListener__CWindowList::EnsureTopLevelWindow_::_42_::_lambda_1___ @ 0x18008A528 (CWindowList--ForEachSoftwareCursorListener__CWindowList--EnsureTopLevelWindow_--_42_--_lambda_1_.c)
 *     ?CreateWindowTarget@CTopLevelWindow@@QEAAJPEAX@Z @ 0x1800CAEE0 (-CreateWindowTarget@CTopLevelWindow@@QEAAJPEAX@Z.c)
 *     ?SetIsMagnifier@CVisual@@QEAAJ_N@Z @ 0x1800DE3E8 (-SetIsMagnifier@CVisual@@QEAAJ_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::EnsureTopLevelWindow(CWindowList *this, struct CWindowData *a2)
{
  __int64 v3; // rdx
  int updated; // ebx
  const char *v5; // r9
  wil::details::in1diag3 *v6; // rcx
  struct CTopLevelWindow3D *v7; // rbx
  bool v8; // dl
  struct CWindowData *v9; // rcx
  char v10; // al
  CBaseObject *v11; // rcx
  __int64 v13; // rdx
  CBaseObject *v14; // rcx
  int IsMagnifier; // eax
  __int64 v16; // rdx
  CTopLevelWindow *v17; // rbx
  void *v18; // rax
  int v19; // [rsp+20h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct CWindowData *v21; // [rsp+58h] [rbp+28h] BYREF
  CBaseObject *v22; // [rsp+60h] [rbp+30h] BYREF
  struct CTopLevelWindow3D *v23; // [rsp+68h] [rbp+38h] BYREF

  v21 = a2;
  if ( *((_QWORD *)a2 + 55) )
    return 0LL;
  v22 = 0LL;
  Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(&v22);
  updated = CTopLevelWindow::CreateWindowWithNotify(v21, &v22);
  if ( updated < 0 )
  {
    v13 = 1918LL;
    goto LABEL_16;
  }
  updated = CTopLevelWindow::UpdateRemoteAppRenderTargetOpacity(v22, v3);
  if ( updated < 0 )
  {
    v13 = 1919LL;
LABEL_16:
    v6 = retaddr;
    goto LABEL_17;
  }
  v23 = 0LL;
  updated = CTopLevelWindow3D::Create(&v23);
  v6 = retaddr;
  if ( updated < 0 )
  {
    v13 = 1922LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      v6,
      (void *)v13,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)updated,
      v19);
    v14 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      CBaseObject::Release(v14);
    }
    return (unsigned int)updated;
  }
  if ( *((_QWORD *)v21 + 56) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x788,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      v5);
  v7 = v23;
  CTopLevelWindow3D::SetWindowData(v23, v21);
  *((_QWORD *)v21 + 56) = v7;
  v9 = v21;
  if ( (*((_BYTE *)v21 + 739) & 2) != 0 )
  {
    IsMagnifier = CVisual::SetIsMagnifier(v22, v8);
    updated = IsMagnifier;
    if ( IsMagnifier < 0 )
    {
      v16 = 1935LL;
      goto LABEL_34;
    }
    *((_BYTE *)v21 + 739) &= ~2u;
    v9 = v21;
  }
  if ( (*((_BYTE *)v9 + 739) & 0x40) != 0 )
  {
    CTopLevelWindow::SetVisualProtectContent(v22, 1);
    v9 = v21;
  }
  if ( (*((_BYTE *)v9 + 740) & 2) != 0 )
  {
    IsMagnifier = CVisual::SetIsCursor(v22, 1);
    updated = IsMagnifier;
    if ( IsMagnifier < 0 )
    {
      v16 = 1946LL;
      goto LABEL_34;
    }
    v23 = (struct CTopLevelWindow3D *)&v21;
    CWindowList::ForEachSoftwareCursorListener__CWindowList::EnsureTopLevelWindow_::_42_::_lambda_1___(this, &v23);
    v9 = v21;
  }
  v10 = *((_BYTE *)v9 + 741);
  if ( (v10 & 4) == 0 )
    goto LABEL_11;
  *((_BYTE *)v9 + 741) = v10 & 0xFB;
  IsMagnifier = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                             + 59)
                                                                          + 56LL))(
                  *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 59),
                  *(_QWORD *)(*((_QWORD *)v21 + 82) + 40LL),
                  *((_QWORD *)v21 + 5),
                  0LL);
  updated = IsMagnifier;
  if ( IsMagnifier >= 0 )
  {
    v9 = v21;
LABEL_11:
    if ( (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v9 + 3) + 424LL))(*((_QWORD *)v9 + 3)) )
    {
      v17 = v22;
      v18 = (void *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v21 + 3) + 424LL))(*((_QWORD *)v21 + 3));
      IsMagnifier = CTopLevelWindow::CreateWindowTarget(v17, v18);
      updated = IsMagnifier;
      if ( IsMagnifier < 0 )
      {
        v16 = 1967LL;
        goto LABEL_34;
      }
    }
    v11 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      CBaseObject::Release(v11);
    }
    return 0LL;
  }
  v16 = 1962LL;
LABEL_34:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v16,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
    (const char *)(unsigned int)IsMagnifier,
    v19);
  Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(&v22);
  return (unsigned int)updated;
}
