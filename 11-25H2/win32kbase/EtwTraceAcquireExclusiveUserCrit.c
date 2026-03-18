/*
 * XREFs of EtwTraceAcquireExclusiveUserCrit @ 0x14003CDD0
 * Callers:
 *     EnterSharedCrit @ 0x14008A250 (EnterSharedCrit.c)
 *     _lambda_458e1681217b8f4af03ab89c30ee8cb2_::_lambda_invoker_cdecl_ @ 0x1401ABF20 (_lambda_458e1681217b8f4af03ab89c30ee8cb2_--_lambda_invoker_cdecl_.c)
 *     ?_lambda_invoker_cdecl_@_lambda_63b61c2369133a205197eda5bd671ee7_@@CAXPEAU_FAST_ERESOURCE@@PEAU_W32THREADNONPAGED@@@Z @ 0x1401ABF70 (-_lambda_invoker_cdecl_@_lambda_63b61c2369133a205197eda5bd671ee7_@@CAXPEAU_FAST_ERESOURCE@@PEAU_.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 * Callees:
 *     ?getInstance@UserCritTelemetry@@SAPEAV1@XZ @ 0x14003D960 (-getInstance@UserCritTelemetry@@SAPEAV1@XZ.c)
 *     W32GetCurrentThreadNonPaged @ 0x1401A595C (W32GetCurrentThreadNonPaged.c)
 */

void EtwTraceAcquireExclusiveUserCrit()
{
  LARGE_INTEGER *CurrentThreadNonPaged; // rbx

  if ( dword_14029EF38
    && (qword_14029EF48 & 0x400000000000LL) != 0
    && (qword_14029EF50 & 0x400000000000LL) == qword_14029EF50
    || (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0
    && (unsigned __int8)(byte_14029EDB8 - 1) > 2u
    && (qword_14029EDA0 & 0x8000002010000000uLL) != 0
    && (qword_14029EDA8 & 0x8000002010000000uLL) == qword_14029EDA8
    || (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
    && (unsigned __int8)(byte_14029EDB8 - 1) > 2u
    && (qword_14029EDA0 & 0x200000010000000LL) != 0
    && (qword_14029EDA8 & 0x200000010000000LL) == qword_14029EDA8 )
  {
    if ( UserCritTelemetry::getInstance() )
    {
      CurrentThreadNonPaged = (LARGE_INTEGER *)W32GetCurrentThreadNonPaged();
      if ( CurrentThreadNonPaged )
        CurrentThreadNonPaged[1] = KeQueryPerformanceCounter(0LL);
    }
  }
}
