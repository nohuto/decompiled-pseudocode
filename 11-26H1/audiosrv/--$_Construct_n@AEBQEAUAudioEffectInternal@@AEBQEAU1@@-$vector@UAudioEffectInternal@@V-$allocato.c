/*
 * XREFs of ??$_Construct_n@AEBQEAUAudioEffectInternal@@AEBQEAU1@@?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEAAX_KAEBQEAUAudioEffectInternal@@1@Z @ 0x1800AC7EC
 * Callers:
 *     ?IsStreamingEffectsOverrideLooseMatch@CSharedStreamGroupProxy@@IEAA_NAEBV?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEBV?$vector@UAudioEffectState@CProcessingModeParameters@@V?$allocator@UAudioEffectState@CProcessingModeParameters@@@std@@@3@@Z @ 0x1800707F0 (-IsStreamingEffectsOverrideLooseMatch@CSharedStreamGroupProxy@@IEAA_NAEBV-$vector@UAudioEffectIn.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180013AF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Copy_memmove@PEAU_GUID@@PEAU1@@std@@YAPEAU_GUID@@PEAU1@00@Z @ 0x18005C018 (--$_Copy_memmove@PEAU_GUID@@PEAU1@@std@@YAPEAU_GUID@@PEAU1@00@Z.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x1800AF194 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@V?$allocator@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@@std@@@std@@CAXXZ @ 0x1800BD030 (-_Xlength@-$vector@V-$unique_ptr@$$BY0A@PEAGU-$function_deleter@P6AXPEAX@Z$1-MIDL_user_free@@YAX.c)
 *     ??1?$_Tidy_guard@V?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@@std@@QEAA@XZ @ 0x1800F98B0 (--1-$_Tidy_guard@V-$vector@UAudioEffectInternal@@V-$allocator@UAudioEffectInternal@@@std@@@std@@.c)
 */

void __fastcall std::vector<AudioEffectInternal>::_Construct_n<AudioEffectInternal * const &,AudioEffectInternal * const &>(
        _QWORD *a1,
        unsigned __int64 a2,
        void **a3,
        __int64 *a4)
{
  unsigned __int64 size_of; // rax
  char *v9; // rax
  char *v10; // rsi
  void *v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  if ( a2 )
  {
    if ( a2 > 0xAAAAAAAAAAAAAAALL )
      std::vector<wistd::unique_ptr<unsigned short * [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>>::_Xlength();
    size_of = std::_Get_size_of_n<24>(a2);
    v9 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
    *a1 = v9;
    a1[1] = v9;
    v10 = v9;
    a1[2] = &v9[24 * a2];
    v11 = *a3;
    v12 = *a4;
    std::_Copy_memmove<_GUID *,_GUID *>(*a3, v12, v9);
    v13 = 0LL;
    a1[1] = &v10[8 * ((v12 - (__int64)v11) >> 3)];
    std::_Tidy_guard<std::vector<AudioEffectInternal>>::~_Tidy_guard<std::vector<AudioEffectInternal>>(&v13);
  }
}
