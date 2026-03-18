/*
 * XREFs of ?OnNewContact@CManipulationManager@@IEAAJPEAVCInteraction@@IW4InputType@@_N22@Z @ 0x1800A72E0
 * Callers:
 *     ?ProcessFrameInputPreTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x180113960 (-ProcessFrameInputPreTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?OnCapturePointer@CManipulationManager@@IEAAXIPEAVCInteraction@@@Z @ 0x180226000 (-OnCapturePointer@CManipulationManager@@IEAAXIPEAVCInteraction@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x180093B60 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?ReleaseShared@CTreeLock@@QEAAXXZ @ 0x180094C7C (-ReleaseShared@CTreeLock@@QEAAXXZ.c)
 *     ?OnUp@CManipulationManager@@IEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@Z @ 0x1800A7AF0 (-OnUp@CManipulationManager@@IEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@.c)
 *     ?BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCDesktopTree@@PEAVCInteraction@@IW4InputType@@_NPEAVCInteractionChain@@PEA_N@Z @ 0x1800A8910 (-BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCDesktopTree@@PEAVCInteraction@.c)
 *     ??4?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z @ 0x1800AAD50 (--4-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800AC368 (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??2CManipulationContext@@SAPEAX_K@Z @ 0x180110308 (--2CManipulationContext@@SAPEAX_K@Z.c)
 *     ?Add@?$CArray@V?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CArrayEqualHelper@V?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEAAHAEBV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@Z @ 0x180153F3C (-Add@-$CArray@V-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CArrayEqualHelper@V-$ComPtr@VC.c)
 *     ?OnNewContact@CManipulationContext@@QEAAJPEAVCInteractionChain@@IW4InputType@@_N2@Z @ 0x180154284 (-OnNewContact@CManipulationContext@@QEAAJPEAVCInteractionChain@@IW4InputType@@_N2@Z.c)
 *     ?Add@?$CMap@IW4InputType@@V?$CMapEqualHelper@IW4InputType@@@@@@QEAAHAEBIAEBW4InputType@@@Z @ 0x180154474 (-Add@-$CMap@IW4InputType@@V-$CMapEqualHelper@IW4InputType@@@@@@QEAAHAEBIAEBW4InputType@@@Z.c)
 *     ?Add@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEAAHAEBIAEBV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@Z @ 0x180154770 (-Add@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@VCMa.c)
 *     McTemplateU0pq_EventWriteTransfer @ 0x1801B7BC0 (McTemplateU0pq_EventWriteTransfer.c)
 *     ?LockTree@CManipulationManager@@SAXPEAVCVisualTree@@_N@Z @ 0x1801DD144 (-LockTree@CManipulationManager@@SAXPEAVCVisualTree@@_N@Z.c)
 *     ??0CManipulationContext@@QEAA@PEAVCComposition@@@Z @ 0x18020A9D0 (--0CManipulationContext@@QEAA@PEAVCComposition@@@Z.c)
 *     ?load@?$_Atomic_storage@U_LUID@@$07@std@@QEBA?AU_LUID@@W4memory_order@2@@Z @ 0x18021F63C (-load@-$_Atomic_storage@U_LUID@@$07@std@@QEBA-AU_LUID@@W4memory_order@2@@Z.c)
 *     ?Initialize@CManipulationContext@@QEAAJ_NU_LUID@@@Z @ 0x180226FE0 (-Initialize@CManipulationContext@@QEAAJ_NU_LUID@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CManipulationManager::OnNewContact(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        char a5,
        char a6,
        char a7)
{
  CManipulationContext *v8; // rbx
  __int64 *v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // r8
  int v15; // edi
  unsigned __int64 v16; // rcx
  bool v17; // r15
  int v18; // r8d
  __int64 i; // rdx
  CManipulationContext *v20; // rax
  int v21; // r9d
  unsigned int v22; // eax
  int v23; // eax
  __int64 v24; // r8
  __int64 *v26; // [rsp+28h] [rbp-50h]
  int v27; // [rsp+28h] [rbp-50h]
  bool *v28; // [rsp+30h] [rbp-48h]
  CManipulationContext *v29; // [rsp+40h] [rbp-38h] BYREF
  struct CVisualTree *v30; // [rsp+48h] [rbp-30h] BYREF
  struct _LUID v31; // [rsp+50h] [rbp-28h] BYREF
  __int64 v32[4]; // [rsp+58h] [rbp-20h] BYREF
  bool v33; // [rsp+C0h] [rbp+48h] BYREF
  __int64 v34; // [rsp+C8h] [rbp+50h]
  unsigned int v35; // [rsp+D0h] [rbp+58h] BYREF
  unsigned int v36; // [rsp+D8h] [rbp+60h] BYREF

  v36 = a4;
  v35 = a3;
  v34 = a2;
  v33 = 0;
  v8 = 0LL;
  v29 = 0LL;
  *(_OWORD *)v32 = 0LL;
  std::_Atomic_storage<_LUID,8>::load(a2 + 1728, &v31);
  v11 = *(__int64 **)(a1 + 16);
  v12 = *v11;
  v30 = 0LL;
  v13 = (*(__int64 (__fastcall **)(__int64 *, struct _LUID, struct CVisualTree **))(v12 + 64))(v11, v31, &v30);
  v15 = v13;
  if ( v13 < 0 )
  {
    v21 = v13;
    v22 = 1893;
LABEL_31:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v21, v22, 0LL);
    LOBYTE(v28) = 0;
    LOBYTE(v27) = 0;
    CManipulationManager::OnUp(a1, v34, a3, a4, v8, v27, v28, a7);
  }
  else
  {
    if ( !a5 )
      CManipulationManager::LockTree(v30, 1);
    v28 = &v33;
    v26 = v32;
    CManipulationContext::BuildInteractionChainAndUpdateTree(v30, v34, v14, a4);
    v17 = v33;
    if ( *(_QWORD *)(a1 + 296) - *(_QWORD *)(a1 + 304) > 0xE4E1C0uLL )
      v17 = 0;
    if ( v32[1] )
    {
      v18 = 0;
      for ( i = 0LL; i < *(int *)(a1 + 192); ++i )
      {
        v16 = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 8 * i);
        if ( v32[0] == *(_QWORD *)(v16 + 48) )
        {
          Microsoft::WRL::ComPtr<IInteractionResource>::operator=(&v29, *(_QWORD *)(a1 + 184) + 8LL * v18);
          v8 = v29;
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
            McTemplateU0pq_EventWriteTransfer(
              &Microsoft_Windows_Dwm_Core_Provider_Context,
              &MANIPULATION_CONTEXT_NEW_CONTACT,
              v29,
              a3);
          if ( v8 )
            goto LABEL_23;
          break;
        }
        ++v18;
      }
      v20 = (CManipulationContext *)CManipulationContext::operator new(v16);
      if ( v20 )
        v20 = CManipulationContext::CManipulationContext(v20, *(struct CComposition **)(a1 + 16));
      Microsoft::WRL::ComPtr<CManipulationContext>::operator=(&v29, v20);
      v8 = v29;
      if ( !v29 )
      {
        v21 = -2147024882;
        v15 = -2147024882;
        v22 = 1938;
        goto LABEL_31;
      }
      v23 = CManipulationContext::Initialize(v29, v17, v31);
      v15 = v23;
      v21 = v23;
      if ( v23 < 0 )
      {
        v22 = 1939;
        goto LABEL_31;
      }
      if ( !(unsigned int)CArray<Microsoft::WRL::ComPtr<CManipulationContext>,CArrayEqualHelper<Microsoft::WRL::ComPtr<CManipulationContext>>>::Add(
                            a1 + 184,
                            &v29,
                            v24,
                            (unsigned int)v23) )
      {
        v21 = -2147024882;
        v15 = -2147024882;
        v22 = 1942;
        goto LABEL_31;
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
        McTemplateU0pq_EventWriteTransfer(
          &Microsoft_Windows_Dwm_Core_Provider_Context,
          &MANIPULATION_CONTEXT_CREATED,
          v8,
          a3);
LABEL_23:
      if ( !(unsigned int)CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::Add(
                            a1 + 160,
                            &v35,
                            &v29) )
      {
        v21 = -2147024882;
        v15 = -2147024882;
        v22 = 1949;
        goto LABEL_31;
      }
      if ( !(unsigned int)CMap<unsigned int,enum InputType,CMapEqualHelper<unsigned int,enum InputType>>::Add(
                            a1 + 200,
                            &v35,
                            &v36) )
      {
        v21 = -2147024882;
        v22 = 1954;
        v15 = -2147024882;
        goto LABEL_31;
      }
      LOBYTE(v26) = a7;
      v15 = CManipulationContext::OnNewContact(v8, v32, a3, a4, a6, v26);
      v21 = v15;
      if ( v15 < 0 )
      {
        v22 = 1957;
        goto LABEL_31;
      }
    }
  }
  if ( !a5 )
  {
    if ( !v30 )
      goto LABEL_37;
    CTreeLock::ReleaseShared((RTL_SRWLOCK *)(*((_QWORD *)v30 + 3) + 5696LL));
  }
  if ( v30 )
    CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v30);
LABEL_37:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v32[1]);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v32);
  if ( v8 )
    (*(void (__fastcall **)(CManipulationContext *))(*(_QWORD *)v8 + 8LL))(v8);
  return (unsigned int)v15;
}
