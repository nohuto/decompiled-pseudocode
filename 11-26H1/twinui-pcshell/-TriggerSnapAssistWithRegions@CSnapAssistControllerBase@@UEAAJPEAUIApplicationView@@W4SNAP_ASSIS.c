/*
 * XREFs of ?TriggerSnapAssistWithRegions@CSnapAssistControllerBase@@UEAAJPEAUIApplicationView@@W4SNAP_ASSIST_VIEW_FLAGS@@PEBUtagRECT@@I@Z @ 0x1805A8550
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ @ 0x180028798 (-_Tidy@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180047CDC (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ComputeSnapErrorThresholdForMonitor@SnapRectHelpers@@YAHPEAUIImmersiveMonitor@@@Z @ 0x18016D02C (-ComputeSnapErrorThresholdForMonitor@SnapRectHelpers@@YAHPEAUIImmersiveMonitor@@@Z.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18027F904 (--1-$test_data_control@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA@.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@1@XZ @ 0x18027FB80 (--C-$tip_test@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$test_.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@0@@Z @ 0x18028634C (--$_Destroy_range@V-$allocator@V-$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows.c)
 *     ??$SetGuidedSnapAssistRegions@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCRect@Geometry@@@std@@@std@@@std@@@CSnapAssistControllerBase@@IEAAXV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCRect@Geometry@@@std@@@std@@@std@@0@Z @ 0x18029410C (--$SetGuidedSnapAssistRegions@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@UCRect@Geometr.c)
 *     ?_RetrieveSnappedWindowsForMonitor@CSnapAssistControllerBase@@IEAAJPEAUIImmersiveMonitor@@AEAV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1802BA310 (-_RetrieveSnappedWindowsForMonitor@CSnapAssistControllerBase@@IEAAJPEAUIImmersiveMonitor@@AEAV-$.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$AdjustRegionsForInitialSnapPosition@V?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@@CSnapAssistControllerBase@@IEAAXPEAUHWND__@@AEAV?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@PEAUIImmersiveMonitor@@@Z @ 0x1805A5328 (--$AdjustRegionsForInitialSnapPosition@V-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@.c)
 *     ??$_Assign_counted_range@PEBUtagRECT@@@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAXPEBUtagRECT@@_K@Z @ 0x1805A5A7C (--$_Assign_counted_range@PEBUtagRECT@@@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@.c)
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Geometry::CRect_______lambda_6cce0248af815829567eceed5222eb6d___ @ 0x1805A6140 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Geometry--_ea_1805A6140.c)
 *     ?_SnapAssistTriggered@CSnapAssistControllerBase@@IEAAJAEBUCRect@Geometry@@PEAUIImmersiveMonitor@@AEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@PEAUIAppLayout@@W4SNAP_ASSIST_VIEW_FLAGS@@HPEA_N@Z @ 0x1805A8DF0 (-_SnapAssistTriggered@CSnapAssistControllerBase@@IEAAJAEBUCRect@Geometry@@PEAUIImmersiveMonitor@.c)
 *     ?erase@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCRect@Geometry@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UCRect@Geometry@@@std@@@std@@@2@0@Z @ 0x1805A9300 (-erase@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@QEAA-AV-$_Vector_iter.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6 #try_helpers=1
__int64 __fastcall CSnapAssistControllerBase::TriggerSnapAssistWithRegions(
        RTL_SRWLOCK *a1,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *),
        int a3,
        _DWORD *a4,
        unsigned int a5)
{
  __int64 (__fastcall **v9)(ApplicationViewHelpers *, GUID *, __int64 *); // rax
  int v10; // eax
  struct IImmersiveMonitor *v11; // rdx
  unsigned int v12; // ebx
  struct IApplicationView *v14; // rdx
  HWND WindowForView; // r14
  int SnappedWindowsForMonitor; // eax
  unsigned int v17; // ebx
  __int64 v18; // rcx
  _QWORD *i; // rsi
  _QWORD *v20; // r15
  __int64 v21; // rbx
  _QWORD *v22; // rax
  __int64 v23; // rbx
  int v24; // [rsp+40h] [rbp-B8h] BYREF
  SnapRectHelpers *v25; // [rsp+48h] [rbp-B0h] BYREF
  __int128 v26; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+60h] [rbp-98h]
  __int128 v28; // [rsp+68h] [rbp-90h] BYREF
  __int64 v29; // [rsp+78h] [rbp-80h]
  __int64 v30[2]; // [rsp+80h] [rbp-78h] BYREF
  _QWORD v31[2]; // [rsp+90h] [rbp-68h] BYREF
  _BYTE v32[8]; // [rsp+A0h] [rbp-58h] BYREF
  RTL_SRWLOCK *v33; // [rsp+A8h] [rbp-50h] BYREF
  char v34; // [rsp+B0h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]

  v9 = *a2;
  v25 = 0LL;
  v10 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *), SnapRectHelpers **))v9[10])(
          a2,
          &v25);
  v12 = v10;
  if ( v10 >= 0 )
  {
    v24 = SnapRectHelpers::ComputeSnapErrorThresholdForMonitor(v25, v11);
    WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(a2, v14);
    if ( WindowForView )
    {
      v26 = 0LL;
      v27 = 0LL;
      SnappedWindowsForMonitor = CSnapAssistControllerBase::_RetrieveSnappedWindowsForMonitor(
                                   (__int64)a1,
                                   (__int64)v25,
                                   (__int64)&v26);
      v17 = SnappedWindowsForMonitor;
      if ( SnappedWindowsForMonitor >= 0 )
      {
        v28 = 0LL;
        v29 = 0LL;
        std::vector<Geometry::CRect>::_Assign_counted_range<tagRECT const *>((__int64 *)&v28, a4, a5);
        CSnapAssistControllerBase::AdjustRegionsForInitialSnapPosition<std::vector<Geometry::CRect>>(
          v18,
          WindowForView,
          (const struct tagRECT **)&v28,
          v25);
        v20 = (_QWORD *)*((_QWORD *)&v26 + 1);
        for ( i = (_QWORD *)v26; i != v20; ++i )
        {
          (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(*(_QWORD *)*i + 48LL))(*i, &v33);
          v21 = *((_QWORD *)&v28 + 1);
          v31[0] = &v33;
          v31[1] = &v24;
          v22 = std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Geometry::CRect_______lambda_6cce0248af815829567eceed5222eb6d___(
                  v30,
                  (_OWORD *)v28,
                  *((_OWORD **)&v28 + 1),
                  v31);
          std::vector<Geometry::CRect>::erase(&v28, v32, *v22, v21);
        }
        if ( (_QWORD)v28 != *((_QWORD *)&v28 + 1) )
        {
          CSnapAssistControllerBase::SetGuidedSnapAssistRegions<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Geometry::CRect>>>>(
            a1,
            (__int128 *)(v28 + 16),
            *((__int128 **)&v28 + 1));
          v33 = a1;
          v34 = 1;
          v23 = (__int64)(*((_QWORD *)&v28 + 1) - v28) >> 4;
          *(_DWORD *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::operator->(
                                   (__int64)&a1[30],
                                   (__int64)v30)
                    + 272LL) = v23;
          tip2::test_data_control<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::~test_data_control<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>(v30);
          CSnapAssistControllerBase::_SnapAssistTriggered(
            (_DWORD)a1,
            v28,
            (_DWORD)v25,
            (unsigned int)&v26,
            0,
            a3,
            v24,
            0LL);
          a1[34].Ptr = WindowForView;
        }
        std::vector<Geometry::CRect>::_Tidy((__int64 *)&v28);
        if ( (_QWORD)v26 )
        {
          std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>>>(
            (__int64 *)v26,
            *((__int64 **)&v26 + 1));
          std::_Deallocate<16>((void *)v26, (struct std::nothrow_t *)((v27 - v26) & 0xFFFFFFFFFFFFFFF8uLL));
          v26 = 0LL;
          v27 = 0LL;
        }
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v25);
        return 0LL;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x11A,
          (int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
          (const char *)(unsigned int)SnappedWindowsForMonitor);
        if ( (_QWORD)v26 )
        {
          std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>>>(
            (__int64 *)v26,
            *((__int64 **)&v26 + 1));
          std::_Deallocate<16>((void *)v26, (struct std::nothrow_t *)((v27 - v26) & 0xFFFFFFFFFFFFFFF8uLL));
          v26 = 0LL;
          v27 = 0LL;
        }
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v25);
        return v17;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x117,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
        (const char *)0x80070057LL);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v25);
      return 2147942487LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x113,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
      (const char *)(unsigned int)v10);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v25);
    return v12;
  }
}
