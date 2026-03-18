/*
 * XREFs of ?DeliverMouseWheelToInputDest@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x14021FF1C
 * Callers:
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1400B89EC (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 *     ?PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAXPEAU_mouseCursorEvent@@@Z @ 0x1402215DC (-PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAXPEAU_mo.c)
 * Callees:
 *     ?BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z @ 0x14005F048 (-BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z.c)
 *     ?IsCompositionInput@CInputDest@@QEBA_NXZ @ 0x1400B9B64 (-IsCompositionInput@CInputDest@@QEBA_NXZ.c)
 *     ?GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x1400B9D78 (-GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 *     ?UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ @ 0x1400BA388 (-UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ.c)
 *     ApiSetEditionPostInputMessage @ 0x140196610 (ApiSetEditionPostInputMessage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetWheelMessage@CWheelEvent@CMouseProcessor@@QEBAKXZ @ 0x1402209B0 (-GetWheelMessage@CWheelEvent@CMouseProcessor@@QEBAKXZ.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

void __fastcall CMouseProcessor::DeliverMouseWheelToInputDest(
        CMouseProcessor *this,
        const struct CMouseProcessor::CWheelEvent *a2,
        const struct CInputDest *a3,
        const struct CMouseProcessor::InputDeliveryContext *a4)
{
  struct tagWND *UserWindow; // rbx
  __int64 v8; // r8
  char v9; // al
  __int64 v10; // rbp
  __int64 v11; // r8
  __int64 *v12; // r15
  int v13; // r12d
  __int64 v14; // r14
  __int64 v15; // rbp
  __int64 v16; // r13
  CMouseProcessor::CWheelEvent *v17; // rcx
  unsigned int WheelMessage; // esi
  int v19; // [rsp+60h] [rbp-78h]
  __int64 v20; // [rsp+68h] [rbp-70h]
  _QWORD v21[3]; // [rsp+70h] [rbp-68h] BYREF
  __int64 v22; // [rsp+88h] [rbp-50h] BYREF
  int v23; // [rsp+90h] [rbp-48h]

  UserWindow = 0LL;
  if ( *(_DWORD *)a3 )
  {
    if ( !CMouseProcessor::BufferInputDestinedForContainer(this, a2, a3) )
    {
      v8 = *((_QWORD *)a2 + 1);
      v22 = *(_QWORD *)(v8 + 144);
      v23 = *(_DWORD *)(v8 + 152);
      v21[0] = v8;
      v9 = CMouseProcessor::CMouseEvent::UsingInjectorUIPI(a2);
      v10 = *((unsigned __int16 *)a2 + 16);
      v12 = (__int64 *)(v11 + 112);
      v13 = *((_DWORD *)a4 + 2);
      v14 = *(_QWORD *)a4;
      v21[2] = 0LL;
      v15 = v10 << 16;
      v21[1] = (unsigned __int64)&v22 & -(__int64)(v9 != 0);
      v16 = *(unsigned int *)(v11 + 40);
      v20 = *(_QWORD *)(v11 + 96);
      v19 = *(_DWORD *)(v11 + 88);
      WheelMessage = CMouseProcessor::CWheelEvent::GetWheelMessage(v17);
      if ( CInputDest::IsCompositionInput(a3) )
        UserWindow = CInputDest::GetUserWindow(a3);
      ApiSetEditionPostInputMessage(
        (__int64)a3,
        (__int64)UserWindow,
        WheelMessage,
        v15,
        v14,
        v19,
        v20,
        v16,
        v13,
        v12,
        (__int64)v21);
    }
  }
  else
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4978);
  }
}
