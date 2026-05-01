/*
 * XREFs of ??1ProcessView@CSnapComponentTelemetry@@QEAA@XZ @ 0x18006E550
 * Callers:
 *     ?_EnumSnappedWindows@CSnappedWindowModel@@AEAAJW4SnappedWindowOcclusionModel@@AEBV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x18006E57C (-_EnumSnappedWindows@CSnappedWindowModel@@AEAAJW4SnappedWindowOcclusionModel@@AEBV-$deque@UtagRE.c)
 *     _CSnappedWindowModel::_EnumSnappedWindows_::_1_::dtor$7 @ 0x1806D079A (_CSnappedWindowModel--_EnumSnappedWindows_--_1_--dtor$7.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18006F0C8 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 */

void __fastcall CSnapComponentTelemetry::ProcessView::~ProcessView(CSnapComponentTelemetry::ProcessView *this)
{
  *(_QWORD *)this = &CSnapComponentTelemetry::ProcessView::`vftable';
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(this);
}
