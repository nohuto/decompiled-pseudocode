/*
 * XREFs of ??$_Emplace_reallocate@AEB_KAEBURect@Foundation@Windows@winrt@@@?$vector@U?$pair@_KURect@Foundation@Windows@winrt@@@std@@V?$allocator@U?$pair@_KURect@Foundation@Windows@winrt@@@std@@@2@@std@@AEAAPEAU?$pair@_KURect@Foundation@Windows@winrt@@@1@QEAU21@AEB_KAEBURect@Foundation@Windows@winrt@@@Z @ 0x180593B60
 * Callers:
 *     ?SnapWindows@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXU?$array_view@$$CBUWindowId@UI@Windows@winrt@@@7@U?$array_view@$$CBURect@Foundation@Windows@winrt@@@7@@Z @ 0x1805972DC (-SnapWindows@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x180029EEC (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180029F1C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@U?$pair@_KURect@Foundation@Windows@winrt@@@std@@V?$allocator@U?$pair@_KURect@Foundation@Windows@winrt@@@std@@@2@@std@@AEAAXQEAU?$pair@_KURect@Foundation@Windows@winrt@@@2@_K1@Z @ 0x1805976A0 (-_Change_array@-$vector@U-$pair@_KURect@Foundation@Windows@winrt@@@std@@V-$allocator@U-$pair@_KU.c)
 *     memmove_0 @ 0x1806A4B18 (memmove_0.c)
 */

char *__fastcall std::vector<std::pair<unsigned __int64,winrt::Windows::Foundation::Rect>>::_Emplace_reallocate<unsigned __int64 const &,winrt::Windows::Foundation::Rect const &>(
        const void **a1,
        _BYTE *a2,
        _QWORD *a3,
        _OWORD *a4)
{
  __int64 v7; // r14
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  size_t size_of; // rax
  char *v14; // rax
  char *v15; // rdi
  char *v16; // r14
  _BYTE *v17; // r8
  _BYTE *v18; // rdx
  void *v19; // rcx
  size_t v20; // r8
  char *result; // rax
  void *v22; // [rsp+68h] [rbp+10h]

  v7 = (a2 - (_BYTE *)*a1) / 24;
  v8 = 0xAAAAAAAAAAAAAAABuLL * (((_BYTE *)a1[1] - (_BYTE *)*a1) >> 3);
  v9 = 0xAAAAAAAAAAAAAAALL;
  if ( v8 == 0xAAAAAAAAAAAAAAALL )
    std::_Xlength_error("vector too long");
  v10 = v8 + 1;
  v11 = 0xAAAAAAAAAAAAAAABuLL * (((_BYTE *)a1[2] - (_BYTE *)*a1) >> 3);
  v12 = v11 >> 1;
  if ( v11 <= 0xAAAAAAAAAAAAAAALL - (v11 >> 1) )
  {
    v9 = v12 + v11;
    if ( v12 + v11 < v10 )
      v9 = v10;
  }
  size_of = std::_Get_size_of_n<24>(v9);
  v14 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v15 = v14;
  v22 = v14;
  try
  {
    v16 = &v14[24 * v7];
    *(_QWORD *)v16 = *a3;
    *(_OWORD *)(v16 + 8) = *a4;
    v17 = a1[1];
    v18 = *a1;
    v19 = v14;
    if ( a2 == v17 )
    {
      v20 = v17 - v18;
    }
    else
    {
      memmove_0(v14, v18, a2 - (_BYTE *)*a1);
      v19 = v16 + 24;
      v20 = (_BYTE *)a1[1] - a2;
      v18 = a2;
    }
    memmove_0(v19, v18, v20);
    std::vector<std::pair<unsigned __int64,winrt::Windows::Foundation::Rect>>::_Change_array(a1, v15, v10, v9);
    result = v16;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v22, (const struct std::nothrow_t *)(24 * v9));
    throw;
  }
  return result;
}
