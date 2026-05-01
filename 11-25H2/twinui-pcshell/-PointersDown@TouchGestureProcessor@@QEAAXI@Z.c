/*
 * XREFs of ?PointersDown@TouchGestureProcessor@@QEAAXI@Z @ 0x18056E864
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_f4166e70fe1a3f6ebbab251e60ef156b__void_::_Do_call @ 0x18056FB60 (std--_Func_impl_no_alloc__lambda_f4166e70fe1a3f6ebbab251e60ef156b__void_--_Do_call.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x1800286D0 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??B?$tip_test@V?$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ @ 0x180295DEC (--B-$tip_test@V-$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ.c)
 *     ?GetTouchGestureTarget@TouchGestureSettings@@QEAA?AU?$com_ptr@UITouchSwipe@@@winrt@@IW4TouchGestureType@@@Z @ 0x18056887C (-GetTouchGestureTarget@TouchGestureSettings@@QEAA-AU-$com_ptr@UITouchSwipe@@@winrt@@IW4TouchGest.c)
 *     ??$open@V?$tip_test@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?AV?$tip_test@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@0@XZ @ 0x18056C3B8 (--$open@V-$tip_test@V-$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@@tip2@@YA-AV.c)
 *     ??0?$test_data_control@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@IEAA@AEBV?$com_ptr_t@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x18056CA18 (--0-$test_data_control@V-$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@IEAA@AEBV.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18056CA50 (--1-$com_ptr_t@V-$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@Uerr_returncode_policy@w.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18056CAA0 (--1-$test_data_control@V-$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@1@XZ @ 0x18056CAF4 (--C-$tip_test@V-$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$test_data.c)
 *     ?PointersDown@TouchGestureTelemetry@@SAXXZ @ 0x18056EA74 (-PointersDown@TouchGestureTelemetry@@SAXXZ.c)
 *     ?close@?$test_data_control@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x18056FD18 (-close@-$test_data_control@V-$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@QEAAX.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18056FE78 (-ensure_data@-$tip_test@V-$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@AEBAAEAV.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall TouchGestureProcessor::PointersDown(TouchGestureProcessor *this, int a2)
{
  __int64 *v4; // rax
  _DWORD *v5; // rax
  __int64 v6; // rax
  __int64 *v7; // rcx
  __int64 *v8; // rax
  __int64 *v9; // rdx
  __int64 *i; // rcx
  int v11; // esi
  __int64 v12; // rbx
  _DWORD v13[2]; // [rsp+20h] [rbp-20h] BYREF
  __int128 v14; // [rsp+28h] [rbp-18h]
  int v15; // [rsp+38h] [rbp-8h]
  __int64 v16; // [rsp+60h] [rbp+20h] BYREF
  _DWORD *v17; // [rsp+70h] [rbp+30h] BYREF
  void *v18; // [rsp+78h] [rbp+38h] BYREF

  if ( (*(_BYTE *)(*((_QWORD *)this + 2) + 32LL) & 1) != 0 )
  {
    tip2::open<tip2::tip_test<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>>(&v18);
    if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool((__int64 *)&v18) )
    {
      v4 = (__int64 *)tip2::tip_test<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>::ensure_data(&v18);
      tip2::test_data_control<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>::test_data_control<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>(
        (__int64 *)&v17,
        v4);
      v5 = v17;
      v17[66] = 1;
      v5[67] = a2;
      tip2::test_data_control<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>::close(&v17);
      tip2::test_data_control<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>::~test_data_control<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>((void **)&v17);
    }
    wil::com_ptr_t<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>,wil::err_returncode_policy>(&v18);
    TouchGestureSettings::GetTouchGestureTarget(*((_QWORD *)this + 2), &v16, a2, 1);
    v6 = v16;
    if ( v16 )
    {
      tip2::open<tip2::tip_test<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>>(&v17);
      if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool((__int64 *)&v17) )
      {
        *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>::operator->(
                      (__int64)&v17,
                      (__int64 *)&v18)
                 + 272) = 1;
        tip2::test_data_control<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>::~test_data_control<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>(&v18);
      }
      wil::com_ptr_t<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>,wil::err_returncode_policy>((void **)&v17);
      v14 = 0LL;
      v15 = 1;
      v13[0] = 1;
      v13[1] = a2;
      v7 = (__int64 *)*((_QWORD *)this + 18);
      if ( *((_BYTE *)v7 + 25) )
      {
        v8 = (__int64 *)v7[2];
      }
      else
      {
        v8 = (__int64 *)*v7;
        if ( *(_BYTE *)(*v7 + 25) )
        {
          v8 = (__int64 *)v7[1];
          if ( !*((_BYTE *)v8 + 25) )
          {
            v9 = (__int64 *)*((_QWORD *)this + 18);
            do
            {
              if ( v9 != (__int64 *)*v8 )
                break;
              v7 = v8;
              v8 = (__int64 *)v8[1];
              v9 = v7;
            }
            while ( !*((_BYTE *)v8 + 25) );
          }
          if ( *((_BYTE *)v7 + 25) )
            v8 = v7;
        }
        else
        {
          for ( i = (__int64 *)v8[2]; !*((_BYTE *)i + 25); i = (__int64 *)i[2] )
            v8 = i;
        }
      }
      v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(*(_QWORD *)v16 + 24LL))(
              v16,
              *((unsigned int *)v8 + 7),
              v13);
      tip2::open<tip2::tip_test<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>>(&v17);
      if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool((__int64 *)&v17) )
      {
        *(_DWORD *)(*tip2::tip_test<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>::operator->(
                       (__int64)&v17,
                       (__int64 *)&v18)
                  + 276) = v11;
        tip2::test_data_control<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>::~test_data_control<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>(&v18);
      }
      wil::com_ptr_t<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>,wil::err_returncode_policy>((void **)&v17);
      *((_DWORD *)this + 27) = a2;
      v12 = v16;
      if ( *((_QWORD *)this + 1) != v16 )
      {
        if ( *((_QWORD *)this + 1) )
          winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 1);
        *((_QWORD *)this + 1) = v12;
        if ( v12 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
      }
      TouchGestureTelemetry::PointersDown();
      v6 = v16;
    }
    if ( v6 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v16);
  }
}
