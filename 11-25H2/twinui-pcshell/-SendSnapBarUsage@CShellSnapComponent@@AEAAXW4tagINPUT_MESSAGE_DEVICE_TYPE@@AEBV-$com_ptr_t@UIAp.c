/*
 * XREFs of ?SendSnapBarUsage@CShellSnapComponent@@AEAAXW4tagINPUT_MESSAGE_DEVICE_TYPE@@AEBV?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@AEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x18057DB60
 * Callers:
 *     ?OnWindowArrangementEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@AEBUWindowArrangementEventArgs@3456@@Z @ 0x18057CA40 (-OnWindowArrangementEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagemen.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1804E987C (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0BAAAAAA@U_TlgReflectorTag_.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180579654 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Par.c)
 *     ??1DragToSnapBar@CSnapComponentTelemetry@@QEAA@XZ @ 0x18057A3E8 (--1DragToSnapBar@CSnapComponentTelemetry@@QEAA@XZ.c)
 *     ?IsSuggestionSnapped@DragToSnapBar@CSnapComponentTelemetry@@QEAAX_N@Z @ 0x18057C610 (-IsSuggestionSnapped@DragToSnapBar@CSnapComponentTelemetry@@QEAAX_N@Z.c)
 *     ?SnapRegion@DragToSnapBar@CSnapComponentTelemetry@@QEAAXUtagRECT@@@Z @ 0x18057DECC (-SnapRegion@DragToSnapBar@CSnapComponentTelemetry@@QEAAXUtagRECT@@@Z.c)
 *     ?StartActivity@DragToSnapBar@CSnapComponentTelemetry@@QEAAXKUtagRECT@@I@Z @ 0x18057E37C (-StartActivity@DragToSnapBar@CSnapComponentTelemetry@@QEAAXKUtagRECT@@I@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CShellSnapComponent::SendSnapBarUsage(__int64 a1, unsigned int a2, _QWORD *a3, struct tagRECT **a4)
{
  __int64 v6; // rbx
  struct tagRECT *v7; // rdi
  struct tagRECT *i; // rbx
  struct tagRECT v9; // [rsp+20h] [rbp-E0h] BYREF
  struct tagRECT v10; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v11[42]; // [rsp+40h] [rbp-C0h] BYREF

  v10 = 0LL;
  (*(void (__fastcall **)(_QWORD, struct tagRECT *))(*(_QWORD *)*a3 + 128LL))(*a3, &v10);
  v6 = a4[1] - *a4;
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v11);
  v11[0] = (__int64)&CSnapComponentTelemetry::DragToSnapBar::`vftable';
  v9 = v10;
  CSnapComponentTelemetry::DragToSnapBar::StartActivity((CSnapComponentTelemetry::DragToSnapBar *)v11, a2, &v9, v6);
  v7 = a4[1];
  for ( i = *a4; i != v7; ++i )
  {
    v9 = *i;
    CSnapComponentTelemetry::DragToSnapBar::SnapRegion((CSnapComponentTelemetry::DragToSnapBar *)v11, &v9);
  }
  CSnapComponentTelemetry::DragToSnapBar::IsSuggestionSnapped((CSnapComponentTelemetry::DragToSnapBar *)v11, 0);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,4,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v11);
  CSnapComponentTelemetry::DragToSnapBar::~DragToSnapBar((CSnapComponentTelemetry::DragToSnapBar *)v11);
}
