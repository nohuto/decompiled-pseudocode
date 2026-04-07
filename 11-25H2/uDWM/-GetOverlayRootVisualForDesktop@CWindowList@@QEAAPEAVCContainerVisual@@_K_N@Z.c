/*
 * XREFs of ?GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K_N@Z @ 0x180015914
 * Callers:
 *     ?MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ @ 0x18001579C (-MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ.c)
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x1800285D8 (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x18002D1A0 (-RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x1800304B4 (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?_AddProjectionBorderForDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z @ 0x18008EBFC (-_AddProjectionBorderForDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAUCAPTURE_DISPL.c)
 *     ?UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@@@Z @ 0x1800C2880 (-UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x1800051C4 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x180007D54 (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x180008530 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$?9UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL@Microsoft@@YA_NAEBV?$ComPtr@UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@01@$$T@Z @ 0x18000F840 (--$-9UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL@Microsoft@@YA_NAEBV-$ComP.c)
 *     ?RemoveAllChildren@CContainerVisual@@QEAAXXZ @ 0x180014114 (-RemoveAllChildren@CContainerVisual@@QEAAXXZ.c)
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x18001C7A4 (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Create@CContainerVisual@@SAJPEAPEAV1@@Z @ 0x18001F784 (-Create@CContainerVisual@@SAJPEAPEAV1@@Z.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z @ 0x180028C78 (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
struct CContainerVisual *__fastcall CWindowList::GetOverlayRootVisualForDesktop(
        CWindowList *this,
        unsigned __int64 a2,
        char a3)
{
  _QWORD *v5; // rax
  _QWORD *v6; // rdi
  __int64 v7; // rbx
  CMILRefCountBase *v8; // rcx
  int v10; // eax
  unsigned int v11; // r9d
  CContainerVisual *RenderTargetRootVisualForDesktop; // rax
  CBaseObject *v13; // rcx
  _QWORD Buffer[2]; // [rsp+38h] [rbp-9h] BYREF
  __int128 v15; // [rsp+48h] [rbp+7h]
  __int128 v16; // [rsp+58h] [rbp+17h]
  __int128 v17; // [rsp+68h] [rbp+27h]
  __int64 v18; // [rsp+78h] [rbp+37h]
  char v19; // [rsp+80h] [rbp+3Fh]
  __int128 v20; // [rsp+88h] [rbp+47h]
  CMILRefCountBase *v21; // [rsp+A8h] [rbp+67h] BYREF

  v21 = 0LL;
  Buffer[1] = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = -1LL;
  v19 = 0;
  v20 = 0LL;
  Buffer[0] = a2;
  v5 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), Buffer);
  v6 = v5;
  if ( a3 )
  {
    if ( v5 )
    {
      if ( !v5[5] )
      {
        Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v21);
        v10 = CContainerVisual::Create(&v21);
        if ( v10 >= 0 )
        {
          v10 = CContainerVisual::AddChild((CContainerVisual *)v6[1], v21);
          if ( v10 >= 0 )
          {
            v6[5] = v21;
            if ( v21 )
              CMILRefCountBase::AddRef(v21);
            goto LABEL_3;
          }
          v11 = 1902;
        }
        else
        {
          v11 = 1901;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, v11, 0LL);
        if ( Microsoft::WRL::operator!=<Windows::UI::Composition::ICompositionProjectedShadowReceiver>(&v21) )
        {
          CContainerVisual::RemoveAllChildren(v21);
          RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop(
                                               *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                                               a2);
          CContainerVisual::RemoveChild(RenderTargetRootVisualForDesktop, v21);
        }
        v13 = (CBaseObject *)v6[5];
        if ( v13 )
        {
          CBaseObject::Release(v13);
          v6[5] = 0LL;
        }
      }
LABEL_3:
      v7 = v6[5];
      goto LABEL_4;
    }
  }
  else if ( v5 )
  {
    goto LABEL_3;
  }
  v7 = 0LL;
LABEL_4:
  v8 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    CBaseObject::Release(v8);
  }
  return (struct CContainerVisual *)v7;
}
