/*
 * XREFs of ??$_Emplace_reallocate@USpatialAudioAppDetails@@@?$vector@USpatialAudioAppDetails@@V?$allocator@USpatialAudioAppDetails@@@std@@@std@@AEAAPEAUSpatialAudioAppDetails@@QEAU2@$$QEAU2@@Z @ 0x180154200
 * Callers:
 *     ?ProcessSpatialAudioFormatElement@@YAJV?$com_ptr_t@UIInspectable@@Uerr_returncode_policy@wil@@@wil@@PEBGPEAUSpatialAudioFormatSubtypeInfo@@HPEA_N@Z @ 0x180092050 (-ProcessSpatialAudioFormatElement@@YAJV-$com_ptr_t@UIInspectable@@Uerr_returncode_policy@wil@@@w.c)
 *     ?push_back@?$vector@USpatialTechAppDetails@CommonSpatialTechInfo@AtmosCheck@@V?$allocator@USpatialTechAppDetails@CommonSpatialTechInfo@AtmosCheck@@@std@@@std@@QEAAX$$QEAUSpatialTechAppDetails@CommonSpatialTechInfo@AtmosCheck@@@Z @ 0x1801586EC (-push_back@-$vector@USpatialTechAppDetails@CommonSpatialTechInfo@AtmosCheck@@V-$allocator@USpati.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180013AF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x180013B50 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@V?$allocator@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@@std@@@std@@CAXXZ @ 0x1800BD030 (-_Xlength@-$vector@V-$unique_ptr@$$BY0A@PEAGU-$function_deleter@P6AXPEAX@Z$1-MIDL_user_free@@YAX.c)
 *     ??$_Uninitialized_move@PEAUSpatialAudioAppDetails@@V?$allocator@USpatialAudioAppDetails@@@std@@@std@@YAPEAUSpatialAudioAppDetails@@QEAU1@0PEAU1@AEAV?$allocator@USpatialAudioAppDetails@@@0@@Z @ 0x180154510 (--$_Uninitialized_move@PEAUSpatialAudioAppDetails@@V-$allocator@USpatialAudioAppDetails@@@std@@@.c)
 *     ??1_Reallocation_guard@?$vector@USpatialAudioAppDetails@@V?$allocator@USpatialAudioAppDetails@@@std@@@std@@QEAA@XZ @ 0x180154E24 (--1_Reallocation_guard@-$vector@USpatialAudioAppDetails@@V-$allocator@USpatialAudioAppDetails@@@.c)
 *     ?_Change_array@?$vector@USpatialAudioAppDetails@@V?$allocator@USpatialAudioAppDetails@@@std@@@std@@AEAAXQEAUSpatialAudioAppDetails@@_K1@Z @ 0x1801582E4 (-_Change_array@-$vector@USpatialAudioAppDetails@@V-$allocator@USpatialAudioAppDetails@@@std@@@st.c)
 */

char *__fastcall std::vector<SpatialAudioAppDetails>::_Emplace_reallocate<SpatialAudioAppDetails>(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v6; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 size_of; // rax
  char *v13; // rax
  __int64 v14; // rcx
  char *v15; // r14
  char *v16; // rsi
  _QWORD *v17; // r8
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  _QWORD *v22; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v23; // [rsp+30h] [rbp-48h]
  char *v24; // [rsp+38h] [rbp-40h]
  _QWORD *v25; // [rsp+40h] [rbp-38h]

  v3 = 0xFFFFFFFFFFFFFFFLL;
  v4 = a2 - *a1;
  v6 = (__int64)(a1[1] - *a1) >> 4;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    std::vector<wistd::unique_ptr<unsigned short * [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>>::_Xlength();
  v9 = v6 + 1;
  v10 = (__int64)(a1[2] - *a1) >> 4;
  v11 = v10 >> 1;
  if ( v10 <= 0xFFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v6 + 1;
  }
  size_of = std::_Get_size_of_n<16>(v3);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v14 = *a3;
  v15 = &v13[v4 & 0xFFFFFFFFFFFFFFF0uLL];
  v22 = a1;
  v16 = v13;
  v23 = v3;
  v24 = v15;
  v17 = v13;
  *(_QWORD *)v15 = v14;
  v18 = a3[1];
  *a3 = 0LL;
  *((_QWORD *)v15 + 1) = v18;
  a3[1] = 0LL;
  v19 = a1[1];
  v20 = *a1;
  v25 = v15 + 16;
  if ( a2 != v19 )
  {
    std::_Uninitialized_move<SpatialAudioAppDetails *>(v20, a2, v17);
    v19 = a1[1];
    v17 = v15 + 16;
    v20 = a2;
    v24 = v16;
  }
  std::_Uninitialized_move<SpatialAudioAppDetails *>(v20, v19, v17);
  std::vector<SpatialAudioAppDetails>::_Change_array(a1, v16, v9, v3, v22, 0LL, v23, v24, v25);
  std::vector<SpatialAudioAppDetails>::_Reallocation_guard::~_Reallocation_guard(&v22);
  return v15;
}
