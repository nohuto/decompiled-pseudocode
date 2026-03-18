/*
 * XREFs of ?NlsHelpOrEndProc@@YAHPEAUtagKE@@_KK@Z @ 0x14021CFD0
 * Callers:
 *     ?GenerateNlsVkAltKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z @ 0x14021CBC0 (-GenerateNlsVkAltKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z.c)
 *     ?GenerateNlsVkKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z @ 0x14021CC14 (-GenerateNlsVkKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z.c)
 * Callees:
 *     ?NlsTestKeyStateToggle@@YAHE@Z @ 0x14021D5B4 (-NlsTestKeyStateToggle@@YAHE@Z.c)
 */

__int64 __fastcall NlsHelpOrEndProc(struct tagKE *a1, int a2, int a3)
{
  __int16 v3; // ax
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  int v8; // eax
  __int16 v9; // cx
  __int16 v10; // cx

  v3 = *((_WORD *)a1 + 1);
  if ( (v3 & 0x800) == 0 )
  {
    *((_WORD *)a1 + 1) = v3 & 0x8F00;
    if ( (*(_BYTE *)(W32GetUserSessionState(36608, a2, a3) + 14325) & 1) != 0 )
    {
      if ( (*(_BYTE *)(W32GetUserSessionState(v6, v5, v7) + 14325) & 2) != 0 )
      {
        *((_WORD *)a1 + 1) |= (unsigned int)NlsTestKeyStateToggle(0x15u) != 0 ? 47 : 35;
      }
      else
      {
        v8 = NlsTestKeyStateToggle(0x15u);
        v9 = *((_WORD *)a1 + 1);
        if ( v8 )
          v10 = v9 | 0x23;
        else
          v10 = v9 | 0x2F;
        *((_WORD *)a1 + 1) = v10;
      }
    }
    else
    {
      *((_WORD *)a1 + 1) |= (*(_BYTE *)(W32GetUserSessionState(v6, v5, v7) + 14325) & 2) != 0 ? 35 : 47;
    }
  }
  return 1LL;
}
