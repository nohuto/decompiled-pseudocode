/*
 * XREFs of ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x1800431C0
 * Callers:
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180081070 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x180005A2C (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180013644 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x180013BB4 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?EnsureSecondaryWindowRepresentation@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x18002888C (-EnsureSecondaryWindowRepresentation@CTopLevelWindow3D@@QEAAJ_N@Z.c)
 *     ?OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x180035EF8 (-OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z.c)
 *     ?ShouldShowTransition@CTopLevelWindow3D@@QEAA_NXZ @ 0x180043524 (-ShouldShowTransition@CTopLevelWindow3D@@QEAA_NXZ.c)
 *     ?IsWindowInSystemArrangementAnimation@CTopLevelWindow3D@@AEBA_NXZ @ 0x18004362C (-IsWindowInSystemArrangementAnimation@CTopLevelWindow3D@@AEBA_NXZ.c)
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x1800436A0 (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180084EB4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x1800B97C8 (-_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 */

__int64 __fastcall CTopLevelWindow3D::OnWindowStyleUpdated(CTopLevelWindow3D *this)
{
  __int64 v1; // rdx
  int v3; // eax
  int v4; // ecx
  char v5; // r10
  int v6; // r8d
  char v7; // dl
  __int64 v9; // rax
  int started; // eax
  unsigned int v11; // edi
  int v12; // edi
  int v13; // eax
  unsigned int v14; // esi
  __int128 v15; // xmm0
  CTopLevelWindow *v16; // rcx
  int v17; // eax
  unsigned int v18; // edi
  int v19; // eax
  unsigned int v20; // edi
  __int64 v21; // r11
  CLivePreview *v22; // rcx
  int v23; // eax
  unsigned int v24; // ebx
  int v25; // eax
  unsigned int v26; // ebx
  int v27; // eax
  int v28; // eax
  unsigned int v29; // edi
  int v30; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_QWORD *)this + 29);
  v3 = *(_DWORD *)(v1 + 116) & 0x20000000;
  v4 = *(_DWORD *)(v1 + 116) & 0x1000000;
  v5 = v4 != 0;
  v6 = *(_DWORD *)(v1 + 124) & 0x1000;
  v7 = v6 != 0;
  if ( *((_BYTE *)this + 192) == (v3 != 0) )
  {
    if ( v3 || *((_BYTE *)this + 336) )
      return 0LL;
    if ( v5 == *((_BYTE *)this + 193) )
    {
      if ( v7 == *((_BYTE *)this + 194) )
        return 0LL;
    }
    else
    {
      v12 = 2;
      if ( !v4 )
        v12 = 4;
      if ( v7 == *((_BYTE *)this + 194) )
        goto LABEL_18;
    }
    v12 = 13 - (v6 != 0);
LABEL_18:
    *((_BYTE *)this + 193) = v5;
    *((_BYTE *)this + 194) = v7;
    if ( !CTopLevelWindow3D::ShouldShowTransition(this) )
      return 0LL;
    v13 = CTopLevelWindow3D::EnsureSecondaryWindowRepresentation(this, 1u);
    v14 = v13;
    if ( v13 >= 0 )
    {
      v15 = *(_OWORD *)(*((_QWORD *)this + 29) + 48LL);
      *((_DWORD *)this + 71) = v12;
      *(_OWORD *)((char *)this + 216) = v15;
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2EB,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
      (const char *)(unsigned int)v13,
      v30);
    return v14;
  }
  *((_BYTE *)this + 192) = v3 != 0;
  *((_BYTE *)this + 193) = v5;
  if ( CTopLevelWindow3D::ShouldShowTransition(this) )
  {
    v9 = *((_QWORD *)this + 29);
    if ( *((_BYTE *)this + 192) )
    {
      if ( (*(_BYTE *)(v9 + 736) & 0x40) == 0 && !CTopLevelWindow3D::IsWindowInSystemArrangementAnimation(this) )
      {
        if ( *((_QWORD *)this + 33) )
        {
          v27 = CTopLevelWindow3D::StopAnimation(this);
          if ( v27 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x2AE,
              (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
              (const char *)(unsigned int)v27,
              v30);
        }
        started = CTopLevelWindow3D::StartAnimation(this, 3LL);
        v11 = started;
        if ( started < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2B1,
            (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
            (const char *)(unsigned int)started,
            v30);
          return v11;
        }
      }
    }
    else
    {
      v16 = *(CTopLevelWindow **)(v9 + 440);
      if ( (*(_BYTE *)(v9 + 739) & 8) != 0 )
      {
        v28 = CTopLevelWindow::ShowWindow(v16, 1);
        v29 = v28;
        if ( v28 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2B8,
            (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
            (const char *)(unsigned int)v28,
            v30);
          return v29;
        }
        *(_BYTE *)(*((_QWORD *)this + 29) + 739LL) &= ~8u;
      }
      else
      {
        v17 = CTopLevelWindow::ShowWindow(v16, 0);
        v18 = v17;
        if ( v17 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2C0,
            (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
            (const char *)(unsigned int)v17,
            v30);
          return v18;
        }
        *((_BYTE *)this + 336) = 1;
        v19 = CDesktopManager::RegisterForGlobalTimeChangeNotification(this);
        v20 = v19;
        if ( v19 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2C2,
            (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
            (const char *)(unsigned int)v19,
            v30);
          return v20;
        }
      }
    }
    v25 = CTopLevelWindow3D::OnZOrderUpdated(this, 1);
    v26 = v25;
    if ( v25 >= 0 )
      return 0LL;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2C9,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
      (const char *)(unsigned int)v25,
      v30);
    return v26;
  }
  else
  {
    v21 = *((_QWORD *)this + 29);
    v22 = (CLivePreview *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 57);
    if ( *((_BYTE *)v22 + 184) && v21 && CLivePreview::_IsInLivePreview(v22, *((const struct CWindowData **)this + 29)) )
      return 0LL;
    v23 = CTopLevelWindow::ShowWindow(*(CTopLevelWindow **)(v21 + 440), 1);
    v24 = v23;
    if ( v23 >= 0 )
      return 0LL;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2CF,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
      (const char *)(unsigned int)v23,
      v30);
    return v24;
  }
}
