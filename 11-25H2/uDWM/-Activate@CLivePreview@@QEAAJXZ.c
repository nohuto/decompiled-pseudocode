/*
 * XREFs of ?Activate@CLivePreview@@QEAAJXZ @ 0x180045718
 * Callers:
 *     ?Activate@CLivePreview@@QEAAJPEAPEAUHWND__@@IPEAU2@W4LIVEPREVIEW_TRIGGER@@IPEAUtagRECT@@@Z @ 0x180045388 (-Activate@CLivePreview@@QEAAJPEAPEAUHWND__@@IPEAU2@W4LIVEPREVIEW_TRIGGER@@IPEAUtagRECT@@@Z.c)
 *     ?ReActivate@CLivePreview@@QEAAJXZ @ 0x1800BA174 (-ReActivate@CLivePreview@@QEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CImmersiveState@@SAJPEAPEAV1@_K@Z @ 0x180025310 (-Create@CImmersiveState@@SAJPEAPEAV1@_K@Z.c)
 *     ?_CollectWindows@CLivePreview@@AEAAJXZ @ 0x18002592C (-_CollectWindows@CLivePreview@@AEAAJXZ.c)
 *     ?_ClearAnimatedVisuals@CLivePreview@@AEAAXXZ @ 0x18003750C (-_ClearAnimatedVisuals@CLivePreview@@AEAAXXZ.c)
 *     ?_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x18003769C (-_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     ?EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z @ 0x180045C40 (-EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z.c)
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJXZ @ 0x180046D44 (-_FadeOutToGlass@CLivePreview@@AEAAJXZ.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18004BCB0 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?InsertChildBefore@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x18004CCDC (-InsertChildBefore@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?_AnimateOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x180057C74 (-_AnimateOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x18006E69C (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?GetTopBackgroundWindow@CImmersiveState@@QEAAPEAVCWindowData@@XZ @ 0x18009A2B8 (-GetTopBackgroundWindow@CImmersiveState@@QEAAPEAVCWindowData@@XZ.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 */

__int64 __fastcall CLivePreview::Activate(CLivePreview *this)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // r8d
  CContainerVisual *RootVisualForDesktop; // rax
  __int64 v11; // r8
  struct CVisual *v12; // r8
  int inserted; // eax
  int v14; // eax
  unsigned int v15; // edi
  int v16; // eax
  CBaseObject *v17; // rcx
  _BYTE v19[16]; // [rsp+40h] [rbp-28h] BYREF

  GetDesktopID(1LL);
  GetDesktopID(2LL);
  *((_QWORD *)this + 31) = 0LL;
  if ( *((_QWORD *)this + 60) || (v2 = CImmersiveState::Create((struct CImmersiveState **)this + 60, 0LL), v2 >= 0) )
  {
    v5 = *((_QWORD *)this + 59);
    if ( v5 && ((*(_DWORD *)(v5 + 128) - 8) & 0xFFFFFFFD) == 0 )
      *((_QWORD *)this + 59) = CImmersiveState::GetTopBackgroundWindow(*((CImmersiveState **)this + 60));
    if ( *((_BYTE *)this + 240) )
    {
      RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                               *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                               *((_QWORD *)this + 31));
      v11 = *((_QWORD *)this + 59);
      if ( v11 )
        v12 = *(struct CVisual **)(v11 + 440);
      else
        v12 = 0LL;
      inserted = CContainerVisual::InsertChildBefore(RootVisualForDesktop, this, v12);
      if ( inserted < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x3D4u, 0LL);
        goto LABEL_27;
      }
    }
    else
    {
      if ( !*((_DWORD *)this + 72) )
      {
        v6 = CLivePreview::_CollectWindows(this);
        if ( v6 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x3C7u, 0LL);
          goto LABEL_27;
        }
      }
      v7 = CDesktopManager::EnableLivePreviewInputHooks(1, *((_DWORD *)this + 122) != 2);
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x3C9u, 0LL);
        goto LABEL_27;
      }
      *((_BYTE *)this + 240) = 1;
      v8 = CLivePreview::_FadeOutToGlass(this);
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x3CBu, 0LL);
        goto LABEL_27;
      }
      if ( *((_DWORD *)this + 72) )
      {
        if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
          McGenEventWrite_EtwEventWriteTransfer(
            (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
            (unsigned int)&UdwmLivePreviewAnimation_Start,
            v9,
            1,
            (__int64)v19);
        NotifyWinEvent(0x21u, *((HWND *)CDesktopManager::s_pDesktopManagerInstance + 142), 0, 0);
      }
    }
    v14 = CLivePreview::_AnimateOpaqueVisuals(this);
    v15 = v14;
    if ( v14 >= 0 )
      return v15;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x3D7u, 0LL);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x3B6u, 0LL);
  }
LABEL_27:
  v16 = CLivePreview::_ClearAnimationOpaqueVisuals(this, v3, v4);
  v15 = v16;
  if ( v16 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x3E1u, 0LL);
  CLivePreview::_ClearAnimatedVisuals(this);
  v17 = (CBaseObject *)*((_QWORD *)this + 60);
  if ( v17 )
  {
    CBaseObject::Release(v17);
    *((_QWORD *)this + 60) = 0LL;
  }
  return v15;
}
