/*
 * XREFs of ?EnumWindowsCallback@CopilotHotkeyManager@@SAHPEAUHWND__@@_J@Z @ 0x180623FE0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x180030E44 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?IsTargetAppWindow@CopilotHotkeyManager@@SA_NPEAUHWND__@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1806324B0 (-IsTargetAppWindow@CopilotHotkeyManager@@SA_NPEAUHWND__@@V-$basic_string@GU-$char_traits@G@std@@.c)
 */

__int64 __fastcall CopilotHotkeyManager::EnumWindowsCallback(HWND a1, __int64 a2)
{
  unsigned int PropW; // esi
  __int64 v5; // rax
  __int64 result; // rax
  _BYTE v7[40]; // [rsp+20h] [rbp-28h] BYREF

  PropW = (unsigned int)GetPropW(a1, L"CopilotKeyProviderFastPathMessage");
  if ( !PropW )
    return 1LL;
  v5 = std::wstring::wstring((__int64)v7, (_QWORD *)a2);
  if ( !(unsigned __int8)CopilotHotkeyManager::IsTargetAppWindow(a1, v5) )
    return 1LL;
  *(_QWORD *)(a2 + 40) = a1;
  result = 0LL;
  *(_DWORD *)(a2 + 32) = PropW;
  return result;
}
