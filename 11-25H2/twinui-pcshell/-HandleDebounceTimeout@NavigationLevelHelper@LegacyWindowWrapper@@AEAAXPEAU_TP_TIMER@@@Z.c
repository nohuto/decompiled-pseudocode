/*
 * XREFs of ?HandleDebounceTimeout@NavigationLevelHelper@LegacyWindowWrapper@@AEAAXPEAU_TP_TIMER@@@Z @ 0x180428B20
 * Callers:
 *     _lambda_6865f0ce4c3ba0d4b075ec8356cef312_::_lambda_invoker_cdecl_ @ 0x1804289A0 (_lambda_6865f0ce4c3ba0d4b075ec8356cef312_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?SetRelativeThreadpoolTimerInMilliseconds@ThreadpoolHelpers@@YAXPEAU_TP_TIMER@@_KKK@Z @ 0x18020CCB4 (-SetRelativeThreadpoolTimerInMilliseconds@ThreadpoolHelpers@@YAXPEAU_TP_TIMER@@_KKK@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?GetDebounceDurationInMilliseconds@NavigationLevelHelper@LegacyWindowWrapper@@AEBAKXZ @ 0x180428A0C (-GetDebounceDurationInMilliseconds@NavigationLevelHelper@LegacyWindowWrapper@@AEBAKXZ.c)
 *     ?GetNavigationLevel@NavigationLevelHelper@LegacyWindowWrapper@@QEBA?AW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@XZ @ 0x180428A40 (-GetNavigationLevel@NavigationLevelHelper@LegacyWindowWrapper@@QEBA-AW4NavigationLevel@ViewManag.c)
 *     ?NavigateInternal@WindowWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1804308F8 (-NavigateInternal@WindowWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Wi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall LegacyWindowWrapper::NavigationLevelHelper::HandleDebounceTimeout(
        LegacyWindowWrapper::NavigationLevelHelper *this,
        struct _TP_TIMER *a2)
{
  int v4; // edx
  unsigned int DebounceDurationInMilliseconds; // eax
  unsigned int NavigationLevel; // eax
  RTL_SRWLOCK *v7; // [rsp+20h] [rbp-48h] BYREF
  _OWORD v8[3]; // [rsp+28h] [rbp-40h]

  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)this - 45) + 200LL))(*((_QWORD *)this - 45), &v7);
  if ( !IsThreadpoolTimerSet(*((PTP_TIMER *)this + 1)) )
    goto LABEL_9;
  v8[0] = _mm_load_si128((const __m128i *)&_xmm);
  v8[1] = _mm_load_si128((const __m128i *)&_xmm);
  v8[2] = _mm_load_si128((const __m128i *)&_xmm);
  v4 = *((_DWORD *)v8 + 2 * *(unsigned int *)this + 1);
  if ( *((_DWORD *)this + 1) == 1 )
    goto LABEL_6;
  if ( *((_DWORD *)this + 1) != 2 )
    goto LABEL_7;
  if ( v4 >= 1 )
  {
LABEL_6:
    *((_DWORD *)this + 1) = v4;
    SetThreadpoolTimer(*((PTP_TIMER *)this + 1), 0LL, 0, 0);
  }
  else
  {
    *((_DWORD *)this + 1) = 1;
    DebounceDurationInMilliseconds = LegacyWindowWrapper::NavigationLevelHelper::GetDebounceDurationInMilliseconds(this);
    ThreadpoolHelpers::SetRelativeThreadpoolTimerInMilliseconds(
      a2,
      (struct _TP_TIMER *)DebounceDurationInMilliseconds,
      0);
  }
LABEL_7:
  if ( *((_DWORD *)this - 72) )
  {
    NavigationLevel = LegacyWindowWrapper::NavigationLevelHelper::GetNavigationLevel((unsigned int *)this);
    WindowWrapperBase::NavigateInternal((char *)this - 640, NavigationLevel);
  }
LABEL_9:
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v7);
}
