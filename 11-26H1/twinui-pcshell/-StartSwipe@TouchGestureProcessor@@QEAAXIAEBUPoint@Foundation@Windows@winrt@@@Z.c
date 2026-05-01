/*
 * XREFs of ?StartSwipe@TouchGestureProcessor@@QEAAXIAEBUPoint@Foundation@Windows@winrt@@@Z @ 0x180592DD0
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Input::PhysicalGestureRecognizer_winrt::Windows::UI::Input::ManipulationUpdatedEventArgs___lambda_cd8c6316c996060cbab4a596526042be___::Invoke @ 0x180591CD0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows-_ea_180591CD0.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??4?$com_ptr@UIMultitaskingViewVisibilityNotification@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800B7B54 (--4-$com_ptr@UIMultitaskingViewVisibilityNotification@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x1800E363C (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 *     ?PixelToHimetric@TouchGestureProcessor@@AEAA?AUPoint@Foundation@Windows@winrt@@AEBU2345@@Z @ 0x1801B5334 (-PixelToHimetric@TouchGestureProcessor@@AEAA-AUPoint@Foundation@Windows@winrt@@AEBU2345@@Z.c)
 *     ?GetSwipeType@TouchGestureProcessor@@AEAA?AW4TouchGestureType@@MM@Z @ 0x18022FDF0 (-GetSwipeType@TouchGestureProcessor@@AEAA-AW4TouchGestureType@@MM@Z.c)
 *     ??B?$tip_test@V?$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ @ 0x1802A2788 (--B-$tip_test@V-$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ.c)
 *     ?GetTouchGestureTarget@TouchGestureSettings@@QEAA?AU?$com_ptr@UITouchSwipe@@@winrt@@IW4TouchGestureType@@@Z @ 0x18058C674 (-GetTouchGestureTarget@TouchGestureSettings@@QEAA-AU-$com_ptr@UITouchSwipe@@@winrt@@IW4TouchGest.c)
 *     ??$ReportTouchSwipePerformed@IAEAIAEBMAEBM_NU?$com_ptr@UIServiceProvider@@@winrt@@@TouchGestureTelemetry@@SAX$$QEAIAEAIAEBM2$$QEA_N$$QEAU?$com_ptr@UIServiceProvider@@@winrt@@@Z @ 0x18058EE2C (--$ReportTouchSwipePerformed@IAEAIAEBMAEBM_NU-$com_ptr@UIServiceProvider@@@winrt@@@TouchGestureT.c)
 *     ??$TouchSwipeStarted@AEAIAEAW4TouchGestureType@@@TouchGestureTelemetry@@SAXAEAIAEAW4TouchGestureType@@@Z @ 0x18058EEDC (--$TouchSwipeStarted@AEAIAEAW4TouchGestureType@@@TouchGestureTelemetry@@SAXAEAIAEAW4TouchGesture.c)
 *     ??$open@V?$tip_test@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?AV?$tip_test@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@0@XZ @ 0x18059018C (--$open@V-$tip_test@V-$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@@tip2@@YA-AV.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18059083C (--1-$com_ptr_t@V-$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@Uerr_returncode_policy@w.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18059088C (--1-$test_data_control@V-$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@1@XZ @ 0x1805908E4 (--C-$tip_test@V-$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$test_data.c)
 *     ?FinishPreviousGestureIfNeeded@TouchGestureProcessor@@AEAAXAEBU?$com_ptr@UITouchSwipe@@@winrt@@@Z @ 0x180590DE8 (-FinishPreviousGestureIfNeeded@TouchGestureProcessor@@AEAAXAEBU-$com_ptr@UITouchSwipe@@@winrt@@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall TouchGestureProcessor::StartSwipe(
        TouchGestureProcessor *this,
        int a2,
        const struct winrt::Windows::Foundation::Point *a3)
{
  int SwipeType; // edi
  int v7; // esi
  __int64 *v8; // rax
  __int64 *v9; // rax
  __int64 v10; // rcx
  __int64 *v11; // rax
  __int64 *i; // rdx
  __int64 *j; // r8
  int v14; // edi
  __int64 *v15; // rdi
  __int64 *v16; // rcx
  __int64 *k; // rax
  __int64 *m; // rcx
  __int64 *v19; // [rsp+30h] [rbp-30h] BYREF
  __int64 v20; // [rsp+38h] [rbp-28h] BYREF
  _DWORD v21[2]; // [rsp+40h] [rbp-20h] BYREF
  __int128 v22; // [rsp+48h] [rbp-18h]
  int v23; // [rsp+58h] [rbp-8h]
  int v24; // [rsp+A8h] [rbp+48h] BYREF
  void *v25; // [rsp+B0h] [rbp+50h] BYREF
  void *v26; // [rsp+B8h] [rbp+58h] BYREF

  v24 = a2;
  SwipeType = TouchGestureProcessor::GetSwipeType((__int64)this, *(float *)a3, *((float *)a3 + 1));
  LODWORD(v25) = SwipeType;
  TouchGestureTelemetry::TouchSwipeStarted<unsigned int &,enum TouchGestureType &>(&v24, (int *)&v25);
  if ( SwipeType )
  {
    if ( *((_QWORD *)this + 1) )
      v7 = *((_DWORD *)this + 27);
    else
      v7 = a2;
    tip2::open<tip2::tip_test<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>>(&v25);
    if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool((__int64 *)&v25) )
    {
      v8 = tip2::tip_test<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>::operator->(
             (__int64)&v25,
             (__int64 *)&v26);
      *(_DWORD *)(*v8 + 272) |= SwipeType;
      tip2::test_data_control<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>::~test_data_control<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>(&v26);
      *(_DWORD *)(*tip2::tip_test<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>::operator->(
                     (__int64)&v25,
                     (__int64 *)&v26)
                + 276) = v7;
      tip2::test_data_control<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>::~test_data_control<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>(&v26);
    }
    wil::com_ptr_t<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>,wil::err_returncode_policy>(&v25);
    TouchGestureSettings::GetTouchGestureTarget(*((_QWORD *)this + 2), (__int64 *)&v19, v7, SwipeType);
    if ( v19 )
    {
      tip2::open<tip2::tip_test<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>>(&v25);
      if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool((__int64 *)&v25) )
      {
        *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>::operator->(
                      (__int64)&v25,
                      (__int64 *)&v26)
                 + 280) = 1;
        tip2::test_data_control<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>::~test_data_control<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>(&v26);
      }
      wil::com_ptr_t<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>,wil::err_returncode_policy>(&v25);
      TouchGestureProcessor::FinishPreviousGestureIfNeeded((__int64)this, &v19);
      v9 = std::chrono::steady_clock::now((__int64 *)&v25);
      v10 = *v9;
      *((_QWORD *)this + 14) = *v9;
      v22 = 0LL;
      v23 = 1;
      v21[0] = SwipeType;
      v21[1] = a2;
      *(_QWORD *)&v22 = *(_QWORD *)TouchGestureProcessor::PixelToHimetric(v10, (float *)&v25, (float *)a3);
      v11 = (__int64 *)*((_QWORD *)this + 18);
      if ( *((_BYTE *)v11 + 25) )
      {
        i = (__int64 *)v11[2];
      }
      else
      {
        i = (__int64 *)*v11;
        if ( *(_BYTE *)(*v11 + 25) )
        {
          for ( i = (__int64 *)v11[1]; !*((_BYTE *)i + 25) && v11 == (__int64 *)*i; i = (__int64 *)i[1] )
            v11 = i;
          if ( *((_BYTE *)v11 + 25) )
            i = v11;
        }
        else
        {
          for ( j = (__int64 *)i[2]; !*((_BYTE *)j + 25); j = (__int64 *)j[2] )
            i = j;
        }
      }
      v14 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _DWORD *))(*v19 + 24))(v19, *((unsigned int *)i + 7), v21);
      tip2::open<tip2::tip_test<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>>(&v25);
      if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool((__int64 *)&v25) )
      {
        *(_DWORD *)(*tip2::tip_test<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>::operator->(
                       (__int64)&v25,
                       (__int64 *)&v26)
                  + 288) = v14;
        tip2::test_data_control<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>::~test_data_control<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>(&v26);
      }
      wil::com_ptr_t<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>,wil::err_returncode_policy>(&v25);
      *((_DWORD *)this + 27) = v7;
      v15 = v19;
      if ( *(__int64 **)this != v19 )
      {
        if ( *(_QWORD *)this )
          winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this);
        *(_QWORD *)this = v15;
        if ( v15 )
          (*(void (__fastcall **)(__int64 *))(*v15 + 8))(v15);
      }
      *((_WORD *)this + 146) = 0;
      *((_DWORD *)this + 72) = 0;
      v25 = 0LL;
      winrt::com_ptr<IMultitaskingViewVisibilityNotification>::operator=((__int64 *)this + 1, (__int64 *)&v25);
      if ( v25 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v25);
      v20 = *(_QWORD *)(*((_QWORD *)this + 2) + 24LL);
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v20);
      LOBYTE(v25) = *((_QWORD *)this + 1) != 0LL;
      v16 = (__int64 *)*((_QWORD *)this + 18);
      if ( *((_BYTE *)v16 + 25) )
      {
        k = (__int64 *)v16[2];
      }
      else
      {
        k = (__int64 *)*v16;
        if ( *(_BYTE *)(*v16 + 25) )
        {
          for ( k = (__int64 *)v16[1]; !*((_BYTE *)k + 25) && v16 == (__int64 *)*k; k = (__int64 *)k[1] )
            v16 = k;
          if ( *((_BYTE *)v16 + 25) )
            k = v16;
        }
        else
        {
          for ( m = (__int64 *)k[2]; !*((_BYTE *)m + 25); m = (__int64 *)m[2] )
            k = m;
        }
      }
      LODWORD(v26) = *((_DWORD *)k + 7);
      TouchGestureTelemetry::ReportTouchSwipePerformed<unsigned int,unsigned int &,float const &,float const &,bool,winrt::com_ptr<IServiceProvider>>(
        &v26,
        (_DWORD *)this + 27,
        (__int64)a3,
        (_DWORD *)a3 + 1,
        (char *)&v25,
        &v20);
      if ( v20 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v20);
    }
    if ( v19 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v19);
  }
}
