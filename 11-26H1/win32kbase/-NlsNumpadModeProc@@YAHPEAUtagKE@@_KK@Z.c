/*
 * XREFs of ?NlsNumpadModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x14021D3A0
 * Callers:
 *     ?GenerateNlsVkAltKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z @ 0x14021CBC0 (-GenerateNlsVkAltKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z.c)
 *     ?GenerateNlsVkKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z @ 0x14021CC14 (-GenerateNlsVkKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z.c)
 * Callees:
 *     ?NlsTestKeyStateToggle@@YAHE@Z @ 0x14021D5B4 (-NlsTestKeyStateToggle@@YAHE@Z.c)
 */

__int64 __fastcall NlsNumpadModeProc(struct tagKE *a1)
{
  unsigned int v1; // edi
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  __int16 v6; // dx
  __int16 v7; // dx

  v1 = *((unsigned __int8 *)a1 + 2);
  if ( !(unsigned int)NlsTestKeyStateToggle(0x90u) || (*(_BYTE *)(W32GetUserSessionState(v4, v3, v5) + 14396) & 1) != 0 )
  {
    v6 = *((_WORD *)a1 + 1) & 0x8F00;
    *((_WORD *)a1 + 1) = v6;
    if ( v1 <= 0x65 )
    {
      switch ( v1 )
      {
        case 'e':
          v7 = v6 | 0xC;
          goto LABEL_26;
        case '`':
          v7 = v6 | 0x2D;
          goto LABEL_26;
        case 'a':
          v7 = v6 | 0x23;
          goto LABEL_26;
        case 'b':
          v7 = v6 | 0x28;
          goto LABEL_26;
        case 'c':
          v7 = v6 | 0x22;
          goto LABEL_26;
        case 'd':
          v7 = v6 | 0x25;
          goto LABEL_26;
      }
    }
    else
    {
      switch ( v1 )
      {
        case 'f':
          v7 = v6 | 0x27;
          goto LABEL_26;
        case 'g':
          v7 = v6 | 0x24;
          goto LABEL_26;
        case 'h':
          v7 = v6 | 0x26;
          goto LABEL_26;
        case 'i':
          v7 = v6 | 0x21;
          goto LABEL_26;
        case 'n':
          v7 = v6 | 0x2E;
LABEL_26:
          *((_WORD *)a1 + 1) = v7;
          break;
      }
    }
  }
  return 1LL;
}
