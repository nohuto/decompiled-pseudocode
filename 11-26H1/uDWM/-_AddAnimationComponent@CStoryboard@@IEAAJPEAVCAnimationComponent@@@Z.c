/*
 * XREFs of ?_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x18006C7C0
 * Callers:
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x18006B6D8 (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?_CreateAndAddNullComponentWithWindowScreen@CStoryboard@@IEAAJPEAVCWindowData@@H_NPEAPEAVCAnimationComponent@@@Z @ 0x18006D5D0 (-_CreateAndAddNullComponentWithWindowScreen@CStoryboard@@IEAAJPEAVCWindowData@@H_NPEAPEAVCAnimat.c)
 *     ?OnBeginTransitionRequest@CTabletModeTransition@@UEAAJXZ @ 0x1800C1F30 (-OnBeginTransitionRequest@CTabletModeTransition@@UEAAJXZ.c)
 *     ?_CreateAndAddBitmapAnimationComponent@CStoryboard@@IEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAPEAVCAnimationComponent@@@Z @ 0x1800C340C (-_CreateAndAddBitmapAnimationComponent@CStoryboard@@IEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPE.c)
 *     ?_CreateAndAddDesktopAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@HAEBUtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800C361C (-_CreateAndAddDesktopAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@HAEBUtagRECT@@_NPEAPE.c)
 *     ?_CreateAndAddGutterAnimationComponentsForRect@CStoryboard@@IEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEBUtagRECT@@2PEAPEAVCAnimationComponent@@3@Z @ 0x1800C3730 (-_CreateAndAddGutterAnimationComponentsForRect@CStoryboard@@IEAAJPEAUHWND__@@W4DWMTRANSITION_TAR.c)
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800C4C10 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 *     ?_WindowEnumCallback@CVirtualDesktopSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800C80E0 (-_WindowEnumCallback@CVirtualDesktopSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001BDA0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z @ 0x18002AEF4 (-AddAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?_RemoveAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x1800C44A4 (-_RemoveAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 */

__int64 __fastcall CStoryboard::_AddAnimationComponent(CStoryboard *this, struct CAnimationComponent *a2)
{
  unsigned int v3; // eax
  unsigned int v4; // r8d
  int v5; // edi
  unsigned int v6; // eax
  unsigned int v7; // eax
  struct CAnimationComponent *v9; // [rsp+58h] [rbp+10h] BYREF

  v9 = a2;
  CBaseObject::AddRef(a2);
  v3 = *((_DWORD *)this + 30);
  v4 = v3 + 1;
  if ( v3 + 1 < v3 )
  {
    v5 = -2147024362;
    v7 = 183;
LABEL_7:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, v7, 0LL);
    v6 = 5709;
    goto LABEL_8;
  }
  if ( v4 <= *((_DWORD *)this + 29) )
  {
    *(_QWORD *)(*((_QWORD *)this + 12) + 8LL * v3) = v9;
    *((_DWORD *)this + 30) = v4;
    goto LABEL_4;
  }
  v5 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 96, 8, 1, &v9);
  if ( v5 < 0 )
  {
    v7 = 194;
    goto LABEL_7;
  }
LABEL_4:
  v5 = CTransitionVisualController::AddAnimationComponent(
         *((CContainerVisual ***)CDesktopManager::s_pDesktopManagerInstance + 24),
         v9);
  if ( v5 < 0 )
  {
    v6 = 5710;
LABEL_8:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v5, v6, 0LL);
    CStoryboard::_RemoveAnimationComponent(this, v9);
  }
  return (unsigned int)v5;
}
