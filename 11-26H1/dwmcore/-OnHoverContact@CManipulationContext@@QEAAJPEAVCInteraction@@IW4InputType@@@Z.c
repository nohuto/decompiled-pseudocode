/*
 * XREFs of ?OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IW4InputType@@@Z @ 0x1800A7C6C
 * Callers:
 *     ?ProcessFrameInputPreTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x180113960 (-ProcessFrameInputPreTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18000D87C (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x180026C60 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x180093B60 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?AcquireShared@CTreeLock@@QEAAXXZ @ 0x180094404 (-AcquireShared@CTreeLock@@QEAAXXZ.c)
 *     ?ReleaseShared@CTreeLock@@QEAAXXZ @ 0x180094C7C (-ReleaseShared@CTreeLock@@QEAAXXZ.c)
 *     ?FindKey@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBAHAEBI@Z @ 0x1800A7ABC (-FindKey@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@.c)
 *     ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCDesktopTree@@@Z @ 0x1800A8060 (-OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCDesktopTree@@@Z.c)
 *     ?GetVisualNoRef@CInteraction@@QEBAPEAVCVisual@@XZ @ 0x1800A97F8 (-GetVisualNoRef@CInteraction@@QEBAPEAVCVisual@@XZ.c)
 *     ??4?$ComPtr@VCBaseExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCBaseExpression@@@Z @ 0x1800E53B0 (--4-$ComPtr@VCBaseExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCBaseExpression@@@Z.c)
 *     ?SetInteractionChain@GestureTargeting@InputTraceLogging@@SAXKPEBVCInteraction@@@Z @ 0x180154080 (-SetInteractionChain@GestureTargeting@InputTraceLogging@@SAXKPEBVCInteraction@@@Z.c)
 *     ?Add@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAHAEBIAEBV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@Z @ 0x180154510 (-Add@-$CMap@IV-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@VCInteractio.c)
 *     ?LockTree@CManipulationManager@@SAXPEAVCVisualTree@@_N@Z @ 0x1801DD144 (-LockTree@CManipulationManager@@SAXPEAVCVisualTree@@_N@Z.c)
 *     ?load@?$_Atomic_storage@U_LUID@@$07@std@@QEBA?AU_LUID@@W4memory_order@2@@Z @ 0x18021F63C (-load@-$_Atomic_storage@U_LUID@@$07@std@@QEBA-AU_LUID@@W4memory_order@2@@Z.c)
 *     ?SetAtIndex@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAHHAEBIAEBV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@Z @ 0x180227848 (-SetAtIndex@-$CMap@IV-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@VCInt.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CManipulationContext::OnHoverContact(__int64 a1, CInteraction *a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // rax
  unsigned int v6; // edi
  struct CInteraction *v8; // rbx
  unsigned int v10; // r14d
  int Key; // eax
  __int64 v12; // rcx
  struct CDesktopTree *v13; // rcx
  __int64 v15; // r14
  struct CInteraction *v16; // rdi
  __int64 (__fastcall *v17)(__int64, _QWORD, struct CDesktopTree **); // r12
  int v18; // eax
  struct CVisual *VisualNoRef; // rax
  CVisual *v20; // rsi
  struct CInteraction *InteractionInternal; // rax
  __int64 (__fastcall *v22)(__int64, _QWORD, struct CDesktopTree **); // r9
  __int64 v23; // r10
  int v24; // eax
  struct CVisual *v25; // rax
  struct CInteraction *v26; // [rsp+30h] [rbp-20h] BYREF
  struct CInteraction *v27; // [rsp+38h] [rbp-18h] BYREF
  _QWORD v28[2]; // [rsp+40h] [rbp-10h] BYREF
  struct CDesktopTree *v29; // [rsp+98h] [rbp+48h] BYREF
  unsigned int v30; // [rsp+A0h] [rbp+50h] BYREF

  v30 = a3;
  v29 = 0LL;
  v5 = *((_QWORD *)a2 + 9);
  v6 = a3;
  v8 = 0LL;
  v26 = 0LL;
  v10 = 0;
  if ( (*(unsigned int (__fastcall **)(_QWORD *, _QWORD, _QWORD))(v5 + 80))((_QWORD *)a2 + 9, a4, 0LL) )
  {
    Microsoft::WRL::ComPtr<CBaseExpression>::operator=(&v26, a2);
    v8 = v26;
  }
  else
  {
    v15 = *(_QWORD *)(a1 + 40);
    v16 = 0LL;
    v27 = 0LL;
    v17 = *(__int64 (__fastcall **)(__int64, _QWORD, struct CDesktopTree **))(*(_QWORD *)v15 + 64LL);
    if ( v29 )
      CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v29);
    std::_Atomic_storage<_LUID,8>::load((char *)a2 + 1728, v28);
    v18 = v17(v15, v28[0], &v29);
    v10 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x91u, 0LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v27);
      goto LABEL_5;
    }
    CTreeLock::AcquireShared((RTL_SRWLOCK *)(*((_QWORD *)v29 + 3) + 5696LL));
    VisualNoRef = CInteraction::GetVisualNoRef(a2);
    v20 = VisualNoRef;
    if ( VisualNoRef )
      v20 = (CVisual *)*((_QWORD *)VisualNoRef + 11);
    while ( v20 )
    {
      InteractionInternal = CVisual::GetInteractionInternal(v20);
      Microsoft::WRL::ComPtr<CBaseExpression>::operator=(&v27, InteractionInternal);
      v16 = v27;
      if ( v27
        && (*(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD))(*((_QWORD *)v27 + 9) + 80LL))(
             (__int64)v27 + 72,
             a4,
             0LL) )
      {
        v27 = v16;
        Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v27);
        v8 = v16;
        v27 = 0LL;
        v26 = v16;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v27);
        break;
      }
      v20 = (CVisual *)*((_QWORD *)v20 + 11);
    }
    if ( v16 )
      (*(void (__fastcall **)(struct CInteraction *))(*(_QWORD *)v16 + 16LL))(v16);
    v6 = v30;
  }
  Key = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
          a1 + 56,
          &v30);
  if ( Key == -1 )
  {
    if ( !(unsigned int)CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::Add(
                          v12,
                          &v30,
                          &v26) )
    {
      v10 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0xB9u, 0LL);
      goto LABEL_5;
    }
  }
  else
  {
    if ( *(struct CInteraction **)(*(_QWORD *)(a1 + 64) + 8LL * Key) == v8 )
      goto LABEL_5;
    CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::SetAtIndex(
      v12,
      Key,
      &v30,
      &v26);
  }
  InputTraceLogging::GestureTargeting::SetInteractionChain(v6, v8);
  if ( v8 )
  {
    if ( !v29 )
    {
      v29 = 0LL;
      std::_Atomic_storage<_LUID,8>::load((char *)v8 + 1728, v28);
      v24 = v22(v23, v28[0], &v29);
      v10 = v24;
      if ( v24 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v24, 0xC9u, 0LL);
        goto LABEL_5;
      }
      CManipulationManager::LockTree(v29, 1);
    }
    v25 = CInteraction::GetVisualNoRef(v8);
    if ( v25 )
      CManipulationContext::OnVisualPropertyChange(v25, v29);
  }
LABEL_5:
  v13 = v29;
  if ( v29 )
  {
    CTreeLock::ReleaseShared((RTL_SRWLOCK *)(*((_QWORD *)v29 + 3) + 5696LL));
    v13 = v29;
  }
  if ( v8 )
  {
    (*(void (__fastcall **)(struct CInteraction *))(*(_QWORD *)v8 + 16LL))(v8);
    v13 = v29;
  }
  if ( v13 )
    CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v13);
  return v10;
}
