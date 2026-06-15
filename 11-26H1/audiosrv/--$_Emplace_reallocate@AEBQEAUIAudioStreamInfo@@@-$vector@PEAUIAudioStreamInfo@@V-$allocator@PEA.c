/*
 * XREFs of ??$_Emplace_reallocate@AEBQEAUIAudioStreamInfo@@@?$vector@PEAUIAudioStreamInfo@@V?$allocator@PEAUIAudioStreamInfo@@@std@@@std@@AEAAPEAPEAUIAudioStreamInfo@@QEAPEAU2@AEBQEAU2@@Z @ 0x18005C434
 * Callers:
 *     ?AddStream@CBaseStreamGroupProxy@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x18005C1F0 (-AddStream@CBaseStreamGroupProxy@@IEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?AddStream@CProcessSubmixProxy@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x18005C308 (-AddStream@CProcessSubmixProxy@@IEAAJPEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180013AF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180050470 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAUAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@V?$allocator@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@std@@@std@@YAPEAUAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@QEAU123@0PEAU123@AEAV?$allocator@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@0@@Z @ 0x18005BEB0 (--$_Uninitialized_move@PEAUAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@V-$all.c)
 *     ?_Change_array@?$vector@PEAUIAudioStreamInfo@@V?$allocator@PEAUIAudioStreamInfo@@@std@@@std@@AEAAXQEAPEAUIAudioStreamInfo@@_K1@Z @ 0x180078248 (-_Change_array@-$vector@PEAUIAudioStreamInfo@@V-$allocator@PEAUIAudioStreamInfo@@@std@@@std@@AEA.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@V?$allocator@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@@std@@@std@@CAXXZ @ 0x1800BD030 (-_Xlength@-$vector@V-$unique_ptr@$$BY0A@PEAGU-$function_deleter@P6AXPEAX@Z$1-MIDL_user_free@@YAX.c)
 *     ??1_Reallocation_guard@?$vector@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@V?$allocator@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@std@@@std@@QEAA@XZ @ 0x1800F9A40 (--1_Reallocation_guard@-$vector@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@.c)
 */

char *__fastcall std::vector<IAudioStreamInfo *>::_Emplace_reallocate<IAudioStreamInfo * const &>(
        void **a1,
        __int64 a2,
        __int64 *a3)
{
  unsigned __int64 v3; // rbx
  __int64 v5; // r15
  __int64 v7; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 size_of; // rax
  char *v13; // rax
  __int64 v14; // rcx
  char *v15; // rdi
  __int64 v16; // r8
  char *v17; // r15
  __int64 v18; // rdx
  void *v19; // rcx
  void **v21; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v22; // [rsp+30h] [rbp-48h]
  char *v23; // [rsp+38h] [rbp-40h]
  _QWORD *v24; // [rsp+40h] [rbp-38h]

  v3 = 0x1FFFFFFFFFFFFFFFLL;
  v5 = (a2 - (__int64)*a1) >> 3;
  v7 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<wistd::unique_ptr<unsigned short * [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>>::_Xlength();
  v9 = v7 + 1;
  v10 = ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 3;
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
  v15 = v13;
  v21 = a1;
  v16 = (__int64)v13;
  v22 = v3;
  v17 = &v13[8 * v5];
  *(_QWORD *)v17 = v14;
  v18 = (__int64)a1[1];
  v19 = *a1;
  v24 = v17 + 8;
  v23 = v17;
  if ( a2 != v18 )
  {
    std::_Uninitialized_move<Sarm::CSpatialAudioResourceManager::AppPolicyChangeSubscription *>(v19, a2, (__int64)v13);
    v18 = (__int64)a1[1];
    v16 = (__int64)(v17 + 8);
    v19 = (void *)a2;
    v23 = v15;
  }
  std::_Uninitialized_move<Sarm::CSpatialAudioResourceManager::AppPolicyChangeSubscription *>(v19, v18, v16);
  std::vector<IAudioStreamInfo *>::_Change_array(a1, v15, v9, v3, v21, 0LL, v22, v23, v24);
  std::vector<Sarm::CSpatialAudioResourceManager::AppPolicyChangeSubscription>::_Reallocation_guard::~_Reallocation_guard(&v21);
  return v17;
}
