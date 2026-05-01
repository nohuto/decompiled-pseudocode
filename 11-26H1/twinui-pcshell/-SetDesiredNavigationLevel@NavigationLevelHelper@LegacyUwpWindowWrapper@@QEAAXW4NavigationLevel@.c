/*
 * XREFs of ?SetDesiredNavigationLevel@NavigationLevelHelper@LegacyUwpWindowWrapper@@QEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180441610
 * Callers:
 *     ?v_SetDesiredNavigationLevel@LegacyUwpWindowWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180433A10 (-v_SetDesiredNavigationLevel@LegacyUwpWindowWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@S.c)
 * Callees:
 *     ?NavigateInternal@UwpWindowWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801A29A0 (-NavigateInternal@UwpWindowWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal.c)
 *     ?SetRelativeThreadpoolTimerInMilliseconds@ThreadpoolHelpers@@YAXPEAU_TP_TIMER@@_KKK@Z @ 0x1801FFD04 (-SetRelativeThreadpoolTimerInMilliseconds@ThreadpoolHelpers@@YAXPEAU_TP_TIMER@@_KKK@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1802C047C (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?SendVisibilityToWindow@LegacyUwpWindowWrapper@@AEAAXW4Visibility@@@Z @ 0x1804336EC (-SendVisibilityToWindow@LegacyUwpWindowWrapper@@AEAAXW4Visibility@@@Z.c)
 *     ?GetNavigationLevel@NavigationLevelHelper@LegacyWindowWrapper@@QEBA?AW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@XZ @ 0x180434920 (-GetNavigationLevel@NavigationLevelHelper@LegacyWindowWrapper@@QEBA-AW4NavigationLevel@ViewManag.c)
 *     ?GetDebounceDurationInMilliseconds@NavigationLevelHelper@LegacyUwpWindowWrapper@@AEBAKXZ @ 0x1804414E4 (-GetDebounceDurationInMilliseconds@NavigationLevelHelper@LegacyUwpWindowWrapper@@AEBAKXZ.c)
 */

__int64 __fastcall LegacyUwpWindowWrapper::NavigationLevelHelper::SetDesiredNavigationLevel(__int64 a1)
{
  int NavigationLevel; // eax
  __m128i si128; // xmm2
  __m128i v4; // xmm1
  int v5; // r15d
  __m128i v6; // xmm0
  unsigned int *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // r9
  bool v10; // sf
  bool v11; // of
  int v12; // r14d
  __int32 v13; // edx
  __int32 v14; // edi
  int v15; // esi
  PTP_TIMER ThreadpoolTimer; // rax
  unsigned int DebounceDurationInMilliseconds; // eax
  ThreadpoolHelpers *v18; // r9
  struct _TP_TIMER *v19; // rcx
  __int64 result; // rax
  __m128i v21; // [rsp+20h] [rbp-30h]
  __m128i v22; // [rsp+30h] [rbp-20h]
  __m128i v23; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  NavigationLevel = LegacyWindowWrapper::NavigationLevelHelper::GetNavigationLevel((unsigned int *)a1);
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v4 = _mm_load_si128((const __m128i *)&_xmm);
  v5 = NavigationLevel;
  v6 = _mm_load_si128((const __m128i *)&_xmm);
  v8 = *v7;
  v21 = si128;
  *(_DWORD *)a1 = v9;
  v22 = v4;
  v23 = v6;
  v11 = __OFSUB__(v21.m128i_i32[2 * v8 + 1], 2);
  v10 = v21.m128i_i32[2 * v8 + 1] - 2 < 0;
  v21 = si128;
  v12 = v10 == v11;
  v22 = v4;
  v23 = v6;
  v13 = v21.m128i_i32[2 * v8 + 1];
  v21 = si128;
  v22 = v4;
  v23 = v6;
  v14 = v21.m128i_i32[2 * v9 + 1];
  v21 = si128;
  v22 = v4;
  v23 = v6;
  v15 = v21.m128i_i32[2 * v9 + 1] >= 2;
  if ( v13 > v14 )
  {
    if ( *(_DWORD *)(a1 + 4) > v13 )
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
        v18,
        (struct _TP_TIMER *)DebounceDurationInMilliseconds,
        0);
      goto LABEL_13;
    }
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x7F,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\legacyuwpwindowwrapper.navigationlevelhelper.cpp",
      (const char *)0x8007000ELL);
    goto LABEL_12;
  }
  if ( v13 < v14 && *(_DWORD *)(a1 + 4) <= v14 )
  {
    v19 = *(struct _TP_TIMER **)(a1 + 8);
    if ( v19 && IsThreadpoolTimerSet(v19) )
      SetThreadpoolTimer(*(PTP_TIMER *)(a1 + 8), 0LL, 0, 0);
LABEL_12:
    *(_DWORD *)(a1 + 4) = v14;
  }
LABEL_13:
  if ( v12 != v15 )
    LegacyUwpWindowWrapper::SendVisibilityToWindow(a1 - 624, v15);
  result = LegacyWindowWrapper::NavigationLevelHelper::GetNavigationLevel((unsigned int *)a1);
  if ( *(_DWORD *)(a1 - 264) )
  {
    if ( (_DWORD)result != v5 )
      return UwpWindowWrapperBase::NavigateInternal(a1 - 616, result);
  }
  return result;
}
