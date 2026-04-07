/*
 * XREFs of ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x180049720
 * Callers:
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180092070 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?ShouldShowTransition@CTopLevelWindow3D@@QEAA_NXZ @ 0x18000438C (-ShouldShowTransition@CTopLevelWindow3D@@QEAA_NXZ.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x180005BA4 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180006850 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x180049258 (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 *     ?IsWindowInSystemArrangementAnimation@CTopLevelWindow3D@@AEBA_NXZ @ 0x180049A80 (-IsWindowInSystemArrangementAnimation@CTopLevelWindow3D@@AEBA_NXZ.c)
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x180049AF4 (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 *     ?EnsureSecondaryWindowRepresentation@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x18004B59C (-EnsureSecondaryWindowRepresentation@CTopLevelWindow3D@@QEAAJ_N@Z.c)
 *     ?OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x18004B744 (-OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A0908 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x1800BA258 (-_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 */

__int64 __fastcall CTopLevelWindow3D::OnWindowStyleUpdated(CTopLevelWindow3D *this)
{
  __int64 v1; // rdx
  int v3; // eax
  int v4; // ecx
  char v5; // r10
  int v6; // r8d
  char v7; // dl
  _BYTE *v8; // rax
  __int64 v10; // rax
  int started; // eax
  unsigned int v12; // edi
  int v13; // edi
  int v14; // eax
  unsigned int v15; // esi
  __int128 v16; // xmm0
  CTopLevelWindow *v17; // rcx
  int v18; // eax
  unsigned int v19; // edi
  int v20; // eax
  unsigned int v21; // edi
  int v22; // eax
  unsigned int v23; // ebx
  __int64 v24; // r11
  CLivePreview *v25; // rcx
  int v26; // eax
  unsigned int v27; // ebx
  int v28; // eax
  int v29; // eax
  unsigned int v30; // edi
  int v31; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_QWORD *)this + 36);
  v3 = *(_DWORD *)(v1 + 116) & 0x20000000;
  v4 = *(_DWORD *)(v1 + 116) & 0x1000000;
  v5 = v4 != 0;
  v6 = *(_DWORD *)(v1 + 124) & 0x1000;
  v7 = v6 != 0;
  if ( *((_BYTE *)this + 248) == (v3 != 0) )
  {
    if ( v3 || *((_BYTE *)this + 488) )
      return 0LL;
    v8 = (char *)this + 250;
    if ( v5 == *((_BYTE *)this + 249) )
    {
      if ( v7 == *v8 )
        return 0LL;
    }
    else
    {
      v13 = 2;
      if ( !v4 )
        v13 = 4;
      if ( v7 == *v8 )
        goto LABEL_18;
    }
    v13 = 13 - (v6 != 0);
LABEL_18:
    *((_BYTE *)this + 249) = v5;
    *v8 = v7;
    if ( !CTopLevelWindow3D::ShouldShowTransition(this) )
      return 0LL;
    v14 = CTopLevelWindow3D::EnsureSecondaryWindowRepresentation(this, 1);
    v15 = v14;
    if ( v14 >= 0 )
    {
      v16 = *(_OWORD *)(*((_QWORD *)this + 36) + 48LL);
      *((_DWORD *)this + 85) = v13;
      *((_OWORD *)this + 17) = v16;
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2EF,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
      (const char *)(unsigned int)v14,
      v31);
    return v15;
  }
  *((_BYTE *)this + 248) = v3 != 0;
  *((_BYTE *)this + 249) = v5;
  if ( CTopLevelWindow3D::ShouldShowTransition(this) )
  {
    v10 = *((_QWORD *)this + 36);
    if ( *((_BYTE *)this + 248) )
    {
      if ( (*(_BYTE *)(v10 + 672) & 0x40) == 0 && !CTopLevelWindow3D::IsWindowInSystemArrangementAnimation(this) )
      {
        if ( *((_QWORD *)this + 40) )
        {
          v28 = CTopLevelWindow3D::StopAnimation(this);
          if ( v28 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x2B2,
              (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
              (const char *)(unsigned int)v28,
              v31);
        }
        started = CTopLevelWindow3D::StartAnimation(this, 3LL);
        v12 = started;
        if ( started < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2B5,
            (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
            (const char *)(unsigned int)started,
            v31);
          return v12;
        }
      }
    }
    else
    {
      v17 = *(CTopLevelWindow **)(v10 + 440);
      if ( (*(_BYTE *)(v10 + 675) & 8) != 0 )
      {
        v29 = CTopLevelWindow::ShowWindow(v17, 1);
        v30 = v29;
        if ( v29 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2BC,
            (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
            (const char *)(unsigned int)v29,
            v31);
          return v30;
        }
        *(_BYTE *)(*((_QWORD *)this + 36) + 675LL) &= ~8u;
      }
      else
      {
        v18 = CTopLevelWindow::ShowWindow(v17, 0);
        v19 = v18;
        if ( v18 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2C4,
            (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
            (const char *)(unsigned int)v18,
            v31);
          return v19;
        }
        *((_BYTE *)this + 488) = 1;
        v20 = CDesktopManager::RegisterForGlobalTimeChangeNotification(this);
        v21 = v20;
        if ( v20 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2C6,
            (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
            (const char *)(unsigned int)v20,
            v31);
          return v21;
        }
      }
    }
    v22 = CTopLevelWindow3D::OnZOrderUpdated(this, 1);
    v23 = v22;
    if ( v22 >= 0 )
      return 0LL;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2CD,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
      (const char *)(unsigned int)v22,
      v31);
    return v23;
  }
  else
  {
    v24 = *((_QWORD *)this + 36);
    v25 = (CLivePreview *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 57);
    if ( *((_BYTE *)v25 + 240) && v24 && CLivePreview::_IsInLivePreview(v25, *((const struct CWindowData **)this + 36)) )
      return 0LL;
    v26 = CTopLevelWindow::ShowWindow(*(CTopLevelWindow **)(v24 + 440), 1);
    v27 = v26;
    if ( v26 >= 0 )
      return 0LL;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D3,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
      (const char *)(unsigned int)v26,
      v31);
    return v27;
  }
}
