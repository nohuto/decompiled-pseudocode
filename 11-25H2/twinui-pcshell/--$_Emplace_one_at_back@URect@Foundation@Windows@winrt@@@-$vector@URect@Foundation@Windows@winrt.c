/*
 * XREFs of ??$_Emplace_one_at_back@URect@Foundation@Windows@winrt@@@?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@AEAAAEAURect@Foundation@Windows@winrt@@$$QEAU2345@@Z @ 0x1802CBC98
 * Callers:
 *     ?GetSuppressedDisplayRects@TouchGestureComponent@@AEAA?AV?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@XZ @ 0x180567B9C (-GetSuppressedDisplayRects@TouchGestureComponent@@AEAA-AV-$vector@URect@Foundation@Windows@winrt.c)
 *     ?UpdateSuppressionRegions@TouchGestureComponent@@AEAAXXZ @ 0x180567F9C (-UpdateSuppressionRegions@TouchGestureComponent@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::vector<winrt::Windows::Foundation::Rect>::_Emplace_one_at_back<winrt::Windows::Foundation::Rect>(
        __int64 a1,
        _OWORD *a2)
{
  _OWORD *v3; // rdx
  __int64 result; // rax

  v3 = *(_OWORD **)(a1 + 8);
  if ( v3 == *(_OWORD **)(a1 + 16) )
    return std::vector<Windows::Foundation::Rect>::_Emplace_reallocate<Windows::Foundation::Rect>(a1, v3, a2);
  *v3 = *a2;
  result = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = result + 16;
  return result;
}
