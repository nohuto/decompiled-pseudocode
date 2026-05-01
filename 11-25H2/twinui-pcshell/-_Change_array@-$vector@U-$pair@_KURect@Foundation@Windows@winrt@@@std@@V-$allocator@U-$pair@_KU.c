/*
 * XREFs of ?_Change_array@?$vector@U?$pair@_KURect@Foundation@Windows@winrt@@@std@@V?$allocator@U?$pair@_KURect@Foundation@Windows@winrt@@@std@@@2@@std@@AEAAXQEAU?$pair@_KURect@Foundation@Windows@winrt@@@2@_K1@Z @ 0x1805976A0
 * Callers:
 *     ??$_Emplace_reallocate@AEB_KAEBURect@Foundation@Windows@winrt@@@?$vector@U?$pair@_KURect@Foundation@Windows@winrt@@@std@@V?$allocator@U?$pair@_KURect@Foundation@Windows@winrt@@@std@@@2@@std@@AEAAPEAU?$pair@_KURect@Foundation@Windows@winrt@@@1@QEAU21@AEB_KAEBURect@Foundation@Windows@winrt@@@Z @ 0x180593B60 (--$_Emplace_reallocate@AEB_KAEBURect@Foundation@Windows@winrt@@@-$vector@U-$pair@_KURect@Foundat.c)
 *     ??$_Reallocate@$0A@@?$vector@U?$pair@_KURect@Foundation@Windows@winrt@@@std@@V?$allocator@U?$pair@_KURect@Foundation@Windows@winrt@@@std@@@2@@std@@AEAAXAEA_K@Z @ 0x180594404 (--$_Reallocate@$0A@@-$vector@U-$pair@_KURect@Foundation@Windows@winrt@@@std@@V-$allocator@U-$pai.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<std::pair<unsigned __int64,winrt::Windows::Foundation::Rect>>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, (const struct std::nothrow_t *)(8 * ((__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v6) >> 3)));
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 24 * a3;
  result = 3 * a4;
  *(_QWORD *)(a1 + 16) = a2 + 24 * a4;
  return result;
}
