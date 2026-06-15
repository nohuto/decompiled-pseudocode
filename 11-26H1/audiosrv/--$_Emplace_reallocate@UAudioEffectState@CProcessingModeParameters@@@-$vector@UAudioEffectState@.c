/*
 * XREFs of ??$_Emplace_reallocate@UAudioEffectState@CProcessingModeParameters@@@?$vector@UAudioEffectState@CProcessingModeParameters@@V?$allocator@UAudioEffectState@CProcessingModeParameters@@@std@@@std@@AEAAPEAUAudioEffectState@CProcessingModeParameters@@QEAU23@$$QEAU23@@Z @ 0x1800D3E58
 * Callers:
 *     ?FilterSettableEffectsOverride@@YAJAEBV?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEBV?$vector@UAudioEffectState@CProcessingModeParameters@@V?$allocator@UAudioEffectState@CProcessingModeParameters@@@std@@@2@AEAV32@@Z @ 0x1800AA57C (-FilterSettableEffectsOverride@@YAJAEBV-$vector@UAudioEffectInternal@@V-$allocator@UAudioEffectI.c)
 *     ?UpdatePMPStreamingEffectsOverride@CAudioStream@@AEAAXU_GUID@@H@Z @ 0x1800D61BC (-UpdatePMPStreamingEffectsOverride@CAudioStream@@AEAAXU_GUID@@H@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180013AF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BE@@std@@YA_K_K@Z @ 0x1800A9D7C (--$_Get_size_of_n@$0BE@@std@@YA_K_K@Z.c)
 *     ?_Calculate_growth@?$vector@UAudioEffectState@CProcessingModeParameters@@V?$allocator@UAudioEffectState@CProcessingModeParameters@@@std@@@std@@AEBA_K_K@Z @ 0x1800AE294 (-_Calculate_growth@-$vector@UAudioEffectState@CProcessingModeParameters@@V-$allocator@UAudioEffe.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@V?$allocator@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@@std@@@std@@CAXXZ @ 0x1800BD030 (-_Xlength@-$vector@V-$unique_ptr@$$BY0A@PEAGU-$function_deleter@P6AXPEAX@Z$1-MIDL_user_free@@YAX.c)
 *     ??$_Uninitialized_move@PEAU_tagpropertykey@@V?$allocator@U_tagpropertykey@@@std@@@std@@YAPEAU_tagpropertykey@@QEAU1@0PEAU1@AEAV?$allocator@U_tagpropertykey@@@0@@Z @ 0x1800D4218 (--$_Uninitialized_move@PEAU_tagpropertykey@@V-$allocator@U_tagpropertykey@@@std@@@std@@YAPEAU_ta.c)
 *     ??1_Reallocation_guard@?$vector@UAudioEffectState@CProcessingModeParameters@@V?$allocator@UAudioEffectState@CProcessingModeParameters@@@std@@@std@@QEAA@XZ @ 0x1800D4330 (--1_Reallocation_guard@-$vector@UAudioEffectState@CProcessingModeParameters@@V-$allocator@UAudio.c)
 *     ?_Change_array@?$vector@UAudioEffectState@CProcessingModeParameters@@V?$allocator@UAudioEffectState@CProcessingModeParameters@@@std@@@std@@AEAAXQEAUAudioEffectState@CProcessingModeParameters@@_K1@Z @ 0x1800D6274 (-_Change_array@-$vector@UAudioEffectState@CProcessingModeParameters@@V-$allocator@UAudioEffectSt.c)
 */

char *__fastcall std::vector<CProcessingModeParameters::AudioEffectState>::_Emplace_reallocate<CProcessingModeParameters::AudioEffectState>(
        _QWORD *a1,
        __int64 a2,
        __int128 *a3)
{
  __int64 v6; // rsi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // r14
  unsigned __int64 size_of; // rax
  char *v11; // rax
  __int128 v12; // xmm0
  char *v13; // rbx
  char *v14; // rsi
  char *v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD *v19; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v20; // [rsp+30h] [rbp-48h]
  char *v21; // [rsp+38h] [rbp-40h]
  char *v22; // [rsp+40h] [rbp-38h]

  v6 = (a2 - *a1) / 20;
  v7 = 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(a1[1] - *a1) >> 2);
  if ( v7 == 0xCCCCCCCCCCCCCCCLL )
    std::vector<wistd::unique_ptr<unsigned short * [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>>::_Xlength();
  v8 = v7 + 1;
  v9 = std::vector<CProcessingModeParameters::AudioEffectState>::_Calculate_growth(a1, v7 + 1);
  size_of = std::_Get_size_of_n<20>(v9);
  v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v12 = *a3;
  v19 = a1;
  v13 = v11;
  v20 = v9;
  v14 = &v11[20 * v6];
  v15 = v11;
  *(_OWORD *)v14 = v12;
  *((_DWORD *)v14 + 4) = *((_DWORD *)a3 + 4);
  v16 = a1[1];
  v17 = *a1;
  v22 = v14 + 20;
  v21 = v14;
  if ( a2 != v16 )
  {
    std::_Uninitialized_move<_tagpropertykey *>(v17, a2, v11);
    v16 = a1[1];
    v15 = v14 + 20;
    v17 = a2;
    v21 = v13;
  }
  std::_Uninitialized_move<_tagpropertykey *>(v17, v16, v15);
  std::vector<CProcessingModeParameters::AudioEffectState>::_Change_array(a1, v13, v8, v9, v19, 0LL, v20, v21, v22);
  std::vector<CProcessingModeParameters::AudioEffectState>::_Reallocation_guard::~_Reallocation_guard(&v19);
  return v14;
}
