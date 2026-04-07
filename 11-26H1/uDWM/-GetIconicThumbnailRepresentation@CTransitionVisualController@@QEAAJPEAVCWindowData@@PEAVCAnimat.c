/*
 * XREFs of ?GetIconicThumbnailRepresentation@CTransitionVisualController@@QEAAJPEAVCWindowData@@PEAVCAnimationComponent@@PEBUtagRECT@@U?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAPEAVCVisual@@@Z @ 0x1800CF648
 * Callers:
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x18006B854 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 * Callees:
 *     ?SetSize@CVisual@@QEAAXHH@Z @ 0x180012220 (-SetSize@CVisual@@QEAAXHH@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RenderRecursive@CContainerVisual@@UEAAXXZ @ 0x1800853F0 (-RenderRecursive@CContainerVisual@@UEAAXXZ.c)
 *     ?SetIconicVisual@CAnimationComponent@@QEAAXPEAVCIconicAnimatedVisual@@@Z @ 0x180098E84 (-SetIconicVisual@CAnimationComponent@@QEAAXPEAVCIconicAnimatedVisual@@@Z.c)
 *     ?SetIconicData@CIconicAnimatedVisual@@QEAAJPEAVCWindowData@@PEBUtagRECT@@PEAU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@@Z @ 0x1800B623C (-SetIconicData@CIconicAnimatedVisual@@QEAAJPEAVCWindowData@@PEBUtagRECT@@PEAU-$TMILFlagsEnum@W4F.c)
 *     ?RegisterIconicAnimatedVisual@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCIconicAnimatedVisual@@@Z @ 0x1800B7228 (-RegisterIconicAnimatedVisual@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCIconicAnimatedVisual@@@Z.c)
 *     ?Create@CIconicAnimatedVisual@@SAJPEAPEAV1@@Z @ 0x1800CE520 (-Create@CIconicAnimatedVisual@@SAJPEAPEAV1@@Z.c)
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
  CBaseObject *v10; // rbx
  unsigned int v11; // edi
  int v12; // eax
  LONG v13; // r8d
  LONG v14; // edx
  struct CIconicAnimatedVisual *v15; // rdx
  CBaseObject **v16; // rsi
  CBaseObject *v18; // [rsp+50h] [rbp+8h] BYREF

  v18 = 0LL;
  v9 = CIconicAnimatedVisual::Create(&v18);
  v10 = v18;
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      v9,
      0x938u,
      0LL);
LABEL_13:
    if ( v10 )
      CBaseObject::Release(v10);
    return v11;
  }
  v12 = CIconicAnimatedVisual::SetIconicData((__int64)v18, a2, (_OWORD *)a4, &a5);
  v11 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      v12,
      0x93Au,
      0LL);
    goto LABEL_13;
  }
  v13 = 0;
  if ( *(_DWORD *)(a4 + 12) - *(_DWORD *)(a4 + 4) >= 0 )
    v13 = *(_DWORD *)(a4 + 12) - *(_DWORD *)(a4 + 4);
  v14 = 0;
  if ( *(_DWORD *)(a4 + 8) - *(_DWORD *)a4 >= 0 )
    v14 = *(_DWORD *)(a4 + 8) - *(_DWORD *)a4;
  CVisual::SetSize(v10, v14, v13);
  CContainerVisual::RenderRecursive(v10);
  CAnimationComponent::SetIconicVisual(a3, v10);
  CImmersiveIconicBitmapRegistry::RegisterIconicAnimatedVisual(
    *((CImmersiveIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance + 29),
    v15);
  v16 = a6;
  if ( *a6 )
    CBaseObject::Release(*a6);
  *v16 = v10;
  if ( v10 )
  {
    CBaseObject::AddRef(v10);
    goto LABEL_13;
  }
  return v11;
}
