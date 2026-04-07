/*
 * XREFs of ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x18007BF70
 * Callers:
 *     ?_CreateAndAddAnimationComponentWithRect@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2HPEAPEAVCAnimationComponent@@@Z @ 0x18007BF24 (-_CreateAndAddAnimationComponentWithRect@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2HPE.c)
 *     ?_Create3DComponent@CGroupingStoryboard@@IEAAJPEAVCWindowData@@@Z @ 0x1800C8F8C (-_Create3DComponent@CGroupingStoryboard@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?_CreateAndAddCrossfadeAnimationComponent@CSSCrossFade@@MEAAJPEAVCWindowData@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800C9470 (-_CreateAndAddCrossfadeAnimationComponent@CSSCrossFade@@MEAAJPEAVCWindowData@@_NPEAPEAVCAnimatio.c)
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800CAB00 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 *     ?_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800CB5C0 (-_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStorybo.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x180008530 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x180025F08 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x18007C0E0 (-_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CStoryboard::_CreateAndAddAnimationComponentControlReuse(
        CStoryboard *this,
        struct CWindowData *a2,
        char a3,
        int a4,
        struct tagRECT *a5,
        struct tagRECT *a6,
        unsigned int a7,
        char a8,
        struct CAnimationComponent **a9)
{
  int v13; // eax
  unsigned int v14; // ebx
  CMILRefCountBase *v15; // rcx
  unsigned int v17; // [rsp+20h] [rbp-48h]
  CMILRefCountBase *v18; // [rsp+78h] [rbp+10h] BYREF

  v18 = 0LL;
  if ( !*((_QWORD *)a2 + 55) )
  {
    v14 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
      1LL,
      -2147467259,
      0x15C0u,
      0LL);
    goto LABEL_10;
  }
  if ( ((*(__int64 (__fastcall **)(CStoryboard *, _QWORD))(*(_QWORD *)this + 120LL))(
          this,
          *((_DWORD *)a2 + 170) & 0xFFF) & 4) != 0 )
    *((_DWORD *)a2 + 170) |= 0x4000000u;
  v13 = CTransitionVisualController::CreateAnimationComponent(
          *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 24),
          a2,
          *((_DWORD *)a2 + 170),
          a3,
          a4,
          this,
          a5,
          (CVisual *)a6,
          a7,
          a8,
          &v18);
  v14 = v13;
  if ( v13 < 0 )
  {
    v17 = 5576;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v13, v17, 0LL);
    goto LABEL_10;
  }
  v13 = CStoryboard::_AddAnimationComponent(this, v18);
  v14 = v13;
  if ( v13 < 0 )
  {
    v17 = 5577;
    goto LABEL_9;
  }
  v15 = v18;
  *a9 = v18;
  if ( !v15 )
    return v14;
  CMILRefCountBase::AddRef(v15);
LABEL_10:
  if ( v18 )
    CBaseObject::Release(v18);
  return v14;
}
