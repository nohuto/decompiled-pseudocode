/*
 * XREFs of ??1GetDefautInputAppIdAndContinue@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x180016678
 * Callers:
 *     ?GetDefautInputAppIdAndContinue@TouchKeyboardExperienceManager@@AEAAJV?$function@$$A6AJPEBG@Z@std@@@Z @ 0x18001649C (-GetDefautInputAppIdAndContinue@TouchKeyboardExperienceManager@@AEAAJV-$function@$$A6AJPEBG@Z@st.c)
 *     _lambda_75452c5cb5e77a67412b4cfed81632b0_::__lambda_75452c5cb5e77a67412b4cfed81632b0_ @ 0x180468648 (_lambda_75452c5cb5e77a67412b4cfed81632b0_--__lambda_75452c5cb5e77a67412b4cfed81632b0_.c)
 *     _TouchKeyboardExperienceManager::GetDefautInputAppIdAndContinue_::_1_::dtor$1 @ 0x1806CCD00 (_TouchKeyboardExperienceManager--GetDefautInputAppIdAndContinue_--_1_--dtor$1.c)
 *     __lambda_75452c5cb5e77a67412b4cfed81632b0_::_lambda_75452c5cb5e77a67412b4cfed81632b0__::_1_::dtor$1 @ 0x1806EE8EB (__lambda_75452c5cb5e77a67412b4cfed81632b0_--_lambda_75452c5cb5e77a67412b4cfed81632b0__--_1_--dto.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800166D0 (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_P.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::GetDefautInputAppIdAndContinue::~GetDefautInputAppIdAndContinue(
        TouchKeyboardExperienceTelemetryLogger::GetDefautInputAppIdAndContinue *this)
{
  *(_QWORD *)this = &TouchKeyboardExperienceTelemetryLogger::GetDefautInputAppIdAndContinue::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(this);
}
