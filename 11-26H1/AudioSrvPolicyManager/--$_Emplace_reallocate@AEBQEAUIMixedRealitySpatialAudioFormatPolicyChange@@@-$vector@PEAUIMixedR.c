/*
 * XREFs of ??$_Emplace_reallocate@AEBQEAUIMixedRealitySpatialAudioFormatPolicyChange@@@?$vector@PEAUIMixedRealitySpatialAudioFormatPolicyChange@@V?$allocator@PEAUIMixedRealitySpatialAudioFormatPolicyChange@@@std@@@std@@AEAAPEAPEAUIMixedRealitySpatialAudioFormatPolicyChange@@QEAPEAU2@AEBQEAU2@@Z @ 0x1800373D4
 * Callers:
 *     ?NotifyVolumePolicyChange@CApplication@@IEAAXXZ @ 0x180010FC0 (-NotifyVolumePolicyChange@CApplication@@IEAAXXZ.c)
 *     ?RegisterMixedRealitySpatialAudioFormatPolicyChange@CProcess@@QEAAJPEAUIMixedRealitySpatialAudioFormatPolicyChange@@@Z @ 0x1800395BC (-RegisterMixedRealitySpatialAudioFormatPolicyChange@CProcess@@QEAAJPEAUIMixedRealitySpatialAudio.c)
 *     ??$emplace_back@AEAPEAVCApplication@@@?$vector@PEAVCApplication@@V?$allocator@PEAVCApplication@@@std@@@std@@QEAAAEAPEAVCApplication@@AEAPEAV2@@Z @ 0x180043030 (--$emplace_back@AEAPEAVCApplication@@@-$vector@PEAVCApplication@@V-$allocator@PEAVCApplication@@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x18000E6B0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18002584C (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@PEAVCApplication@@V?$allocator@PEAVCApplication@@@std@@@std@@CAXXZ @ 0x18002EBBC (-_Xlength@-$vector@PEAVCApplication@@V-$allocator@PEAVCApplication@@@std@@@std@@CAXXZ.c)
 *     ??$_Uninitialized_move@PEAPEAUIMixedRealitySpatialAudioFormatPolicyChange@@V?$allocator@PEAUIMixedRealitySpatialAudioFormatPolicyChange@@@std@@@std@@YAPEAPEAUIMixedRealitySpatialAudioFormatPolicyChange@@QEAPEAU1@0PEAPEAU1@AEAV?$allocator@PEAUIMixedRealitySpatialAudioFormatPolicyChange@@@0@@Z @ 0x1800375AC (--$_Uninitialized_move@PEAPEAUIMixedRealitySpatialAudioFormatPolicyChange@@V-$allocator@PEAUIMix.c)
 *     ??1_Reallocation_guard@?$vector@PEAVCApplication@@V?$allocator@PEAVCApplication@@@std@@@std@@QEAA@XZ @ 0x180037C04 (--1_Reallocation_guard@-$vector@PEAVCApplication@@V-$allocator@PEAVCApplication@@@std@@@std@@QEA.c)
 *     ?_Change_array@?$vector@PEAVCApplication@@V?$allocator@PEAVCApplication@@@std@@@std@@AEAAXQEAPEAVCApplication@@_K1@Z @ 0x18003A8E4 (-_Change_array@-$vector@PEAVCApplication@@V-$allocator@PEAVCApplication@@@std@@@std@@AEAAXQEAPEA.c)
 */

char *__fastcall std::vector<IMixedRealitySpatialAudioFormatPolicyChange *>::_Emplace_reallocate<IMixedRealitySpatialAudioFormatPolicyChange * const &>(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3)
{
  unsigned __int64 v3; // rbx
  __int64 v5; // r15
  __int64 v7; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  char *v13; // rax
  __int64 v14; // rcx
  char *v15; // rdi
  _QWORD *v16; // r8
  char *v17; // r15
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD *v21; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v22; // [rsp+30h] [rbp-48h]
  char *v23; // [rsp+38h] [rbp-40h]
  _QWORD *v24; // [rsp+40h] [rbp-38h]

  v3 = 0x1FFFFFFFFFFFFFFFLL;
  v5 = (a2 - *a1) >> 3;
  v7 = (__int64)(a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<CApplication *>::_Xlength();
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
  v15 = v13;
  v21 = a1;
  v16 = v13;
  v22 = v3;
  v17 = &v13[8 * v5];
  *(_QWORD *)v17 = v14;
  v18 = a1[1];
  v19 = *a1;
  v24 = v17 + 8;
  v23 = v17;
  if ( a2 != v18 )
  {
    std::_Uninitialized_move<IMixedRealitySpatialAudioFormatPolicyChange * *>(v19, a2, v13);
    v18 = a1[1];
    v16 = v17 + 8;
    v19 = a2;
    v23 = v15;
  }
  std::_Uninitialized_move<IMixedRealitySpatialAudioFormatPolicyChange * *>(v19, v18, v16);
  std::vector<CApplication *>::_Change_array(a1, v15, v9, v3, v21, 0LL, v22, v23, v24);
  std::vector<CApplication *>::_Reallocation_guard::~_Reallocation_guard(&v21);
  return v17;
}
