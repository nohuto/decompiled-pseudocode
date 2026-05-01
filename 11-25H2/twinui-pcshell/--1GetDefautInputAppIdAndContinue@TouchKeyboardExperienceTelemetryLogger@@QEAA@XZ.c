/*
 * XREFs of ??1GetDefautInputAppIdAndContinue@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18014ECF0
 * Callers:
 *     ?GetDefautInputAppIdAndContinue@TouchKeyboardExperienceManager@@AEAAJV?$function@$$A6AJPEBG@Z@std@@@Z @ 0x18014EB20 (-GetDefautInputAppIdAndContinue@TouchKeyboardExperienceManager@@AEAAJV-$function@$$A6AJPEBG@Z@st.c)
 *     _lambda_6fd8c80f4e8205d0daf1b865183c59df_::__lambda_6fd8c80f4e8205d0daf1b865183c59df_ @ 0x18045C280 (_lambda_6fd8c80f4e8205d0daf1b865183c59df_--__lambda_6fd8c80f4e8205d0daf1b865183c59df_.c)
 *     _TouchKeyboardExperienceManager::GetDefautInputAppIdAndContinue_::_1_::dtor$1 @ 0x1806AEF5B (_TouchKeyboardExperienceManager--GetDefautInputAppIdAndContinue_--_1_--dtor$1.c)
 *     __lambda_6fd8c80f4e8205d0daf1b865183c59df_::_lambda_6fd8c80f4e8205d0daf1b865183c59df__::_1_::dtor$1 @ 0x1806C6BCC (__lambda_6fd8c80f4e8205d0daf1b865183c59df_--_lambda_6fd8c80f4e8205d0daf1b865183c59df__--_1_--dto.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18014ED48 (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_P.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::GetDefautInputAppIdAndContinue::~GetDefautInputAppIdAndContinue(
        TouchKeyboardExperienceTelemetryLogger::GetDefautInputAppIdAndContinue *this)
{
  *(_QWORD *)this = &TouchKeyboardExperienceTelemetryLogger::GetDefautInputAppIdAndContinue::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(this);
}
