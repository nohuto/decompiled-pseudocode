/*
 * XREFs of ?NlsHomeOrClearProc@@YAHPEAUtagKE@@_KK@Z @ 0x14021D190
 * Callers:
 *     ?GenerateNlsVkAltKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z @ 0x14021CBC0 (-GenerateNlsVkAltKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z.c)
 *     ?GenerateNlsVkKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z @ 0x14021CC14 (-GenerateNlsVkKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NlsHomeOrClearProc(struct tagKE *a1, int a2, int a3)
{
  __int16 v3; // ax
  bool v5; // zf
  __int16 v6; // ax
  __int16 v7; // ax

  v3 = *((_WORD *)a1 + 1);
  if ( (v3 & 0x800) == 0 )
  {
    *((_WORD *)a1 + 1) = v3 & 0x8F00;
    v5 = (*(_BYTE *)(W32GetUserSessionState(36608, a2, a3) + 14325) & 4) == 0;
    v6 = *((_WORD *)a1 + 1);
    if ( v5 )
      v7 = v6 | 0xC;
    else
      v7 = v6 | 0x24;
    *((_WORD *)a1 + 1) = v7;
  }
  return 1LL;
}
