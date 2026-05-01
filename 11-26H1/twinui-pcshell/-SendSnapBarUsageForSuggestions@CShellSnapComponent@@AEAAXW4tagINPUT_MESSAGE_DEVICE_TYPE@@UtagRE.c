/*
 * XREFs of ?SendSnapBarUsageForSuggestions@CShellSnapComponent@@AEAAXW4tagINPUT_MESSAGE_DEVICE_TYPE@@UtagRECT@@AEBV?$vector@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@V?$allocator@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@@std@@@std@@@Z @ 0x1805A171C
 * Callers:
 *     ?OnWindowArrangementEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@AEBUWindowArrangementEventArgs@3456@@Z @ 0x1805A0510 (-OnWindowArrangementEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagemen.c)
 * Callees:
 *     ?WindowPosition@?$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult@UIWindowDragHitTestResult@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18023A2D4 (-WindowPosition@-$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult@UIWindowDragHitTestResult.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18059CD7C (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Par.c)
 *     ??1DragToSnapBar@CSnapComponentTelemetry@@QEAA@XZ @ 0x18059DB78 (--1DragToSnapBar@CSnapComponentTelemetry@@QEAA@XZ.c)
 *     ?IsSuggestionSnapped@DragToSnapBar@CSnapComponentTelemetry@@QEAAX_N@Z @ 0x18059FDE0 (-IsSuggestionSnapped@DragToSnapBar@CSnapComponentTelemetry@@QEAAX_N@Z.c)
 *     ?SnapRegion@DragToSnapBar@CSnapComponentTelemetry@@QEAAXUtagRECT@@@Z @ 0x1805A198C (-SnapRegion@DragToSnapBar@CSnapComponentTelemetry@@QEAAXUtagRECT@@@Z.c)
 *     ?StartActivity@DragToSnapBar@CSnapComponentTelemetry@@QEAAXKUtagRECT@@I@Z @ 0x1805A1E3C (-StartActivity@DragToSnapBar@CSnapComponentTelemetry@@QEAAXKUtagRECT@@I@Z.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1805A228C (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CShellSnapComponent::SendSnapBarUsageForSuggestions(
        __int64 a1,
        unsigned int a2,
        struct tagRECT *a3,
        __int64 **a4)
{
  __int64 v7; // rbx
  __int64 *v8; // rdi
  __int64 *i; // rbx
  float *v10; // rax
  float v11; // xmm1_4
  float v12; // xmm0_4
  struct tagRECT v13; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v14; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v15[42]; // [rsp+40h] [rbp-C0h] BYREF

  v7 = a4[1] - *a4;
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v15);
  v15[0] = &CSnapComponentTelemetry::DragToSnapBar::`vftable';
  v13 = *a3;
  CSnapComponentTelemetry::DragToSnapBar::StartActivity((CSnapComponentTelemetry::DragToSnapBar *)v15, a2, &v13, v7);
  v8 = a4[1];
  for ( i = *a4; i != v8; ++i )
  {
    v10 = (float *)winrt::impl::consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult<winrt::WindowsUdk::UI::Shell::IWindowDragHitTestResult>::WindowPosition(
                     i,
                     &v14);
    v11 = v10[1];
    v12 = *v10;
    v13.left = (int)*v10;
    v13.top = (int)v11;
    v13.right = (int)(float)(v12 + v10[2]);
    v13.bottom = (int)(float)(v11 + v10[3]);
    CSnapComponentTelemetry::DragToSnapBar::SnapRegion((CSnapComponentTelemetry::DragToSnapBar *)v15, &v13);
  }
  CSnapComponentTelemetry::DragToSnapBar::IsSuggestionSnapped((CSnapComponentTelemetry::DragToSnapBar *)v15);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Stop(v15);
  CSnapComponentTelemetry::DragToSnapBar::~DragToSnapBar((CSnapComponentTelemetry::DragToSnapBar *)v15);
}
