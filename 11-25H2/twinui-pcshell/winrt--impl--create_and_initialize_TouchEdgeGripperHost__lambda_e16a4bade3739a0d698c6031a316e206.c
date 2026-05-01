/*
 * XREFs of winrt::impl::create_and_initialize_TouchEdgeGripperHost__lambda_e16a4bade3739a0d698c6031a316e206___lambda_a4da1f0f89255fbad3a15aa44999bedc___ @ 0x1800FA984
 * Callers:
 *     ?DelayInitialize@TouchEdgeGestureManager@@QEAAXXZ @ 0x1800FB118 (-DelayInitialize@TouchEdgeGestureManager@@QEAAXXZ.c)
 * Callees:
 *     ??1?$function@$$A6A_NAEBU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@Z@std@@QEAA@XZ @ 0x180071F24 (--1-$function@$$A6A_NAEBU-$pair@V-$shared_ptr@VPinOperationContext@@@std@@V-$time_point@Usteady_.c)
 *     ??0TouchEdgeGripperHost@@QEAA@AEBV?$function@$$A6AXIAEBUPoint@Foundation@Windows@winrt@@@Z@std@@AEBV?$function@$$A6AXXZ@2@@Z @ 0x1800FAA60 (--0TouchEdgeGripperHost@@QEAA@AEBV-$function@$$A6AXIAEBUPoint@Foundation@Windows@winrt@@@Z@std@@.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall winrt::impl::create_and_initialize_TouchEdgeGripperHost__lambda_e16a4bade3739a0d698c6031a316e206___lambda_a4da1f0f89255fbad3a15aa44999bedc___(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rdx
  _QWORD *v7; // [rsp+30h] [rbp-41h]
  _QWORD v8[8]; // [rsp+38h] [rbp-39h] BYREF
  _QWORD v9[8]; // [rsp+78h] [rbp+7h] BYREF

  v7 = operator new(0x100uLL);
  v9[0] = off_1806FB9B0;
  v9[1] = *a2;
  v9[7] = v9;
  v8[0] = off_1806EF838;
  v8[1] = *a1;
  v8[7] = v8;
  TouchEdgeGripperHost::TouchEdgeGripperHost(v7, v8, v9);
  *v7 = &winrt::impl::heap_implements<TouchEdgeGripperHost>::`vftable';
  std::function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>::~function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>(
    (__int64)v8,
    v4);
  std::function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>::~function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>(
    (__int64)v9,
    v5);
  return v7;
}
