/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UDISPLAYCONFIG_PATH_INFO@@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180115CE0
 * Callers:
 *     ?IsValidTabletDisplayConfig@DevicePostureHelpers@@YA_NXZ @ 0x18011698C (-IsValidTabletDisplayConfig@DevicePostureHelpers@@YA_NXZ.c)
 * Callees:
 *     ?_Change_array@?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@AEAAXQEAVHidChannelValueInfo@@_K1@Z @ 0x180073390 (-_Change_array@-$vector@VHidChannelValueInfo@@V-$allocator@VHidChannelValueInfo@@@std@@@std@@AEA.c)
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180075758 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??$_Get_size_of_n@$0EI@@std@@YA_K_K@Z @ 0x18007686C (--$_Get_size_of_n@$0EI@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??1_Reallocation_guard@?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@QEAA@XZ @ 0x1800EA4F0 (--1_Reallocation_guard@-$vector@VHidChannelValueInfo@@V-$allocator@VHidChannelValueInfo@@@std@@@.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@YAPEAUDISPLAYCONFIG_PATH_INFO@@PEAU1@_KAEAV?$allocator@UDISPLAYCONFIG_PATH_INFO@@@0@@Z @ 0x180115E2C (--$_Uninitialized_value_construct_n@V-$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@YAPEAUDIS.c)
 *     memmove_0 @ 0x1801D3DC0 (memmove_0.c)
 */

void __fastcall std::vector<DISPLAYCONFIG_PATH_INFO>::_Resize_reallocate<std::_Value_init_tag>(
        __int64 *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  __int64 v5; // r14
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rdx
  unsigned __int64 size_of; // rax
  char *v10; // rbx
  __int64 v11; // rax
  size_t v12; // r8
  const void *v13; // rdx
  _QWORD v14[3]; // [rsp+20h] [rbp-38h] BYREF
  char *v15; // [rsp+38h] [rbp-20h]
  __int64 v16; // [rsp+40h] [rbp-18h]

  v2 = 0x38E38E38E38E38ELL;
  if ( a2 > 0x38E38E38E38E38ELL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
  v5 = a1[1] - *a1;
  v6 = 0x8E38E38E38E38E39uLL * ((a1[2] - *a1) >> 3);
  v7 = 0x8E38E38E38E38E39uLL * (v5 >> 3);
  v8 = v6 >> 1;
  if ( v6 <= 0x38E38E38E38E38ELL - (v6 >> 1) )
  {
    v2 = v8 + v6;
    if ( v8 + v6 < a2 )
      v2 = a2;
  }
  size_of = std::_Get_size_of_n<72>(v2);
  v14[0] = a1;
  v14[2] = v2;
  v10 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v15 = &v10[72 * v7];
  v11 = std::_Uninitialized_value_construct_n<std::allocator<DISPLAYCONFIG_PATH_INFO>>(v15);
  v12 = a1[1] - *a1;
  v13 = (const void *)*a1;
  v16 = v11;
  memmove_0(v10, v13, v12);
  v14[1] = 0LL;
  std::vector<HidChannelValueInfo>::_Change_array(a1, (__int64)v10, a2, v2);
  std::vector<HidChannelValueInfo>::_Reallocation_guard::~_Reallocation_guard((__int64)v14);
}
