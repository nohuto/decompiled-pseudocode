/*
 * XREFs of ??$_Construct_n@$$V@?$vector@UtagPOINTER_DEVICE_INFO@@V?$allocator@UtagPOINTER_DEVICE_INFO@@@std@@@std@@AEAAX_K@Z @ 0x1804826B0
 * Callers:
 *     ?GetDigitizerState@TabTipAdapterPolicy@KeyboardHosting@@AEAA?AUDigitizerState@2@XZ @ 0x180482FDC (-GetDigitizerState@TabTipAdapterPolicy@KeyboardHosting@@AEAA-AUDigitizerState@2@XZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ??1?$_Tidy_guard@V?$vector@UtagPOINTER_DEVICE_INFO@@V?$allocator@UtagPOINTER_DEVICE_INFO@@@std@@@std@@@std@@QEAA@XZ @ 0x180482C9C (--1-$_Tidy_guard@V-$vector@UtagPOINTER_DEVICE_INFO@@V-$allocator@UtagPOINTER_DEVICE_INFO@@@std@@.c)
 */

void __fastcall std::vector<tagPOINTER_DEVICE_INFO>::_Construct_n<>(_QWORD *a1, unsigned __int64 a2)
{
  size_t v3; // rdi
  char *v4; // rax
  char *v5; // rbx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  if ( a2 )
  {
    if ( a2 > 0x3CAE759203CAE7LL )
      std::_Xlength_error("vector too long");
    v3 = 1080 * a2;
    v4 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(1080 * a2);
    *a1 = v4;
    v5 = v4;
    a1[2] = &v4[v3];
    memset_0(v4, 0, v3);
    v6 = 0LL;
    a1[1] = &v5[v3];
    std::_Tidy_guard<std::vector<tagPOINTER_DEVICE_INFO>>::~_Tidy_guard<std::vector<tagPOINTER_DEVICE_INFO>>(&v6);
  }
}
