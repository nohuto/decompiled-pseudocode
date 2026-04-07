/*
 * XREFs of ?Initialize@CTransitionWindowSnapshot@@MEAAJPEBUtagRECT@@PEAVCVisual@@@Z @ 0x180002FA0
 * Callers:
 *     ?Create@CTransitionWindowSnapshot@@SAJPEBUtagRECT@@PEAVCVisual@@PEAPEAV1@@Z @ 0x180002E90 (-Create@CTransitionWindowSnapshot@@SAJPEBUtagRECT@@PEAVCVisual@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x180008530 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CContainerVisual@@MEAAJXZ @ 0x180010EF0 (-Initialize@CContainerVisual@@MEAAJXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001C060 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z @ 0x180051944 (-_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z.c)
 *     ?GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z @ 0x180052E4C (-GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTransitionWindowSnapshot::Initialize(
        CTransitionWindowSnapshot *this,
        const struct tagRECT *a2,
        struct CVisual *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  struct tagRECT v8; // xmm0
  CDesktopManager *v9; // rcx
  int v10; // eax
  int v11; // eax

  v6 = CContainerVisual::Initialize(this);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x85u, 0LL);
  }
  else
  {
    *((_QWORD *)this + 30) = 0LL;
    v8 = *a2;
    v9 = CDesktopManager::s_pDesktopManagerInstance;
    *(struct tagRECT *)((char *)this + 296) = *a2;
    *(struct tagRECT *)((char *)this + 280) = v8;
    *((float *)this + 78) = CDesktopManager::GetScalingFactorForCVI(v9, a2);
    *((_QWORD *)this + 34) = a3;
    if ( a3 )
      CMILRefCountBase::AddRef(a3);
    v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 34) + 48LL))(*((_QWORD *)this + 34));
    v7 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x8Du, 0LL);
    }
    else
    {
      v11 = CTransitionWindowSnapshot::_EnsureCVIResource(this, a2);
      v7 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x90u, 0LL);
      else
        CVisual::SetDirtyFlags(this, 0x1000u);
    }
  }
  return v7;
}
