/*
 * XREFs of ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x18006B6D8
 * Callers:
 *     ?_CreateAndAddAnimationComponentWithRect@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2HPEAPEAVCAnimationComponent@@@Z @ 0x18006B68C (-_CreateAndAddAnimationComponentWithRect@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2HPE.c)
 *     ?_Create3DComponent@CGroupingStoryboard@@IEAAJPEAVCWindowData@@@Z @ 0x1800C3050 (-_Create3DComponent@CGroupingStoryboard@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?_CreateAndAddCrossfadeAnimationComponent@CSSCrossFade@@MEAAJPEAVCWindowData@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800C3540 (-_CreateAndAddCrossfadeAnimationComponent@CSSCrossFade@@MEAAJPEAVCWindowData@@_NPEAPEAVCAnimatio.c)
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800C4C10 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 *     ?_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800C5700 (-_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStorybo.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x18006B854 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x18006C7C0 (-_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CStoryboard::_CreateAndAddAnimationComponentControlReuse(
        CStoryboard *this,
        struct CWindowData *a2,
        char a3,
        int a4,
        struct tagRECT *a5,
        struct tagRECT *a6,
        int a7,
        bool a8,
        struct CAnimationComponent **a9)
{
  bool v9; // zf
  __int64 v14; // r9
  int v15; // eax
  unsigned int v16; // ebx
  CBaseObject *v17; // rcx
  unsigned int v19; // [rsp+20h] [rbp-48h]
  bool v20; // [rsp+48h] [rbp-20h]
  CBaseObject *v21; // [rsp+78h] [rbp+10h] BYREF

  v9 = *((_QWORD *)a2 + 55) == 0LL;
  v21 = 0LL;
  if ( v9 )
  {
    v16 = -2147467259;
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
          *((_DWORD *)a2 + 186) & 0xFFF) & 4) != 0 )
    *((_DWORD *)a2 + 186) |= 0x4000000u;
  LOBYTE(v14) = a3;
  v20 = a8;
  v15 = CTransitionVisualController::CreateAnimationComponent(
          *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24),
          a2,
          *((unsigned int *)a2 + 186),
          v14,
          a4,
          this,
          a5,
          a6,
          a7,
          v20,
          &v21);
  v16 = v15;
  if ( v15 < 0 )
  {
    v19 = 5576;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v15, v19, 0LL);
    goto LABEL_10;
  }
  v15 = CStoryboard::_AddAnimationComponent(this, v21);
  v16 = v15;
  if ( v15 < 0 )
  {
    v19 = 5577;
    goto LABEL_9;
  }
  v17 = v21;
  *a9 = v21;
  if ( !v17 )
    return v16;
  CBaseObject::AddRef(v17);
LABEL_10:
  if ( v21 )
    CBaseObject::Release(v21);
  return v16;
}
