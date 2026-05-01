/*
 * XREFs of ?HandleDebounceTimeout@NavigationLevelHelper@LegacyUwpWindowWrapper@@AEAAXPEAU_TP_TIMER@@@Z @ 0x180441518
 * Callers:
 *     _lambda_e4ee1dff541502e2bea9ce73f0f3044a_::_lambda_invoker_cdecl_ @ 0x1804414D0 (_lambda_e4ee1dff541502e2bea9ce73f0f3044a_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?NavigateInternal@UwpWindowWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801A29A0 (-NavigateInternal@UwpWindowWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal.c)
 *     ?SetRelativeThreadpoolTimerInMilliseconds@ThreadpoolHelpers@@YAXPEAU_TP_TIMER@@_KKK@Z @ 0x1801FFD04 (-SetRelativeThreadpoolTimerInMilliseconds@ThreadpoolHelpers@@YAXPEAU_TP_TIMER@@_KKK@Z.c)
 *     ?GetNavigationLevel@NavigationLevelHelper@LegacyWindowWrapper@@QEBA?AW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@XZ @ 0x180434920 (-GetNavigationLevel@NavigationLevelHelper@LegacyWindowWrapper@@QEBA-AW4NavigationLevel@ViewManag.c)
 *     ?GetDebounceDurationInMilliseconds@NavigationLevelHelper@LegacyUwpWindowWrapper@@AEBAKXZ @ 0x1804414E4 (-GetDebounceDurationInMilliseconds@NavigationLevelHelper@LegacyUwpWindowWrapper@@AEBAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall LegacyUwpWindowWrapper::NavigationLevelHelper::HandleDebounceTimeout(
        LegacyUwpWindowWrapper::NavigationLevelHelper *this,
        struct _TP_TIMER *a2)
{
  int v4; // edx
  unsigned int DebounceDurationInMilliseconds; // eax
  unsigned int NavigationLevel; // eax
  unsigned int v7[4]; // [rsp+20h] [rbp-38h]
  __m128i si128; // [rsp+30h] [rbp-28h]
  __m128i v9; // [rsp+40h] [rbp-18h]
  RTL_SRWLOCK *v10; // [rsp+60h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)this - 42) + 208LL))(*((_QWORD *)this - 42), &v10);
  if ( !IsThreadpoolTimerSet(*((PTP_TIMER *)this + 1)) )
    goto LABEL_9;
  *(__m128i *)v7 = _mm_load_si128((const __m128i *)&_xmm);
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v9 = _mm_load_si128((const __m128i *)&_xmm);
  v4 = v7[2 * *(unsigned int *)this + 1];
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
    DebounceDurationInMilliseconds = LegacyUwpWindowWrapper::NavigationLevelHelper::GetDebounceDurationInMilliseconds(this);
    ThreadpoolHelpers::SetRelativeThreadpoolTimerInMilliseconds(
      a2,
      (struct _TP_TIMER *)DebounceDurationInMilliseconds,
      0);
  }
LABEL_7:
  if ( *((_DWORD *)this - 66) )
  {
    NavigationLevel = LegacyWindowWrapper::NavigationLevelHelper::GetNavigationLevel((unsigned int *)this);
    UwpWindowWrapperBase::NavigateInternal((__int64)this - 616, NavigationLevel);
  }
LABEL_9:
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v10);
}
