/*
 * XREFs of ?SetDesiredNavigationLevel@NavigationLevelHelper@LegacyUwpWindowWrapper@@QEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1804352C0
 * Callers:
 *     ?v_SetDesiredNavigationLevel@LegacyUwpWindowWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180427B90 (-v_SetDesiredNavigationLevel@LegacyUwpWindowWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@S.c)
 * Callees:
 *     ?NavigateInternal@UwpWindowWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801AAE90 (-NavigateInternal@UwpWindowWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal.c)
 *     ?SetRelativeThreadpoolTimerInMilliseconds@ThreadpoolHelpers@@YAXPEAU_TP_TIMER@@_KKK@Z @ 0x18020CCB4 (-SetRelativeThreadpoolTimerInMilliseconds@ThreadpoolHelpers@@YAXPEAU_TP_TIMER@@_KKK@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1802C8C48 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?SendVisibilityToWindow@LegacyUwpWindowWrapper@@AEAAXW4Visibility@@@Z @ 0x1804278CC (-SendVisibilityToWindow@LegacyUwpWindowWrapper@@AEAAXW4Visibility@@@Z.c)
 *     ?GetNavigationLevel@NavigationLevelHelper@LegacyWindowWrapper@@QEBA?AW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@XZ @ 0x180428A40 (-GetNavigationLevel@NavigationLevelHelper@LegacyWindowWrapper@@QEBA-AW4NavigationLevel@ViewManag.c)
 *     ?GetVisibility@NavigationLevelHelper@LegacyWindowWrapper@@QEBA?AW4Visibility@@XZ @ 0x180428ABC (-GetVisibility@NavigationLevelHelper@LegacyWindowWrapper@@QEBA-AW4Visibility@@XZ.c)
 *     ?GetDebounceDurationInMilliseconds@NavigationLevelHelper@LegacyUwpWindowWrapper@@AEBAKXZ @ 0x180435174 (-GetDebounceDurationInMilliseconds@NavigationLevelHelper@LegacyUwpWindowWrapper@@AEBAKXZ.c)
 */

__int64 __fastcall LegacyUwpWindowWrapper::NavigationLevelHelper::SetDesiredNavigationLevel(__int64 a1)
{
  int NavigationLevel; // r14d
  int Visibility; // ebp
  __m128i si128; // xmm2
  __int64 v5; // r9
  signed int v6; // edi
  signed int v7; // edx
  int v8; // esi
  PTP_TIMER ThreadpoolTimer; // rax
  unsigned int DebounceDurationInMilliseconds; // eax
  ThreadpoolHelpers *v11; // r9
  struct _TP_TIMER *v12; // rcx
  __int64 result; // rax
  unsigned int v14[4]; // [rsp+20h] [rbp-58h]
  __m128i v15; // [rsp+30h] [rbp-48h]
  __m128i v16; // [rsp+40h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  NavigationLevel = LegacyWindowWrapper::NavigationLevelHelper::GetNavigationLevel((unsigned int *)a1);
  Visibility = LegacyWindowWrapper::NavigationLevelHelper::GetVisibility((unsigned int *)a1);
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  *(_DWORD *)a1 = v5;
  v16 = _mm_load_si128((const __m128i *)&_xmm);
  v15 = _mm_load_si128((const __m128i *)&_xmm);
  *(__m128i *)v14 = si128;
  v6 = v14[2 * v5 + 1];
  v8 = LegacyWindowWrapper::NavigationLevelHelper::GetVisibility((unsigned int *)a1);
  if ( v7 > v6 )
  {
    if ( *(_DWORD *)(a1 + 4) > v7 )
      goto LABEL_13;
    if ( *(_QWORD *)(a1 + 8)
      || (ThreadpoolTimer = CreateThreadpoolTimer(
                              (PTP_TIMER_CALLBACK)lambda_e4ee1dff541502e2bea9ce73f0f3044a_::_lambda_invoker_cdecl_,
                              (PVOID)a1,
                              0LL),
          (*(_QWORD *)(a1 + 8) = ThreadpoolTimer) != 0LL) )
    {
      DebounceDurationInMilliseconds = LegacyUwpWindowWrapper::NavigationLevelHelper::GetDebounceDurationInMilliseconds((LegacyUwpWindowWrapper::NavigationLevelHelper *)a1);
      ThreadpoolHelpers::SetRelativeThreadpoolTimerInMilliseconds(
        v11,
        (struct _TP_TIMER *)DebounceDurationInMilliseconds,
        0);
      goto LABEL_13;
    }
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x7F,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\legacyuwpwindowwrapper.navigationlevelhelper.cpp",
      (const char *)0x8007000ELL);
    goto LABEL_12;
  }
  if ( v7 < v6 && *(_DWORD *)(a1 + 4) <= v6 )
  {
    v12 = *(struct _TP_TIMER **)(a1 + 8);
    if ( v12 && IsThreadpoolTimerSet(v12) )
      SetThreadpoolTimer(*(PTP_TIMER *)(a1 + 8), 0LL, 0, 0);
LABEL_12:
    *(_DWORD *)(a1 + 4) = v6;
  }
LABEL_13:
  if ( Visibility != v8 )
    LegacyUwpWindowWrapper::SendVisibilityToWindow(a1 - 640, v8);
  result = LegacyWindowWrapper::NavigationLevelHelper::GetNavigationLevel((unsigned int *)a1);
  if ( *(_DWORD *)(a1 - 280) )
  {
    if ( (_DWORD)result != NavigationLevel )
      return UwpWindowWrapperBase::NavigateInternal(a1 - 632, result);
  }
  return result;
}
