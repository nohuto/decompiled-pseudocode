/*
 * XREFs of ?ContinueSwipe@TouchGestureProcessor@@QEAAXAEBUPoint@Foundation@Windows@winrt@@0@Z @ 0x18056CE08
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Input::PhysicalGestureRecognizer_winrt::Windows::UI::Input::ManipulationUpdatedEventArgs___lambda_cd8c6316c996060cbab4a596526042be___::Invoke @ 0x18056E2B0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows-_ea_18056E2B0.c)
 * Callees:
 *     ?PixelToHimetric@TouchGestureProcessor@@AEAA?AUPoint@Foundation@Windows@winrt@@AEBU2345@@Z @ 0x1801B8844 (-PixelToHimetric@TouchGestureProcessor@@AEAA-AUPoint@Foundation@Windows@winrt@@AEBU2345@@Z.c)
 *     ?GetSwipeType@TouchGestureProcessor@@AEAA?AW4TouchGestureType@@MM@Z @ 0x18023CD28 (-GetSwipeType@TouchGestureProcessor@@AEAA-AW4TouchGestureType@@MM@Z.c)
 *     ??B?$tip_test@V?$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ @ 0x180295DEC (--B-$tip_test@V-$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ.c)
 *     ?IsQuickSwipe@TouchGestureProcessor@@AEAA_NXZ @ 0x1802C9870 (-IsQuickSwipe@TouchGestureProcessor@@AEAA_NXZ.c)
 *     ??$open@V?$tip_test@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?AV?$tip_test@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@0@XZ @ 0x18056C3B8 (--$open@V-$tip_test@V-$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@@tip2@@YA-AV.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18056CA50 (--1-$com_ptr_t@V-$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@Uerr_returncode_policy@w.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18056CAA0 (--1-$test_data_control@V-$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@1@XZ @ 0x18056CAF4 (--C-$tip_test@V-$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$test_data.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall TouchGestureProcessor::ContinueSwipe(
        TouchGestureProcessor *this,
        const struct winrt::Windows::Foundation::Point *a2,
        const struct winrt::Windows::Foundation::Point *a3)
{
  int SwipeType; // eax
  float *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  bool IsQuickSwipe; // al
  __int64 v12; // rcx
  int v13; // ebx
  _DWORD v14[2]; // [rsp+20h] [rbp-20h] BYREF
  __int128 v15; // [rsp+28h] [rbp-18h]
  int v16; // [rsp+38h] [rbp-8h]
  void *v17; // [rsp+60h] [rbp+20h] BYREF
  void *v18; // [rsp+68h] [rbp+28h] BYREF

  SwipeType = TouchGestureProcessor::GetSwipeType((__int64)this, *(float *)a2, *((float *)a2 + 1));
  if ( *(_QWORD *)this && SwipeType )
  {
    v14[0] = SwipeType;
    v14[1] = *((_DWORD *)this + 27);
    v15 = 0LL;
    v16 = 1;
    *(float *)&v15 = *TouchGestureProcessor::PixelToHimetric(v8, (float *)&v17, v7);
    *((float *)&v15 + 1) = TouchGestureProcessor::PixelToHimetric(v9, (float *)&v17, (float *)a2)[1];
    *((_QWORD *)&v15 + 1) = *(_QWORD *)TouchGestureProcessor::PixelToHimetric(v10, (float *)&v17, (float *)a3);
    IsQuickSwipe = TouchGestureProcessor::IsQuickSwipe(this);
    v12 = *(_QWORD *)this;
    LOBYTE(v16) = IsQuickSwipe;
    v13 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v12 + 32LL))(v12, v14);
    tip2::open<tip2::tip_test<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>>(&v17);
    if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool((__int64 *)&v17) )
    {
      *(_DWORD *)(*tip2::tip_test<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>::operator->(
                     (__int64)&v17,
                     (__int64 *)&v18)
                + 284) = v13;
      tip2::test_data_control<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>::~test_data_control<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>(&v18);
    }
    wil::com_ptr_t<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>,wil::err_returncode_policy>(&v17);
  }
}
