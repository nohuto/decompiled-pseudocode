/*
 * XREFs of ?_RegisterHotKeys@CMultitaskingViewHotKeyHandler@@AEAAJXZ @ 0x18049F8B4
 * Callers:
 *     ?RuntimeClassInitialize@CMultitaskingViewHotKeyHandler@@QEAAJPEAUIImmersiveWindowMessageService@@PEAUIImmersiveMonitorManager@@PEAUIMultitaskingViewTaskScheduler@@PEAUIApplicationViewCollection@@@Z @ 0x18049F820 (-RuntimeClassInitialize@CMultitaskingViewHotKeyHandler@@QEAAJPEAUIImmersiveWindowMessageService@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_ShouldShowMTVAltTab@CMultitaskingViewHotKeyHandler@@AEAA_NXZ @ 0x180164F10 (-_ShouldShowMTVAltTab@CMultitaskingViewHotKeyHandler@@AEAA_NXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMultitaskingViewHotKeyHandler::_RegisterHotKeys(CMultitaskingViewHotKeyHandler *this)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  _DWORD v6[3]; // [rsp+30h] [rbp-19h] BYREF
  __int64 v7; // [rsp+3Ch] [rbp-Dh]
  int v8; // [rsp+44h] [rbp-5h]
  int v9; // [rsp+48h] [rbp-1h]
  __int64 v10; // [rsp+4Ch] [rbp+3h]
  int v11; // [rsp+54h] [rbp+Bh]
  int v12; // [rsp+58h] [rbp+Fh]
  __int64 v13; // [rsp+5Ch] [rbp+13h]
  int v14; // [rsp+64h] [rbp+1Bh]
  int v15; // [rsp+68h] [rbp+1Fh]
  __int64 v16; // [rsp+6Ch] [rbp+23h]
  int v17; // [rsp+74h] [rbp+2Bh]
  int v18; // [rsp+78h] [rbp+2Fh]
  __int64 v19; // [rsp+7Ch] [rbp+33h]
  int v20; // [rsp+84h] [rbp+3Bh]
  int v21; // [rsp+88h] [rbp+3Fh]
  int v22; // [rsp+8Ch] [rbp+43h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  if ( !CMultitaskingViewHotKeyHandler::_ShouldShowMTVAltTab(this) )
    return 0LL;
  v2 = *((_QWORD *)this + 4);
  v6[0] = 0;
  v7 = 9LL;
  v10 = 9LL;
  v12 = 9;
  v13 = 9LL;
  v16 = 9LL;
  v19 = 9LL;
  v22 = 9;
  v6[1] = 40;
  v6[2] = 1;
  v8 = 41;
  v9 = 5;
  v11 = 42;
  v14 = 43;
  v15 = 13;
  v17 = 44;
  v18 = 3;
  v20 = 45;
  v21 = 7;
  v3 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *, unsigned __int64, char *))(*(_QWORD *)v2 + 56LL))(
         v2,
         6LL,
         v6,
         ((unsigned __int64)this + 8) & -(__int64)(this != 0LL),
         (char *)this + 64);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x80,
    (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewhotkeyhandler.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
