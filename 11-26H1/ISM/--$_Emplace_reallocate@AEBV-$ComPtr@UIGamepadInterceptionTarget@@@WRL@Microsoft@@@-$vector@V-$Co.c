/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x180108B7C
 * Callers:
 *     ?SetGamepadInterceptionTarget@GamepadInterceptionHelper@@QEAA_NPEAUIGamepadInterceptionTarget@@@Z @ 0x180109F14 (-SetGamepadInterceptionTarget@GamepadInterceptionHelper@@QEAA_NPEAUIGamepadInterceptionTarget@@@.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18002B550 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180075758 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??1?$com_ptr_t@VBamoList_SimpleHapticsControllerPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800C8028 (--1-$com_ptr_t@VBamoList_SimpleHapticsControllerPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@.c)
 *     ??$_Uninitialized_move@PEAV?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@@0@@Z @ 0x180108D0C (--$_Uninitialized_move@PEAV-$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@V-$allocator@V-.c)
 *     ??1_Reallocation_guard@?$vector@V?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x180109A00 (--1_Reallocation_guard@-$vector@V-$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@V-$alloca.c)
 *     ?_Change_array@?$vector@V?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@_K1@Z @ 0x18010A168 (-_Change_array@-$vector@V-$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@V-$allocator@V-$C.c)
 */

__int64 *__fastcall std::vector<Microsoft::WRL::ComPtr<IGamepadInterceptionTarget>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IGamepadInterceptionTarget> const &>(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3)
{
  unsigned __int64 v3; // rbx
  __int64 v5; // r14
  __int64 v7; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 size_of; // rax
  char *v13; // rax
  __int64 v14; // rcx
  __int64 *v15; // rsi
  __int64 *v16; // r14
  __int64 v17; // rdx
  __int64 *v18; // r8
  __int64 v19; // rcx
  _QWORD *v21; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v22; // [rsp+30h] [rbp-48h]
  __int64 *v23; // [rsp+38h] [rbp-40h]
  __int64 *v24; // [rsp+40h] [rbp-38h]

  v3 = 0x1FFFFFFFFFFFFFFFLL;
  v5 = (a2 - *a1) >> 3;
  v7 = (__int64)(a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
  v9 = v7 + 1;
  v10 = (__int64)(a1[2] - *a1) >> 3;
  v11 = v10 >> 1;
  if ( v10 <= 0x1FFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v3);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v14 = *a3;
  v15 = (__int64 *)v13;
  v21 = a1;
  v22 = v3;
  v16 = (__int64 *)&v13[8 * v5];
  *v16 = v14;
  v24 = v16 + 1;
  wil::com_ptr_t<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_Principal,wil::err_returncode_policy>::~com_ptr_t<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_Principal,wil::err_returncode_policy>(v16);
  v17 = a1[1];
  v18 = v15;
  v19 = *a1;
  v23 = v16;
  if ( a2 != v17 )
  {
    std::_Uninitialized_move<Microsoft::WRL::ComPtr<IGamepadInterceptionTarget> *,std::allocator<Microsoft::WRL::ComPtr<IGamepadInterceptionTarget>>>(
      v19,
      a2,
      v15);
    v17 = a1[1];
    v18 = v16 + 1;
    v19 = a2;
    v23 = v15;
  }
  std::_Uninitialized_move<Microsoft::WRL::ComPtr<IGamepadInterceptionTarget> *,std::allocator<Microsoft::WRL::ComPtr<IGamepadInterceptionTarget>>>(
    v19,
    v17,
    v18);
  std::vector<Microsoft::WRL::ComPtr<IGamepadInterceptionTarget>>::_Change_array(
    a1,
    v15,
    v9,
    v3,
    v21,
    0LL,
    v22,
    v23,
    v24);
  std::vector<Microsoft::WRL::ComPtr<IGamepadInterceptionTarget>>::_Reallocation_guard::~_Reallocation_guard(&v21);
  return v16;
}
