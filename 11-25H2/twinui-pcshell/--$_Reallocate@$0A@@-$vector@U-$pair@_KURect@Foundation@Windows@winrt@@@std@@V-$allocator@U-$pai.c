/*
 * XREFs of ??$_Reallocate@$0A@@?$vector@U?$pair@_KURect@Foundation@Windows@winrt@@@std@@V?$allocator@U?$pair@_KURect@Foundation@Windows@winrt@@@std@@@2@@std@@AEAAXAEA_K@Z @ 0x180594404
 * Callers:
 *     ?SnapWindows@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXU?$array_view@$$CBUWindowId@UI@Windows@winrt@@@7@U?$array_view@$$CBURect@Foundation@Windows@winrt@@@7@@Z @ 0x1805972DC (-SnapWindows@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x180029EEC (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180029F1C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1806A4B18 (memmove_0.c)
 */

__int64 __fastcall std::vector<std::pair<unsigned __int64,winrt::Windows::Foundation::Rect>>::_Reallocate<0>(
        __int64 a1,
        unsigned __int64 *a2)
{
  unsigned __int64 v4; // rdi
  size_t size_of; // rax
  void *v6; // rax
  void *v7; // rsi
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // r8
  void *v10; // rdx
  __int64 v11; // rcx
  void *v13; // [rsp+40h] [rbp+8h]

  v4 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3);
  size_of = std::_Get_size_of_n<24>(*a2);
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v7 = v6;
  v13 = v6;
  try
  {
    memmove_0(v6, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
    v8 = *a2;
    v9 = v4;
    v10 = v7;
    v11 = a1;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v13, (const struct std::nothrow_t *)(24 * *a2));
    throw;
  }
  return std::vector<std::pair<unsigned __int64,winrt::Windows::Foundation::Rect>>::_Change_array(v11, v10, v9, v8);
}
