/*
 * XREFs of ?InvokeGetForegroundAppId@TabTipAdapter@KeyboardHosting@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x18047A424
 * Callers:
 *     ?OnEditControlPositionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlPositionChangedEventArgs@45678@@Z @ 0x1800BA190 (-OnEditControlPositionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@.c)
 *     ?NotifyOcclusionToCoreInputViewManager@TabTipAdapter@KeyboardHosting@@QEAAJIAEBUtagRECT@@@Z @ 0x1800BAAA4 (-NotifyOcclusionToCoreInputViewManager@TabTipAdapter@KeyboardHosting@@QEAAJIAEBUtagRECT@@@Z.c)
 *     ?OnShellHotKey@TabTipAdapter@KeyboardHosting@@QEAAJW4_TouchKeyboardShellHotKeyType@@@Z @ 0x18047C054 (-OnShellHotKey@TabTipAdapter@KeyboardHosting@@QEAAJW4_TouchKeyboardShellHotKeyType@@@Z.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180030428 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::InvokeGetForegroundAppId(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  PCWSTR StringRawBuffer; // rax
  HSTRING string; // [rsp+48h] [rbp+10h] BYREF

  string = (HSTRING)a2;
  v2 = *(_QWORD *)(a1 + 128);
  string = 0LL;
  (*(void (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v2 + 272LL))(v2, &string);
  StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  std::wstring::wstring(a2, (__int64)StringRawBuffer);
  return a2;
}
