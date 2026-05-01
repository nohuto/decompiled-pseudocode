/*
 * XREFs of ??$emplace_back@URect@Foundation@Windows@winrt@@@?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@QEAAAEAURect@Foundation@Windows@winrt@@$$QEAU2345@@Z @ 0x180477938
 * Callers:
 *     ?InvokeInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJIAEBUtagRECT@@UViewOptions@@@Z @ 0x1800291B0 (-InvokeInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJIAEBUtagRECT@@UViewOptions@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::vector<winrt::Windows::Foundation::Rect>::emplace_back<winrt::Windows::Foundation::Rect>(
        __int64 a1,
        _OWORD *a2)
{
  return std::vector<tagRECT>::_Emplace_one_at_back<tagRECT>(a1, a2);
}
