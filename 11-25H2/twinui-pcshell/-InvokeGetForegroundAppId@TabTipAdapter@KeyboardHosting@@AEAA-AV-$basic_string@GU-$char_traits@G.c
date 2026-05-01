/*
 * XREFs of ?InvokeGetForegroundAppId@TabTipAdapter@KeyboardHosting@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x18046C69C
 * Callers:
 *     ?OnEditControlPositionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlPositionChangedEventArgs@45678@@Z @ 0x1800946D0 (-OnEditControlPositionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@.c)
 *     ?NotifyOcclusionToCoreInputViewManager@TabTipAdapter@KeyboardHosting@@QEAAJIAEBUtagRECT@@@Z @ 0x180096F9C (-NotifyOcclusionToCoreInputViewManager@TabTipAdapter@KeyboardHosting@@QEAAJIAEBUtagRECT@@@Z.c)
 *     ?OnShellHotKey@TabTipAdapter@KeyboardHosting@@QEAAJW4_TouchKeyboardShellHotKeyType@@@Z @ 0x18046DEA4 (-OnShellHotKey@TabTipAdapter@KeyboardHosting@@QEAAJW4_TouchKeyboardShellHotKeyType@@@Z.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180029C50 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char **__fastcall KeyboardHosting::TabTipAdapter::InvokeGetForegroundAppId(__int64 a1, char **a2)
{
  __int64 v2; // rcx
  WCHAR *StringRawBuffer; // rax
  HSTRING string; // [rsp+48h] [rbp+10h] BYREF

  string = (HSTRING)a2;
  v2 = *(_QWORD *)(a1 + 128);
  string = 0LL;
  (*(void (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v2 + 272LL))(v2, &string);
  StringRawBuffer = (WCHAR *)WindowsGetStringRawBuffer(string, 0LL);
  std::wstring::wstring(a2, StringRawBuffer);
  return a2;
}
