/*
 * XREFs of ??$_Insert_counted_range@PEBUservice_description@immersive_shell_component@winrt@@@?$vector@Uservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@@1@PEBUservice_description@immersive_shell_component@winrt@@_K@Z @ 0x180188B04
 * Callers:
 *     ?register_service_information@immersive_shell_component@winrt@@IEAAXU?$array_view@$$CBUservice_description@immersive_shell_component@winrt@@@2@@Z @ 0x1801889D0 (-register_service_information@immersive_shell_component@winrt@@IEAAXU-$array_view@$$CBUservice_d.c)
 *     ??$register_service_information@$$CBU_GUID@@@immersive_shell_component@winrt@@IEAAXAEBU_GUID@@@Z @ 0x180188A40 (--$register_service_information@$$CBU_GUID@@@immersive_shell_component@winrt@@IEAAXAEBU_GUID@@@Z.c)
 * Callees:
 *     ??$_Uninitialized_copy_n@PEBUservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@YAPEAUservice_description@immersive_shell_component@winrt@@PEBU123@_KPEAU123@AEAV?$allocator@Uservice_description@immersive_shell_component@winrt@@@0@@Z @ 0x1800DB7B4 (--$_Uninitialized_copy_n@PEBUservice_description@immersive_shell_component@winrt@@V-$allocator@U.c)
 *     ??$_Get_size_of_n@$0CA@@std@@YA_K_K@Z @ 0x1801B9C94 (--$_Get_size_of_n@$0CA@@std@@YA_K_K@Z.c)
 *     ?_Change_array@?$vector@Uservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@AEAAXQEAUservice_description@immersive_shell_component@winrt@@_K1@Z @ 0x1801D9BB4 (-_Change_array@-$vector@Uservice_description@immersive_shell_component@winrt@@V-$allocator@Userv.c)
 *     ??$_Uninitialized_move@PEAUservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@YAPEAUservice_description@immersive_shell_component@winrt@@QEAU123@0PEAU123@AEAV?$allocator@Uservice_description@immersive_shell_component@winrt@@@0@@Z @ 0x180203528 (--$_Uninitialized_move@PEAUservice_description@immersive_shell_component@winrt@@V-$allocator@Use.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x180285304 (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@YAXPEAUservice_description@immersive_shell_component@winrt@@QEAU123@AEAV?$allocator@Uservice_description@immersive_shell_component@winrt@@@0@@Z @ 0x1802BCC18 (--$_Destroy_range@V-$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@.c)
 *     ??$_Move_backward_unchecked@PEAUservice_description@immersive_shell_component@winrt@@PEAU123@@std@@YAPEAUservice_description@immersive_shell_component@winrt@@PEAU123@00@Z @ 0x1802D8394 (--$_Move_backward_unchecked@PEAUservice_description@immersive_shell_component@winrt@@PEAU123@@st.c)
 *     ??1_Reallocation_guard@?$vector@Uservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@QEAA@XZ @ 0x1802D8B20 (--1_Reallocation_guard@-$vector@Uservice_description@immersive_shell_component@winrt@@V-$allocat.c)
 */

