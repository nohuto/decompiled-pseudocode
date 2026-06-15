/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$function@$$A6AXXZ@std@@@?$vector@V?$function@$$A6AXXZ@std@@V?$allocator@V?$function@$$A6AXXZ@std@@@2@@std@@AEAAPEAV?$function@$$A6AXXZ@1@QEAV21@AEBV21@@Z @ 0x1800DF938
 * Callers:
 *     ?NotifyBidirectionalModeChanged@CBtAudioResourceManagerBase@@IEAAXXZ @ 0x1800E4868 (-NotifyBidirectionalModeChanged@CBtAudioResourceManagerBase@@IEAAXXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180013AF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??0?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@AEBV01@@Z @ 0x18001BF60 (--0-$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@AEBV01@@Z.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@V?$allocator@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@@std@@@std@@CAXXZ @ 0x1800BD030 (-_Xlength@-$vector@V-$unique_ptr@$$BY0A@PEAGU-$function_deleter@P6AXPEAX@Z$1-MIDL_user_free@@YAX.c)
 *     ??$_Get_size_of_n@$0EA@@std@@YA_K_K@Z @ 0x1800DFC34 (--$_Get_size_of_n@$0EA@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAV?$function@$$A6AXXZ@std@@V?$allocator@V?$function@$$A6AXXZ@std@@@2@@std@@YAPEAV?$function@$$A6AXXZ@0@QEAV10@0PEAV10@AEAV?$allocator@V?$function@$$A6AXXZ@std@@@0@@Z @ 0x1800DFEA0 (--$_Uninitialized_move@PEAV-$function@$$A6AXXZ@std@@V-$allocator@V-$function@$$A6AXXZ@std@@@2@@s.c)
 *     ??1_Reallocation_guard@?$vector@V?$function@$$A6AXXZ@std@@V?$allocator@V?$function@$$A6AXXZ@std@@@2@@std@@QEAA@XZ @ 0x1800E051C (--1_Reallocation_guard@-$vector@V-$function@$$A6AXXZ@std@@V-$allocator@V-$function@$$A6AXXZ@std@.c)
 *     ?_Change_array@?$vector@V?$function@$$A6AXXZ@std@@V?$allocator@V?$function@$$A6AXXZ@std@@@2@@std@@AEAAXQEAV?$function@$$A6AXXZ@2@_K1@Z @ 0x1800E790C (-_Change_array@-$vector@V-$function@$$A6AXXZ@std@@V-$allocator@V-$function@$$A6AXXZ@std@@@2@@std.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::vector<std::function<void (void)>>::_Emplace_reallocate<std::function<void (void)> const &>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rbx
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 size_of; // rax
  void *v13; // rdi
  __int64 v14; // r14
  __int64 v15; // rdx
  void *v16; // r8
  __int64 v17; // rcx
  _QWORD v19[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v20; // [rsp+30h] [rbp-48h]
  __int64 v21; // [rsp+38h] [rbp-40h]
  __int64 v22; // [rsp+40h] [rbp-38h]

  v6 = a2 - *a1;
  v7 = (a1[1] - *a1) >> 6;
  v8 = 0x3FFFFFFFFFFFFFFLL;
  if ( v7 == 0x3FFFFFFFFFFFFFFLL )
    std::vector<wistd::unique_ptr<unsigned short * [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>>::_Xlength();
  v9 = v7 + 1;
  v10 = (a1[2] - *a1) >> 6;
  v11 = v10 >> 1;
  if ( v10 <= 0x3FFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v8 = v11 + v10;
    if ( v11 + v10 < v9 )
      v8 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<64>(v8);
  v13 = std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v14 = (__int64)v13 + (v6 & 0xFFFFFFFFFFFFFFC0uLL);
  v19[0] = a1;
  v19[1] = v13;
  v20 = v8;
  v22 = v14 + 64;
  std::function<void (IAudioStreamInfo *)>::function<void (IAudioStreamInfo *)>(v14, a3);
  v21 = v14;
  v15 = a1[1];
  v16 = v13;
  v17 = *a1;
  if ( a2 != v15 )
  {
    std::_Uninitialized_move<std::function<void (void)> *,std::allocator<std::function<void (void)>>>(v17, a2, v13);
    v21 = (__int64)v13;
    v16 = (void *)(v14 + 64);
    v15 = a1[1];
    v17 = a2;
  }
  std::_Uninitialized_move<std::function<void (void)> *,std::allocator<std::function<void (void)>>>(v17, v15, v16);
  std::vector<std::function<void (void)>>::_Change_array(a1, v13, v9, v8, v19[0], 0LL, v20, v21, v22);
  std::vector<std::function<void (void)>>::_Reallocation_guard::~_Reallocation_guard(v19);
  return v14;
}
