/*
 * XREFs of _lambda_75452c5cb5e77a67412b4cfed81632b0_::__lambda_75452c5cb5e77a67412b4cfed81632b0_ @ 0x180468648
 * Callers:
 *     ?GetDefautInputAppIdAndContinue@TouchKeyboardExperienceManager@@AEAAJV?$function@$$A6AJPEBG@Z@std@@@Z @ 0x18001649C (-GetDefautInputAppIdAndContinue@TouchKeyboardExperienceManager@@AEAAJV-$function@$$A6AJPEBG@Z@st.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_75452c5cb5e77a67412b4cfed81632b0___::_CTaskWrapper__lambda_75452c5cb5e77a67412b4cfed81632b0___ @ 0x1804687B8 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_75452c5cb5e77a67412b4cfed81632b0___--_CTask.c)
 * Callees:
 *     ??1?$function@$$A6A_NAEBU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@Z@std@@QEAA@XZ @ 0x180016460 (--1-$function@$$A6A_NAEBU-$pair@V-$shared_ptr@VPinOperationContext@@@std@@V-$time_point@Usteady_.c)
 *     ??1GetDefautInputAppIdAndContinue@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x180016678 (--1GetDefautInputAppIdAndContinue@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_75452c5cb5e77a67412b4cfed81632b0_::__lambda_75452c5cb5e77a67412b4cfed81632b0_(
        __int64 *a1,
        __int64 a2)
{
  std::function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>::~function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>(
    (__int64)(a1 + 43),
    a2);
  TouchKeyboardExperienceTelemetryLogger::GetDefautInputAppIdAndContinue::~GetDefautInputAppIdAndContinue((TouchKeyboardExperienceTelemetryLogger::GetDefautInputAppIdAndContinue *)(a1 + 2));
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1);
}
