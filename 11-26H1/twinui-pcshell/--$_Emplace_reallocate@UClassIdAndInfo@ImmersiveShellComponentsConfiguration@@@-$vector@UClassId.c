/*
 * XREFs of ??$_Emplace_reallocate@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@?$vector@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V?$allocator@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@std@@@std@@AEAAPEAUClassIdAndInfo@ImmersiveShellComponentsConfiguration@@QEAU23@$$QEAU23@@Z @ 0x1803D912C
 * Callers:
 *     ??$emplace_back@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@?$vector@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V?$allocator@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@std@@@std@@QEAAAEAUClassIdAndInfo@ImmersiveShellComponentsConfiguration@@$$QEAU23@@Z @ 0x1803D92F0 (--$emplace_back@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@-$vector@UClassIdAndInfo.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x18012BD18 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x180285304 (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAUClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V?$allocator@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@std@@@std@@YAPEAUClassIdAndInfo@ImmersiveShellComponentsConfiguration@@QEAU12@0PEAU12@AEAV?$allocator@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@0@@Z @ 0x1803D9294 (--$_Uninitialized_move@PEAUClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V-$allocator@UC.c)
 *     ??1_Reallocation_guard@?$vector@U?$pair@_KURect@Foundation@Windows@winrt@@@std@@V?$allocator@U?$pair@_KURect@Foundation@Windows@winrt@@@std@@@2@@std@@QEAA@XZ @ 0x1803D9B20 (--1_Reallocation_guard@-$vector@U-$pair@_KURect@Foundation@Windows@winrt@@@std@@V-$allocator@U-$.c)
 *     ?_Change_array@?$vector@U?$pair@_KURect@Foundation@Windows@winrt@@@std@@V?$allocator@U?$pair@_KURect@Foundation@Windows@winrt@@@std@@@2@@std@@AEAAXQEAU?$pair@_KURect@Foundation@Windows@winrt@@@2@_K1@Z @ 0x1803E57D4 (-_Change_array@-$vector@U-$pair@_KURect@Foundation@Windows@winrt@@@std@@V-$allocator@U-$pair@_KU.c)
 */

char *__fastcall std::vector<ImmersiveShellComponentsConfiguration::ClassIdAndInfo>::_Emplace_reallocate<ImmersiveShellComponentsConfiguration::ClassIdAndInfo>(
        _QWORD *a1,
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
  char *v15; // rdi
  char *v16; // r14
  char *v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD *v21; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v22; // [rsp+30h] [rbp-48h]
  char *v23; // [rsp+38h] [rbp-40h]
  char *v24; // [rsp+40h] [rbp-38h]

  v4 = 0xAAAAAAAAAAAAAAALL;
  v7 = (a2 - *a1) / 24;
  v8 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1[1] - *a1) >> 3);
  if ( v8 == 0xAAAAAAAAAAAAAAALL )
    std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
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
  v14 = *a3;
  v21 = a1;
  v15 = v13;
  v22 = v4;
  v16 = &v13[24 * v7];
  v17 = v13;
  *(_OWORD *)v16 = v14;
  v23 = v16;
  *((_QWORD *)v16 + 2) = *((_QWORD *)a3 + 2);
  v18 = a1[1];
  v19 = *a1;
  v24 = v16 + 24;
  if ( a2 != v18 )
  {
    std::_Uninitialized_move<ImmersiveShellComponentsConfiguration::ClassIdAndInfo *>(v19, a2, v13);
    v18 = a1[1];
    v17 = v16 + 24;
    v19 = a2;
    v23 = v15;
  }
  std::_Uninitialized_move<ImmersiveShellComponentsConfiguration::ClassIdAndInfo *>(v19, v18, v17);
  std::vector<std::pair<unsigned __int64,winrt::Windows::Foundation::Rect>>::_Change_array(
    a1,
    v15,
    v9,
    v4,
    v21,
    0LL,
    v22,
    v23,
    v24);
  std::vector<std::pair<unsigned __int64,winrt::Windows::Foundation::Rect>>::_Reallocation_guard::~_Reallocation_guard(&v21);
  return v16;
}
