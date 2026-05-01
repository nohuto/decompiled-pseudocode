/*
 * XREFs of ?PointersDown@TouchGestureProcessor@@QEAAXI@Z @ 0x180592278
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_f4166e70fe1a3f6ebbab251e60ef156b__void_::_Do_call @ 0x180593450 (std--_Func_impl_no_alloc__lambda_f4166e70fe1a3f6ebbab251e60ef156b__void_--_Do_call.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??B?$tip_test@V?$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ @ 0x1802A2788 (--B-$tip_test@V-$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ.c)
 *     ?GetTouchGestureTarget@TouchGestureSettings@@QEAA?AU?$com_ptr@UITouchSwipe@@@winrt@@IW4TouchGestureType@@@Z @ 0x18058C674 (-GetTouchGestureTarget@TouchGestureSettings@@QEAA-AU-$com_ptr@UITouchSwipe@@@winrt@@IW4TouchGest.c)
 *     ??$open@V?$tip_test@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?AV?$tip_test@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@0@XZ @ 0x18059018C (--$open@V-$tip_test@V-$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@@tip2@@YA-AV.c)
 *     ??0?$test_data_control@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@IEAA@AEBV?$com_ptr_t@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180590804 (--0-$test_data_control@V-$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@IEAA@AEBV.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18059083C (--1-$com_ptr_t@V-$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@Uerr_returncode_policy@w.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18059088C (--1-$test_data_control@V-$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@1@XZ @ 0x1805908E4 (--C-$tip_test@V-$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$test_data.c)
 *     ?PointersDown@TouchGestureTelemetry@@SAXXZ @ 0x180592478 (-PointersDown@TouchGestureTelemetry@@SAXXZ.c)
 *     ?close@?$test_data_control@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x1805935CC (-close@-$test_data_control@V-$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@QEAAX.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180593658 (-ensure_data@-$tip_test@V-$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@AEBAAEAV.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall TouchGestureProcessor::PointersDown(TouchGestureProcessor *this, int a2)
{
  __int64 *v4; // rax
  _DWORD *v5; // rax
  __int64 v6; // rax
  __int64 *v7; // rax
  __int64 *i; // rdx
  __int64 *j; // r8
  int v10; // esi
  __int64 v11; // rbx
  _DWORD v12[2]; // [rsp+20h] [rbp-20h] BYREF
  __int128 v13; // [rsp+28h] [rbp-18h]
  int v14; // [rsp+38h] [rbp-8h]
  __int64 v15; // [rsp+60h] [rbp+20h] BYREF
  _DWORD *v16; // [rsp+70h] [rbp+30h] BYREF
  void *v17; // [rsp+78h] [rbp+38h] BYREF

  if ( (*(_BYTE *)(*((_QWORD *)this + 2) + 32LL) & 1) != 0 )
  {
    tip2::open<tip2::tip_test<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>>(&v17);
    if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool((__int64 *)&v17) )
    {
      v4 = (__int64 *)tip2::tip_test<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>::ensure_data(&v17);
      tip2::test_data_control<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>::test_data_control<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>(
        (__int64 *)&v16,
        v4);
      v5 = v16;
      v16[68] = 1;
      v5[69] = a2;
      tip2::test_data_control<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>::close(&v16);
      tip2::test_data_control<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>::~test_data_control<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>((void **)&v16);
    }
    wil::com_ptr_t<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>,wil::err_returncode_policy>(&v17);
    TouchGestureSettings::GetTouchGestureTarget(*((_QWORD *)this + 2), &v15, a2, 1);
    v6 = v15;
    if ( v15 )
    {
      tip2::open<tip2::tip_test<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>>(&v16);
      if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool((__int64 *)&v16) )
      {
        *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>::operator->(
                      (__int64)&v16,
                      (__int64 *)&v17)
                 + 280) = 1;
        tip2::test_data_control<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>::~test_data_control<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>(&v17);
      }
      wil::com_ptr_t<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>,wil::err_returncode_policy>((void **)&v16);
      v13 = 0LL;
      v14 = 1;
      v12[0] = 1;
      v12[1] = a2;
      v7 = (__int64 *)*((_QWORD *)this + 18);
      if ( *((_BYTE *)v7 + 25) )
      {
        i = (__int64 *)v7[2];
      }
      else
      {
        i = (__int64 *)*v7;
        if ( *(_BYTE *)(*v7 + 25) )
        {
          for ( i = (__int64 *)v7[1]; !*((_BYTE *)i + 25) && v7 == (__int64 *)*i; i = (__int64 *)i[1] )
            v7 = i;
          if ( *((_BYTE *)v7 + 25) )
            i = v7;
        }
        else
        {
          for ( j = (__int64 *)i[2]; !*((_BYTE *)j + 25); j = (__int64 *)j[2] )
            i = j;
        }
      }
      v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(*(_QWORD *)v15 + 24LL))(
              v15,
              *((unsigned int *)i + 7),
              v12);
      tip2::open<tip2::tip_test<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>>(&v16);
      if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool((__int64 *)&v16) )
      {
        *(_DWORD *)(*tip2::tip_test<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>::operator->(
                       (__int64)&v16,
                       (__int64 *)&v17)
                  + 284) = v10;
        tip2::test_data_control<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>::~test_data_control<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>(&v17);
      }
      wil::com_ptr_t<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>,wil::err_returncode_policy>((void **)&v16);
      *((_DWORD *)this + 27) = a2;
      v11 = v15;
      if ( *((_QWORD *)this + 1) != v15 )
      {
        if ( *((_QWORD *)this + 1) )
          winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 1);
        *((_QWORD *)this + 1) = v11;
        if ( v11 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
      }
      TouchGestureTelemetry::PointersDown();
      v6 = v15;
    }
    if ( v6 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v15);
  }
}
