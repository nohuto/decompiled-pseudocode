/*
 * XREFs of ?OnApplicationViewChanged@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18008EF10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsHolographicWin32SlatesFeatureEnabled@@YA_NXZ @ 0x18008F440 (-IsHolographicWin32SlatesFeatureEnabled@@YA_NXZ.c)
 *     ?_IsDisplayContextHolographic@HolographicPositioner@@AEAA_NXZ @ 0x18008F520 (-_IsDisplayContextHolographic@HolographicPositioner@@AEAA_NXZ.c)
 *     ??$try_com_query@UIWin32ApplicationView@@AEAPEAUIApplicationView@@@wil@@YA?AV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@0@AEAPEAUIApplicationView@@@Z @ 0x1801BF714 (--$try_com_query@UIWin32ApplicationView@@AEAPEAUIApplicationView@@@wil@@YA-AV-$com_ptr_t@UIWin32.c)
 *     ?_IsViewWin32Slate@HolographicPositioner@@CA_NPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x1802BF150 (-_IsViewWin32Slate@HolographicPositioner@@CA_NPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z.c)
 *     ?_GetApplicationViewUniqueIdForTracing@HolographicPositioner@@CAIPEAUIApplicationView@@@Z @ 0x1802C1168 (-_GetApplicationViewUniqueIdForTracing@HolographicPositioner@@CAIPEAUIApplicationView@@@Z.c)
 *     _LogEventWithApplicationViewData_unsigned_short_const_(&)[10]_unsigned_int_ @ 0x180400FCC (_LogEventWithApplicationViewData_unsigned_short_const_(-)[10]_unsigned_int_.c)
 *     _LogEventWithApplicationViewData_unsigned_short_const_(&)[11]_unsigned_int_ @ 0x180401078 (_LogEventWithApplicationViewData_unsigned_short_const_(-)[11]_unsigned_int_.c)
 *     _LogEventWithApplicationViewData_unsigned_short_const_(&)[12]_unsigned_int_ @ 0x180401124 (_LogEventWithApplicationViewData_unsigned_short_const_(-)[12]_unsigned_int_.c)
 *     _LogEventWithApplicationViewData_unsigned_short_const_(&)[14]_unsigned_int_ @ 0x1804011D0 (_LogEventWithApplicationViewData_unsigned_short_const_(-)[14]_unsigned_int_.c)
 *     ??$_QueryAndCompareWNFContext@W4UserDisplayContext@Holographic@Shell@Internal@Windows@@@@YA_NAEBU_WNF_STATE_NAME@@$$QEBW4UserDisplayContext@Holographic@Shell@Internal@Windows@@@Z @ 0x180401488 (--$_QueryAndCompareWNFContext@W4UserDisplayContext@Holographic@Shell@Internal@Windows@@@@YA_NAEB.c)
 *     ?_EvaluateTakingControlOfWin32Slate@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32ApplicationView@@_N@Z @ 0x180406D1C (-_EvaluateTakingControlOfWin32Slate@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32.c)
 *     ?_HandleControlLostForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1804073A8 (-_HandleControlLostForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_OnManagedWin32AppFocusGained@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32ApplicationView@@@Z @ 0x180407B50 (-_OnManagedWin32AppFocusGained@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32Appli.c)
 *     ?_RaiseViewFocusGained@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18040833C (-_RaiseViewFocusGained@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_RaiseViewFocusLost@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180408488 (-_RaiseViewFocusLost@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_RaiseViewRemoved@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1804085D4 (-_RaiseViewRemoved@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall HolographicPositioner::OnApplicationViewChanged(__int64 a1, struct IApplicationView *a2, int a3)
{
  __int64 v5; // rsi
  BOOL v6; // r14d
  __int64 v7; // rcx
  struct IWin32ApplicationView *v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // eax
  unsigned int v13; // ebx
  __int64 *v14; // rcx
  int v15; // eax
  __int64 v16; // rdx
  unsigned __int64 v17; // r9
  int v18; // edi
  int v19; // edi
  int v20; // edi
  int v21; // edi
  int v22; // edi
  int v23; // eax
  unsigned int v24; // edi
  struct IWin32ApplicationView *v25; // r8
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // r8
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // r8
  struct IWin32ApplicationView *v36; // [rsp+20h] [rbp-10h] BYREF
  struct IWin32ApplicationView *v37; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v39; // [rsp+50h] [rbp+20h] BYREF
  struct IApplicationView *v40; // [rsp+58h] [rbp+28h] BYREF

  v40 = a2;
  v5 = a1 - 176;
  if ( !*(_DWORD *)(a1 - 176 + 264) )
    return 0LL;
  if ( !a2 )
  {
    v13 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x463,
      (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)0x80070057LL);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C2,
      (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)0x80070057LL);
    return v13;
  }
  v39 = 0LL;
  if ( (*(int (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 264LL))(a2, &v39) < 0 )
  {
    v11 = v39;
    if ( v39 )
    {
      v39 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    v6 = 0;
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v39 + 24LL))(v39) == 6;
    v7 = v39;
    if ( v39 )
    {
      v39 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  if ( !v6 )
  {
    if ( a3 )
    {
      if ( (unsigned int)(a3 - 7) >= 2 )
        return 0LL;
      v36 = 0LL;
      (**(void (__fastcall ***)(struct IApplicationView *, GUID *, struct IWin32ApplicationView **))a2)(
        a2,
        &GUID_f3527610_c76d_4316_ac8e_28651acf3df3,
        &v36);
      v9 = v36;
      if ( v36 )
      {
        if ( IsHolographicWin32SlatesFeatureEnabled()
          && HolographicPositioner::_IsDisplayContextHolographic((HolographicPositioner *)v5) )
        {
          LODWORD(v39) = 6;
          if ( (*(int (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 400LL))(a2, &v39) >= 0
            && !(_DWORD)v39 )
          {
            v12 = HolographicPositioner::_EvaluateTakingControlOfWin32Slate((HolographicPositioner *)v5, a2, v9, 0);
            v13 = v12;
            if ( v12 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x938,
                (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
                (const char *)(unsigned int)v12);
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x20B,
                (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
                (const char *)v13);
              v14 = (__int64 *)&v36;
LABEL_33:
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v14);
              return v13;
            }
          }
        }
        v9 = v36;
      }
LABEL_15:
      if ( v9 )
        (*(void (__fastcall **)(struct IWin32ApplicationView *))(*(_QWORD *)v9 + 16LL))(v9);
      return 0LL;
    }
    v37 = 0LL;
    (**(void (__fastcall ***)(struct IApplicationView *, GUID *, struct IWin32ApplicationView **))a2)(
      a2,
      &GUID_f3527610_c76d_4316_ac8e_28651acf3df3,
      &v37);
    v9 = v37;
    if ( !v37 )
      goto LABEL_15;
    LODWORD(v39) = 6;
    if ( (*(int (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 400LL))(a2, &v39) >= 0 )
    {
      if ( (_DWORD)v39 == 1 )
      {
        v15 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, __int64))(**(_QWORD **)(v5 + 272) + 24LL))(
                *(_QWORD *)(v5 + 272),
                a2,
                6LL);
        v13 = v15;
        if ( v15 < 0 )
        {
          v16 = 2375LL;
          v17 = (unsigned int)v15;
LABEL_32:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v16,
            (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
            (const char *)v17);
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x202,
            (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
            (const char *)v13);
          v14 = (__int64 *)&v37;
          goto LABEL_33;
        }
      }
      else if ( !*(_DWORD *)(v5 + 608) )
      {
        LODWORD(v36) = 1;
        if ( (unsigned __int8)_QueryAndCompareWNFContext<enum Windows::Internal::Shell::Holographic::UserDisplayContext>(
                                v10,
                                &v36) )
        {
          if ( (unsigned __int8)HolographicPositioner::_IsViewWin32Slate(a2, (unsigned int)v39) )
          {
            v13 = HolographicPositioner::_EvaluateTakingControlOfWin32Slate((HolographicPositioner *)v5, a2, v9, 1);
            v17 = v13;
            if ( (v13 & 0x80000000) != 0 )
            {
              v16 = 2383LL;
              goto LABEL_32;
            }
          }
        }
      }
    }
    v9 = v37;
    goto LABEL_15;
  }
  if ( !a3 )
  {
    LODWORD(v39) = HolographicPositioner::_GetApplicationViewUniqueIdForTracing(a2);
    LogEventWithApplicationViewData_unsigned_short_const_____10__unsigned_int_(a2, v34, v35, &v39);
    return 0LL;
  }
  v18 = a3 - 1;
  if ( !v18 )
  {
    LODWORD(v39) = HolographicPositioner::_GetApplicationViewUniqueIdForTracing(a2);
    LogEventWithApplicationViewData_unsigned_short_const_____12__unsigned_int_(a2, v32, v33, &v39);
    return 0LL;
  }
  v19 = v18 - 1;
  if ( !v19 )
  {
    LODWORD(v39) = HolographicPositioner::_GetApplicationViewUniqueIdForTracing(a2);
    LogEventWithApplicationViewData_unsigned_short_const_____14__unsigned_int_(a2, v30, v31, &v39);
    HolographicPositioner::_RaiseViewRemoved((HolographicPositioner *)v5, a2);
    return 0LL;
  }
  v20 = v19 - 2;
  if ( !v20 )
  {
    LODWORD(v39) = HolographicPositioner::_GetApplicationViewUniqueIdForTracing(a2);
    LogEventWithApplicationViewData_unsigned_short_const_____11__unsigned_int_(a2, v27, v28, &v39);
    if ( (unsigned __int8)HolographicPositioner::_IsViewWin32Slate(a2, 6LL) )
    {
      v29 = HolographicPositioner::_HandleControlLostForView((HolographicPositioner *)v5, a2);
      if ( v29 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1EB,
          (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
          (const char *)(unsigned int)v29);
    }
    return 0LL;
  }
  v21 = v20 - 3;
  if ( v21 )
  {
    v22 = v21 - 1;
    if ( v22 )
    {
      if ( v22 == 1 )
        HolographicPositioner::_RaiseViewFocusLost((HolographicPositioner *)v5, a2);
      return 0LL;
    }
  }
  v23 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64))(*(_QWORD *)a2 + 96LL))(a2, 1LL);
  v24 = v23;
  if ( v23 >= 0 )
  {
    wil::try_com_query<IWin32ApplicationView,IApplicationView * &>(&v39, &v40);
    if ( v39 )
    {
      v26 = HolographicPositioner::_OnManagedWin32AppFocusGained((HolographicPositioner *)v5, a2, v25);
      if ( v26 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1D0,
          (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
          (const char *)(unsigned int)v26);
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v39);
    HolographicPositioner::_RaiseViewFocusGained((HolographicPositioner *)v5, a2);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1CB,
    (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
    (const char *)(unsigned int)v23);
  return v24;
}
