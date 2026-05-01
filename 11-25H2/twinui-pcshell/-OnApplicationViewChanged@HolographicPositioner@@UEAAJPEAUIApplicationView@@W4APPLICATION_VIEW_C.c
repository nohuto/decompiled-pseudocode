/*
 * XREFs of ?OnApplicationViewChanged@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800767D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsHolographicWin32SlatesFeatureEnabled@@YA_NXZ @ 0x180076CF0 (-IsHolographicWin32SlatesFeatureEnabled@@YA_NXZ.c)
 *     ?_IsDisplayContextHolographic@HolographicPositioner@@AEAA_NXZ @ 0x180076DD0 (-_IsDisplayContextHolographic@HolographicPositioner@@AEAA_NXZ.c)
 *     ??$try_com_query@UIWin32ApplicationView@@AEAPEAUIApplicationView@@@wil@@YA?AV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@0@AEAPEAUIApplicationView@@@Z @ 0x1801C8F7C (--$try_com_query@UIWin32ApplicationView@@AEAPEAUIApplicationView@@@wil@@YA-AV-$com_ptr_t@UIWin32.c)
 *     ?_IsViewWin32Slate@HolographicPositioner@@CA_NPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x1802C7E44 (-_IsViewWin32Slate@HolographicPositioner@@CA_NPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z.c)
 *     ?_GetApplicationViewUniqueIdForTracing@HolographicPositioner@@CAIPEAUIApplicationView@@@Z @ 0x1802C99E8 (-_GetApplicationViewUniqueIdForTracing@HolographicPositioner@@CAIPEAUIApplicationView@@@Z.c)
 *     _LogEventWithApplicationViewData_unsigned_short_const_(&)[10]_unsigned_int_ @ 0x1803F6970 (_LogEventWithApplicationViewData_unsigned_short_const_(-)[10]_unsigned_int_.c)
 *     _LogEventWithApplicationViewData_unsigned_short_const_(&)[11]_unsigned_int_ @ 0x1803F6A18 (_LogEventWithApplicationViewData_unsigned_short_const_(-)[11]_unsigned_int_.c)
 *     _LogEventWithApplicationViewData_unsigned_short_const_(&)[12]_unsigned_int_ @ 0x1803F6AC0 (_LogEventWithApplicationViewData_unsigned_short_const_(-)[12]_unsigned_int_.c)
 *     _LogEventWithApplicationViewData_unsigned_short_const_(&)[14]_unsigned_int_ @ 0x1803F6B68 (_LogEventWithApplicationViewData_unsigned_short_const_(-)[14]_unsigned_int_.c)
 *     ??$_QueryAndCompareWNFContext@W4UserDisplayContext@Holographic@Shell@Internal@Windows@@@@YA_NAEBU_WNF_STATE_NAME@@$$QEBW4UserDisplayContext@Holographic@Shell@Internal@Windows@@@Z @ 0x1803F6E10 (--$_QueryAndCompareWNFContext@W4UserDisplayContext@Holographic@Shell@Internal@Windows@@@@YA_NAEB.c)
 *     ?_EvaluateTakingControlOfWin32Slate@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32ApplicationView@@_N@Z @ 0x1803FC548 (-_EvaluateTakingControlOfWin32Slate@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32.c)
 *     ?_HandleControlLostForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1803FCBB8 (-_HandleControlLostForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_OnManagedWin32AppFocusGained@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32ApplicationView@@@Z @ 0x1803FD30C (-_OnManagedWin32AppFocusGained@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32Appli.c)
 *     ?_RaiseViewFocusGained@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1803FDAB0 (-_RaiseViewFocusGained@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_RaiseViewFocusLost@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1803FDBEC (-_RaiseViewFocusLost@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_RaiseViewRemoved@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1803FDD28 (-_RaiseViewRemoved@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall HolographicPositioner::OnApplicationViewChanged(__int64 a1, struct IApplicationView *a2, int a3)
{
  int v6; // r14d
  __int64 v7; // rcx
  BOOL v8; // eax
  struct IWin32ApplicationView *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // eax
  unsigned int v14; // ebx
  __int64 *v15; // rcx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rdx
  int v19; // ebx
  int v20; // ebx
  int v21; // ebx
  int v22; // ebx
  int v23; // ebx
  struct IWin32ApplicationView *v24; // r8
  HolographicPositioner *v25; // rsi
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
  if ( !*(_DWORD *)(a1 + 88) )
    return 0LL;
  if ( a2 )
  {
    v39 = 0LL;
    if ( (*(int (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 264LL))(a2, &v39) < 0 )
    {
      v12 = v39;
      if ( v39 )
      {
        v39 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
      v8 = 0;
    }
    else
    {
      v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v39 + 24LL))(v39);
      v7 = v39;
      if ( v39 )
      {
        v39 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
      v8 = v6 == 6;
    }
    if ( !v8 )
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
        v10 = v36;
        if ( v36 )
        {
          if ( IsHolographicWin32SlatesFeatureEnabled()
            && HolographicPositioner::_IsDisplayContextHolographic((HolographicPositioner *)(a1 - 176)) )
          {
            LODWORD(v39) = 6;
            if ( (*(int (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 400LL))(a2, &v39) >= 0
              && !(_DWORD)v39 )
            {
              v13 = HolographicPositioner::_EvaluateTakingControlOfWin32Slate(
                      (HolographicPositioner *)(a1 - 176),
                      a2,
                      v10,
                      0);
              v14 = v13;
              if ( v13 < 0 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x938,
                  (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
                  (const char *)(unsigned int)v13);
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x20B,
                  (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
                  (const char *)v14);
                v15 = (__int64 *)&v36;
LABEL_36:
                wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v15);
                return v14;
              }
            }
          }
          v10 = v36;
        }
LABEL_16:
        if ( v10 )
          (*(void (__fastcall **)(struct IWin32ApplicationView *))(*(_QWORD *)v10 + 16LL))(v10);
        return 0LL;
      }
      v37 = 0LL;
      (**(void (__fastcall ***)(struct IApplicationView *, GUID *, struct IWin32ApplicationView **))a2)(
        a2,
        &GUID_f3527610_c76d_4316_ac8e_28651acf3df3,
        &v37);
      v10 = v37;
      if ( !v37 )
        goto LABEL_16;
      LODWORD(v39) = 6;
      if ( (*(int (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 400LL))(a2, &v39) >= 0 )
      {
        if ( (_DWORD)v39 == 1 )
        {
          v16 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, __int64))(**(_QWORD **)(a1 + 96) + 24LL))(
                  *(_QWORD *)(a1 + 96),
                  a2,
                  6LL);
          v14 = v16;
          if ( v16 < 0 )
          {
            v17 = 2375LL;
LABEL_35:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v17,
              (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
              (const char *)(unsigned int)v16);
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x202,
              (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
              (const char *)v14);
            v15 = (__int64 *)&v37;
            goto LABEL_36;
          }
        }
        else if ( !*(_DWORD *)(a1 + 432) )
        {
          LODWORD(v36) = 1;
          if ( (unsigned __int8)_QueryAndCompareWNFContext<enum Windows::Internal::Shell::Holographic::UserDisplayContext>(
                                  v11,
                                  &v36) )
          {
            if ( (unsigned __int8)HolographicPositioner::_IsViewWin32Slate(a2, (unsigned int)v39) )
            {
              v16 = HolographicPositioner::_EvaluateTakingControlOfWin32Slate(
                      (HolographicPositioner *)(a1 - 176),
                      a2,
                      v10,
                      1);
              v14 = v16;
              if ( v16 < 0 )
              {
                v17 = 2383LL;
                goto LABEL_35;
              }
            }
          }
        }
      }
      v10 = v37;
      goto LABEL_16;
    }
    if ( !a3 )
    {
      LODWORD(v39) = HolographicPositioner::_GetApplicationViewUniqueIdForTracing(a2);
      LogEventWithApplicationViewData_unsigned_short_const_____10__unsigned_int_(a2, v34, v35, &v39);
      return 0LL;
    }
    v19 = a3 - 1;
    if ( !v19 )
    {
      LODWORD(v39) = HolographicPositioner::_GetApplicationViewUniqueIdForTracing(a2);
      LogEventWithApplicationViewData_unsigned_short_const_____12__unsigned_int_(a2, v32, v33, &v39);
      return 0LL;
    }
    v20 = v19 - 1;
    if ( !v20 )
    {
      LODWORD(v39) = HolographicPositioner::_GetApplicationViewUniqueIdForTracing(a2);
      LogEventWithApplicationViewData_unsigned_short_const_____14__unsigned_int_(a2, v30, v31, &v39);
      HolographicPositioner::_RaiseViewRemoved((HolographicPositioner *)(a1 - 176), a2);
      return 0LL;
    }
    v21 = v20 - 2;
    if ( !v21 )
    {
      LODWORD(v39) = HolographicPositioner::_GetApplicationViewUniqueIdForTracing(a2);
      LogEventWithApplicationViewData_unsigned_short_const_____11__unsigned_int_(a2, v27, v28, &v39);
      if ( (unsigned __int8)HolographicPositioner::_IsViewWin32Slate(a2, 6LL) )
      {
        v29 = HolographicPositioner::_HandleControlLostForView((HolographicPositioner *)(a1 - 176), a2);
        if ( v29 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x1EB,
            (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
            (const char *)(unsigned int)v29);
      }
      return 0LL;
    }
    v22 = v21 - 3;
    if ( v22 )
    {
      v23 = v22 - 1;
      if ( v23 )
      {
        if ( v23 == 1 )
          HolographicPositioner::_RaiseViewFocusLost((HolographicPositioner *)(a1 - 176), a2);
        return 0LL;
      }
    }
    v14 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64))(*(_QWORD *)a2 + 96LL))(a2, 1LL);
    if ( (v14 & 0x80000000) == 0 )
    {
      wil::try_com_query<IWin32ApplicationView,IApplicationView * &>(&v39, &v40);
      v25 = (HolographicPositioner *)(a1 - 176);
      if ( v39 )
      {
        v26 = HolographicPositioner::_OnManagedWin32AppFocusGained(v25, a2, v24);
        if ( v26 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x1D0,
            (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
            (const char *)(unsigned int)v26);
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v39);
      HolographicPositioner::_RaiseViewFocusGained(v25, a2);
      return 0LL;
    }
    v18 = 459LL;
  }
  else
  {
    v14 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x463,
      (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)0x80070057LL);
    v18 = 450LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v18,
    (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
    (const char *)v14);
  return v14;
}
