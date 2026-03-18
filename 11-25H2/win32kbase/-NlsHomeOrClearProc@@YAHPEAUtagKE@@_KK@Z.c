/*
 * XREFs of ?NlsHomeOrClearProc@@YAHPEAUtagKE@@_KK@Z @ 0x140218320
 * Callers:
 *     ?GenerateNlsVkAltKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z @ 0x140217D54 (-GenerateNlsVkAltKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z.c)
 *     ?GenerateNlsVkKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z @ 0x140217DA8 (-GenerateNlsVkKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NlsHomeOrClearProc(struct tagKE *a1, __int64 a2)
{
  __int16 v2; // ax
  bool v4; // zf
  __int16 v5; // ax
  __int16 v6; // ax

  v2 = *((_WORD *)a1 + 1);
  if ( (v2 & 0x800) == 0 )
  {
    *((_WORD *)a1 + 1) = v2 & 0x8F00;
    v4 = (*(_BYTE *)(W32GetUserSessionState(36608LL, a2) + 14333) & 4) == 0;
    v5 = *((_WORD *)a1 + 1);
    if ( v4 )
      v6 = v5 | 0xC;
    else
      v6 = v5 | 0x24;
    *((_WORD *)a1 + 1) = v6;
  }
  return 1LL;
}
