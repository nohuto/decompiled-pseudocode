/*
 * XREFs of ?_CreateGuttersForApp@CGroupingStoryboard@@IEAAJPEAVCWindowData@@PEBUtagRECT@@1W4DWMTRANSITION_TARGET@@PEAPEAVCAnimationComponent@@3@Z @ 0x1800C38DC
 * Callers:
 *     ?_Create3DComponent@CGroupingStoryboard@@IEAAJPEAVCWindowData@@@Z @ 0x1800C3050 (-_Create3DComponent@CGroupingStoryboard@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?_HandleThumbnailTag@CAppArrangementImmediate@@AEAAJPEAVCWindowData@@_N@Z @ 0x1800C3E4C (-_HandleThumbnailTag@CAppArrangementImmediate@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800C4C10 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 *     ?_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800C5700 (-_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStorybo.c)
 *     ?_WindowEnumCallback@CAppSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800C6370 (-_WindowEnumCallback@CAppSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x18002D4C4 (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 *     ?_CreateAndAddGutterAnimationComponentsForRect@CStoryboard@@IEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEBUtagRECT@@2PEAPEAVCAnimationComponent@@3@Z @ 0x1800C3730 (-_CreateAndAddGutterAnimationComponentsForRect@CStoryboard@@IEAAJPEAUHWND__@@W4DWMTRANSITION_TAR.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGroupingStoryboard::_CreateGuttersForApp(
        __int64 a1,
        __int64 a2,
        const struct tagRECT *a3,
        __int64 a4,
        unsigned int a5,
        CBaseObject *a6,
        CBaseObject *a7)
{
  CBaseObject *v7; // r15
  CBaseObject *v9; // r12
  int v13; // ebx
  unsigned int v14; // eax
  int v15; // eax
  CBaseObject *v16; // rdi
  unsigned int v17; // esi
  CBaseObject *v18; // rbx
  int v19; // edx
  struct tagRECT v20; // xmm0
  struct tagRECT v22; // [rsp+40h] [rbp-28h] BYREF

  v7 = a6;
  v9 = a7;
  a6 = 0LL;
  a7 = 0LL;
  *(_QWORD *)v7 = 0LL;
  *(_QWORD *)v9 = 0LL;
  v13 = *(_DWORD *)(a2 + 744);
  v14 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 112LL))(a1, a5);
  v15 = CStoryboard::_CreateAndAddGutterAnimationComponentsForRect(
          a1,
          *(_QWORD *)(a2 + 40),
          a5,
          v14,
          (__int64)a3,
          a4,
          (CBaseObject *)((unsigned __int64)&a6 & -(__int64)((v13 & 0x10000) != 0)),
          (CBaseObject *)((unsigned __int64)&a7 & -(__int64)((v13 & 0x8000) != 0)));
  v16 = a6;
  v17 = v15;
  v18 = a7;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v15, 0x81Cu, 0LL);
  }
  else
  {
    v22 = 0LL;
    CTransitionVisualController::GetMonitorRectFromRectImpl(a3, &v22);
    v19 = 2;
    v20 = v22;
    if ( v16 )
    {
      *(struct tagRECT *)((char *)v16 + 104) = v22;
      *((_DWORD *)v16 + 17) = 2;
      *(_QWORD *)v7 = v16;
      CBaseObject::AddRef(v16);
    }
    if ( v18 )
    {
      *(struct tagRECT *)((char *)v18 + 104) = v20;
      *((_DWORD *)v18 + 17) = v19;
      *(_QWORD *)v9 = v18;
      CBaseObject::AddRef(v18);
    }
  }
  if ( v16 )
    CBaseObject::Release(v16);
  if ( v18 )
    CBaseObject::Release(v18);
  return v17;
}
