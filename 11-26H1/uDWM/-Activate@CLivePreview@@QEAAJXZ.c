/*
 * XREFs of ?Activate@CLivePreview@@QEAAJXZ @ 0x18002C448
 * Callers:
 *     ?Activate@CLivePreview@@QEAAJPEAPEAUHWND__@@IPEAU2@W4LIVEPREVIEW_TRIGGER@@IPEAUtagRECT@@@Z @ 0x18002B330 (-Activate@CLivePreview@@QEAAJPEAPEAUHWND__@@IPEAU2@W4LIVEPREVIEW_TRIGGER@@IPEAUtagRECT@@@Z.c)
 *     ?ReActivate@CLivePreview@@QEAAJXZ @ 0x18008D370 (-ReActivate@CLivePreview@@QEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InsertChildBefore@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x180025A50 (-InsertChildBefore@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z @ 0x18002D00C (-EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z.c)
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJXZ @ 0x18002DD10 (-_FadeOutToGlass@CLivePreview@@AEAAJXZ.c)
 *     ?_AnimateOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x18003137C (-_AnimateOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     ?_CollectWindows@CLivePreview@@AEAAJXZ @ 0x180039F1C (-_CollectWindows@CLivePreview@@AEAAJXZ.c)
 *     ?Create@CImmersiveState@@SAJPEAPEAV1@_K@Z @ 0x18003C7D4 (-Create@CImmersiveState@@SAJPEAPEAV1@_K@Z.c)
 *     ?_ClearAnimatedVisuals@CLivePreview@@AEAAXXZ @ 0x180072B5C (-_ClearAnimatedVisuals@CLivePreview@@AEAAXXZ.c)
 *     ?_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x1800747B8 (-_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180078474 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z @ 0x18008D348 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z.c)
 *     ?GetTopBackgroundWindow@CImmersiveState@@QEAAPEAVCWindowData@@XZ @ 0x18008DDA8 (-GetTopBackgroundWindow@CImmersiveState@@QEAAPEAVCWindowData@@XZ.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 */

__int64 __fastcall CLivePreview::Activate(CLivePreview *this)
{
  unsigned __int64 v2; // rdx
  int v3; // eax
  __int64 v4; // rax
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // r8d
  CContainerVisual *RootVisualForDesktop; // rax
  __int64 v11; // r8
  CBaseObject ***v12; // r8
  int inserted; // eax
  int v14; // eax
  unsigned int v15; // edi
  int v16; // eax
  CBaseObject *v17; // rcx
  unsigned __int64 v19; // [rsp+30h] [rbp-38h] BYREF
  __int64 v20; // [rsp+38h] [rbp-30h] BYREF
  _BYTE v21[16]; // [rsp+40h] [rbp-28h] BYREF

  v20 = 0LL;
  v19 = 0LL;
  GetDesktopID(1LL, &v20);
  GetDesktopID(2LL, &v19);
  v2 = v19;
  if ( v20 != v19 )
    goto LABEL_28;
  *((_QWORD *)this + 24) = v19;
  if ( *((_QWORD *)this + 50) || (v3 = CImmersiveState::Create((struct CImmersiveState **)this + 50, v2), v3 >= 0) )
  {
    v4 = *((_QWORD *)this + 49);
    if ( v4 )
    {
      v5 = *(_DWORD *)(v4 + 128);
      if ( v5 == 8 || v5 == 10 )
        *((_QWORD *)this + 49) = CImmersiveState::GetTopBackgroundWindow(*((CImmersiveState **)this + 50));
    }
    if ( *((_BYTE *)this + 184) )
    {
      RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                               *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                               *((_QWORD *)this + 24));
      v11 = *((_QWORD *)this + 49);
      if ( v11 )
        v12 = *(CBaseObject ****)(v11 + 440);
      else
        v12 = 0LL;
      inserted = CContainerVisual::InsertChildBefore(RootVisualForDesktop, (CBaseObject ***)this, v12);
      if ( inserted < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x3CAu, 0LL);
        goto LABEL_28;
      }
    }
    else
    {
      if ( !*((_DWORD *)this + 58) )
      {
        v6 = CLivePreview::_CollectWindows(this);
        if ( v6 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x3BDu, 0LL);
          goto LABEL_28;
        }
      }
      v7 = CDesktopManager::EnableLivePreviewInputHooks(1, *((_DWORD *)this + 102) != 2);
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x3BFu, 0LL);
        goto LABEL_28;
      }
      *((_BYTE *)this + 184) = 1;
      v8 = CLivePreview::_FadeOutToGlass(this);
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x3C1u, 0LL);
        goto LABEL_28;
      }
      if ( *((_DWORD *)this + 58) )
      {
        if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
          McGenEventWrite_EtwEventWriteTransfer(
            (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
            (unsigned int)&UdwmLivePreviewAnimation_Start,
            v9,
            1,
            (__int64)v21);
        NotifyWinEvent(0x21u, *((HWND *)CDesktopManager::s_pDesktopManagerInstance + 143), 0, 0);
      }
    }
    v14 = CLivePreview::_AnimateOpaqueVisuals(this);
    v15 = v14;
    if ( v14 >= 0 )
      return v15;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x3CDu, 0LL);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x3ACu, 0LL);
  }
LABEL_28:
  v16 = CLivePreview::_ClearAnimationOpaqueVisuals(this);
  v15 = v16;
  if ( v16 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x3D7u, 0LL);
  CLivePreview::_ClearAnimatedVisuals(this);
  v17 = (CBaseObject *)*((_QWORD *)this + 50);
  if ( v17 )
  {
    CBaseObject::Release(v17);
    *((_QWORD *)this + 50) = 0LL;
  }
  return v15;
}
