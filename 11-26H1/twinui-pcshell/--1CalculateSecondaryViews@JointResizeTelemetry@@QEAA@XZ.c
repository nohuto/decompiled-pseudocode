/*
 * XREFs of ??1CalculateSecondaryViews@JointResizeTelemetry@@QEAA@XZ @ 0x180079CD8
 * Callers:
 *     ?CalculateSecondaryViews@JointResize@@AEAAJXZ @ 0x1800794C0 (-CalculateSecondaryViews@JointResize@@AEAAJXZ.c)
 *     _JointResize::CalculateSecondaryViews_::_1_::dtor$0 @ 0x1806D0998 (_JointResize--CalculateSecondaryViews_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180079D04 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0I.c)
 */

void __fastcall JointResizeTelemetry::CalculateSecondaryViews::~CalculateSecondaryViews(
        JointResizeTelemetry::CalculateSecondaryViews *this)
{
  *(_QWORD *)this = &JointResizeTelemetry::CalculateSecondaryViews::`vftable';
  wil::ActivityBase<WindowManagementLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<WindowManagementLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
