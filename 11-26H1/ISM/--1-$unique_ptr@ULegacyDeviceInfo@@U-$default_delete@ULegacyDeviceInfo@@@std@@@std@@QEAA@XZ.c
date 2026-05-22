/*
 * XREFs of ??1?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@QEAA@XZ @ 0x18008A840
 * Callers:
 *     ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18005C630 (-OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18008A334 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CBKV-$unique_ptr@ULegacyDeviceInfo@@U-$default.c)
 *     ?InjectRightClick@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KMM@Z @ 0x1800BA83C (-InjectRightClick@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KMM@Z.c)
 *     ??1MPCGestureHandler@@UEAA@XZ @ 0x1800BD044 (--1MPCGestureHandler@@UEAA@XZ.c)
 *     ?OnDeviceAttach@HeatDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800DBFE0 (-OnDeviceAttach@HeatDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800E2030 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CBKV-$unique_ptr@ULegacyDeviceI.c)
 *     ?OnAttachDevice@InjectionRawInputProvider@@QEAAJPEAVInputInjectionClientProxy@@@Z @ 0x1800E262C (-OnAttachDevice@InjectionRawInputProvider@@QEAAJPEAVInputInjectionClientProxy@@@Z.c)
 *     _Win32kInterop::ProcessDeviceArrival_::_1_::dtor$0 @ 0x1801D3E40 (_Win32kInterop--ProcessDeviceArrival_--_1_--dtor$0.c)
 *     _MPCHolographicInputManager::MPCHolographicInputManager_::_1_::dtor$10 @ 0x1801D75DE (_MPCHolographicInputManager--MPCHolographicInputManager_--_1_--dtor$10.c)
 *     _HIDDeviceCollection::OnDeviceAttach_::_1_::dtor$0 @ 0x1801D77CC (_HIDDeviceCollection--OnDeviceAttach_--_1_--dtor$0.c)
 *     _MPCGestureHandler::MPCGestureHandler_::_1_::dtor$2 @ 0x1801D8FDD (_MPCGestureHandler--MPCGestureHandler_--_1_--dtor$2.c)
 *     _HeatDeviceCollection::OnDeviceAttach_::_1_::dtor$1 @ 0x1801D9B3E (_HeatDeviceCollection--OnDeviceAttach_--_1_--dtor$1.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::unique_ptr<LegacyDeviceInfo>::~unique_ptr<LegacyDeviceInfo>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1, (const struct std::nothrow_t *)0x60C);
}
