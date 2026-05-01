/*
 * XREFs of ?GetDisplayNameFromWindow@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAUHWND__@@@Z @ 0x180576D3C
 * Callers:
 *     ?GetDisplayName@Win32AppStateManager@@UEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180574E40 (-GetDisplayName@Win32AppStateManager@@UEAA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@.c)
 *     ?GetWindowTitle@Win32AppStateManager@@UEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x1805750A0 (-GetWindowTitle@Win32AppStateManager@@UEAA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@.c)
 * Callees:
 *     ?resize@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_KG@Z @ 0x180177520 (-resize@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_KG@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@_KG@Z @ 0x1801DBBF8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@_KG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetDisplayNameFromWindow(__int64 a1, HWND a2)
{
  int WindowTextLengthW; // eax
  unsigned __int64 v5; // rsi
  WCHAR *v6; // rdx

  WindowTextLengthW = GetWindowTextLengthW(a2);
  v5 = WindowTextLengthW;
  std::wstring::wstring(a1, WindowTextLengthW + 1, 0);
  v6 = (WCHAR *)a1;
  if ( *(_QWORD *)(a1 + 24) > 7uLL )
    v6 = *(WCHAR **)a1;
  GetWindowTextW(a2, v6, *(_DWORD *)(a1 + 24));
  std::wstring::resize((__int64 *)a1, v5);
  return a1;
}
