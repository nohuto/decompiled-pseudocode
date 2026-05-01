/*
 * XREFs of ??$_Emplace_reallocate@AEBUDISPLAYCONFIG_MODE_INFO@@@?$vector@UDISPLAYCONFIG_MODE_INFO@@V?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@AEAAPEAUDISPLAYCONFIG_MODE_INFO@@QEAU2@AEBU2@@Z @ 0x1805BE0A0
 * Callers:
 *     ?BuildMonitorIndex@MonitorIDFinder@SnapAccessibilityHelpers@@QEAAXXZ @ 0x1805BE734 (-BuildMonitorIndex@MonitorIDFinder@SnapAccessibilityHelpers@@QEAAXXZ.c)
 * Callees:
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x180285304 (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0EA@@std@@YA_K_K@Z @ 0x1802B953C (--$_Get_size_of_n@$0EA@@std@@YA_K_K@Z.c)
 *     ??1_Reallocation_guard@?$vector@UDISPLAYCONFIG_MODE_INFO@@V?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@QEAA@XZ @ 0x1805BE70C (--1_Reallocation_guard@-$vector@UDISPLAYCONFIG_MODE_INFO@@V-$allocator@UDISPLAYCONFIG_MODE_INFO@.c)
 *     ?_Change_array@?$vector@UDISPLAYCONFIG_MODE_INFO@@V?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@AEAAXQEAUDISPLAYCONFIG_MODE_INFO@@_K1@Z @ 0x1805BF59C (-_Change_array@-$vector@UDISPLAYCONFIG_MODE_INFO@@V-$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@.c)
 *     memmove_0 @ 0x1806CCBD4 (memmove_0.c)
 */

char *__fastcall std::vector<DISPLAYCONFIG_MODE_INFO>::_Emplace_reallocate<DISPLAYCONFIG_MODE_INFO const &>(
        const void **a1,
        _BYTE *a2,
        __int128 *a3)
{
  unsigned __int64 v3; // rbx
  signed __int64 v4; // r14
  __int64 v6; // rax
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 size_of; // rax
  char *v13; // rax
  __int128 v14; // xmm0
  char *v15; // r14
  char *v16; // rsi
  void *v17; // rcx
  __int128 v18; // xmm1
  _BYTE *v19; // r8
  _BYTE *v20; // rdx
  size_t v21; // r8
  const void **v23; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v24; // [rsp+30h] [rbp-48h]
  char *v25; // [rsp+38h] [rbp-40h]
  _OWORD *v26; // [rsp+40h] [rbp-38h]

  v3 = 0x3FFFFFFFFFFFFFFLL;
  v4 = a2 - (_BYTE *)*a1;
  v6 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 6;
  if ( v6 == 0x3FFFFFFFFFFFFFFLL )
    std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
  v9 = v6 + 1;
  v10 = ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 6;
  v11 = v10 >> 1;
  if ( v10 <= 0x3FFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v6 + 1;
  }
  size_of = std::_Get_size_of_n<64>(v3);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v14 = *a3;
  v23 = a1;
  v15 = &v13[v4 & 0xFFFFFFFFFFFFFFC0uLL];
  v24 = v3;
  v16 = v13;
  v25 = v15;
  v17 = v13;
  *(_OWORD *)v15 = v14;
  v18 = a3[1];
  v26 = v15 + 64;
  *((_OWORD *)v15 + 1) = v18;
  *((_OWORD *)v15 + 2) = a3[2];
  *((_OWORD *)v15 + 3) = a3[3];
  v19 = a1[1];
  v20 = *a1;
  if ( a2 == v19 )
  {
    v21 = v19 - v20;
  }
  else
  {
    memmove_0(v13, v20, a2 - (_BYTE *)*a1);
    v20 = a2;
    v21 = (_BYTE *)a1[1] - a2;
    v25 = v16;
    v17 = v15 + 64;
  }
  memmove_0(v17, v20, v21);
  std::vector<DISPLAYCONFIG_MODE_INFO>::_Change_array(a1, v16, v9, v3, v23, 0LL, v24, v25, v26);
  std::vector<DISPLAYCONFIG_MODE_INFO>::_Reallocation_guard::~_Reallocation_guard(&v23);
  return v15;
}
