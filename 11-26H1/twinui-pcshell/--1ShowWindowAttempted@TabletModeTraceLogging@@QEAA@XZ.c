/*
 * XREFs of ??1ShowWindowAttempted@TabletModeTraceLogging@@QEAA@XZ @ 0x1805153D8
 * Callers:
 *     ?ShowWindowAttempted@TabletModePositioner@@UEAAXPEAUHWND__@@IPEAK@Z @ 0x18051B320 (-ShowWindowAttempted@TabletModePositioner@@UEAAXPEAUHWND__@@IPEAK@Z.c)
 *     _TabletModePositioner::ShowWindowAttempted_::_1_::dtor$2 @ 0x1806F36A1 (_TabletModePositioner--ShowWindowAttempted_--_1_--dtor$2.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18006F0C8 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 */

void __fastcall TabletModeTraceLogging::ShowWindowAttempted::~ShowWindowAttempted(
        TabletModeTraceLogging::ShowWindowAttempted *this)
{
  *(_QWORD *)this = &TabletModeTraceLogging::ShowWindowAttempted::`vftable';
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
