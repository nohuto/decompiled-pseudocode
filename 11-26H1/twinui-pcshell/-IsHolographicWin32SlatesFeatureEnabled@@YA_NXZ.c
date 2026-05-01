/*
 * XREFs of ?IsHolographicWin32SlatesFeatureEnabled@@YA_NXZ @ 0x18008F440
 * Callers:
 *     ?ShouldHandleActivation@HolographicPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x18008DDC0 (-ShouldHandleActivation@HolographicPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?_IsViewPropertySetHeuristicHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18008EC8C (-_IsViewPropertySetHeuristicHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUI.c)
 *     ?OnApplicationViewChanged@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18008EF10 (-OnApplicationViewChanged@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_C.c)
 *     ?GetFrameworkViewType@CWin32ApplicationView@@UEAAJPEAW4FRAMEWORK_VIEW_TYPE@@@Z @ 0x18008F3E0 (-GetFrameworkViewType@CWin32ApplicationView@@UEAAJPEAW4FRAMEWORK_VIEW_TYPE@@@Z.c)
 *     ?SubscribeToServices@HolographicPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x18008F910 (-SubscribeToServices@HolographicPositioner@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?_IsViewWin32Slate@HolographicPositioner@@CA_NPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x1802BF150 (-_IsViewWin32Slate@HolographicPositioner@@CA_NPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z.c)
 *     ?_OnManagedWin32AppFocusGained@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32ApplicationView@@@Z @ 0x180407B50 (-_OnManagedWin32AppFocusGained@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32Appli.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??R_lambda_d503711298e7f6b3b6e2140cf5363040_@@QEBA@XZ @ 0x1802AC8C0 (--R_lambda_d503711298e7f6b3b6e2140cf5363040_@@QEBA@XZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802C6380 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

char IsHolographicWin32SlatesFeatureEnabled(void)
{
  const char *v0; // r9
  int LastError; // ebx
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF

  fPending = 0;
  if ( !__std_init_once_begin_initialize(
          &`IsHolographicWin32SlatesFeatureEnabled'::`2'::s_win32SlatesKeyQueried,
          0,
          &fPending,
          0LL) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0x36C, (unsigned int)"wil", v0);
    if ( LastError >= 0 )
      return `IsHolographicWin32SlatesFeatureEnabled'::`2'::s_win32SlatesEnabled;
LABEL_8:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x34,
      (int)"onecoreuap\\internal\\shell\\inc\\Win32SlatesFeature.h",
      (const char *)(unsigned int)LastError);
    return `IsHolographicWin32SlatesFeatureEnabled'::`2'::s_win32SlatesEnabled;
  }
  if ( fPending )
  {
    v3 = _lambda_d503711298e7f6b3b6e2140cf5363040_::operator()();
    LastError = v3;
    if ( v3 >= 0 )
    {
      InitOnceComplete(&`IsHolographicWin32SlatesFeatureEnabled'::`2'::s_win32SlatesKeyQueried, 0, 0LL);
      return `IsHolographicWin32SlatesFeatureEnabled'::`2'::s_win32SlatesEnabled;
    }
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x371, (int)"wil", (const char *)(unsigned int)v3);
    InitOnceComplete(&`IsHolographicWin32SlatesFeatureEnabled'::`2'::s_win32SlatesKeyQueried, 4u, 0LL);
    goto LABEL_8;
  }
  return `IsHolographicWin32SlatesFeatureEnabled'::`2'::s_win32SlatesEnabled;
}
