/*
 * XREFs of ?_CreateAndAddNullComponentWithWindowScreen@CStoryboard@@IEAAJPEAVCWindowData@@H_NPEAPEAVCAnimationComponent@@@Z @ 0x180088B6C
 * Callers:
 *     ?_CreateAndAddNullComponentWithWindow@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent@@@Z @ 0x180088B4C (-_CreateAndAddNullComponentWithWindow@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationCompo.c)
 *     ?_WindowEnumCallback@CTabSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800CDE60 (-_WindowEnumCallback@CTabSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x180008530 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x18007C0E0 (-_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?CreateNullAnimationComponentWithWindow@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAVCStoryboard@@_NPEAPEAVCAnimationComponent@@@Z @ 0x180088C38 (-CreateNullAnimationComponentWithWindow@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAV.c)
 */

__int64 __fastcall CStoryboard::_CreateAndAddNullComponentWithWindowScreen(
        CStoryboard *this,
        struct CWindowData *a2,
        int a3,
        bool a4,
        struct CAnimationComponent **a5)
{
  int v6; // eax
  CMILRefCountBase *v7; // rbx
  unsigned int v8; // edi
  int v9; // eax
  CMILRefCountBase *v11; // [rsp+30h] [rbp-18h] BYREF

  v11 = 0LL;
  v6 = CTransitionVisualController::CreateNullAnimationComponentWithWindow(
         *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 24),
         a2,
         a3,
         this,
         a4,
         &v11);
  v7 = v11;
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v6, 0x1638u, 0LL);
  }
  else
  {
    v9 = CStoryboard::_AddAnimationComponent(this, v11);
    v8 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v9, 0x1639u, 0LL);
    }
    else
    {
      *a5 = v7;
      if ( !v7 )
        return v8;
      CMILRefCountBase::AddRef(v7);
    }
  }
  if ( v7 )
    CBaseObject::Release(v7);
  return v8;
}
