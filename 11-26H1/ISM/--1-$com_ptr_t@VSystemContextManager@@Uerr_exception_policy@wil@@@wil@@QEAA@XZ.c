/*
 * XREFs of ??1?$com_ptr_t@VSystemContextManager@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18007F710
 * Callers:
 *     ??0SystemContextEndpoint@@AEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x180088F10 (--0SystemContextEndpoint@@AEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 *     _lambda_41eee22a06de91399d417ae04e8a558f_::__lambda_41eee22a06de91399d417ae04e8a558f_ @ 0x1800A9750 (_lambda_41eee22a06de91399d417ae04e8a558f_--__lambda_41eee22a06de91399d417ae04e8a558f_.c)
 *     std::_Func_impl_no_alloc__lambda_41eee22a06de91399d417ae04e8a558f__void_Microsoft::WRL::ComPtr_BamoInputSystemInternalProxy__&_::_Delete_this @ 0x1800AAB00 (std--_Func_impl_no_alloc__lambda_41eee22a06de91399d417ae04e8a558f__void_Microsoft--_ea_1800AAB00.c)
 *     ?OnDeviceRemoval@DockableDeviceCollection@@MEAAJK@Z @ 0x1800DE320 (-OnDeviceRemoval@DockableDeviceCollection@@MEAAJK@Z.c)
 *     ?ProcessFeatureReport@DockableDeviceCollection@@AEAAJAEBUGetFeatureReportResult@1@@Z @ 0x1800DE80C (-ProcessFeatureReport@DockableDeviceCollection@@AEAAJAEBUGetFeatureReportResult@1@@Z.c)
 *     ??1DeviceDockClientProxy@@UEAA@XZ @ 0x1801866A8 (--1DeviceDockClientProxy@@UEAA@XZ.c)
 *     ?OnTouchpadAdded@VirtualTouchpadContextProvider@@QEAAJAEBUVirtualTouchpadRect@@@Z @ 0x1801A597C (-OnTouchpadAdded@VirtualTouchpadContextProvider@@QEAAJAEBUVirtualTouchpadRect@@@Z.c)
 *     ?OnTouchpadRemoved@VirtualTouchpadContextProvider@@QEAAJ_K@Z @ 0x1801A5AA4 (-OnTouchpadRemoved@VirtualTouchpadContextProvider@@QEAAJ_K@Z.c)
 *     ?OnTouchpadUpdated@VirtualTouchpadContextProvider@@QEAAJAEBUVirtualTouchpadRect@@@Z @ 0x1801A5BC4 (-OnTouchpadUpdated@VirtualTouchpadContextProvider@@QEAAJAEBUVirtualTouchpadRect@@@Z.c)
 *     ?OnOcclusionRectAdded@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@AEBUDisplayOcclusionRect@@@Z @ 0x1801A64F4 (-OnOcclusionRectAdded@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@AEBUDisplayOc.c)
 *     ?OnOcclusionRectRemoved@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@@Z @ 0x1801A6698 (-OnOcclusionRectRemoved@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@@Z.c)
 *     ?OnOcclusionRectUpdated@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@AEBUtagRECT@@@Z @ 0x1801A67A0 (-OnOcclusionRectUpdated@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@AEBUtagRECT.c)
 *     ??1DockProcessor@@UEAA@XZ @ 0x1801BC730 (--1DockProcessor@@UEAA@XZ.c)
 *     _InputConfigContextProvider::Broadcast_::_1_::dtor$1 @ 0x1801D6854 (_InputConfigContextProvider--Broadcast_--_1_--dtor$1.c)
 *     _SystemContextEndpoint::SystemContextEndpoint_::_1_::dtor$1 @ 0x1801D7388 (_SystemContextEndpoint--SystemContextEndpoint_--_1_--dtor$1.c)
 *     _DockableDeviceCollection::OnDeviceRemoval_::_1_::dtor$0 @ 0x1801D9C24 (_DockableDeviceCollection--OnDeviceRemoval_--_1_--dtor$0.c)
 *     _DockableDeviceCollection::ProcessFeatureReport_::_1_::dtor$0 @ 0x1801D9C6C (_DockableDeviceCollection--ProcessFeatureReport_--_1_--dtor$0.c)
 *     _DisplayOcclusionContextProvider::OnOcclusionRectUpdated_::_1_::dtor$0 @ 0x1801DCC0E (_DisplayOcclusionContextProvider--OnOcclusionRectUpdated_--_1_--dtor$0.c)
 *     _DisplayOcclusionContextProvider::OnOcclusionRectAdded_::_1_::dtor$0 @ 0x1801DCC44 (_DisplayOcclusionContextProvider--OnOcclusionRectAdded_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::com_ptr_t<SystemContextManager,wil::err_exception_policy>::~com_ptr_t<SystemContextManager,wil::err_exception_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v1 + 16) + 8LL))(v1 + 16);
  return result;
}