// Hidden C++ exception states: #wind=1
unsigned __int64 __fastcall std::vector<winrt::immersive_shell_component::service_description>::_Insert_counted_range<winrt::immersive_shell_component::service_description const *>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4)
{
  _QWORD *v7; // r12
  __int64 v8; // r13
  __int64 v9; // rsi
  __int64 v10; // rdx
  unsigned __int64 result; // rax
  __int64 v12; // rcx
  __int64 v13; // r15
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  __int64 size_of; // rax
  __int64 v18; // r12
  __int64 v19; // r8
  __int64 v20; // rdi
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 *v25; // [rsp+28h] [rbp-70h]
  _QWORD *v26; // [rsp+30h] [rbp-68h] BYREF
  __int64 v27; // [rsp+38h] [rbp-60h]
  __int64 v28; // [rsp+40h] [rbp-58h]
  __int64 v29; // [rsp+48h] [rbp-50h]
  unsigned __int64 v30; // [rsp+50h] [rbp-48h]
  unsigned __int64 v33; // [rsp+A8h] [rbp+10h]
  unsigned __int64 v36; // [rsp+B8h] [rbp+20h]

  v7 = a1 + 1;
  v25 = a1 + 1;
  v8 = *a1;
  v9 = a1[1];
  v10 = a1[2];
  result = (v10 - v9) >> 5;
  if ( a4 )
  {
    if ( a4 <= result )
    {
      try
      {
        v23 = 32 * a4;
        if ( a4 >= (v9 - a2) >> 5 )
        {
          *v7 = std::_Uninitialized_move<winrt::immersive_shell_component::service_description *>(a2, v9, 32 * a4 + a2);
          std::_Destroy_range<std::allocator<winrt::immersive_shell_component::service_description>>(a2, v9);
        }
        else
        {
          v24 = v9 - v23;
          *v7 = std::_Uninitialized_move<winrt::immersive_shell_component::service_description *>(v9 - v23, v9, v9);
          std::_Move_backward_unchecked<winrt::immersive_shell_component::service_description *,winrt::immersive_shell_component::service_description *>(
            a2,
            v24,
            v9);
          std::_Destroy_range<std::allocator<winrt::immersive_shell_component::service_description>>(a2, 32 * a4 + a2);
        }
        result = std::_Uninitialized_copy_n<winrt::immersive_shell_component::service_description const *>(a3, a4, a2);
      }
      catch ( ... )
      {
        v27 = a2;
        v28 = v9;
        v29 = a2 + 32 * a4;
        std::_Uninitialized_move<winrt::immersive_shell_component::service_description *>(v29, a2 + (a4 << 6), a2);
        v26 = 0LL;
        std::_Move_unchecked<winrt::immersive_shell_component::service_description *,winrt::immersive_shell_component::service_description *>(
          a2 + (a4 << 6),
          *v25,
          a2 + 32 * a4);
        std::_Destroy_range<std::allocator<winrt::immersive_shell_component::service_description>>(v9, *v25);
        *v25 = v9;
        throw;
      }
    }
    else
    {
      v12 = (v9 - v8) >> 5;
      v13 = 0x7FFFFFFFFFFFFFFLL;
      if ( a4 > 0x7FFFFFFFFFFFFFFLL - v12 )
        std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
      v14 = v12 + a4;
      v36 = v12 + a4;
      v15 = (v10 - v8) >> 5;
      v16 = v15 >> 1;
      if ( v15 <= 0x7FFFFFFFFFFFFFFLL - (v15 >> 1) )
      {
        v13 = v16 + v15;
        if ( v16 + v15 < v14 )
          v13 = v14;
      }
      size_of = std::_Get_size_of_n<32>(v13);
      v18 = std::_Allocate<16,std::_Default_allocate_traits>(size_of);
      v19 = (a2 - v8) >> 5;
      v33 = v18 + 32 * (v19 + a4);
      v26 = a1;
      v28 = v13;
      v30 = v33;
      v20 = 32 * v19 + v18;
      std::_Uninitialized_copy_n<winrt::immersive_shell_component::service_description const *>(a3, a4, v20);
      v29 = v20;
      if ( a4 == 1 && a2 == v9 )
      {
        v21 = v18;
        v22 = v8;
      }
      else
      {
        std::_Uninitialized_move<winrt::immersive_shell_component::service_description *>(v8, a2, v18);
        v29 = v18;
        v21 = v33;
        v22 = a2;
      }
      std::_Uninitialized_move<winrt::immersive_shell_component::service_description *>(v22, v9, v21);
      v27 = 0LL;
      std::vector<winrt::immersive_shell_component::service_description>::_Change_array(a1, v18, v36, v13);
      return std::vector<winrt::immersive_shell_component::service_description>::_Reallocation_guard::~_Reallocation_guard(&v26);
    }
  }
  return result;
}
