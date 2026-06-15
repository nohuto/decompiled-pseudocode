/*
 * XREFs of ??$_Insert_counted_range@PEAUAudioEffectInternal@@@?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UAudioEffectInternal@@@std@@@std@@@1@PEAUAudioEffectInternal@@_K@Z @ 0x1800D3FA0
 * Callers:
 *     ??$insert@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UAudioEffectInternal@@@std@@@std@@@std@@$0A@@?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UAudioEffectInternal@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UAudioEffectInternal@@@std@@@std@@@1@V21@1@Z @ 0x1800D42B4 (--$insert@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@UAudioEffectInternal@@@std@@@std@@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180013AF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEAAXQEAUAudioEffectInternal@@_K1@Z @ 0x180077378 (-_Change_array@-$vector@UAudioEffectInternal@@V-$allocator@UAudioEffectInternal@@@std@@@std@@AEA.c)
 *     ??$_Uninitialized_move@PEAUAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@YAPEAUAudioEffectInternal@@QEAU1@0PEAU1@AEAV?$allocator@UAudioEffectInternal@@@0@@Z @ 0x18007C930 (--$_Uninitialized_move@PEAUAudioEffectInternal@@V-$allocator@UAudioEffectInternal@@@std@@@std@@Y.c)
 *     ?_Calculate_growth@?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEBA_K_K@Z @ 0x1800ABED4 (-_Calculate_growth@-$vector@UAudioEffectInternal@@V-$allocator@UAudioEffectInternal@@@std@@@std@.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x1800AF194 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@V?$allocator@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@@std@@@std@@CAXXZ @ 0x1800BD030 (-_Xlength@-$vector@V-$unique_ptr@$$BY0A@PEAGU-$function_deleter@P6AXPEAX@Z$1-MIDL_user_free@@YAX.c)
 *     ??1_Reallocation_guard@?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@QEAA@XZ @ 0x1800C0384 (--1_Reallocation_guard@-$vector@UAudioEffectInternal@@V-$allocator@UAudioEffectInternal@@@std@@@.c)
 *     ??$_Uninitialized_copy_n@PEAUAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@YAPEAUAudioEffectInternal@@PEAU1@_K0AEAV?$allocator@UAudioEffectInternal@@@0@@Z @ 0x1800D41E8 (--$_Uninitialized_copy_n@PEAUAudioEffectInternal@@V-$allocator@UAudioEffectInternal@@@std@@@std@.c)
 *     memmove_0 @ 0x1801626F8 (memmove_0.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::vector<AudioEffectInternal>::_Insert_counted_range<AudioEffectInternal *>(
        _QWORD *a1,
        char *a2,
        __int64 a3,
        unsigned __int64 a4)
{
  char **v7; // r15
  _BYTE *v8; // r13
  char *v9; // rsi
  unsigned __int64 v10; // rcx
  unsigned __int64 size_of; // rax
  char *v12; // r15
  char *v13; // r8
  void *v14; // rcx
  __int64 v15; // rcx
  char *v16; // rdi
  char **v17; // [rsp+20h] [rbp-68h]
  _QWORD *v18; // [rsp+28h] [rbp-60h] BYREF
  char *v19; // [rsp+30h] [rbp-58h]
  unsigned __int64 v20; // [rsp+38h] [rbp-50h]
  char *v21; // [rsp+40h] [rbp-48h]
  char *v22; // [rsp+48h] [rbp-40h]
  __int64 v23; // [rsp+90h] [rbp+8h]
  unsigned __int64 v25; // [rsp+98h] [rbp+10h]
  unsigned __int64 v27; // [rsp+A8h] [rbp+20h]

  v27 = a4;
  v7 = (char **)(a1 + 1);
  v17 = (char **)(a1 + 1);
  v8 = (_BYTE *)*a1;
  v9 = (char *)a1[1];
  if ( a4 )
  {
    if ( a4 <= (a1[2] - (_QWORD)v9) / 24LL )
    {
      try
      {
        v15 = 24 * a4;
        if ( a4 >= 0xAAAAAAAAAAAAAAABuLL * ((v9 - a2) >> 3) )
        {
          v27 = (unsigned __int64)&a2[v15];
          *v7 = std::_Uninitialized_move<AudioEffectInternal *>(a2, (__int64)v9, &a2[v15]);
        }
        else
        {
          v16 = &v9[-v15];
          *v7 = std::_Uninitialized_move<AudioEffectInternal *>(&v9[-v15], (__int64)v9, v9);
          memmove_0(&v9[-(v16 - a2)], a2, v16 - a2);
        }
        std::_Uninitialized_copy_n<AudioEffectInternal *>(a3, a4, a2);
      }
      catch ( ... )
      {
        v19 = a2;
        v20 = (unsigned __int64)v9;
        v21 = &a2[24 * v27];
        std::_Uninitialized_move<AudioEffectInternal *>(v21, (__int64)&a2[48 * v27], a2);
        v18 = 0LL;
        std::_Move_unchecked<AudioEffectInternal *,AudioEffectInternal *>(&a2[48 * v27], *v17, &a2[24 * v27]);
        *v17 = v9;
        throw;
      }
    }
    else
    {
      v10 = 0xAAAAAAAAAAAAAAABuLL * ((v9 - v8) >> 3);
      if ( a4 > 0xAAAAAAAAAAAAAAALL - v10 )
        std::vector<wistd::unique_ptr<unsigned short * [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>>::_Xlength();
      v23 = v10 + a4;
      v25 = std::vector<AudioEffectInternal>::_Calculate_growth(a1, v10 + a4);
      size_of = std::_Get_size_of_n<24>(v25);
      v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
      v18 = a1;
      v20 = v25;
      v22 = &v12[24 * a4 + 8 * ((a2 - v8) >> 3)];
      std::_Uninitialized_copy_n<AudioEffectInternal *>(a3, a4, &v12[8 * ((a2 - v8) >> 3)]);
      v21 = &v12[8 * ((a2 - v8) >> 3)];
      if ( a4 == 1 && a2 == v9 )
      {
        v13 = v12;
        v14 = v8;
      }
      else
      {
        std::_Uninitialized_move<AudioEffectInternal *>(v8, (__int64)a2, v12);
        v21 = v12;
        v13 = &v12[24 * a4 + 8 * ((a2 - v8) >> 3)];
        v14 = a2;
      }
      std::_Uninitialized_move<AudioEffectInternal *>(v14, (__int64)v9, v13);
      v19 = 0LL;
      std::vector<AudioEffectInternal>::_Change_array((__int64)a1, (__int64)v12, v23, v25);
      std::vector<AudioEffectInternal>::_Reallocation_guard::~_Reallocation_guard((__int64)&v18);
    }
  }
}
