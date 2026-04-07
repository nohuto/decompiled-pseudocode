/*
 * XREFs of ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180013644
 * Callers:
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x180011000 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x180014C48 (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 *     ?SetWindowData@CTopLevelWindow3D@@QEAAXPEAVCWindowData@@@Z @ 0x18001760C (-SetWindowData@CTopLevelWindow3D@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x1800431C0 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x1800452B0 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 *     ?SetParent@CTopLevelWindow3D@@UEAAJPEAVCContainerVisual@@@Z @ 0x18006C950 (-SetParent@CTopLevelWindow3D@@UEAAJPEAVCContainerVisual@@@Z.c)
 *     ?_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z @ 0x180070BE4 (-_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z.c)
 *     ??1CTopLevelWindow3D@@MEAA@XZ @ 0x1800821A8 (--1CTopLevelWindow3D@@MEAA@XZ.c)
 *     ?StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x18008A778 (-StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     CTransitionVisualController::ForEachOwnedWindow__CTransitionVisualController::_StopAnimationsOfOwnedWindows_::_2_::_lambda_1___ @ 0x18008B2EC (CTransitionVisualController--ForEachOwnedWindow__CTransitionVisualController--_StopAnimationsOfO.c)
 *     ?OnWindowSizeUpdated@CTopLevelWindow3D@@QEAAXXZ @ 0x18008C5D8 (-OnWindowSizeUpdated@CTopLevelWindow3D@@QEAAXXZ.c)
 *     ?StopAnimation@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800D858C (-StopAnimation@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     ?Unload@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800DDA90 (-Unload@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ.c)
 * Callees:
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x180005C0C (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x180013BB4 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCurrent@TransitionManager@Transitions@Udwm@winrt@@SAPEAV1234@XZ @ 0x18001E8E0 (-GetCurrent@TransitionManager@Transitions@Udwm@winrt@@SAPEAV1234@XZ.c)
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x1800231F4 (-Release@CTimelineBase@@QEAAKXZ.c)
 *     ?QueueDestroySprite@CWindowList@@QEAAJPEAVCWindowData@@@Z @ 0x180031DF4 (-QueueDestroySprite@CWindowList@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?reset@?$com_ptr_t@UICompositionSurface@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800544EC (-reset@-$com_ptr_t@UICompositionSurface@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil.c)
 *     ?GetScenarioGuid@CTopLevelWindow3D@@AEAAXW4WindowAnimationType@1@PEAU_GUID@@@Z @ 0x1800691C8 (-GetScenarioGuid@CTopLevelWindow3D@@AEAAXW4WindowAnimationType@1@PEAU_GUID@@@Z.c)
 *     ?IsDelayTransition@CTopLevelWindow3D@@AEAA_NXZ @ 0x18006F888 (-IsDelayTransition@CTopLevelWindow3D@@AEAA_NXZ.c)
 *     ??$?8$$A6AJXZ@std@@YA_NAEBV?$function@$$A6AJXZ@0@$$T@Z @ 0x180070388 (--$-8$$A6AJXZ@std@@YA_NAEBV-$function@$$A6AJXZ@0@$$T@Z.c)
 *     ?ReleaseSceneObjects@CTopLevelWindow3D@@AEAAXXZ @ 0x180083EE0 (-ReleaseSceneObjects@CTopLevelWindow3D@@AEAAXXZ.c)
 *     McTemplateU0qp_EtwEventWriteTransfer @ 0x18008A828 (McTemplateU0qp_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ?_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x1800B97C8 (-_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 *     ?EnsureWorkAreaChangeTransitionRemoved@TransitionManager@Transitions@Udwm@winrt@@QEAAXPEAUHWND__@@@Z @ 0x1800D8BA0 (-EnsureWorkAreaChangeTransitionRemoved@TransitionManager@Transitions@Udwm@winrt@@QEAAXPEAUHWND__.c)
 *     ?_Dwm_Xbad_function_call@std@@YAXXZ @ 0x1800E550C (-_Dwm_Xbad_function_call@std@@YAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTopLevelWindow3D::StopAnimation(CTopLevelWindow3D *this)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  __int64 v4; // rcx
  int v5; // eax
  winrt::Udwm::Transitions::TransitionManager *Current; // rax
  _QWORD *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax
  CTimelineBase **v12; // rdx
  __int64 v13; // r8
  CTimelineBase *v14; // rcx
  __int64 v15; // rdx
  char v16; // r11
  bool v17; // r11
  CLivePreview *v18; // rcx
  CTopLevelWindow *v19; // rcx
  int v20; // eax
  int v21; // eax
  __int128 v23; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+50h] [rbp-B0h]
  int v25; // [rsp+58h] [rbp-A8h]
  __int128 v26; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v27; // [rsp+70h] [rbp-90h]
  int v28; // [rsp+78h] [rbp-88h]
  __int128 v29; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v30[128]; // [rsp+90h] [rbp-70h] BYREF

  v2 = 0;
  if ( (unsigned __int8)std::operator==<long (void)>((char *)this + 360) )
    goto LABEL_47;
  v4 = *((_QWORD *)this + 52);
  if ( !v4 )
    std::_Dwm_Xbad_function_call();
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v2 = v5;
  if ( v5 >= 0 )
  {
LABEL_47:
    if ( *((_BYTE *)this + 195) )
    {
      *((_BYTE *)this + 195) = 0;
      Current = winrt::Udwm::Transitions::TransitionManager::GetCurrent();
      winrt::Udwm::Transitions::TransitionManager::EnsureWorkAreaChangeTransitionRemoved(
        Current,
        *(HWND *)(*((_QWORD *)this + 29) + 40LL));
    }
    if ( *((_QWORD *)this + 33) )
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McTemplateU0qp_EtwEventWriteTransfer(v3, &UdwmAnimation_Stop, *((unsigned int *)this + 70));
      v7 = (_QWORD *)((char *)this + 272);
      if ( *((_QWORD *)this + 34) )
      {
        v8 = *((unsigned int *)this + 70);
        v29 = 0LL;
        CTopLevelWindow3D::GetScenarioGuid(v3, v8, &v29);
        GetAnimationScenarioNameFromGUID(&v29, v30, 64LL);
        v9 = *v7;
        v27 = 0LL;
        v28 = 0;
        v26 = 0LL;
        if ( (*(int (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v9 + 88LL))(v9, &v26) >= 0 )
        {
          v10 = *v7;
          v25 = v28;
          v11 = *((_QWORD *)this + 33);
          v23 = v26;
          v24 = v27;
          (*(void (__fastcall **)(__int64, __int128 *, _QWORD, _QWORD, _BYTE *, _QWORD, int))(*(_QWORD *)v10 + 216LL))(
            v10,
            &v23,
            0LL,
            0LL,
            v30,
            0LL,
            (int)*(double *)(v11 + 24));
        }
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v7 + 40LL))(*v7, 0LL);
        wil::com_ptr_t<Windows::UI::Composition::ICompositionSurface,wil::err_returncode_policy>::reset((char *)this + 272);
      }
      v12 = (CTimelineBase **)((char *)this + 288);
      v13 = 6LL;
      do
      {
        if ( *v12 )
        {
          CTimelineBase::Release(*v12);
          *v12 = 0LL;
        }
        ++v12;
        --v13;
      }
      while ( v13 );
      v14 = (CTimelineBase *)*((_QWORD *)this + 33);
      if ( v14 )
      {
        CTimelineBase::Release(v14);
        *((_QWORD *)this + 33) = 0LL;
      }
      if ( CDesktopManager::UnregisterForGlobalTimeChangeNotification(this) )
        --*((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 10);
      if ( *((_DWORD *)this + 70) == 9 && !*((_BYTE *)this + 192)
        || *((_DWORD *)this + 71) && !CTopLevelWindow3D::IsDelayTransition(this) )
      {
        *(_OWORD *)((char *)this + 216) = *(_OWORD *)(*((_QWORD *)this + 29) + 48LL);
      }
      if ( !CTopLevelWindow3D::IsDelayTransition(this) )
        *((_DWORD *)this + 71) = 0;
      *((_DWORD *)this + 70) = 0;
    }
    else if ( *((_BYTE *)this + 336) && CDesktopManager::UnregisterForGlobalTimeChangeNotification(this) )
    {
      *((_BYTE *)this + 336) = 0;
    }
    CTopLevelWindow3D::ReleaseSceneObjects(this);
    v15 = *((_QWORD *)this + 29);
    v16 = *(_BYTE *)(v15 + 736);
    if ( (v16 & 4) != 0 )
    {
      v21 = CWindowList::QueueDestroySprite(
              *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
              (struct CWindowData *)v15);
      v2 = v21;
      if ( v21 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x72Bu, 0LL);
    }
    else
    {
      v17 = v16 & 1;
      if ( !v17
        || (v18 = (CLivePreview *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 57), !*((_BYTE *)v18 + 184))
        || !v15
        || !CLivePreview::_IsInLivePreview(v18, (const struct CWindowData *)v15) )
      {
        v19 = *(CTopLevelWindow **)(v15 + 440);
        if ( v19 )
        {
          v20 = CTopLevelWindow::ShowWindow(v19, v17);
          v2 = v20;
          if ( v20 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x726u, 0LL);
        }
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x6CBu, 0LL);
  }
  return v2;
}
