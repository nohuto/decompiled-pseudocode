/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$basic_regex@GV?$regex_traits@G@std@@@std@@@?$vector@V?$basic_regex@GV?$regex_traits@G@std@@@std@@V?$allocator@V?$basic_regex@GV?$regex_traits@G@std@@@std@@@2@@std@@AEAAPEAV?$basic_regex@GV?$regex_traits@G@std@@@1@QEAV21@AEBV21@@Z @ 0x180148E10
 * Callers:
 *     ?ReadConfiguration@EffectPackConfiguration@@QEAAJPEAUIPropertyStore@@00W4ValidEffectPackConfigurationSettings@@@Z @ 0x180058868 (-ReadConfiguration@EffectPackConfiguration@@QEAAJPEAUIPropertyStore@@00W4ValidEffectPackConfigur.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180013AF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x1800A9E70 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@V?$allocator@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@@std@@@std@@CAXXZ @ 0x1800BD030 (-_Xlength@-$vector@V-$unique_ptr@$$BY0A@PEAGU-$function_deleter@P6AXPEAX@Z$1-MIDL_user_free@@YAX.c)
 *     ??$_Uninitialized_move@PEAV?$basic_regex@GV?$regex_traits@G@std@@@std@@V?$allocator@V?$basic_regex@GV?$regex_traits@G@std@@@std@@@2@@std@@YAPEAV?$basic_regex@GV?$regex_traits@G@std@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$basic_regex@GV?$regex_traits@G@std@@@std@@@0@@Z @ 0x18014985C (--$_Uninitialized_move@PEAV-$basic_regex@GV-$regex_traits@G@std@@@std@@V-$allocator@V-$basic_reg.c)
 *     ??$construct@V?$basic_regex@GV?$regex_traits@G@std@@@std@@AEBV12@@?$_Default_allocator_traits@V?$allocator@V?$basic_regex@GV?$regex_traits@G@std@@@std@@@std@@@std@@SAXAEAV?$allocator@V?$basic_regex@GV?$regex_traits@G@std@@@std@@@1@QEAV?$basic_regex@GV?$regex_traits@G@std@@@1@AEBV31@@Z @ 0x1801498E8 (--$construct@V-$basic_regex@GV-$regex_traits@G@std@@@std@@AEBV12@@-$_Default_allocator_traits@V-.c)
 *     ??1_Reallocation_guard@?$vector@V?$basic_regex@GV?$regex_traits@G@std@@@std@@V?$allocator@V?$basic_regex@GV?$regex_traits@G@std@@@std@@@2@@std@@QEAA@XZ @ 0x18014A894 (--1_Reallocation_guard@-$vector@V-$basic_regex@GV-$regex_traits@G@std@@@std@@V-$allocator@V-$bas.c)
 *     ?_Change_array@?$vector@V?$basic_regex@GV?$regex_traits@G@std@@@std@@V?$allocator@V?$basic_regex@GV?$regex_traits@G@std@@@std@@@2@@std@@AEAAXQEAV?$basic_regex@GV?$regex_traits@G@std@@@2@_K1@Z @ 0x18014C510 (-_Change_array@-$vector@V-$basic_regex@GV-$regex_traits@G@std@@@std@@V-$allocator@V-$basic_regex.c)
 */

// Hidden C++ exception states: #wind=1
char *__fastcall std::vector<std::basic_regex<unsigned short,std::regex_traits<unsigned short>>>::_Emplace_reallocate<std::basic_regex<unsigned short,std::regex_traits<unsigned short>> const &>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // r14
  __int64 v7; // rdx
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  unsigned __int64 size_of; // rax
  char *v13; // rdi
  __int64 v14; // rcx
  char *v15; // r14
  __int64 v16; // rdx
  char *v17; // r8
  __int64 v18; // rcx
  _QWORD v20[2]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v21; // [rsp+30h] [rbp-48h]
  char *v22; // [rsp+38h] [rbp-40h]
  char *v23; // [rsp+40h] [rbp-38h]

  v6 = (a2 - *a1) / 40;
  v7 = (a1[1] - *a1) / 40;
  v8 = 0x666666666666666LL;
  if ( v7 == 0x666666666666666LL )
    std::vector<wistd::unique_ptr<unsigned short * [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>>::_Xlength();
  v9 = v7 + 1;
  v10 = (a1[2] - *a1) / 40;
  v11 = v10 >> 1;
  if ( v10 <= 0x666666666666666LL - (v10 >> 1) )
  {
    v8 = v11 + v10;
    if ( v11 + v10 < v9 )
      v8 = v9;
  }
  size_of = std::_Get_size_of_n<40>(v8);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v14 = 5 * v6;
  v15 = &v13[40 * v6];
  v20[0] = a1;
  v20[1] = v13;
  v21 = v8;
  v23 = v15 + 40;
  std::_Default_allocator_traits<std::allocator<std::basic_regex<unsigned short,std::regex_traits<unsigned short>>>>::construct<std::basic_regex<unsigned short,std::regex_traits<unsigned short>>,std::basic_regex<unsigned short,std::regex_traits<unsigned short>> const &>(
    v14,
    v15,
    a3);
  v22 = v15;
  v16 = a1[1];
  v17 = v13;
  v18 = *a1;
  if ( a2 != v16 )
  {
    std::_Uninitialized_move<std::basic_regex<unsigned short,std::regex_traits<unsigned short>> *,std::allocator<std::basic_regex<unsigned short,std::regex_traits<unsigned short>>>>(
      v18,
      a2,
      v13);
    v22 = v13;
    v17 = v15 + 40;
    v16 = a1[1];
    v18 = a2;
  }
  std::_Uninitialized_move<std::basic_regex<unsigned short,std::regex_traits<unsigned short>> *,std::allocator<std::basic_regex<unsigned short,std::regex_traits<unsigned short>>>>(
    v18,
    v16,
    v17);
  std::vector<std::basic_regex<unsigned short,std::regex_traits<unsigned short>>>::_Change_array(
    a1,
    v13,
    v9,
    v8,
    v20[0],
    0LL,
    v21,
    v22,
    v23);
  std::vector<std::basic_regex<unsigned short,std::regex_traits<unsigned short>>>::_Reallocation_guard::~_Reallocation_guard(v20);
  return v15;
}
