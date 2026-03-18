/*
 * XREFs of ?NlsKanaModeToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x14021D240
 * Callers:
 *     ?GenerateNlsVkAltKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z @ 0x14021CBC0 (-GenerateNlsVkAltKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z.c)
 *     ?GenerateNlsVkKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z @ 0x14021CC14 (-GenerateNlsVkKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z.c)
 * Callees:
 *     ?NlsTestKeyStateToggle@@YAHE@Z @ 0x14021D5B4 (-NlsTestKeyStateToggle@@YAHE@Z.c)
 */

__int64 __fastcall NlsKanaModeToggleProc(struct tagKE *a1)
{
  __int16 v1; // bx
  int v3; // eax
  __int16 v4; // cx

  v1 = *((_WORD *)a1 + 1);
  v3 = NlsTestKeyStateToggle(0x15u);
  v4 = *((_WORD *)a1 + 1) & 0xF00;
  *((_WORD *)a1 + 1) = v4;
  if ( v1 < 0 )
    return 0LL;
  *((_WORD *)a1 + 1) = v4 | (v3 != 0 ? -32747 : 21);
  return 1LL;
}
