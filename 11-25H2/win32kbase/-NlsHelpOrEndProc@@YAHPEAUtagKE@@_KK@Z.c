/*
 * XREFs of ?NlsHelpOrEndProc@@YAHPEAUtagKE@@_KK@Z @ 0x140218160
 * Callers:
 *     ?GenerateNlsVkAltKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z @ 0x140217D54 (-GenerateNlsVkAltKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z.c)
 *     ?GenerateNlsVkKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z @ 0x140217DA8 (-GenerateNlsVkKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z.c)
 * Callees:
 *     ?NlsTestKeyStateToggle@@YAHE@Z @ 0x140218744 (-NlsTestKeyStateToggle@@YAHE@Z.c)
 */

__int64 __fastcall NlsHelpOrEndProc(struct tagKE *a1, __int64 a2)
{
  __int16 v2; // ax
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // eax
  __int16 v7; // cx
  __int16 v8; // cx

  v2 = *((_WORD *)a1 + 1);
  if ( (v2 & 0x800) == 0 )
  {
    *((_WORD *)a1 + 1) = v2 & 0x8F00;
    if ( (*(_BYTE *)(W32GetUserSessionState(36608LL, a2) + 14333) & 1) != 0 )
    {
      if ( (*(_BYTE *)(W32GetUserSessionState(v5, v4) + 14333) & 2) != 0 )
      {
        *((_WORD *)a1 + 1) |= (unsigned int)NlsTestKeyStateToggle(0x15u) != 0 ? 47 : 35;
      }
      else
      {
        v6 = NlsTestKeyStateToggle(0x15u);
        v7 = *((_WORD *)a1 + 1);
        if ( v6 )
          v8 = v7 | 0x23;
        else
          v8 = v7 | 0x2F;
        *((_WORD *)a1 + 1) = v8;
      }
    }
    else
    {
      *((_WORD *)a1 + 1) |= (*(_BYTE *)(W32GetUserSessionState(v5, v4) + 14333) & 2) != 0 ? 35 : 47;
    }
  }
  return 1LL;
}
