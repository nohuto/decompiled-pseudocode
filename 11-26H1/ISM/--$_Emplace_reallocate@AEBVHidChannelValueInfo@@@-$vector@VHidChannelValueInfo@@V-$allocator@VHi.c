/*
 * XREFs of ??$_Emplace_reallocate@AEBVHidChannelValueInfo@@@?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@AEAAPEAVHidChannelValueInfo@@QEAV2@AEBV2@@Z @ 0x1800716B8
 * Callers:
 *     ?ExtractReportDescriptorsFromPreparsedData@HidLampArrayDevice@@AEAAJQEAU_HIDP_PREPARSED_DATA@@AEAV?$unique_ptr@$$BY0A@UParsedHidReportDescriptor@@U?$default_delete@$$BY0A@UParsedHidReportDescriptor@@@std@@@std@@PEAI@Z @ 0x180070FFC (-ExtractReportDescriptorsFromPreparsedData@HidLampArrayDevice@@AEAAJQEAU_HIDP_PREPARSED_DATA@@AE.c)
 *     ?TryCreateAndInitialize@HidLampMultiUpdateReportParser@@SAJPEBGAEBUHardwareAttributes@@PEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800EF398 (-TryCreateAndInitialize@HidLampMultiUpdateReportParser@@SAJPEBGAEBUHardwareAttributes@@PEBUParse.c)
 * Callees:
 *     ?_Change_array@?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@AEAAXQEAVHidChannelValueInfo@@_K1@Z @ 0x180073390 (-_Change_array@-$vector@VHidChannelValueInfo@@V-$allocator@VHidChannelValueInfo@@@std@@@std@@AEA.c)
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180075758 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??$_Get_size_of_n@$0EI@@std@@YA_K_K@Z @ 0x18007686C (--$_Get_size_of_n@$0EI@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAVHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@YAPEAVHidChannelValueInfo@@QEAV1@0PEAV1@AEAV?$allocator@VHidChannelValueInfo@@@0@@Z @ 0x180099880 (--$_Uninitialized_move@PEAVHidChannelValueInfo@@V-$allocator@VHidChannelValueInfo@@@std@@@std@@Y.c)
 *     ??1_Reallocation_guard@?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@QEAA@XZ @ 0x1800EA4F0 (--1_Reallocation_guard@-$vector@VHidChannelValueInfo@@V-$allocator@VHidChannelValueInfo@@@std@@@.c)
 */

__int64 __fastcall std::vector<HidChannelValueInfo>::_Emplace_reallocate<HidChannelValueInfo const &>(
        _QWORD *a1,
        __int64 a2,
        __int128 *a3)
{
  __int64 v4; // rbx
  __int64 v7; // r15
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 size_of; // rax
  __int64 v13; // rax
  __int128 v14; // xmm0
  __int64 v15; // rbp
  __int64 v16; // r8
  __int128 v17; // xmm1
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r9
  __int64 v21; // r10
  __int64 v22; // r10
  _QWORD *v24; // [rsp+20h] [rbp-48h] BYREF
  __int64 v25; // [rsp+30h] [rbp-38h]
  __int64 v26; // [rsp+38h] [rbp-30h]
  __int64 v27; // [rsp+40h] [rbp-28h]

  v4 = 0x38E38E38E38E38ELL;
  v7 = (a2 - *a1) / 72;
  v8 = 0x8E38E38E38E38E39uLL * ((__int64)(a1[1] - *a1) >> 3);
  if ( v8 == 0x38E38E38E38E38ELL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength(a1);
  v9 = v8 + 1;
  v10 = 0x8E38E38E38E38E39uLL * ((__int64)(a1[2] - *a1) >> 3);
  v11 = v10 >> 1;
  if ( v10 <= 0x38E38E38E38E38ELL - (v10 >> 1) )
  {
    v4 = v11 + v10;
    if ( v11 + v10 < v9 )
      v4 = v9;
  }
  size_of = std::_Get_size_of_n<72>(v4);
  v13 = std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v14 = *a3;
  v24 = a1;
  v25 = v4;
  v15 = v13 + 72 * v7;
  v16 = v13;
  *(_OWORD *)v15 = v14;
  v26 = v15;
  v17 = a3[1];
  v27 = v15 + 72;
  *(_OWORD *)(v15 + 16) = v17;
  *(_OWORD *)(v15 + 32) = a3[2];
  *(_OWORD *)(v15 + 48) = a3[3];
  *(_QWORD *)(v15 + 64) = *((_QWORD *)a3 + 8);
  v18 = a1[1];
  v19 = *a1;
  if ( a2 != v18 )
  {
    std::_Uninitialized_move<HidChannelValueInfo *>(v19, a2, v13);
    v18 = a1[1];
    v16 = v20;
    v19 = a2;
    v26 = v21;
  }
  std::_Uninitialized_move<HidChannelValueInfo *>(v19, v18, v16);
  std::vector<HidChannelValueInfo>::_Change_array(a1, v22, v9, v4, v24, 0LL, v25, v26, v27);
  std::vector<HidChannelValueInfo>::_Reallocation_guard::~_Reallocation_guard(&v24);
  return v15;
}
