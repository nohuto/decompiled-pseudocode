/*
 * XREFs of ??1OnPreloadInputAppActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18020F160
 * Callers:
 *     _lambda_07c09ec2b66b1cd0a67fc9fd25c7941f_::__lambda_07c09ec2b66b1cd0a67fc9fd25c7941f_ @ 0x1804685C8 (_lambda_07c09ec2b66b1cd0a67fc9fd25c7941f_--__lambda_07c09ec2b66b1cd0a67fc9fd25c7941f_.c)
 *     ?PreloadInputApp@TouchKeyboardExperienceManager@@QEAAXXZ @ 0x18046F438 (-PreloadInputApp@TouchKeyboardExperienceManager@@QEAAXXZ.c)
 *     _TouchKeyboardExperienceManager::PreloadInputApp_::_1_::dtor$0 @ 0x1806EF2C4 (_TouchKeyboardExperienceManager--PreloadInputApp_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800BE54C (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflector.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity::~OnPreloadInputAppActivity(
        TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity *this)
{
  *(_QWORD *)this = &TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
