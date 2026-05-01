/*
 * XREFs of ??1ApplyLayoutOperationHelper@TabletModeTraceLogging@@QEAA@XZ @ 0x180515344
 * Callers:
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x180515B74 (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 *     _TabletModePositioner::ApplyLayoutOperationHelper_::_1_::dtor$3 @ 0x1806F35DB (_TabletModePositioner--ApplyLayoutOperationHelper_--_1_--dtor$3.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18006F0C8 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 */

void __fastcall TabletModeTraceLogging::ApplyLayoutOperationHelper::~ApplyLayoutOperationHelper(
        TabletModeTraceLogging::ApplyLayoutOperationHelper *this)
{
  *(_QWORD *)this = &TabletModeTraceLogging::ApplyLayoutOperationHelper::`vftable';
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
