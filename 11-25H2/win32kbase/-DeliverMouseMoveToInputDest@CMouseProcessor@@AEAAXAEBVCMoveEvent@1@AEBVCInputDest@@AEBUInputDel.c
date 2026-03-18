/*
 * XREFs of ?DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@PEAU_mouseCursorEvent@@@Z @ 0x1400380D4
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x140036A78 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAXPEAU_mouseCursorEvent@@@Z @ 0x1402215DC (-PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAXPEAU_mo.c)
 * Callees:
 *     ?UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14003B130 (-UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAG.c)
 *     ?BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z @ 0x14005F048 (-BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z.c)
 *     ?DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z @ 0x1400B9628 (-DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z.c)
 *     ?OnBackgroundMouseInput@Telemetry@CMouseProcessor@@SAXAEBVCInputDest@@@Z @ 0x1400B988C (-OnBackgroundMouseInput@Telemetry@CMouseProcessor@@SAXAEBVCInputDest@@@Z.c)
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@PEAU_mouseCursorEvent@@@Z @ 0x14018FD48 (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall CMouseProcessor::DeliverMouseMoveToInputDest(
        CMouseProcessor *this,
        const struct CMouseProcessor::CMoveEvent *a2,
        const struct CInputDest *a3,
        struct tagPOINT *a4,
        struct _mouseCursorEvent *a5)
{
  int (*v9)(void); // rax
  void (*v10)(void); // rax
  int (*v11)(void); // rax
  void (*v12)(void); // rax

  if ( !*(_DWORD *)a3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5376LL);
  if ( !CMouseProcessor::BufferInputDestinedForContainer(this, a2, a3) )
  {
    if ( !(unsigned __int8)CInputDest::DoesBelongToForeground(a3, 0LL) )
      CMouseProcessor::Telemetry::OnBackgroundMouseInput(a3);
    v9 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 5048LL);
    if ( v9 )
    {
      if ( v9() >= 0 )
      {
        v10 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 5056LL);
        if ( v10 )
          v10();
      }
    }
    CMouseProcessor::UpdateGlobalCursorOwner(
      this,
      a3,
      a4,
      (const struct tagINPUT_MESSAGE_SOURCE *)(*((_QWORD *)a2 + 1) + 112LL));
    CMouseProcessor::DetectAndApplyMouseMovePostStrategy(this, a3, (const struct tagLOGICALPOINT *)&a4[1], a2, a5);
    v11 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 5064LL);
    if ( v11 && v11() >= 0 )
    {
      v12 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 5072LL);
      if ( v12 )
        v12();
    }
  }
}
