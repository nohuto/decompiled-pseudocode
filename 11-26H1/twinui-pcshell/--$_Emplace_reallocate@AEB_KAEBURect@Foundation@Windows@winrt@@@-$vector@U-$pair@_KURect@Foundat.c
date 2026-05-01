/*
 * XREFs of ??$_Emplace_reallocate@AEB_KAEBURect@Foundation@Windows@winrt@@@?$vector@U?$pair@_KURect@Foundation@Windows@winrt@@@std@@V?$allocator@U?$pair@_KURect@Foundation@Windows@winrt@@@std@@@2@@std@@AEAAPEAU?$pair@_KURect@Foundation@Windows@winrt@@@1@QEAU21@AEB_KAEBURect@Foundation@Windows@winrt@@@Z @ 0x1805B7BCC
 * Callers:
 *     ?SnapWindows@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXU?$array_view@$$CBUWindowId@UI@Windows@winrt@@@7@U?$array_view@$$CBURect@Foundation@Windows@winrt@@@7@@Z @ 0x1805BB51C (-SnapWindows@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x18012BD18 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x180285304 (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAUClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V?$allocator@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@std@@@std@@YAPEAUClassIdAndInfo@ImmersiveShellComponentsConfiguration@@QEAU12@0PEAU12@AEAV?$allocator@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@0@@Z @ 0x1803D9294 (--$_Uninitialized_move@PEAUClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V-$allocator@UC.c)
 *     ??1_Reallocation_guard@?$vector@U?$pair@_KURect@Foundation@Windows@winrt@@@std@@V?$allocator@U?$pair@_KURect@Foundation@Windows@winrt@@@std@@@2@@std@@QEAA@XZ @ 0x1803D9B20 (--1_Reallocation_guard@-$vector@U-$pair@_KURect@Foundation@Windows@winrt@@@std@@V-$allocator@U-$.c)
 *     ?_Change_array@?$vector@U?$pair@_KURect@Foundation@Windows@winrt@@@std@@V?$allocator@U?$pair@_KURect@Foundation@Windows@winrt@@@std@@@2@@std@@AEAAXQEAU?$pair@_KURect@Foundation@Windows@winrt@@@2@_K1@Z @ 0x1803E57D4 (-_Change_array@-$vector@U-$pair@_KURect@Foundation@Windows@winrt@@@std@@V-$allocator@U-$pair@_KU.c)
 */

char *__fastcall std::vector<std::pair<unsigned __int64,winrt::Windows::Foundation::Rect>>::_Emplace_reallocate<unsigned __int64 const &,winrt::Windows::Foundation::Rect const &>(
        void **a1,
        __int64 a2,
        _QWORD *a3,
        _OWORD *a4)
{
  unsigned __int64 v5; // rbx
  __int64 v8; // r14
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 size_of; // rax
  char *v14; // rdi
  char *v15; // r8
  char *v16; // r14
  __int64 v17; // rdx
  void *v18; // rcx
  _QWORD v20[3]; // [rsp+20h] [rbp-58h] BYREF
  char *v21; // [rsp+38h] [rbp-40h]
  char *v22; // [rsp+40h] [rbp-38h]

  v5 = 0xAAAAAAAAAAAAAAALL;
  v8 = (a2 - (__int64)*a1) / 24;
  v9 = 0xAAAAAAAAAAAAAAABuLL * (((_BYTE *)a1[1] - (_BYTE *)*a1) >> 3);
  if ( v9 == 0xAAAAAAAAAAAAAAALL )
    std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
  v10 = v9 + 1;
  v11 = 0xAAAAAAAAAAAAAAABuLL * (((_BYTE *)a1[2] - (_BYTE *)*a1) >> 3);
  v12 = v11 >> 1;
  if ( v11 <= 0xAAAAAAAAAAAAAAALL - (v11 >> 1) )
  {
    v5 = v12 + v11;
    if ( v12 + v11 < v10 )
      v5 = v10;
  }
  size_of = std::_Get_size_of_n<24>(v5);
  v20[0] = a1;
  v14 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v20[2] = v5;
  v15 = v14;
  v16 = &v14[24 * v8];
  v21 = v16;
  v22 = v16 + 24;
  *(_QWORD *)v16 = *a3;
  *(_OWORD *)(v16 + 8) = *a4;
  v17 = (__int64)a1[1];
  v18 = *a1;
  if ( a2 != v17 )
  {
    std::_Uninitialized_move<ImmersiveShellComponentsConfiguration::ClassIdAndInfo *>(v18, a2, v14);
    v17 = (__int64)a1[1];
    v15 = v16 + 24;
    v18 = (void *)a2;
    v21 = v14;
  }
  std::_Uninitialized_move<ImmersiveShellComponentsConfiguration::ClassIdAndInfo *>(v18, v17, v15);
  v20[1] = 0LL;
  std::vector<std::pair<unsigned __int64,winrt::Windows::Foundation::Rect>>::_Change_array(
    (__int64)a1,
    (__int64)v14,
    v10,
    v5);
  std::vector<std::pair<unsigned __int64,winrt::Windows::Foundation::Rect>>::_Reallocation_guard::~_Reallocation_guard((__int64)v20);
  return v16;
}
