/*
 * XREFs of ?NlsKanaEventProc@@YAHPEAUtagKE@@_KK@Z @ 0x14021D1F0
 * Callers:
 *     ?GenerateNlsVkAltKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z @ 0x14021CBC0 (-GenerateNlsVkAltKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z.c)
 *     ?GenerateNlsVkKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z @ 0x14021CC14 (-GenerateNlsVkKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z.c)
 * Callees:
 *     ?NlsTestKeyStateToggle@@YAHE@Z @ 0x14021D5B4 (-NlsTestKeyStateToggle@@YAHE@Z.c)
 *     NlsKbdSendIMEProc @ 0x14021D638 (NlsKbdSendIMEProc.c)
 */

__int64 __fastcall NlsKanaEventProc(struct tagKE *a1, __int64 a2, unsigned __int8 a3)
{
  __int16 v3; // dx
  _BOOL8 v4; // rcx

  v3 = a3 | *((_WORD *)a1 + 1) & 0x8F00;
  *((_WORD *)a1 + 1) = v3;
  if ( v3 >= 0 )
  {
    v4 = (unsigned int)NlsTestKeyStateToggle(0x15u) == 0;
    NlsKbdSendIMEProc(v4);
  }
  return 1LL;
}
