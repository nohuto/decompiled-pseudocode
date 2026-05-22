/*
 * XREFs of memmove_0 @ 0x1801D3DC0
 * Callers:
 *     ??$_Copy_memmove@PEAW4_Button@@PEAW41@@std@@YAPEAW4_Button@@PEAW41@00@Z @ 0x18002C4AC (--$_Copy_memmove@PEAW4_Button@@PEAW41@@std@@YAPEAW4_Button@@PEAW41@00@Z.c)
 *     ??$copy@PEAUINPUT_SPACE_REGION@@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UINPUT_SPACE_REGION@@@std@@@std@@@std@@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UINPUT_SPACE_REGION@@@std@@@std@@@0@PEAUINPUT_SPACE_REGION@@0V10@@Z @ 0x18006E2EC (--$copy@PEAUINPUT_SPACE_REGION@@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@UINPUT_SPACE.c)
 *     memmove_s @ 0x18006F7AC (memmove_s.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800A6844 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800B5798 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?insert@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KQEBG0@Z @ 0x1800B5894 (-insert@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KQEBG0@Z.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@QEBD@Z @ 0x1800C482C (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_1800C482C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@U_String_constructor_concat_tag@1@AEAV01@1@Z @ 0x1800C4AFC (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@U_String_constructor_concat.c)
 *     ?_Growmap@?$deque@VRayStabilizationResult@@V?$allocator@VRayStabilizationResult@@@std@@@std@@AEAAX_K@Z @ 0x1800C7568 (-_Growmap@-$deque@VRayStabilizationResult@@V-$allocator@VRayStabilizationResult@@@std@@@std@@AEA.c)
 *     ??1GameControllerRawInputProvider@@UEAA@XZ @ 0x1800CD2E0 (--1GameControllerRawInputProvider@@UEAA@XZ.c)
 *     ?_Growmap@?$deque@UGetInputReportResult@@V?$allocator@UGetInputReportResult@@@std@@@std@@AEAAX_K@Z @ 0x1800DD464 (-_Growmap@-$deque@UGetInputReportResult@@V-$allocator@UGetInputReportResult@@@std@@@std@@AEAAX_K.c)
 *     std::_Insertion_sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x1800E93D8 (std--_Insertion_sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___.c)
 *     ??$_Sort_unchecked@PEAEU?$less@X@std@@@std@@YAXPEAE0_JU?$less@X@0@@Z @ 0x1800E9FC8 (--$_Sort_unchecked@PEAEU-$less@X@std@@@std@@YAXPEAE0_JU-$less@X@0@@Z.c)
 *     ?_Growmap@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@AEAAX_K@Z @ 0x1800F4CA0 (-_Growmap@-$deque@UPointerFrame@PointerInputMediator@@V-$allocator@UPointerFrame@PointerInputMed.c)
 *     ?_Growmap@?$deque@UKeyboardEvent@@V?$allocator@UKeyboardEvent@@@std@@@std@@AEAAX_K@Z @ 0x1800F6B78 (-_Growmap@-$deque@UKeyboardEvent@@V-$allocator@UKeyboardEvent@@@std@@@std@@AEAAX_K@Z.c)
 *     ?_Growmap@?$deque@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@V?$allocator@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@std@@@std@@AEAAX_K@Z @ 0x1800F6CE4 (-_Growmap@-$deque@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@V-$allocator@U_MIT_KEYBOARD_OVERRIDER_.c)
 *     ??$_Sort_unchecked@PEAIU?$less@X@std@@@std@@YAXPEAI0_JU?$less@X@0@@Z @ 0x1800FA04C (--$_Sort_unchecked@PEAIU-$less@X@std@@@std@@YAXPEAI0_JU-$less@X@0@@Z.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@EV?$allocator@E@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1800FD580 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@EV-$allocator@E@std@@@std@@AEAAX_KAEBU_Val.c)
 *     ?InsertWorker@?$ListPrincipalSimpleCommon@VBamoList_uint_Principal@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_uint_Stub@2345@II@Bamo@Microsoft@@AEAAJPEAVBaseBamoConnection@23@II@Z @ 0x180104590 (-InsertWorker@-$ListPrincipalSimpleCommon@VBamoList_uint_Principal@dataprovider_AutoBamos@Lib@Ba.c)
 *     ??$_Emplace_reallocate@AEBQEAUIGamepadInterceptionListener@@@?$vector@PEAUIGamepadInterceptionListener@@V?$allocator@PEAUIGamepadInterceptionListener@@@std@@@std@@AEAAPEAPEAUIGamepadInterceptionListener@@QEAPEAU2@AEBQEAU2@@Z @ 0x180108A44 (--$_Emplace_reallocate@AEBQEAUIGamepadInterceptionListener@@@-$vector@PEAUIGamepadInterceptionLi.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UDISPLAYCONFIG_MODE_INFO@@V?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180115BE0 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UDISPLAYCONFIG_MODE_INFO@@V-$allocator@UDI.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UDISPLAYCONFIG_PATH_INFO@@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180115CE0 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UDISPLAYCONFIG_PATH_INFO@@V-$allocator@UDI.c)
 *     ??$emplace@AEBUDisplayOcclusionRect@@@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UDisplayOcclusionRect@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UDisplayOcclusionRect@@@std@@@std@@@1@AEBUDisplayOcclusionRect@@@Z @ 0x18013C990 (--$emplace@AEBUDisplayOcclusionRect@@@-$vector@UDisplayOcclusionRect@@V-$allocator@UDisplayOcclu.c)
 *     ??$emplace@AEBUVirtualTouchpadRect@@@?$vector@UVirtualTouchpadRect@@V?$allocator@UVirtualTouchpadRect@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UVirtualTouchpadRect@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UVirtualTouchpadRect@@@std@@@std@@@1@AEBUVirtualTouchpadRect@@@Z @ 0x18013DCA8 (--$emplace@AEBUVirtualTouchpadRect@@@-$vector@UVirtualTouchpadRect@@V-$allocator@UVirtualTouchpa.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UtagCOMPOSITION_TARGET_ID@@V?$allocator@UtagCOMPOSITION_TARGET_ID@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180144334 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UtagCOMPOSITION_TARGET_ID@@V-$allocator@Ut.c)
 *     ?_Growmap@?$deque@PEAVShellGesturesClientProxy@@V?$allocator@PEAVShellGesturesClientProxy@@@std@@@std@@AEAAX_K@Z @ 0x18015DB0C (-_Growmap@-$deque@PEAVShellGesturesClientProxy@@V-$allocator@PEAVShellGesturesClientProxy@@@std@.c)
 *     ??$_Copy_memmove_n@PEAU?$pair@G_N@std@@PEAU12@@std@@YAPEAU?$pair@G_N@0@PEAU10@_K0@Z @ 0x18018186C (--$_Copy_memmove_n@PEAU-$pair@G_N@std@@PEAU12@@std@@YAPEAU-$pair@G_N@0@PEAU10@_K0@Z.c)
 *     ?InsertWorker@?$ListPrincipalSimpleCommon@VBamoList_SimpleHapticsControllerFeedback_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_SimpleHapticsControllerFeedback_Stub@2345@USimpleHapticsControllerFeedback@@AEBU8@@Bamo@Microsoft@@AEAAJPEAVBaseBamoConnection@23@IAEBUSimpleHapticsControllerFeedback@@@Z @ 0x1801896A8 (-InsertWorker@-$ListPrincipalSimpleCommon@VBamoList_SimpleHapticsControllerFeedback_Principal@IS.c)
 *     ?RemoteInsert@?$ListProxySimpleCommon@VBamoList_TouchInjectionContact_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UTouchInjectionContact@Input@Internal@UI@Windows@@AEBU6789Windows@@@Bamo@Microsoft@@MEAAJIAEBUTouchInjectionContact@Input@Internal@UI@Windows@@@Z @ 0x1801A1100 (-RemoteInsert@-$ListProxySimpleCommon@VBamoList_TouchInjectionContact_Proxy@ISMBamos_AutoBamos@L.c)
 *     ??$_Copy_memmove_n@PEAUVirtualTouchpadRect@@PEAU1@@std@@YAPEAUVirtualTouchpadRect@@PEAU1@_K0@Z @ 0x1801A5498 (--$_Copy_memmove_n@PEAUVirtualTouchpadRect@@PEAU1@@std@@YAPEAUVirtualTouchpadRect@@PEAU1@_K0@Z.c)
 *     ??$_Copy_memmove_n@PEAUDisplayOcclusionRect@@PEAU1@@std@@YAPEAUDisplayOcclusionRect@@PEAU1@_K0@Z @ 0x1801A5FDC (--$_Copy_memmove_n@PEAUDisplayOcclusionRect@@PEAU1@@std@@YAPEAUDisplayOcclusionRect@@PEAU1@_K0@Z.c)
 *     ??$_Sort_unchecked@PEAW4_Button@@U?$less@X@std@@@std@@YAXPEAW4_Button@@0_JU?$less@X@0@@Z @ 0x1801A9CE0 (--$_Sort_unchecked@PEAW4_Button@@U-$less@X@std@@@std@@YAXPEAW4_Button@@0_JU-$less@X@0@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memmove_0(void *a1, const void *Src, size_t Size)
{
  return memmove(a1, Src, Size);
}
