/*
 * XREFs of ??$_Emplace_back_internal@AEBUPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@@?$deque@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@V?$allocator@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@@std@@@std@@AEAAXAEBUPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@@Z @ 0x180477800
 * Callers:
 *     ?OnInputAppRequestedHide@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedHideEventArgs@45678@@Z @ 0x180014B70 (-OnInputAppRequestedHide@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 *     ?OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedShowEventArgs@45678@@Z @ 0x1800278A0 (-OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Address_subscript@?$_Deque_val@U?$_Deque_simple_types@UtagPRESENTFRAME@@@std@@@std@@QEAAPEAUtagPRESENTFRAME@@_K@Z @ 0x180357948 (-_Address_subscript@-$_Deque_val@U-$_Deque_simple_types@UtagPRESENTFRAME@@@std@@@std@@QEAAPEAUta.c)
 *     ?_Getblock@?$deque@UtagPRESENTFRAME@@V?$allocator@UtagPRESENTFRAME@@@std@@@std@@AEBA_J_K@Z @ 0x18035838C (-_Getblock@-$deque@UtagPRESENTFRAME@@V-$allocator@UtagPRESENTFRAME@@@std@@@std@@AEBA_J_K@Z.c)
 *     ??0PendingShowHideViewData@TabTipAdapter@KeyboardHosting@@QEAA@AEBU012@@Z @ 0x1804786F0 (--0PendingShowHideViewData@TabTipAdapter@KeyboardHosting@@QEAA@AEBU012@@Z.c)
 *     ?_Growmap@?$deque@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@V?$allocator@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@@std@@@std@@AEAAX_K@Z @ 0x1804804E4 (-_Growmap@-$deque@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@V-$allocator@UPendingS.c)
 */

__int64 __fastcall std::deque<KeyboardHosting::TabTipAdapter::PendingShowHideViewData>::_Emplace_back_internal<KeyboardHosting::TabTipAdapter::PendingShowHideViewData const &>(
        _QWORD *a1,
        const struct KeyboardHosting::TabTipAdapter::PendingShowHideViewData *a2)
{
  __int64 v4; // rbp
  __int64 v5; // rsi
  KeyboardHosting::TabTipAdapter::PendingShowHideViewData *v6; // rax
  __int64 result; // rax

  if ( a1[2] <= (unsigned __int64)(a1[4] + 1LL) )
    std::deque<KeyboardHosting::TabTipAdapter::PendingShowHideViewData>::_Growmap();
  a1[3] &= a1[2] - 1LL;
  v4 = a1[4] + a1[3];
  v5 = std::deque<tagPRESENTFRAME>::_Getblock((__int64)a1, v4);
  if ( !*(_QWORD *)(a1[1] + 8 * v5) )
    *(_QWORD *)(a1[1] + 8 * v5) = std::_Allocate<16,std::_Default_allocate_traits>(0x80uLL);
  v6 = (KeyboardHosting::TabTipAdapter::PendingShowHideViewData *)std::_Deque_val<std::_Deque_simple_types<tagPRESENTFRAME>>::_Address_subscript(
                                                                    (__int64)a1,
                                                                    v4);
  result = KeyboardHosting::TabTipAdapter::PendingShowHideViewData::PendingShowHideViewData(v6, a2);
  ++a1[4];
  return result;
}
