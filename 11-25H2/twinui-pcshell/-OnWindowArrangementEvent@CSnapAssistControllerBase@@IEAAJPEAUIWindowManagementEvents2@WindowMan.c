/*
 * XREFs of ?OnWindowArrangementEvent@CSnapAssistControllerBase@@IEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@AEBUWindowArrangementEventArgs@3456@@Z @ 0x180583440
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800BCE18 (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuit.c)
 *     ?DetermineSnapRegionForView@SnapLayoutHelpers@@YA?AW4SnapRegion@@PEAUIApplicationView@@@Z @ 0x1800D9A88 (-DetermineSnapRegionForView@SnapLayoutHelpers@@YA-AW4SnapRegion@@PEAUIApplicationView@@@Z.c)
 *     ??B?$tip_test@V?$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ @ 0x180295DEC (--B-$tip_test@V-$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ.c)
 *     ?IsGuidedSnapAssistActive@CSnapAssistControllerBase@@IEAA_NXZ @ 0x1802A077C (-IsGuidedSnapAssistActive@CSnapAssistControllerBase@@IEAA_NXZ.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x1802CFFBC (-complete@-$tip_test@V-$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@ti.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180582C9C (--1-$test_data_control@V-$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@@tip2@@QEAA@X.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@@1@XZ @ 0x180582E98 (--C-$tip_test@V-$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$test_d.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSnapAssistControllerBase::OnWindowArrangementEvent(
        CSnapAssistControllerBase *this,
        struct Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *a2,
        const struct Windows::Internal::Shell::WindowManagementEvents::WindowArrangementEventArgs *a3)
{
  int v5; // eax
  unsigned int v6; // esi
  char v8; // dl
  __int64 *v9; // rsi
  __int64 *v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  unsigned int v13; // ebx
  int v14; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v16; // [rsp+40h] [rbp+18h] BYREF
  void *v17; // [rsp+48h] [rbp+20h] BYREF

  if ( *((_WORD *)a3 + 4) == 1 )
  {
    if ( CSnapAssistControllerBase::IsGuidedSnapAssistActive(this) )
    {
      if ( *(_QWORD *)a3 == *((_QWORD *)this + 34) )
      {
        *((_QWORD *)this + 34) = 0LL;
      }
      else
      {
        *((_QWORD *)this + 34) = *(_QWORD *)a3;
        v5 = (*(__int64 (__fastcall **)(char *, _QWORD))(*((_QWORD *)this + 5) + 56LL))(
               (char *)this + 40,
               *(_QWORD *)a3);
        v6 = v5;
        if ( v5 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x4AE,
            (int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
            (const char *)(unsigned int)v5);
          return v6;
        }
      }
    }
    else if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool((__int64 *)this + 30) )
    {
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::__private_IsEnabledPreCheck(
        `wil::Feature<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::GetImpl'::`2'::impl,
        v8);
    }
    v9 = (__int64 *)((char *)this + 312);
    if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool((__int64 *)this + 39) )
    {
      v16 = 0LL;
      v10 = (__int64 *)*((_QWORD *)this + 9);
      v11 = *v10;
      v16 = 0LL;
      v12 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v11 + 48))(v10, *(_QWORD *)a3, &v16);
      v13 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4BE,
          (int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
          (const char *)(unsigned int)v12);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v16);
        return v13;
      }
      v14 = SnapLayoutHelpers::DetermineSnapRegionForView(v16);
      *(_DWORD *)(*tip2::tip_test<tip2::details::merged_data<_tip_TabTearOutEventTest,_tip_TabTearOutEventTest>>::operator->(
                     (__int64)v9,
                     (__int64 *)&v17)
                + 272) = v14;
      tip2::test_data_control<tip2::details::merged_data<_tip_TabTearOutEventTest,_tip_TabTearOutEventTest>>::~test_data_control<tip2::details::merged_data<_tip_TabTearOutEventTest,_tip_TabTearOutEventTest>>(&v17);
      tip2::tip_test<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::complete(v9);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v16);
    }
  }
  return 0LL;
}
