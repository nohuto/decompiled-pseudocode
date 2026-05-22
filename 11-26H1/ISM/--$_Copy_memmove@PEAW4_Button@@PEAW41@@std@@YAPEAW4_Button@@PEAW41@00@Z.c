/*
 * XREFs of ??$_Copy_memmove@PEAW4_Button@@PEAW41@@std@@YAPEAW4_Button@@PEAW41@00@Z @ 0x18002C4AC
 * Callers:
 *     ?RemoveInputSinkFromParentList@InputSiteHierarchyManager@@AEAAX_K0@Z @ 0x18002BAF0 (-RemoveInputSinkFromParentList@InputSiteHierarchyManager@@AEAAX_K0@Z.c)
 *     ?UpdateHierarchyFromInputSinkDataCache@InputSiteHierarchyManager@@UEAAXXZ @ 0x18002BBE0 (-UpdateHierarchyFromInputSinkDataCache@InputSiteHierarchyManager@@UEAAXXZ.c)
 *     ??$Make@VInputSite@@AEAV?$span@UInputSiteId@@$0?0@gsl@@AEAKPEAVInputSiteManager@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VInputSite@@@12@AEAV?$span@UInputSiteId@@$0?0@gsl@@AEAK$$QEAPEAVInputSiteManager@@@Z @ 0x18002CFB8 (--$Make@VInputSite@@AEAV-$span@UInputSiteId@@$0-0@gsl@@AEAKPEAVInputSiteManager@@@Details@WRL@Mi.c)
 *     ?ForwardHotkeyRegistration@HotkeyRegistrationForwarder@@QEAAJPEBU_MIT_HOTKEY_REGISTRATION_MESSAGE@@@Z @ 0x18002E4CC (-ForwardHotkeyRegistration@HotkeyRegistrationForwarder@@QEAAJPEBU_MIT_HOTKEY_REGISTRATION_MESSAG.c)
 *     ??1InputSite@@UEAA@XZ @ 0x18003F9DC (--1InputSite@@UEAA@XZ.c)
 *     ?GetDismissableClients@LightDismissProcessor@@AEAA?AV?$vector@PEAVLightDismissClientProxy@@V?$allocator@PEAVLightDismissClientProxy@@@std@@@std@@PEAUHitTestResult@@@Z @ 0x18005188C (-GetDismissableClients@LightDismissProcessor@@AEAA-AV-$vector@PEAVLightDismissClientProxy@@V-$al.c)
 *     ??$_Uninitialized_move@PEAPEAVLightDismissClientProxy@@V?$allocator@PEAVLightDismissClientProxy@@@std@@@std@@YAPEAPEAVLightDismissClientProxy@@QEAPEAV1@0PEAPEAV1@AEAV?$allocator@PEAVLightDismissClientProxy@@@0@@Z @ 0x180076188 (--$_Uninitialized_move@PEAPEAVLightDismissClientProxy@@V-$allocator@PEAVLightDismissClientProxy@.c)
 *     ??$_Uninitialized_move@PEAW4GameInputGamepadButtons@@V?$allocator@W4GameInputGamepadButtons@@@std@@@std@@YAPEAW4GameInputGamepadButtons@@QEAW41@0PEAW41@AEAV?$allocator@W4GameInputGamepadButtons@@@0@@Z @ 0x180076AB4 (--$_Uninitialized_move@PEAW4GameInputGamepadButtons@@V-$allocator@W4GameInputGamepadButtons@@@st.c)
 *     ??$_Uninitialized_move@PEAUINPUT_SPACE_REGION@@V?$allocator@UINPUT_SPACE_REGION@@@std@@@std@@YAPEAUINPUT_SPACE_REGION@@QEAU1@0PEAU1@AEAV?$allocator@UINPUT_SPACE_REGION@@@0@@Z @ 0x18007A730 (--$_Uninitialized_move@PEAUINPUT_SPACE_REGION@@V-$allocator@UINPUT_SPACE_REGION@@@std@@@std@@YAP.c)
 *     ??$_Uninitialized_move@PEAUINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@YAPEAUINPUT_SPACE_PAYLOAD@@QEAU1@0PEAU1@AEAV?$allocator@UINPUT_SPACE_PAYLOAD@@@0@@Z @ 0x18007B6A8 (--$_Uninitialized_move@PEAUINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@Y.c)
 *     ??$_Uninitialized_move@PEAUInputSiteId@@V?$allocator@UInputSiteId@@@std@@@std@@YAPEAUInputSiteId@@QEAU1@0PEAU1@AEAV?$allocator@UInputSiteId@@@0@@Z @ 0x18007C790 (--$_Uninitialized_move@PEAUInputSiteId@@V-$allocator@UInputSiteId@@@std@@@std@@YAPEAUInputSiteId.c)
 *     ?RoutePointers@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_NW4FrameRoutingSource@@@Z @ 0x18008A9A0 (-RoutePointers@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_NW4Fram.c)
 *     ?OnDeviceRemoval@GameInputProcessor@@AEAAXPEAUDeviceInfo@@@Z @ 0x18008F760 (-OnDeviceRemoval@GameInputProcessor@@AEAAXPEAUDeviceInfo@@@Z.c)
 *     ??$_Construct_n@PEBU?$pair@G_N@std@@PEBU12@@?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@AEAAX_K$$QEAPEBU?$pair@G_N@1@1@Z @ 0x180095364 (--$_Construct_n@PEBU-$pair@G_N@std@@PEBU12@@-$vector@U-$pair@G_N@std@@V-$allocator@U-$pair@G_N@s.c)
 *     ?GetOldestEvent@SystemButtonEventBuffer@@QEAA_NAEAUSystemButtonEventInfo@@@Z @ 0x180097E68 (-GetOldestEvent@SystemButtonEventBuffer@@QEAA_NAEAUSystemButtonEventInfo@@@Z.c)
 *     ??$_Construct_n@AEBQEAPEAVInputSite@@AEBQEAPEAV1@@?$vector@PEAVInputSite@@V?$allocator@PEAVInputSite@@@std@@@std@@AEAAX_KAEBQEAPEAVInputSite@@1@Z @ 0x1800A7534 (--$_Construct_n@AEBQEAPEAVInputSite@@AEBQEAPEAV1@@-$vector@PEAVInputSite@@V-$allocator@PEAVInput.c)
 *     ??$_Uninitialized_move@PEAUSuperWetInkBallpointPenPoint@@V?$allocator@USuperWetInkBallpointPenPoint@@@std@@@std@@YAPEAUSuperWetInkBallpointPenPoint@@QEAU1@0PEAU1@AEAV?$allocator@USuperWetInkBallpointPenPoint@@@0@@Z @ 0x1800AADF0 (--$_Uninitialized_move@PEAUSuperWetInkBallpointPenPoint@@V-$allocator@USuperWetInkBallpointPenPo.c)
 *     ?CancelBuffer@BufferingMessageCallHost@BamoImpl@Microsoft@@UEAAJPEA_KIPEAXI@Z @ 0x1800ABE40 (-CancelBuffer@BufferingMessageCallHost@BamoImpl@Microsoft@@UEAAJPEA_KIPEAXI@Z.c)
 *     ??$_Uninitialized_move@PEAUPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@YAPEAUPointData3D@@QEAU1@0PEAU1@AEAV?$allocator@UPointData3D@@@0@@Z @ 0x1800B9870 (--$_Uninitialized_move@PEAUPointData3D@@V-$allocator@UPointData3D@@@std@@@std@@YAPEAUPointData3D.c)
 *     ??$_Uninitialized_move@PEAULegacyInputInfo@@V?$allocator@ULegacyInputInfo@@@std@@@std@@YAPEAULegacyInputInfo@@QEAU1@0PEAU1@AEAV?$allocator@ULegacyInputInfo@@@0@@Z @ 0x1800CE95C (--$_Uninitialized_move@PEAULegacyInputInfo@@V-$allocator@ULegacyInputInfo@@@std@@@std@@YAPEAULeg.c)
 *     ?RemoveDeviceImpl@MPCRawInputProvider@@AEAAXK@Z @ 0x1800CF99C (-RemoveDeviceImpl@MPCRawInputProvider@@AEAAXK@Z.c)
 *     ??$_Uninitialized_move@PEAUTraceSessionProviderConfig@@V?$allocator@UTraceSessionProviderConfig@@@std@@@std@@YAPEAUTraceSessionProviderConfig@@QEAU1@0PEAU1@AEAV?$allocator@UTraceSessionProviderConfig@@@0@@Z @ 0x1800D4084 (--$_Uninitialized_move@PEAUTraceSessionProviderConfig@@V-$allocator@UTraceSessionProviderConfig@.c)
 *     ?StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z @ 0x1800D80BC (-StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z.c)
 *     ??$_Uninitialized_move@PEAGV?$allocator@G@std@@@std@@YAPEAGQEAG0PEAGAEAV?$allocator@G@0@@Z @ 0x1800D9304 (--$_Uninitialized_move@PEAGV-$allocator@G@std@@@std@@YAPEAGQEAG0PEAGAEAV-$allocator@G@0@@Z.c)
 *     ??$_Uninitialized_move@PEAUHotKeyRegistrationData@@V?$allocator@UHotKeyRegistrationData@@@std@@@std@@YAPEAUHotKeyRegistrationData@@QEAU1@0PEAU1@AEAV?$allocator@UHotKeyRegistrationData@@@0@@Z @ 0x180107FD4 (--$_Uninitialized_move@PEAUHotKeyRegistrationData@@V-$allocator@UHotKeyRegistrationData@@@std@@@.c)
 *     ??$_Uninitialized_move@PEAUDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@YAPEAUDisplayOcclusionRect@@QEAU1@0PEAU1@AEAV?$allocator@UDisplayOcclusionRect@@@0@@Z @ 0x18013C934 (--$_Uninitialized_move@PEAUDisplayOcclusionRect@@V-$allocator@UDisplayOcclusionRect@@@std@@@std@.c)
 *     ?erase@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UDisplayOcclusionRect@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UDisplayOcclusionRect@@@std@@@std@@@2@@Z @ 0x18013DAA4 (-erase@-$vector@UDisplayOcclusionRect@@V-$allocator@UDisplayOcclusionRect@@@std@@@std@@QEAA-AV-$.c)
 *     ?erase@?$vector@UVirtualTouchpadRect@@V?$allocator@UVirtualTouchpadRect@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UVirtualTouchpadRect@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UVirtualTouchpadRect@@@std@@@std@@@2@@Z @ 0x18013E97C (-erase@-$vector@UVirtualTouchpadRect@@V-$allocator@UVirtualTouchpadRect@@@std@@@std@@QEAA-AV-$_V.c)
 *     ??$_Uninitialized_move@PEAUDragInfoStruct@@V?$allocator@UDragInfoStruct@@@std@@@std@@YAPEAUDragInfoStruct@@QEAU1@0PEAU1@AEAV?$allocator@UDragInfoStruct@@@0@@Z @ 0x18014CE34 (--$_Uninitialized_move@PEAUDragInfoStruct@@V-$allocator@UDragInfoStruct@@@std@@@std@@YAPEAUDragI.c)
 *     ?erase@?$vector@PEAVLightDismissClientProxy@@V?$allocator@PEAVLightDismissClientProxy@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAVLightDismissClientProxy@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVLightDismissClientProxy@@@std@@@std@@@2@@Z @ 0x18016049C (-erase@-$vector@PEAVLightDismissClientProxy@@V-$allocator@PEAVLightDismissClientProxy@@@std@@@st.c)
 *     ?RemoteRemove@?$ListProxySimpleCommon@VBamoList_TouchInjectionContact_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UTouchInjectionContact@Input@Internal@UI@Windows@@AEBU6789Windows@@@Bamo@Microsoft@@MEAAJI@Z @ 0x1801A1260 (-RemoteRemove@-$ListProxySimpleCommon@VBamoList_TouchInjectionContact_Proxy@ISMBamos_AutoBamos@L.c)
 *     ?UnregisterSupportedInputUpdateObserver@DWMInputRouter@@UEAAJPEAUISupportedInputUpdateObserver@@@Z @ 0x1801A41C0 (-UnregisterSupportedInputUpdateObserver@DWMInputRouter@@UEAAJPEAUISupportedInputUpdateObserver@@.c)
 *     ??$_Construct_n@AEBQEAUVirtualTouchpadRect@@AEBQEAU1@@?$vector@UVirtualTouchpadRect@@V?$allocator@UVirtualTouchpadRect@@@std@@@std@@AEAAX_KAEBQEAUVirtualTouchpadRect@@1@Z @ 0x1801A53EC (--$_Construct_n@AEBQEAUVirtualTouchpadRect@@AEBQEAU1@@-$vector@UVirtualTouchpadRect@@V-$allocato.c)
 *     ??$_Construct_n@AEBQEAUDisplayOcclusionRect@@AEBQEAU1@@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAX_KAEBQEAUDisplayOcclusionRect@@1@Z @ 0x1801A5F30 (--$_Construct_n@AEBQEAUDisplayOcclusionRect@@AEBQEAU1@@-$vector@UDisplayOcclusionRect@@V-$alloca.c)
 *     ??0?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1801AA110 (--0-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@QEAA@AEBV01@@Z.c)
 *     ??0?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAA@V?$initializer_list@W4_Button@@@1@AEBV?$allocator@W4_Button@@@1@@Z @ 0x1801AA1C8 (--0-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@QEAA@V-$initializer_list@W4_Button@@@.c)
 *     ?erase@?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@W4_Button@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@W4_Button@@@std@@@std@@@2@0@Z @ 0x1801AB49C (-erase@-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@QEAA-AV-$_Vector_iterator@V-$_Vec.c)
 * Callees:
 *     memmove_0 @ 0x1801D3DC0 (memmove_0.c)
 */

__int64 __fastcall std::_Copy_memmove<enum _Button *,enum _Button *>(void *Src, __int64 a2, void *a3)
{
  __int64 v4; // rbx

  v4 = a2 - (_QWORD)Src;
  memmove_0(a3, Src, a2 - (_QWORD)Src);
  return (__int64)a3 + v4;
}
