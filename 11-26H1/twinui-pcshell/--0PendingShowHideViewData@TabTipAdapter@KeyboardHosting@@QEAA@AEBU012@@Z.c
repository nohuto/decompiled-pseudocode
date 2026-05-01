/*
 * XREFs of ??0PendingShowHideViewData@TabTipAdapter@KeyboardHosting@@QEAA@AEBU012@@Z @ 0x1804786F0
 * Callers:
 *     ??$_Emplace_back_internal@AEBUPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@@?$deque@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@V?$allocator@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@@std@@@std@@AEAAXAEBUPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@@Z @ 0x180477800 (--$_Emplace_back_internal@AEBUPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@@-$deque@UP.c)
 *     ?OnPrimaryViewHidingResponse@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerPrimaryViewHidingResponseEventArgs@45678@@Z @ 0x18047B830 (-OnPrimaryViewHidingResponse@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@T.c)
 *     ?OnPrimaryViewShowingResponse@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerPrimaryViewShowingResponseEventArgs@45678@@Z @ 0x18047BB10 (-OnPrimaryViewShowingResponse@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@.c)
 * Callees:
 *     ??0?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1801B2A8C (--0-$vector@URect@Foundation@Windows@@V-$allocator@URect@Foundation@Windows@@@std@@@std@@QEAA@AE.c)
 */

KeyboardHosting::TabTipAdapter::PendingShowHideViewData *__fastcall KeyboardHosting::TabTipAdapter::PendingShowHideViewData::PendingShowHideViewData(
        KeyboardHosting::TabTipAdapter::PendingShowHideViewData *this,
        const struct KeyboardHosting::TabTipAdapter::PendingShowHideViewData *a2)
{
  *(_OWORD *)this = *(_OWORD *)a2;
  *((_OWORD *)this + 1) = *((_OWORD *)a2 + 1);
  *((_OWORD *)this + 2) = *((_OWORD *)a2 + 2);
  *((_OWORD *)this + 3) = *((_OWORD *)a2 + 3);
  *((_QWORD *)this + 8) = *((_QWORD *)a2 + 8);
  *((_DWORD *)this + 18) = *((_DWORD *)a2 + 18);
  *((_DWORD *)this + 19) = *((_DWORD *)a2 + 19);
  *((_OWORD *)this + 5) = *((_OWORD *)a2 + 5);
  *((_BYTE *)this + 96) = *((_BYTE *)a2 + 96);
  *((_BYTE *)this + 97) = *((_BYTE *)a2 + 97);
  std::vector<Windows::Foundation::Rect>::vector<Windows::Foundation::Rect>((__int64 *)this + 13, (void **)a2 + 13);
  return this;
}
