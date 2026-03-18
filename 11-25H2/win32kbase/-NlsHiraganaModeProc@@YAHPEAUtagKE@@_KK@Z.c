/*
 * XREFs of ?NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x140218220
 * Callers:
 *     ?GenerateNlsVkAltKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z @ 0x140217D54 (-GenerateNlsVkAltKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z.c)
 *     ?GenerateNlsVkKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z @ 0x140217DA8 (-GenerateNlsVkKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z.c)
 * Callees:
 *     xxxKeyEventEx @ 0x140150824 (xxxKeyEventEx.c)
 *     ?NlsClearKeyStateToggle@@YAXE@Z @ 0x14019F540 (-NlsClearKeyStateToggle@@YAXE@Z.c)
 *     ?NlsGetCurrentInputMode@@YAEPEBE@Z @ 0x1401A03F4 (-NlsGetCurrentInputMode@@YAEPEBE@Z.c)
 *     ?NlsTestKeyStateToggle@@YAHE@Z @ 0x140218744 (-NlsTestKeyStateToggle@@YAHE@Z.c)
 *     NlsKbdSendIMEProc @ 0x1402187C8 (NlsKbdSendIMEProc.c)
 */

__int64 __fastcall NlsHiraganaModeProc(struct tagKE *a1, __int64 a2)
{
  __int16 v2; // ax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int8 CurrentInputMode; // al
  __int16 v8; // bx
  __int64 v9; // rcx
  __int64 v10; // rdx

  v2 = *((_WORD *)a1 + 1);
  if ( v2 < 0 )
    return 0LL;
  *((_WORD *)a1 + 1) = v2 & 0x8F00;
  if ( !(unsigned int)NlsTestKeyStateToggle(0xF2u) )
  {
    CurrentInputMode = NlsGetCurrentInputMode((unsigned __int8 *)&byte_140273D28);
    v8 = CurrentInputMode;
    LOBYTE(v9) = CurrentInputMode;
    NlsClearKeyStateToggle(v9, v10);
    xxxKeyEventEx(
      *((_WORD *)a1 + 1) | v8 | 0x8000,
      *(unsigned __int8 *)a1,
      *((_DWORD *)a1 + 1),
      a2,
      *((void **)a1 + 1),
      (unsigned __int16 *)a1 + 8,
      0,
      0,
      0LL,
      0LL);
  }
  *((_WORD *)a1 + 1) |= 0xF2u;
  if ( !*(_DWORD *)(W32GetUserSessionState(v6, v5) + 14284) && !(unsigned int)NlsTestKeyStateToggle(0x15u) )
    NlsKbdSendIMEProc(0LL, 0LL);
  return 1LL;
}
