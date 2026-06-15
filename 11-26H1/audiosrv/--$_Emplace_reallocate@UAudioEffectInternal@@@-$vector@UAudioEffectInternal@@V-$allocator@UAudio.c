/*
 * XREFs of ??$_Emplace_reallocate@UAudioEffectInternal@@@?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEAAPEAUAudioEffectInternal@@QEAU2@$$QEAU2@@Z @ 0x18008BEC4
 * Callers:
 *     ?CompareStreamingEffectsOverrideProcessingModeParameters@CSharedStreamGroupProxy@@IEAAJAEBVCProcessingModeParameters@@PEAW4PMP_MATCH_TYPE@@@Z @ 0x180070320 (-CompareStreamingEffectsOverrideProcessingModeParameters@CSharedStreamGroupProxy@@IEAAJAEBVCProc.c)
 *     ?GetControllableDiscoveryMFXEffects@AudioModeEffectsWatcher@@UEAAJAEAV?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@@Z @ 0x1800820C0 (-GetControllableDiscoveryMFXEffects@AudioModeEffectsWatcher@@UEAAJAEAV-$vector@UAudioEffectInter.c)
 *     ?GetEffectsFromMFXInstantiatedForStreaming@CSharedStreamGroupProxy@@UEAAJAEAV?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@@Z @ 0x1800ACF30 (-GetEffectsFromMFXInstantiatedForStreaming@CSharedStreamGroupProxy@@UEAAJAEAV-$vector@UAudioEffe.c)
 *     ?GetEffectsFromApo@CAudioStream@@AEAAJPEAUIAPOWrapperSrv@@AEAV?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@@Z @ 0x1800D46B0 (-GetEffectsFromApo@CAudioStream@@AEAAJPEAUIAPOWrapperSrv@@AEAV-$vector@UAudioEffectInternal@@V-$.c)
 *     ?MergeEffectsLists@CAudioStream@@AEAAJAEAV?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEAV?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@3@0@Z @ 0x1800D4B20 (-MergeEffectsLists@CAudioStream@@AEAAJAEAV-$vector@UAudioEffectInternal@@V-$allocator@UAudioEffe.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180013AF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEAAXQEAUAudioEffectInternal@@_K1@Z @ 0x180077378 (-_Change_array@-$vector@UAudioEffectInternal@@V-$allocator@UAudioEffectInternal@@@std@@@std@@AEA.c)
 *     ??$_Uninitialized_move@PEAUAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@YAPEAUAudioEffectInternal@@QEAU1@0PEAU1@AEAV?$allocator@UAudioEffectInternal@@@0@@Z @ 0x18007C930 (--$_Uninitialized_move@PEAUAudioEffectInternal@@V-$allocator@UAudioEffectInternal@@@std@@@std@@Y.c)
 *     ?_Calculate_growth@?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEBA_K_K@Z @ 0x1800ABED4 (-_Calculate_growth@-$vector@UAudioEffectInternal@@V-$allocator@UAudioEffectInternal@@@std@@@std@.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x1800AF194 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@V?$allocator@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@@std@@@std@@CAXXZ @ 0x1800BD030 (-_Xlength@-$vector@V-$unique_ptr@$$BY0A@PEAGU-$function_deleter@P6AXPEAX@Z$1-MIDL_user_free@@YAX.c)
 *     ??1_Reallocation_guard@?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@QEAA@XZ @ 0x1800C0384 (--1_Reallocation_guard@-$vector@UAudioEffectInternal@@V-$allocator@UAudioEffectInternal@@@std@@@.c)
 */

char *__fastcall std::vector<AudioEffectInternal>::_Emplace_reallocate<AudioEffectInternal>(
        void **a1,
        __int64 a2,
        __int128 *a3)
{
  __int64 v6; // rsi
  unsigned __int64 v7; // rax
  __int64 v8; // r15
  __int64 v9; // r14
  unsigned __int64 size_of; // rax
  char *v11; // rax
  __int128 v12; // xmm0
  __int64 v13; // rbx
  char *v14; // rsi
  char *v15; // r8
  __int64 v16; // rdx
  void *v17; // rcx
  _QWORD v19[3]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v20; // [rsp+38h] [rbp-40h]
  char *v21; // [rsp+40h] [rbp-38h]

  v6 = (a2 - (__int64)*a1) / 24;
  v7 = 0xAAAAAAAAAAAAAAABuLL * (((_BYTE *)a1[1] - (_BYTE *)*a1) >> 3);
  if ( v7 == 0xAAAAAAAAAAAAAAALL )
    std::vector<wistd::unique_ptr<unsigned short * [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>>::_Xlength();
  v8 = v7 + 1;
  v9 = std::vector<AudioEffectInternal>::_Calculate_growth(a1, v7 + 1);
  size_of = std::_Get_size_of_n<24>(v9);
  v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v12 = *a3;
  v19[0] = a1;
  v13 = (__int64)v11;
  v19[2] = v9;
  v14 = &v11[24 * v6];
  v15 = v11;
  *(_OWORD *)v14 = v12;
  v20 = (__int64)v14;
  *((_QWORD *)v14 + 2) = *((_QWORD *)a3 + 2);
  v16 = (__int64)a1[1];
  v17 = *a1;
  v21 = v14 + 24;
  if ( a2 != v16 )
  {
    std::_Uninitialized_move<AudioEffectInternal *>(v17, a2, v11);
    v16 = (__int64)a1[1];
    v15 = v14 + 24;
    v17 = (void *)a2;
    v20 = v13;
  }
  std::_Uninitialized_move<AudioEffectInternal *>(v17, v16, v15);
  v19[1] = 0LL;
  std::vector<AudioEffectInternal>::_Change_array((__int64)a1, v13, v8, v9);
  std::vector<AudioEffectInternal>::_Reallocation_guard::~_Reallocation_guard(v19);
  return v14;
}
