/*
 * XREFs of ?_CreateGuttersForApp@CGroupingStoryboard@@IEAAJPEAVCWindowData@@PEBUtagRECT@@1W4DWMTRANSITION_TARGET@@PEAPEAVCAnimationComponent@@3@Z @ 0x1800C97EC
 * Callers:
 *     ?_Create3DComponent@CGroupingStoryboard@@IEAAJPEAVCWindowData@@@Z @ 0x1800C8F8C (-_Create3DComponent@CGroupingStoryboard@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?_HandleThumbnailTag@CAppArrangementImmediate@@AEAAJPEAVCWindowData@@_N@Z @ 0x1800C9D4C (-_HandleThumbnailTag@CAppArrangementImmediate@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800CAB00 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 *     ?_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800CB5C0 (-_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStorybo.c)
 *     ?_WindowEnumCallback@CAppSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800CC220 (-_WindowEnumCallback@CAppSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x180008530 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x1800429B8 (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 *     ?_CreateAndAddGutterAnimationComponentsForRect@CStoryboard@@IEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEBUtagRECT@@2PEAPEAVCAnimationComponent@@3@Z @ 0x1800C964C (-_CreateAndAddGutterAnimationComponentsForRect@CStoryboard@@IEAAJPEAUHWND__@@W4DWMTRANSITION_TAR.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGroupingStoryboard::_CreateGuttersForApp(
        __int64 a1,
        __int64 a2,
        const struct tagRECT *a3,
        void *a4,
        unsigned int a5,
        CMILRefCountBase *a6,
        CMILRefCountBase *a7)
{
  CMILRefCountBase *v7; // r15
  CMILRefCountBase *v10; // r12
  int v13; // edi
  unsigned int v14; // eax
  int v15; // eax
  CMILRefCountBase *v16; // rdi
  unsigned int v17; // esi
  CMILRefCountBase *v18; // rbx
  int v19; // edx
  struct tagRECT v20; // xmm0
  struct tagRECT v22; // [rsp+40h] [rbp-28h] BYREF

  v7 = a6;
  a6 = 0LL;
  v10 = a7;
  a7 = 0LL;
  *(_QWORD *)v7 = 0LL;
  *(_QWORD *)v10 = 0LL;
  v13 = *(_DWORD *)(a2 + 680);
  v14 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 112LL))(a1, a5);
  v15 = CStoryboard::_CreateAndAddGutterAnimationComponentsForRect(
          a1,
          *(_QWORD *)(a2 + 40),
          a5,
          v14,
          (__int64)a3,
          a4,
          (CMILRefCountBase *)((unsigned __int64)&a6 & -(__int64)((v13 & 0x10000) != 0)),
          (CMILRefCountBase *)((unsigned __int64)&a7 & -(__int64)((v13 & 0x8000) != 0)));
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
      CMILRefCountBase::AddRef(v16);
    }
    if ( v18 )
    {
      *(struct tagRECT *)((char *)v18 + 104) = v20;
      *((_DWORD *)v18 + 17) = v19;
      *(_QWORD *)v10 = v18;
      CMILRefCountBase::AddRef(v18);
    }
  }
  if ( v16 )
    CBaseObject::Release(v16);
  if ( v18 )
    CBaseObject::Release(v18);
  return v17;
}
