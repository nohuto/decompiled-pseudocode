/*
 * XREFs of ?GetIconicThumbnailRepresentation@CTransitionVisualController@@QEAAJPEAVCWindowData@@PEAVCAnimationComponent@@PEBUtagRECT@@U?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAPEAVCVisual@@@Z @ 0x1800D283C
 * Callers:
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x180025F08 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x180008530 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetSize@CVisual@@QEAAXHH@Z @ 0x180094954 (-SetSize@CVisual@@QEAAXHH@Z.c)
 *     ?SetIconicVisual@CAnimationComponent@@QEAAXPEAVCIconicAnimatedVisual@@@Z @ 0x1800A6528 (-SetIconicVisual@CAnimationComponent@@QEAAXPEAVCIconicAnimatedVisual@@@Z.c)
 *     ?SetIconicData@CIconicAnimatedVisual@@QEAAJPEAVCWindowData@@PEBUtagRECT@@PEAU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@@Z @ 0x1800B7280 (-SetIconicData@CIconicAnimatedVisual@@QEAAJPEAVCWindowData@@PEBUtagRECT@@PEAU-$TMILFlagsEnum@W4F.c)
 *     ?RegisterIconicAnimatedVisual@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCIconicAnimatedVisual@@@Z @ 0x1800B826C (-RegisterIconicAnimatedVisual@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCIconicAnimatedVisual@@@Z.c)
 *     ?Create@CIconicAnimatedVisual@@SAJPEAPEAV1@@Z @ 0x1800D1D9C (-Create@CIconicAnimatedVisual@@SAJPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTransitionVisualController::GetIconicThumbnailRepresentation(
        __int64 a1,
        __int64 a2,
        CAnimationComponent *a3,
        __int64 a4,
        int a5,
        CBaseObject **a6)
{
  int v9; // eax
  CMILRefCountBase *v10; // rbx
  unsigned int v11; // edi
  int v12; // eax
  int v13; // r8d
  int v14; // edx
  int v15; // eax
  struct CIconicAnimatedVisual *v16; // rdx
  CBaseObject **v17; // rsi
  CMILRefCountBase *v19; // [rsp+50h] [rbp+8h] BYREF

  v19 = 0LL;
  v9 = CIconicAnimatedVisual::Create(&v19);
  v10 = v19;
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      v9,
      0x966u,
      0LL);
  }
  else
  {
    v12 = CIconicAnimatedVisual::SetIconicData((__int64)v19, a2, (_OWORD *)a4, &a5);
    v11 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2LL,
        v12,
        0x968u,
        0LL);
    }
    else
    {
      v13 = 0;
      if ( *(_DWORD *)(a4 + 12) - *(_DWORD *)(a4 + 4) >= 0 )
        v13 = *(_DWORD *)(a4 + 12) - *(_DWORD *)(a4 + 4);
      v14 = 0;
      if ( *(_DWORD *)(a4 + 8) - *(_DWORD *)a4 >= 0 )
        v14 = *(_DWORD *)(a4 + 8) - *(_DWORD *)a4;
      CVisual::SetSize(v10, v14, v13);
      v15 = (*(__int64 (__fastcall **)(CMILRefCountBase *))(*(_QWORD *)v10 + 48LL))(v10);
      v11 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
          2LL,
          v15,
          0x96Bu,
          0LL);
      }
      else
      {
        CAnimationComponent::SetIconicVisual(a3, v10);
        CImmersiveIconicBitmapRegistry::RegisterIconicAnimatedVisual(
          *((CImmersiveIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance + 29),
          v16);
        v17 = a6;
        if ( *a6 )
          CBaseObject::Release(*a6);
        *v17 = v10;
        CMILRefCountBase::AddRef(v10);
      }
    }
  }
  if ( v10 )
    CBaseObject::Release(v10);
  return v11;
}
