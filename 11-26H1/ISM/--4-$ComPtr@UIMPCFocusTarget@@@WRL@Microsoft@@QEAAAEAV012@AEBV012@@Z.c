/*
 * XREFs of ??4?$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18002A9EC
 * Callers:
 *     ?UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x18000E0B0 (-UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z.c)
 *     ?ProcessContextualProcessorDecision@ContextualProcessorBuffer@@AEAAXPEAUInputInfo@@AEAUContextualProcessorResponse@@AEAUContextualProcessorMetadata@1@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@6@@Z @ 0x180019FAC (-ProcessContextualProcessorDecision@ContextualProcessorBuffer@@AEAAXPEAUInputInfo@@AEAUContextua.c)
 *     ?DeliverInputToTarget@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@1AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@4@@Z @ 0x18001BA14 (-DeliverInputToTarget@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAV-$unordered_map@KV-$Com.c)
 *     ?TryAddProcessorAndContact@ContextualProcessorBuffer@@UEAAXKPEAUIContextualProcessor@@UContextualProcessorInitialState@@@Z @ 0x18001D0E0 (-TryAddProcessorAndContact@ContextualProcessorBuffer@@UEAAXKPEAUIContextualProcessor@@UContextua.c)
 *     ?ProcessMouseInputMessage@Win32kInterop@@AEAAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z @ 0x18002083C (-ProcessMouseInputMessage@Win32kInterop@@AEAAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z.c)
 *     ?DeliverRawMouseToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@V?$function@$$A6AXPEAVInputContext@@@Z@std@@V?$function@$$A6AXPEAUIInputTarget@@@Z@4@@Z @ 0x1800223E4 (-DeliverRawMouseToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@V-$function@$$A6AXPEAV.c)
 *     ??$_Insert_or_assign@KAEAV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@AEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@$$QEAKAEAV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@Z @ 0x18002AB84 (--$_Insert_or_assign@KAEAV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@@-$unordered_map@KV-$ComPtr@UI.c)
 *     ??$_Assign_counted_range@PEAV?$ComPtr@VInputSite@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAXPEAV?$ComPtr@VInputSite@@@WRL@Microsoft@@_K@Z @ 0x18002B580 (--$_Assign_counted_range@PEAV-$ComPtr@VInputSite@@@WRL@Microsoft@@@-$vector@V-$ComPtr@VInputSite.c)
 *     std::_Func_impl_no_alloc__lambda_269e715c3a16826785faf617fd4a94c4__void_InputContext___::_Do_call @ 0x1800804F0 (std--_Func_impl_no_alloc__lambda_269e715c3a16826785faf617fd4a94c4__void_InputContext___--_Do_cal.c)
 *     ?Initialize@CursorNotificationProcessor@@QEAAJPEAUICursorBroker@@@Z @ 0x1800851A0 (-Initialize@CursorNotificationProcessor@@QEAAJPEAUICursorBroker@@@Z.c)
 *     ?Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z @ 0x1800F210C (-Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_0b6054e39151cfdafdb4d4e01b2e9a55__void_InputContext___::_Do_call @ 0x1800F3B00 (std--_Func_impl_no_alloc__lambda_0b6054e39151cfdafdb4d4e01b2e9a55__void_InputContext___--_Do_cal.c)
 *     ?RuntimeClassInitialize@KeyboardOverriderDispatcher@@QEAAJAEAV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@@Z @ 0x1800F6364 (-RuntimeClassInitialize@KeyboardOverriderDispatcher@@QEAAJAEAV-$ComPtr@UIMessageSession@@@WRL@Mi.c)
 *     ?OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ @ 0x1800FFE4C (-OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ.c)
 *     ?Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCFocusTarget@@@Z @ 0x180100408 (-Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCFocusTarget@@@Z.c)
 *     ?CheckAndUpdateCursorOwnerForContext@CursorProcessor@@AEAA_NPEAVInputContext@@K@Z @ 0x18014A98C (-CheckAndUpdateCursorOwnerForContext@CursorProcessor@@AEAA_NPEAVInputContext@@K@Z.c)
 *     ?RuntimeClassInitialize@CursorProcessor@@QEAAJV?$ComPtr@UISystemInputRouter@@@WRL@Microsoft@@@Z @ 0x18014B28C (-RuntimeClassInitialize@CursorProcessor@@QEAAJV-$ComPtr@UISystemInputRouter@@@WRL@Microsoft@@@Z.c)
 *     ?GetDragManagerInputSite@DragNDropProcessor@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@UtagPOINT@@W4InputType@@PEAVBamoDragManagerClientProxy@@PEAUHitTestResult@@@Z @ 0x18014EBD8 (-GetDragManagerInputSite@DragNDropProcessor@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@UtagPOI.c)
 *     ?MakeContextualProcessingDecision@DragNDropProcessor@@AEAAXAEBV?$ComPtr@VManualDragAreaClientProxy@@@WRL@Microsoft@@KPEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18014F888 (-MakeContextualProcessingDecision@DragNDropProcessor@@AEAAXAEBV-$ComPtr@VManualDragAreaClientPro.c)
 *     ?SetupInteractionContext@DragNDropProcessor@@AEAAXKW4InputType@@PEAUHitTestResult@@UtagPOINT@@@Z @ 0x180150A20 (-SetupInteractionContext@DragNDropProcessor@@AEAAXKW4InputType@@PEAUHitTestResult@@UtagPOINT@@@Z.c)
 *     ?StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z @ 0x180150F14 (-StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?StartManualDrag@DragNDropProcessor@@QEAAXKPEAVBamoManualDragAreaClientProxy@@@Z @ 0x180151390 (-StartManualDrag@DragNDropProcessor@@QEAAXKPEAVBamoManualDragAreaClientProxy@@@Z.c)
 *     ?StartGestureRecognition@ResizeProcessor@@AEAAXPEAUHitTestResult@@K@Z @ 0x180155594 (-StartGestureRecognition@ResizeProcessor@@AEAAXPEAUHitTestResult@@K@Z.c)
 *     ?StartManualResize@ResizeProcessor@@QEAAJKW4InputResizeRegion@Input@Internal@UI@Windows@@PEAVBamoManualResizeAreaClientProxy@@@Z @ 0x180155724 (-StartManualResize@ResizeProcessor@@QEAAJKW4InputResizeRegion@Input@Internal@UI@Windows@@PEAVBam.c)
 *     ?StartResize@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z @ 0x1801559D0 (-StartResize@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z.c)
 *     ?StartGestureRecognition@EdgyProcessor@@AEAAXPEAUHitTestResult@@KUtagPOINT@@@Z @ 0x180158E78 (-StartGestureRecognition@EdgyProcessor@@AEAAXPEAUHitTestResult@@KUtagPOINT@@@Z.c)
 *     ??$MakeAndInitialize@VCursorSuppressionProcessor@@V1@PEAVDWMInputRouter@@@Details@WRL@Microsoft@@YAJPEAPEAVCursorSuppressionProcessor@@$$QEAPEAVDWMInputRouter@@@Z @ 0x1801A21A0 (--$MakeAndInitialize@VCursorSuppressionProcessor@@V1@PEAVDWMInputRouter@@@Details@WRL@Microsoft@.c)
 *     ?OnHitTest@InputForwardProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1801ABD20 (-OnHitTest@InputForwardProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcesso.c)
 *     ?OnInput@InputForwardProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801ABF10 (-OnInput@InputForwardProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRes.c)
 *     ?OnContextualInput@EdgyProcessorTarget@@QEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801AFF80 (-OnContextualInput@EdgyProcessorTarget@@QEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProc.c)
 *     ?UpdateInputTarget@EdgyProcessorTarget@@QEAAJUtagMsgRoutingInfo@@PEAXAEBUEdgyPointerInfo@@@Z @ 0x1801B0B24 (-UpdateInputTarget@EdgyProcessorTarget@@QEAAJUtagMsgRoutingInfo@@PEAXAEBUEdgyPointerInfo@@@Z.c)
 *     ?EnsureInputTargeting@EdgyImpl@@QEAAJPEAUContextualProcessorResponse@@@Z @ 0x1801B0FC4 (-EnsureInputTargeting@EdgyImpl@@QEAAJPEAUContextualProcessorResponse@@@Z.c)
 *     ?OnHitTest@MagnifierProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1801B2240 (-OnHitTest@MagnifierProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorIn.c)
 *     ?OnInput@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801B24F0 (-OnInput@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRespon.c)
 *     ?RuntimeClassInitialize@MagnifierGestureTarget@@QEAAJV?$ComPtr@VMagnifierControllerProxy@@@WRL@Microsoft@@V?$ComPtr@VInputSite@@@34@W4GestureType@1@@Z @ 0x1801B3590 (-RuntimeClassInitialize@MagnifierGestureTarget@@QEAAJV-$ComPtr@VMagnifierControllerProxy@@@WRL@M.c)
 *     ?RuntimeClassInitialize@MagnifierToggleTarget@@QEAAJV?$ComPtr@VMagnifierControllerProxy@@@WRL@Microsoft@@V?$ComPtr@VInputSite@@@34@@Z @ 0x1801B363C (-RuntimeClassInitialize@MagnifierToggleTarget@@QEAAJV-$ComPtr@VMagnifierControllerProxy@@@WRL@Mi.c)
 *     ?OnInputReport@GazeProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801BD350 (-OnInputReport@GazeProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall Microsoft::WRL::ComPtr<IMPCFocusTarget>::operator=(__int64 *a1, _QWORD *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx

  v3 = *a2;
  if ( *a1 != *a2 )
  {
    if ( v3 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 8LL))(*a2);
    v4 = *a1;
    *a1 = v3;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return a1;
}
