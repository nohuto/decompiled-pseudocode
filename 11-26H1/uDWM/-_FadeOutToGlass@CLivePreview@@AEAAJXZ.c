/*
 * XREFs of ?_FadeOutToGlass@CLivePreview@@AEAAJXZ @ 0x18002DD10
 * Callers:
 *     ?Activate@CLivePreview@@QEAAJXZ @ 0x18002C448 (-Activate@CLivePreview@@QEAAJXZ.c)
 * Callees:
 *     ?SetLivePreviewAlpha@CTopLevelWindow@@QEAAJN@Z @ 0x180005420 (-SetLivePreviewAlpha@CTopLevelWindow@@QEAAJN@Z.c)
 *     ?_HideExistingVisuals@CLivePreview@@AEAAJ_N@Z @ 0x18000571C (-_HideExistingVisuals@CLivePreview@@AEAAJ_N@Z.c)
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x180005A2C (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 *     ?RestartTimeline@CLivePreviewTimeline@@QEAAJW4Enum@LivePreviewAnimation@@N@Z @ 0x180005AF0 (-RestartTimeline@CLivePreviewTimeline@@QEAAJW4Enum@LivePreviewAnimation@@N@Z.c)
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x180005C0C (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ @ 0x18001727C (-InternalRelease@-$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x18001B974 (-InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x18001BD7C (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001BDA0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_NPEAPEAV1@@Z @ 0x180023D1C (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_NPEAPEAV1@@Z.c)
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x180025A2C (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InsertChildBefore@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x180025A50 (-InsertChildBefore@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x18003B008 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?GetAnimationDuration@CLivePreview@@SAMW4Enum@LivePreviewAnimationDuration@@@Z @ 0x180044E80 (-GetAnimationDuration@CLivePreview@@SAMW4Enum@LivePreviewAnimationDuration@@@Z.c)
 *     ?OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180060898 (-OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ??$out_param@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AU?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@details@0@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@0@@Z @ 0x18007C400 (--$out_param@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-Reg.c)
 *     ??1?$out_param_t@V?$ComPtr@VCTopLevelWindow@@@WRL@Microsoft@@@details@wil@@QEAA@XZ @ 0x18007CD90 (--1-$out_param_t@V-$ComPtr@VCTopLevelWindow@@@WRL@Microsoft@@@details@wil@@QEAA@XZ.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z @ 0x18008D348 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z.c)
 *     ?GetTopBackgroundWindow@CImmersiveState@@QEAAPEAVCWindowData@@XZ @ 0x18008DDA8 (-GetTopBackgroundWindow@CImmersiveState@@QEAAPEAVCWindowData@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CLivePreview::_FadeOutToGlass(CLivePreview *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  char v4; // r12
  CContainerVisual *RootVisualForDesktop; // rax
  CContainerVisual *v6; // rsi
  __int64 v7; // r8
  CBaseObject ***v8; // r8
  int inserted; // eax
  CImmersiveState *v10; // rcx
  struct CVisual *v11; // r8
  int v12; // eax
  __int64 v13; // r14
  __int64 v14; // r13
  __int64 v15; // rax
  int v16; // eax
  int v17; // r9d
  __int64 v18; // rax
  __int64 v19; // rcx
  int v20; // eax
  CBaseObject *v21; // rcx
  CTopLevelWindow *v22; // rcx
  struct _LIST_ENTRY *WindowListForDesktop; // r13
  struct _LIST_ENTRY *i; // r14
  CTopLevelWindow *Blink; // rcx
  unsigned int Flink; // r15d
  __int64 v27; // rax
  int v28; // eax
  char v29; // r15
  unsigned int v30; // eax
  unsigned int v31; // edx
  int v32; // eax
  float AnimationDuration; // xmm0_4
  int v34; // r9d
  unsigned int v36; // [rsp+20h] [rbp-40h]
  __int128 v37; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v38[24]; // [rsp+48h] [rbp-18h] BYREF
  CTopLevelWindow *v39; // [rsp+98h] [rbp+38h] BYREF

  v2 = CLivePreview::_HideExistingVisuals(this, 1u);
  v3 = v2;
  v4 = 0;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x4D4u, 0LL);
    return v3;
  }
  if ( !*(_DWORD *)(*((_QWORD *)this + 43) + 168LL) )
  {
    RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                             *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                             *((_QWORD *)this + 24));
    v6 = RootVisualForDesktop;
    v7 = *((_QWORD *)this + 49);
    if ( v7 )
      v8 = *(CBaseObject ****)(v7 + 440);
    else
      v8 = 0LL;
    inserted = CContainerVisual::InsertChildBefore(RootVisualForDesktop, (CBaseObject ***)this, v8);
    v3 = inserted;
    if ( inserted < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x4D9u, 0LL);
      return v3;
    }
    if ( CImmersiveState::GetTopBackgroundWindow(*((CImmersiveState **)this + 50)) )
      v11 = (struct CVisual *)*((_QWORD *)CImmersiveState::GetTopBackgroundWindow(v10) + 55);
    v12 = CContainerVisual::InsertChildAfter(v6, *((struct CVisual **)this + 42), v11);
    v3 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x4DFu, 0LL);
      return v3;
    }
    LODWORD(v13) = *((_DWORD *)this + 58);
    while ( 1 )
    {
      v13 = (unsigned int)(v13 - 1);
      if ( (int)v13 < 0 )
        break;
      v14 = *(_QWORD *)(*((_QWORD *)this + 26) + 40 * v13);
      if ( (*(_BYTE *)(v14 + 739) & 1) == 0 && (*(_BYTE *)(v14 + 742) & 1) == 0 )
      {
        v39 = 0LL;
        v15 = wil::out_param<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>>(
                &v37,
                &v39);
        v3 = CTopLevelWindow::CloneVisualTreeForLivePreview(
               *(CTopLevelWindow **)(v14 + 440),
               0,
               (struct CTopLevelWindow **)(v15 + 8));
        wil::details::out_param_t<Microsoft::WRL::ComPtr<CTopLevelWindow>>::~out_param_t<Microsoft::WRL::ComPtr<CTopLevelWindow>>(&v37);
        if ( (v3 & 0x80000000) != 0 )
        {
          v36 = 1257;
          v17 = v3;
          goto LABEL_28;
        }
        if ( *(_DWORD *)(v14 + 128) == 1 )
        {
          v16 = CContainerVisual::AddChild(*((CContainerVisual **)this + 43), v39);
          v3 = v16;
          if ( v16 < 0 )
          {
            v36 = 1261;
            goto LABEL_18;
          }
        }
        else
        {
          v16 = CContainerVisual::AddChild(*((CContainerVisual **)this + 44), v39);
          v3 = v16;
          if ( v16 < 0 )
          {
            v36 = 1265;
LABEL_18:
            v17 = v16;
LABEL_28:
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, v36, 0LL);
LABEL_29:
            Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(&v39);
            return v3;
          }
        }
        v18 = *((_QWORD *)this + 26);
        v19 = *(_QWORD *)(v18 + 40 * v13 + 8);
        if ( v19 )
        {
          v20 = CContainerVisual::RemoveChild(
                  *(CContainerVisual **)(v19 + 24),
                  *(struct CVisual **)(v18 + 40 * v13 + 8));
          v3 = v20;
          if ( v20 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v20, 0x4F7u, 0LL);
          v21 = *(CBaseObject **)(*((_QWORD *)this + 26) + 40 * v13 + 8);
          if ( v21 )
          {
            CBaseObject::Release(v21);
            *(_QWORD *)(*((_QWORD *)this + 26) + 40 * v13 + 8) = 0LL;
          }
        }
        v22 = v39;
        v39 = 0LL;
        *(_QWORD *)(*((_QWORD *)this + 26) + 40 * v13 + 8) = v22;
        Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(&v39);
      }
    }
    WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                             *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                             *((_QWORD *)this + 24));
    for ( i = WindowListForDesktop->Blink; i != WindowListForDesktop; i = i->Blink )
    {
      Blink = (CTopLevelWindow *)i[27].Blink;
      if ( Blink && LODWORD(i[8].Flink) == 12 )
      {
        Flink = CAccent::s_clrCurrentAccentBackground;
        if ( LODWORD(i[11].Flink) != CAccent::s_clrCurrentAccentBackground )
        {
          Flink = (unsigned int)i[11].Flink;
          LODWORD(i[11].Flink) = CAccent::s_clrCurrentAccentBackground;
          CTopLevelWindow::OnAccentPolicyUpdated(Blink);
          v4 = 1;
        }
        v39 = 0LL;
        v27 = wil::out_param<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>>(
                v38,
                &v39);
        v3 = CTopLevelWindow::CloneVisualTreeForLivePreview(
               (CTopLevelWindow *)i[27].Blink,
               0,
               (struct CTopLevelWindow **)(v27 + 8));
        wil::details::out_param_t<Microsoft::WRL::ComPtr<CTopLevelWindow>>::~out_param_t<Microsoft::WRL::ComPtr<CTopLevelWindow>>(v38);
        if ( (v3 & 0x80000000) != 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x514u, 0LL);
          goto LABEL_29;
        }
        if ( v4 )
        {
          LODWORD(i[11].Flink) = Flink;
          CTopLevelWindow::OnAccentPolicyUpdated((CTopLevelWindow *)i[27].Blink);
        }
        v28 = CContainerVisual::AddChild(*((CContainerVisual **)this + 42), v39);
        v3 = v28;
        v4 = 0;
        if ( v28 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v28, 0x51Du, 0LL);
          goto LABEL_29;
        }
        if ( (BYTE4(i[46].Flink) & 1) != 0 )
        {
          v29 = 0;
          CTopLevelWindow::SetLivePreviewAlpha(v39, 0.0);
        }
        else
        {
          v29 = 1;
        }
        *(_QWORD *)&v37 = v39;
        BYTE8(v37) = v29;
        *(_DWORD *)((char *)&v37 + 9) = 0;
        *(_WORD *)((char *)&v37 + 13) = 0;
        HIBYTE(v37) = 0;
        v30 = *((_DWORD *)this + 80);
        v31 = v30 + 1;
        if ( v30 + 1 < v30 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB7u, 0LL);
        }
        else if ( v31 > *((_DWORD *)this + 79) )
        {
          v32 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 296, 16, 1, &v37);
          if ( v32 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v32, 0xC2u, 0LL);
        }
        else
        {
          *(_OWORD *)(*((_QWORD *)this + 37) + 16LL * v30) = v37;
          *((_DWORD *)this + 80) = v31;
        }
        Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(&v39);
      }
    }
    CContainerVisual::AddChild(*((CContainerVisual **)this + 42), *((struct CVisual **)this + 44));
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 45) + 48LL))(*((_QWORD *)this + 45));
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 44) + 48LL))(*((_QWORD *)this + 44));
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 43) + 48LL))(*((_QWORD *)this + 43));
  }
  *((_DWORD *)this + 108) = 3;
  AnimationDuration = CLivePreview::GetAnimationDuration(0LL);
  CLivePreviewTimeline::RestartTimeline(*((_QWORD *)this + 41), v34, AnimationDuration);
  CDesktopManager::UnregisterForGlobalTimeChangeNotification(this);
  CDesktopManager::RegisterForGlobalTimeChangeNotification(this);
  return v3;
}
