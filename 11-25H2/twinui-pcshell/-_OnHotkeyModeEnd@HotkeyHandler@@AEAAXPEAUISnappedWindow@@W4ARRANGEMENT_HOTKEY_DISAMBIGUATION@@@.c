/*
 * XREFs of ?_OnHotkeyModeEnd@HotkeyHandler@@AEAAXPEAUISnappedWindow@@W4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z @ 0x18058D210
 * Callers:
 *     ?HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z @ 0x18058B250 (-HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsValidSnapRegion@SnapLayoutHelpers@@YA_NW4SnapRegion@@@Z @ 0x1800D9658 (-IsValidSnapRegion@SnapLayoutHelpers@@YA_NW4SnapRegion@@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??1WindowArrangementHotkeyMode@CSnapComponentTelemetry@@QEAA@XZ @ 0x18058A550 (--1WindowArrangementHotkeyMode@CSnapComponentTelemetry@@QEAA@XZ.c)
 *     ?Stop@WindowArrangementHotkeyMode@CSnapComponentTelemetry@@QEAAXI@Z @ 0x18058CA58 (-Stop@WindowArrangementHotkeyMode@CSnapComponentTelemetry@@QEAAXI@Z.c)
 *     ?TransferToCurrentThread@WindowArrangementHotkeyMode@CSnapComponentTelemetry@@QEAA?AV12@XZ @ 0x18058D120 (-TransferToCurrentThread@WindowArrangementHotkeyMode@CSnapComponentTelemetry@@QEAA-AV12@XZ.c)
 *     ?_ResetState@HotkeyHandler@@AEAAXXZ @ 0x18058D320 (-_ResetState@HotkeyHandler@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall HotkeyHandler::_OnHotkeyModeEnd(__int64 a1, __int64 a2, int a3)
{
  unsigned int v6; // eax
  __int64 v7; // rsi
  __int64 (__fastcall *v8)(__int64, _QWORD, _QWORD, __int64); // rdi
  unsigned int v9; // ebx
  _QWORD *v10; // rax
  int v11; // eax
  __int64 v12[2]; // [rsp+30h] [rbp-198h] BYREF
  _BYTE v13[336]; // [rsp+40h] [rbp-188h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+0h]

  CSnapComponentTelemetry::WindowArrangementHotkeyMode::TransferToCurrentThread(
    a1 + 88,
    (struct wil::details::IFailureCallback *)v13);
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL))(a2);
  if ( SnapLayoutHelpers::IsValidSnapRegion((SnapLayoutHelpers *)v6) && a3 == 2 )
  {
    v7 = *(_QWORD *)(a1 + 24);
    v8 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v7 + 32LL);
    v9 = *(_DWORD *)(a1 + 420);
    v10 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 112LL))(a2, v12);
    v11 = v8(v7, *v10, v9, 1LL);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x4B6,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\hotkeyhandler.cpp",
        (const char *)(unsigned int)v11);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v12);
  }
  HotkeyHandler::_ResetState((HotkeyHandler *)a1);
  CSnapComponentTelemetry::WindowArrangementHotkeyMode::Stop(
    (CSnapComponentTelemetry::WindowArrangementHotkeyMode *)v13,
    a3);
  CSnapComponentTelemetry::WindowArrangementHotkeyMode::~WindowArrangementHotkeyMode((CSnapComponentTelemetry::WindowArrangementHotkeyMode *)v13);
}
