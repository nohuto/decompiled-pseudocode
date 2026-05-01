/*
 * XREFs of ??$_Reallocate@$0A@@?$vector@U?$pair@_KURect@Foundation@Windows@winrt@@@std@@V?$allocator@U?$pair@_KURect@Foundation@Windows@winrt@@@std@@@2@@std@@AEAAXAEA_K@Z @ 0x1805B84D4
 * Callers:
 *     ?SnapWindows@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXU?$array_view@$$CBUWindowId@UI@Windows@winrt@@@7@U?$array_view@$$CBURect@Foundation@Windows@winrt@@@7@@Z @ 0x1805BB51C (-SnapWindows@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x18012BD18 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAUClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V?$allocator@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@std@@@std@@YAPEAUClassIdAndInfo@ImmersiveShellComponentsConfiguration@@QEAU12@0PEAU12@AEAV?$allocator@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@0@@Z @ 0x1803D9294 (--$_Uninitialized_move@PEAUClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V-$allocator@UC.c)
 *     ??1_Reallocation_guard@?$vector@U?$pair@_KURect@Foundation@Windows@winrt@@@std@@V?$allocator@U?$pair@_KURect@Foundation@Windows@winrt@@@std@@@2@@std@@QEAA@XZ @ 0x1803D9B20 (--1_Reallocation_guard@-$vector@U-$pair@_KURect@Foundation@Windows@winrt@@@std@@V-$allocator@U-$.c)
 *     ?_Change_array@?$vector@U?$pair@_KURect@Foundation@Windows@winrt@@@std@@V?$allocator@U?$pair@_KURect@Foundation@Windows@winrt@@@std@@@2@@std@@AEAAXQEAU?$pair@_KURect@Foundation@Windows@winrt@@@2@_K1@Z @ 0x1803E57D4 (-_Change_array@-$vector@U-$pair@_KURect@Foundation@Windows@winrt@@@std@@V-$allocator@U-$pair@_KU.c)
 */

void __fastcall std::vector<std::pair<unsigned __int64,winrt::Windows::Foundation::Rect>>::_Reallocate<0>(
        void **a1,
        unsigned __int64 *a2)
{
  __int64 v4; // rdi
  unsigned __int64 size_of; // rax
  char *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rbx
  void *v9; // rcx
  __int64 v10; // r9
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0xAAAAAAAAAAAAAAABuLL * (((_BYTE *)a1[1] - (_BYTE *)*a1) >> 3);
  size_of = std::_Get_size_of_n<24>(*a2);
  v6 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v7 = (__int64)a1[1];
  v8 = (__int64)v6;
  v11[2] = *a2;
  v9 = *a1;
  v11[0] = a1;
  std::_Uninitialized_move<ImmersiveShellComponentsConfiguration::ClassIdAndInfo *>(v9, v7, v6);
  v10 = *a2;
  v11[1] = 0LL;
  std::vector<std::pair<unsigned __int64,winrt::Windows::Foundation::Rect>>::_Change_array((__int64)a1, v8, v4, v10);
  std::vector<std::pair<unsigned __int64,winrt::Windows::Foundation::Rect>>::_Reallocation_guard::~_Reallocation_guard((__int64)v11);
}
