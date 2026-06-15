/*
 * XREFs of ??$_Emplace_reallocate@AEBU_tagpropertykey@@@?$vector@U_tagpropertykey@@V?$allocator@U_tagpropertykey@@@std@@@std@@AEAAPEAU_tagpropertykey@@QEAU2@AEBU2@@Z @ 0x18014E650
 * Callers:
 *     ?RuntimeClassInitialize@CHybridPropertyStore@@QEAAJPEAUIMMDevice@@IPEBU_tagpropertykey@@@Z @ 0x18014EAAC (-RuntimeClassInitialize@CHybridPropertyStore@@QEAAJPEAUIMMDevice@@IPEBU_tagpropertykey@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180013AF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BE@@std@@YA_K_K@Z @ 0x1800A9D7C (--$_Get_size_of_n@$0BE@@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@V?$allocator@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@@std@@@std@@CAXXZ @ 0x1800BD030 (-_Xlength@-$vector@V-$unique_ptr@$$BY0A@PEAGU-$function_deleter@P6AXPEAX@Z$1-MIDL_user_free@@YAX.c)
 *     ??$_Uninitialized_move@PEAU_tagpropertykey@@V?$allocator@U_tagpropertykey@@@std@@@std@@YAPEAU_tagpropertykey@@QEAU1@0PEAU1@AEAV?$allocator@U_tagpropertykey@@@0@@Z @ 0x1800D4218 (--$_Uninitialized_move@PEAU_tagpropertykey@@V-$allocator@U_tagpropertykey@@@std@@@std@@YAPEAU_ta.c)
 *     ??1_Reallocation_guard@?$vector@UAudioEffectState@CProcessingModeParameters@@V?$allocator@UAudioEffectState@CProcessingModeParameters@@@std@@@std@@QEAA@XZ @ 0x1800D4330 (--1_Reallocation_guard@-$vector@UAudioEffectState@CProcessingModeParameters@@V-$allocator@UAudio.c)
 *     ?_Change_array@?$vector@UAudioEffectState@CProcessingModeParameters@@V?$allocator@UAudioEffectState@CProcessingModeParameters@@@std@@@std@@AEAAXQEAUAudioEffectState@CProcessingModeParameters@@_K1@Z @ 0x1800D6274 (-_Change_array@-$vector@UAudioEffectState@CProcessingModeParameters@@V-$allocator@UAudioEffectSt.c)
 */

char *__fastcall std::vector<_tagpropertykey>::_Emplace_reallocate<_tagpropertykey const &>(
        void **a1,
        __int64 a2,
        __int128 *a3)
{
  unsigned __int64 v4; // rbx
  __int64 v7; // r14
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 size_of; // rax
  char *v13; // rax
  __int128 v14; // xmm0
  __int64 v15; // rdi
  char *v16; // r14
  char *v17; // r8
  __int64 v18; // rdx
  void *v19; // rcx
  _QWORD v21[3]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v22; // [rsp+38h] [rbp-40h]
  char *v23; // [rsp+40h] [rbp-38h]

  v4 = 0xCCCCCCCCCCCCCCCLL;
  v7 = (a2 - (__int64)*a1) / 20;
  v8 = 0xCCCCCCCCCCCCCCCDuLL * (((_BYTE *)a1[1] - (_BYTE *)*a1) >> 2);
  if ( v8 == 0xCCCCCCCCCCCCCCCLL )
    std::vector<wistd::unique_ptr<unsigned short * [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>>::_Xlength();
  v9 = v8 + 1;
  v10 = 0xCCCCCCCCCCCCCCCDuLL * (((_BYTE *)a1[2] - (_BYTE *)*a1) >> 2);
  v11 = v10 >> 1;
  if ( v10 <= 0xCCCCCCCCCCCCCCCLL - (v10 >> 1) )
  {
    v4 = v11 + v10;
    if ( v11 + v10 < v9 )
      v4 = v9;
  }
  size_of = std::_Get_size_of_n<20>(v4);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v14 = *a3;
  v21[0] = a1;
  v15 = (__int64)v13;
  v21[2] = v4;
  v16 = &v13[20 * v7];
  v17 = v13;
  *(_OWORD *)v16 = v14;
  *((_DWORD *)v16 + 4) = *((_DWORD *)a3 + 4);
  v18 = (__int64)a1[1];
  v19 = *a1;
  v23 = v16 + 20;
  v22 = (__int64)v16;
  if ( a2 != v18 )
  {
    std::_Uninitialized_move<_tagpropertykey *>(v19, a2, v13);
    v18 = (__int64)a1[1];
    v17 = v16 + 20;
    v19 = (void *)a2;
    v22 = v15;
  }
  std::_Uninitialized_move<_tagpropertykey *>(v19, v18, v17);
  v21[1] = 0LL;
  std::vector<CProcessingModeParameters::AudioEffectState>::_Change_array((__int64)a1, v15, v9, v4);
  std::vector<CProcessingModeParameters::AudioEffectState>::_Reallocation_guard::~_Reallocation_guard((__int64)v21);
  return v16;
}
