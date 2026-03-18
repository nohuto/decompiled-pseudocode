/*
 * XREFs of ?OnUp@CManipulationManager@@IEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@Z @ 0x1800A7AF0
 * Callers:
 *     ?OnNewContact@CManipulationManager@@IEAAJPEAVCInteraction@@IW4InputType@@_N22@Z @ 0x1800A72E0 (-OnNewContact@CManipulationManager@@IEAAJPEAVCInteraction@@IW4InputType@@_N22@Z.c)
 *     ?ProcessFrameInputPostTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x1801134FC (-ProcessFrameInputPostTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?OnCapturePointer@CManipulationManager@@IEAAXIPEAVCInteraction@@@Z @ 0x180226000 (-OnCapturePointer@CManipulationManager@@IEAAXIPEAVCInteraction@@@Z.c)
 * Callees:
 *     ?FindKey@?$CMap@IW4InputType@@V?$CMapEqualHelper@IW4InputType@@@@@@QEBAHAEBI@Z @ 0x1800A7A88 (-FindKey@-$CMap@IW4InputType@@V-$CMapEqualHelper@IW4InputType@@@@@@QEBAHAEBI@Z.c)
 *     ?FindKey@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBAHAEBI@Z @ 0x1800A7ABC (-FindKey@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@.c)
 *     ?OnContactDepart@CManipulationContext@@QEAAXIW4InputType@@PEAVCInteraction@@_N22@Z @ 0x1800A7ED0 (-OnContactDepart@CManipulationContext@@QEAAXIW4InputType@@PEAVCInteraction@@_N22@Z.c)
 *     ?CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NW4InputType@@@Z @ 0x1800A8D00 (-CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NW4InputType.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A9EDC (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AAF14 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Remove@?$CArray@V?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CArrayEqualHelper@V?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEAAHAEBV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@Z @ 0x180152C78 (-Remove@-$CArray@V-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CArrayEqualHelper@V-$ComPtr.c)
 *     ?RemoveRange@?$CMap@IW4InputType@@V?$CMapEqualHelper@IW4InputType@@@@@@QEAAHHH@Z @ 0x180154598 (-RemoveRange@-$CMap@IW4InputType@@V-$CMapEqualHelper@IW4InputType@@@@@@QEAAHHH@Z.c)
 *     ?RemoveRange@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEAAHHH@Z @ 0x180154684 (-RemoveRange@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$Com.c)
 *     McTemplateU0pq_EventWriteTransfer @ 0x1801B7BC0 (McTemplateU0pq_EventWriteTransfer.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@PEAXUDEVICE_INFO@@U?$less@PEAX@std@@V?$allocator@U?$pair@QEAXUDEVICE_INFO@@@std@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x1801BE40C (-clear@-$_Tree@V-$_Tmap_traits@PEAXUDEVICE_INFO@@U-$less@PEAX@std@@V-$allocator@U-$pair@QEAXUDEV.c)
 *     ?ResetDefaultStateForAllInteractions@CInteraction@@SAXXZ @ 0x1801D0A00 (-ResetDefaultStateForAllInteractions@CInteraction@@SAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CManipulationManager::OnUp(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        _QWORD *a5,
        char a6,
        char a7,
        char a8)
{
  _QWORD *v8; // rbx
  unsigned int v9; // r14d
  __int64 v13; // rbp
  unsigned int Key; // eax
  __int64 v15; // rcx
  unsigned int v16; // eax
  __int64 v17; // rcx
  __int64 result; // rax
  void *v19; // rdx
  unsigned int v20; // [rsp+70h] [rbp+18h] BYREF

  v20 = a3;
  v8 = a5;
  v9 = a4;
  if ( a5 )
  {
    v13 = a1 + 160;
    Key = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
            a1 + 160,
            &v20);
    if ( Key != -1 )
      CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::RemoveRange(
        v15,
        Key);
    v16 = CMap<unsigned int,enum InputType,CMapEqualHelper<unsigned int,enum InputType>>::FindKey(v13 + 40, &v20);
    if ( v16 != -1 )
      CMap<unsigned int,enum InputType,CMapEqualHelper<unsigned int,enum InputType>>::RemoveRange(v17, v16);
    CManipulationContext::OnContactDepart(v8, a3, v9, a2, a6, a7, a8);
    if ( v8[6] )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) == 0 )
      {
LABEL_8:
        result = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*v8 + 72LL))(v8, a3, 0LL);
        goto LABEL_9;
      }
      v19 = &MANIPULATION_CONTEXT_CONTACT_DEPARTED;
    }
    else
    {
      a5 = v8;
      Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&a5);
      CArray<Microsoft::WRL::ComPtr<CManipulationContext>,CArrayEqualHelper<Microsoft::WRL::ComPtr<CManipulationContext>>>::Remove(
        v13 + 24,
        &a5);
      Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&a5);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) == 0 )
        goto LABEL_8;
      v19 = &MANIPULATION_CONTEXT_DESTROYED;
    }
    McTemplateU0pq_EventWriteTransfer(&Microsoft_Windows_Dwm_Core_Provider_Context, v19, v8, a3);
    goto LABEL_8;
  }
  LOBYTE(a4) = a7;
  result = CManipulationContext::CleanTreeState(a2, 0LL, *(_QWORD *)(a1 + 16), a4, v9);
LABEL_9:
  if ( !*(_DWORD *)(a1 + 192) )
  {
    CInteraction::ResetDefaultStateForAllInteractions();
    return std::_Tree<std::_Tmap_traits<void *,DEVICE_INFO,std::less<void *>,std::allocator<std::pair<void * const,DEVICE_INFO>>,0>>::clear();
  }
  return result;
}
