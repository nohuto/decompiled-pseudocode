/*
 * XREFs of ?DeliverMouseWheelToInputDest@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1400CE498
 * Callers:
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1401447E8 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 *     ?PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAXPEAU_mouseCursorEvent@@@Z @ 0x140224010 (-PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAXPEAU_mo.c)
 * Callees:
 *     ?GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x14006CD74 (-GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 *     ?IsCompositionInput@CInputDest@@QEBA_NXZ @ 0x1400CE2AC (-IsCompositionInput@CInputDest@@QEBA_NXZ.c)
 *     ?GetWheelMessage@CWheelEvent@CMouseProcessor@@QEBAKXZ @ 0x1400CE34C (-GetWheelMessage@CWheelEvent@CMouseProcessor@@QEBAKXZ.c)
 *     ApiSetEditionPostInputMessage @ 0x1400CE394 (ApiSetEditionPostInputMessage.c)
 *     ?BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z @ 0x1400CE60C (-BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z.c)
 *     ?UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ @ 0x1400CF714 (-UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void __fastcall CMouseProcessor::DeliverMouseWheelToInputDest(
        CMouseProcessor *this,
        const struct CMouseProcessor::CWheelEvent *a2,
        const struct CInputDest *a3,
        const struct CMouseProcessor::InputDeliveryContext *a4)
{
  struct tagWND *UserWindow; // rbx
  __int64 v8; // rbp
  bool v9; // al
  int v10; // r15d
  __int64 v11; // r12
  __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // r14
  CMouseProcessor::CWheelEvent *v15; // rcx
  unsigned int WheelMessage; // esi
  int v17; // [rsp+60h] [rbp-78h]
  __int64 v18; // [rsp+68h] [rbp-70h]
  _QWORD v19[3]; // [rsp+70h] [rbp-68h] BYREF
  __int64 v20; // [rsp+88h] [rbp-50h] BYREF
  int v21; // [rsp+90h] [rbp-48h]

  UserWindow = 0LL;
  if ( *(_DWORD *)a3 )
  {
    if ( !CMouseProcessor::BufferInputDestinedForContainer(this, a2, a3) )
    {
      v8 = *((_QWORD *)a2 + 1);
      v20 = *(_QWORD *)(v8 + 144);
      v21 = *(_DWORD *)(v8 + 152);
      v19[0] = v8;
      v9 = CMouseProcessor::CMouseEvent::UsingInjectorUIPI(a2);
      v10 = *((_DWORD *)a4 + 2);
      v19[2] = 0LL;
      v19[1] = (unsigned __int64)&v20 & -(__int64)v9;
      v11 = *(unsigned int *)(v8 + 40);
      v12 = *(_QWORD *)(v8 + 96);
      v17 = *(_DWORD *)(v8 + 88);
      v13 = *(_QWORD *)a4;
      v14 = (unsigned __int64)*((unsigned __int16 *)a2 + 16) << 16;
      v18 = v13;
      WheelMessage = CMouseProcessor::CWheelEvent::GetWheelMessage(v15);
      if ( CInputDest::IsCompositionInput(a3) )
        UserWindow = CInputDest::GetUserWindow(a3);
      ApiSetEditionPostInputMessage(
        (__int64)a3,
        (__int64)UserWindow,
        WheelMessage,
        v14,
        v18,
        v17,
        v12,
        v11,
        v10,
        (__int64 *)(v8 + 112),
        (__int64)v19);
    }
  }
  else
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4989LL);
  }
}
