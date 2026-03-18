/*
 * XREFs of ?NlsNumpadModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x140218530
 * Callers:
 *     ?GenerateNlsVkAltKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z @ 0x140217D54 (-GenerateNlsVkAltKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z.c)
 *     ?GenerateNlsVkKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z @ 0x140217DA8 (-GenerateNlsVkKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z.c)
 * Callees:
 *     ?NlsTestKeyStateToggle@@YAHE@Z @ 0x140218744 (-NlsTestKeyStateToggle@@YAHE@Z.c)
 */

__int64 __fastcall NlsNumpadModeProc(struct tagKE *a1)
{
  unsigned int v1; // edi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int16 v5; // dx
  __int16 v6; // dx

  v1 = *((unsigned __int8 *)a1 + 2);
  if ( !(unsigned int)NlsTestKeyStateToggle(0x90u) || (*(_BYTE *)(W32GetUserSessionState(v4, v3) + 14404) & 1) != 0 )
  {
    v5 = *((_WORD *)a1 + 1) & 0x8F00;
    *((_WORD *)a1 + 1) = v5;
    if ( v1 <= 0x65 )
    {
      switch ( v1 )
      {
        case 'e':
          v6 = v5 | 0xC;
          goto LABEL_26;
        case '`':
          v6 = v5 | 0x2D;
          goto LABEL_26;
        case 'a':
          v6 = v5 | 0x23;
          goto LABEL_26;
        case 'b':
          v6 = v5 | 0x28;
          goto LABEL_26;
        case 'c':
          v6 = v5 | 0x22;
          goto LABEL_26;
        case 'd':
          v6 = v5 | 0x25;
          goto LABEL_26;
      }
    }
    else
    {
      switch ( v1 )
      {
        case 'f':
          v6 = v5 | 0x27;
          goto LABEL_26;
        case 'g':
          v6 = v5 | 0x24;
          goto LABEL_26;
        case 'h':
          v6 = v5 | 0x26;
          goto LABEL_26;
        case 'i':
          v6 = v5 | 0x21;
          goto LABEL_26;
        case 'n':
          v6 = v5 | 0x2E;
LABEL_26:
          *((_WORD *)a1 + 1) = v6;
          break;
      }
    }
  }
  return 1LL;
}
