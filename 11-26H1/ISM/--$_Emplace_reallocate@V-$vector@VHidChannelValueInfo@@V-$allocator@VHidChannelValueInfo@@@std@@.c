/*
 * XREFs of ??$_Emplace_reallocate@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@@?$vector@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@V?$allocator@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@@2@@std@@AEAAPEAV?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x1800E925C
 * Callers:
 *     ?ExtractReportDescriptorsFromPreparsedData@HidLampArrayDevice@@AEAAJQEAU_HIDP_PREPARSED_DATA@@AEAV?$unique_ptr@$$BY0A@UParsedHidReportDescriptor@@U?$default_delete@$$BY0A@UParsedHidReportDescriptor@@@std@@@std@@PEAI@Z @ 0x180070FFC (-ExtractReportDescriptorsFromPreparsedData@HidLampArrayDevice@@AEAAJQEAU_HIDP_PREPARSED_DATA@@AE.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x18004FA00 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180075758 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAV?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@V?$allocator@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@@2@@std@@YAPEAV?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@@0@@Z @ 0x1800EA2D4 (--$_Uninitialized_move@PEAV-$vector@VHidChannelValueInfo@@V-$allocator@VHidChannelValueInfo@@@st.c)
 *     ??1_Reallocation_guard@?$vector@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@V?$allocator@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x1800EA4B0 (--1_Reallocation_guard@-$vector@V-$vector@VHidChannelValueInfo@@V-$allocator@VHidChannelValueInf.c)
 *     ?_Change_array@?$vector@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@V?$allocator@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@@2@@std@@AEAAXQEAV?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@2@_K1@Z @ 0x1800ED428 (-_Change_array@-$vector@V-$vector@VHidChannelValueInfo@@V-$allocator@VHidChannelValueInfo@@@std@.c)
 */

char *__fastcall std::vector<std::vector<HidChannelValueInfo>>::_Emplace_reallocate<std::vector<HidChannelValueInfo>>(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3)
{
  unsigned __int64 v4; // rbx
  __int64 v7; // r14
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 size_of; // rax
  char *v13; // rax
  __int64 v14; // rdx
  char *v15; // rdi
  char *v16; // r14
  __int64 v17; // rcx
  __int64 v18; // rax
  _QWORD *v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  _QWORD *v23; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v24; // [rsp+30h] [rbp-48h]
  char *v25; // [rsp+38h] [rbp-40h]
  _QWORD *v26; // [rsp+40h] [rbp-38h]

  v4 = 0xAAAAAAAAAAAAAAALL;
  v7 = (a2 - *a1) / 24;
  v8 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1[1] - *a1) >> 3);
  if ( v8 == 0xAAAAAAAAAAAAAAALL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
  v9 = v8 + 1;
  v10 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1[2] - *a1) >> 3);
  v11 = v10 >> 1;
  if ( v10 <= 0xAAAAAAAAAAAAAAALL - (v10 >> 1) )
  {
    v4 = v11 + v10;
    if ( v11 + v10 < v9 )
      v4 = v9;
  }
  size_of = std::_Get_size_of_n<24>(v4);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v14 = a3[2];
  v23 = a1;
  a3[2] = 0LL;
  v15 = v13;
  v16 = &v13[24 * v7];
  v24 = v4;
  v17 = a3[1];
  v18 = *a3;
  a3[1] = 0LL;
  *a3 = 0LL;
  v19 = v15;
  *(_QWORD *)v16 = v18;
  *((_QWORD *)v16 + 1) = v17;
  *((_QWORD *)v16 + 2) = v14;
  v20 = a1[1];
  v21 = *a1;
  v26 = v16 + 24;
  v25 = v16;
  if ( a2 != v20 )
  {
    std::_Uninitialized_move<std::vector<HidChannelValueInfo> *,std::allocator<std::vector<HidChannelValueInfo>>>(
      v21,
      a2,
      v15);
    v20 = a1[1];
    v19 = v16 + 24;
    v21 = a2;
    v25 = v15;
  }
  std::_Uninitialized_move<std::vector<HidChannelValueInfo> *,std::allocator<std::vector<HidChannelValueInfo>>>(
    v21,
    v20,
    v19);
  std::vector<std::vector<HidChannelValueInfo>>::_Change_array(a1, v15, v9, v4, v23, 0LL, v24, v25, v26);
  std::vector<std::vector<HidChannelValueInfo>>::_Reallocation_guard::~_Reallocation_guard(&v23);
  return v16;
}
