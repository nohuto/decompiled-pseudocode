/*
 * XREFs of ?HandleDebounceTimeout@NavigationLevelHelper@LegacyWindowWrapper@@AEAAXPEAU_TP_TIMER@@@Z @ 0x180434980
 * Callers:
 *     _lambda_6865f0ce4c3ba0d4b075ec8356cef312_::_lambda_invoker_cdecl_ @ 0x180434880 (_lambda_6865f0ce4c3ba0d4b075ec8356cef312_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?SetRelativeThreadpoolTimerInMilliseconds@ThreadpoolHelpers@@YAXPEAU_TP_TIMER@@_KKK@Z @ 0x1801FFD04 (-SetRelativeThreadpoolTimerInMilliseconds@ThreadpoolHelpers@@YAXPEAU_TP_TIMER@@_KKK@Z.c)
 *     ?GetDebounceDurationInMilliseconds@NavigationLevelHelper@LegacyWindowWrapper@@AEBAKXZ @ 0x1804348EC (-GetDebounceDurationInMilliseconds@NavigationLevelHelper@LegacyWindowWrapper@@AEBAKXZ.c)
 *     ?GetNavigationLevel@NavigationLevelHelper@LegacyWindowWrapper@@QEBA?AW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@XZ @ 0x180434920 (-GetNavigationLevel@NavigationLevelHelper@LegacyWindowWrapper@@QEBA-AW4NavigationLevel@ViewManag.c)
 *     ?NavigateInternal@WindowWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18043CC58 (-NavigateInternal@WindowWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Wi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall LegacyWindowWrapper::NavigationLevelHelper::HandleDebounceTimeout(
        LegacyWindowWrapper::NavigationLevelHelper *this,
        struct _TP_TIMER *a2)
{
  int v4; // edx
  unsigned int DebounceDurationInMilliseconds; // eax
  unsigned int NavigationLevel; // eax
  unsigned int v7[4]; // [rsp+20h] [rbp-38h]
  __m128i si128; // [rsp+30h] [rbp-28h]
  __m128i v9; // [rsp+40h] [rbp-18h]
  RTL_SRWLOCK *v10; // [rsp+60h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)this - 43) + 200LL))(*((_QWORD *)this - 43), &v10);
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
    DebounceDurationInMilliseconds = LegacyWindowWrapper::NavigationLevelHelper::GetDebounceDurationInMilliseconds(this);
    ThreadpoolHelpers::SetRelativeThreadpoolTimerInMilliseconds(
      a2,
      (struct _TP_TIMER *)DebounceDurationInMilliseconds,
      0);
  }
LABEL_7:
  if ( *((_DWORD *)this - 68) )
  {
    NavigationLevel = LegacyWindowWrapper::NavigationLevelHelper::GetNavigationLevel((unsigned int *)this);
    WindowWrapperBase::NavigateInternal((char *)this - 624, NavigationLevel);
  }
LABEL_9:
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v10);
}
