/*
 * XREFs of ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x180014C48
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18003C3A0 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180013644 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x180013BB4 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?ShouldDelayTransition@CTopLevelWindow3D@@AEAA_N_N@Z @ 0x180014E80 (-ShouldDelayTransition@CTopLevelWindow3D@@AEAA_N_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShouldShowTransition@CTopLevelWindow3D@@QEAA_NXZ @ 0x180043524 (-ShouldShowTransition@CTopLevelWindow3D@@QEAA_NXZ.c)
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x1800436A0 (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180084EB4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x18008A778 (-StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?_GetAndClearAnimatedWhenUncloaked@CTopLevelWindow3D@@AEAA_NXZ @ 0x18008DF84 (-_GetAndClearAnimatedWhenUncloaked@CTopLevelWindow3D@@AEAA_NXZ.c)
 *     ?_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x1800B97C8 (-_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 */

__int64 __fastcall CTopLevelWindow3D::ShowWindow(CTopLevelWindow3D *this, bool a2, char a3)
{
  unsigned int v3; // ebx
  const struct CWindowData **v4; // rsi
  int v7; // eax
  int v8; // eax
  const struct CWindowData *v10; // r11
  CLivePreview *v11; // rcx
  int v12; // eax
  int started; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  unsigned int v17; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = 0;
  v4 = (const struct CWindowData **)((char *)this + 232);
  if ( !a2 || (*((_BYTE *)*v4 + 740) & 1) != 0 )
  {
    if ( CTopLevelWindow3D::ShouldDelayTransition(this, 0) )
    {
      started = CTopLevelWindow3D::StartDelayHideAnimation(this);
      v3 = started;
      if ( started < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, started, 0x140u, 0LL);
    }
    else if ( !*((_QWORD *)this + 33) || *((_DWORD *)this + 70) != 3 )
    {
      v7 = CTopLevelWindow3D::StopAnimation(this);
      v3 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x149u, 0LL);
      }
      else
      {
        v8 = CTopLevelWindow::ShowWindow(*((CTopLevelWindow **)*v4 + 55), 0);
        v3 = v8;
        if ( v8 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x14Bu, 0LL);
      }
    }
  }
  else if ( CTopLevelWindow3D::ShouldDelayTransition(this, a2) )
  {
    v14 = CTopLevelWindow3D::StartAnimation(this, 7LL);
    v3 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x129u, 0LL);
  }
  else if ( CTopLevelWindow3D::ShouldShowTransition(this)
         && (a3 || CTopLevelWindow3D::_GetAndClearAnimatedWhenUncloaked(this)) )
  {
    if ( *((_QWORD *)this + 33) )
    {
      v16 = CTopLevelWindow3D::StopAnimation(this);
      if ( v16 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x130,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
          (const char *)(unsigned int)v16,
          v17);
    }
    v15 = CTopLevelWindow3D::StartAnimation(this, 1LL);
    v3 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x132u, 0LL);
  }
  else if ( !*((_QWORD *)this + 33) )
  {
    v10 = *v4;
    v11 = (CLivePreview *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 57);
    if ( !*((_BYTE *)v11 + 184) || !v10 || !CLivePreview::_IsInLivePreview(v11, *v4) )
    {
      v12 = CTopLevelWindow::ShowWindow(*((CTopLevelWindow **)v10 + 55), 1);
      v3 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x138u, 0LL);
    }
  }
  return v3;
}
