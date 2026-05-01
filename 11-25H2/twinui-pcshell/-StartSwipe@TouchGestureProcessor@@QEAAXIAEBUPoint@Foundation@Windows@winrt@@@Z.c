/*
 * XREFs of ?StartSwipe@TouchGestureProcessor@@QEAAXIAEBUPoint@Foundation@Windows@winrt@@@Z @ 0x18056F4EC
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Input::PhysicalGestureRecognizer_winrt::Windows::UI::Input::ManipulationUpdatedEventArgs___lambda_cd8c6316c996060cbab4a596526042be___::Invoke @ 0x18056E2B0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows-_ea_18056E2B0.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x1800286D0 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x18005A3E4 (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 *     ??4?$com_ptr@UIMultitaskingViewVisibilityNotification@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800FB0A0 (--4-$com_ptr@UIMultitaskingViewVisibilityNotification@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?PixelToHimetric@TouchGestureProcessor@@AEAA?AUPoint@Foundation@Windows@winrt@@AEBU2345@@Z @ 0x1801B8844 (-PixelToHimetric@TouchGestureProcessor@@AEAA-AUPoint@Foundation@Windows@winrt@@AEBU2345@@Z.c)
 *     ?GetSwipeType@TouchGestureProcessor@@AEAA?AW4TouchGestureType@@MM@Z @ 0x18023CD28 (-GetSwipeType@TouchGestureProcessor@@AEAA-AW4TouchGestureType@@MM@Z.c)
 *     ??B?$tip_test@V?$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ @ 0x180295DEC (--B-$tip_test@V-$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ.c)
 *     ?GetTouchGestureTarget@TouchGestureSettings@@QEAA?AU?$com_ptr@UITouchSwipe@@@winrt@@IW4TouchGestureType@@@Z @ 0x18056887C (-GetTouchGestureTarget@TouchGestureSettings@@QEAA-AU-$com_ptr@UITouchSwipe@@@winrt@@IW4TouchGest.c)
 *     ??$ReportTouchSwipePerformed@IAEAIAEBMAEBM_NU?$com_ptr@UIServiceProvider@@@winrt@@@TouchGestureTelemetry@@SAX$$QEAIAEAIAEBM2$$QEA_N$$QEAU?$com_ptr@UIServiceProvider@@@winrt@@@Z @ 0x18056B114 (--$ReportTouchSwipePerformed@IAEAIAEBMAEBM_NU-$com_ptr@UIServiceProvider@@@winrt@@@TouchGestureT.c)
 *     ??$TouchSwipeStarted@AEAIAEAW4TouchGestureType@@@TouchGestureTelemetry@@SAXAEAIAEAW4TouchGestureType@@@Z @ 0x18056B1C0 (--$TouchSwipeStarted@AEAIAEAW4TouchGestureType@@@TouchGestureTelemetry@@SAXAEAIAEAW4TouchGesture.c)
 *     ??$open@V?$tip_test@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?AV?$tip_test@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@0@XZ @ 0x18056C3B8 (--$open@V-$tip_test@V-$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@@tip2@@YA-AV.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18056CA50 (--1-$com_ptr_t@V-$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@Uerr_returncode_policy@w.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18056CAA0 (--1-$test_data_control@V-$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@1@XZ @ 0x18056CAF4 (--C-$tip_test@V-$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$test_data.c)
 *     ?FinishPreviousGestureIfNeeded@TouchGestureProcessor@@AEAAXAEBU?$com_ptr@UITouchSwipe@@@winrt@@@Z @ 0x18056CFC8 (-FinishPreviousGestureIfNeeded@TouchGestureProcessor@@AEAAXAEBU-$com_ptr@UITouchSwipe@@@winrt@@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  __int64 *v11; // rcx
  __int64 *v12; // rax
  __int64 *v13; // rdx
  __int64 *i; // rcx
  int v15; // edi
  __int64 *v16; // rdi
  __int64 *v17; // rcx
  __int64 *v18; // rax
  __int64 *v19; // rdx
  __int64 *j; // rcx
  __int64 *v21; // [rsp+30h] [rbp-30h] BYREF
  __int64 v22; // [rsp+38h] [rbp-28h] BYREF
  _DWORD v23[2]; // [rsp+40h] [rbp-20h] BYREF
  __int128 v24; // [rsp+48h] [rbp-18h]
  int v25; // [rsp+58h] [rbp-8h]
  int v26; // [rsp+A8h] [rbp+48h] BYREF
  void *v27; // [rsp+B0h] [rbp+50h] BYREF
  void *v28; // [rsp+B8h] [rbp+58h] BYREF

  v26 = a2;
  SwipeType = TouchGestureProcessor::GetSwipeType((__int64)this, *(float *)a3, *((float *)a3 + 1));
  LODWORD(v27) = SwipeType;
  TouchGestureTelemetry::TouchSwipeStarted<unsigned int &,enum TouchGestureType &>(&v26, (int *)&v27);
  if ( SwipeType )
  {
    v7 = a2;
    if ( *((_QWORD *)this + 1) )
      v7 = *((_DWORD *)this + 27);
    tip2::open<tip2::tip_test<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>>(&v27);
    if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool((__int64 *)&v27) )
    {
      v8 = tip2::tip_test<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>::operator->(
             (__int64)&v27,
             (__int64 *)&v28);
      *(_DWORD *)(*v8 + 264) |= SwipeType;
      tip2::test_data_control<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>::~test_data_control<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>(&v28);
      *(_DWORD *)(*tip2::tip_test<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>::operator->(
                     (__int64)&v27,
                     (__int64 *)&v28)
                + 268) = v7;
      tip2::test_data_control<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>::~test_data_control<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>(&v28);
    }
    wil::com_ptr_t<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>,wil::err_returncode_policy>(&v27);
    TouchGestureSettings::GetTouchGestureTarget(*((_QWORD *)this + 2), (__int64 *)&v21, v7, SwipeType);
    if ( v21 )
    {
      tip2::open<tip2::tip_test<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>>(&v27);
      if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool((__int64 *)&v27) )
      {
        *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>::operator->(
                      (__int64)&v27,
                      (__int64 *)&v28)
                 + 272) = 1;
        tip2::test_data_control<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>::~test_data_control<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>(&v28);
      }
      wil::com_ptr_t<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>,wil::err_returncode_policy>(&v27);
      TouchGestureProcessor::FinishPreviousGestureIfNeeded((__int64)this, &v21);
      v9 = std::chrono::steady_clock::now((__int64 *)&v27);
      v10 = *v9;
      *((_QWORD *)this + 14) = *v9;
      v24 = 0LL;
      v25 = 1;
      v23[0] = SwipeType;
      v23[1] = a2;
      *(_QWORD *)&v24 = *(_QWORD *)TouchGestureProcessor::PixelToHimetric(v10, (float *)&v27, (float *)a3);
      v11 = (__int64 *)*((_QWORD *)this + 18);
      if ( *((_BYTE *)v11 + 25) )
      {
        v12 = (__int64 *)v11[2];
      }
      else
      {
        v12 = (__int64 *)*v11;
        if ( *(_BYTE *)(*v11 + 25) )
        {
          v12 = (__int64 *)v11[1];
          if ( !*((_BYTE *)v12 + 25) )
          {
            v13 = (__int64 *)*((_QWORD *)this + 18);
            do
            {
              if ( v13 != (__int64 *)*v12 )
                break;
              v11 = v12;
              v12 = (__int64 *)v12[1];
              v13 = v11;
            }
            while ( !*((_BYTE *)v12 + 25) );
          }
          if ( *((_BYTE *)v11 + 25) )
            v12 = v11;
        }
        else
        {
          for ( i = (__int64 *)v12[2]; !*((_BYTE *)i + 25); i = (__int64 *)i[2] )
            v12 = i;
        }
      }
      v15 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _DWORD *))(*v21 + 24))(v21, *((unsigned int *)v12 + 7), v23);
      tip2::open<tip2::tip_test<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>>(&v27);
      if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool((__int64 *)&v27) )
      {
        *(_DWORD *)(*tip2::tip_test<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>::operator->(
                       (__int64)&v27,
                       (__int64 *)&v28)
                  + 280) = v15;
        tip2::test_data_control<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>::~test_data_control<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>(&v28);
      }
      wil::com_ptr_t<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>,wil::err_returncode_policy>(&v27);
      *((_DWORD *)this + 27) = v7;
      v16 = v21;
      if ( *(__int64 **)this != v21 )
      {
        if ( *(_QWORD *)this )
          winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this);
        *(_QWORD *)this = v16;
        if ( v16 )
          (*(void (__fastcall **)(__int64 *))(*v16 + 8))(v16);
      }
      *((_WORD *)this + 146) = 0;
      *((_DWORD *)this + 72) = 0;
      v27 = 0LL;
      winrt::com_ptr<IMultitaskingViewVisibilityNotification>::operator=((__int64 *)this + 1, (__int64 *)&v27);
      if ( v27 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v27);
      v22 = *(_QWORD *)(*((_QWORD *)this + 2) + 24LL);
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v22);
      LOBYTE(v27) = *((_QWORD *)this + 1) != 0LL;
      v17 = (__int64 *)*((_QWORD *)this + 18);
      if ( *((_BYTE *)v17 + 25) )
      {
        v18 = (__int64 *)v17[2];
      }
      else
      {
        v18 = (__int64 *)*v17;
        if ( *(_BYTE *)(*v17 + 25) )
        {
          v18 = (__int64 *)v17[1];
          if ( !*((_BYTE *)v18 + 25) )
          {
            v19 = (__int64 *)*((_QWORD *)this + 18);
            do
            {
              if ( v19 != (__int64 *)*v18 )
                break;
              v17 = v18;
              v18 = (__int64 *)v18[1];
              v19 = v17;
            }
            while ( !*((_BYTE *)v18 + 25) );
          }
          if ( *((_BYTE *)v17 + 25) )
            v18 = v17;
        }
        else
        {
          for ( j = (__int64 *)v18[2]; !*((_BYTE *)j + 25); j = (__int64 *)j[2] )
            v18 = j;
        }
      }
      LODWORD(v28) = *((_DWORD *)v18 + 7);
      TouchGestureTelemetry::ReportTouchSwipePerformed<unsigned int,unsigned int &,float const &,float const &,bool,winrt::com_ptr<IServiceProvider>>(
        &v28,
        (_DWORD *)this + 27,
        (__int64)a3,
        (_DWORD *)a3 + 1,
        (char *)&v27,
        &v22);
      if ( v22 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v22);
    }
    if ( v21 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v21);
  }
}
