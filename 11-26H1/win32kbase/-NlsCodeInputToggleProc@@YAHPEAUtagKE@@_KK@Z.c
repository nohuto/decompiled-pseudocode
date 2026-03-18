/*
 * XREFs of ?NlsCodeInputToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x14021CE80
 * Callers:
 *     ?GenerateNlsVkAltKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z @ 0x14021CBC0 (-GenerateNlsVkAltKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z.c)
 *     ?GenerateNlsVkKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z @ 0x14021CC14 (-GenerateNlsVkKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z.c)
 * Callees:
 *     xxxKeyEventEx @ 0x140123104 (xxxKeyEventEx.c)
 *     ?NlsClearKeyStateToggle@@YAXE@Z @ 0x1401BF414 (-NlsClearKeyStateToggle@@YAXE@Z.c)
 *     ?NlsGetCurrentInputMode@@YAEPEBE@Z @ 0x1401C2350 (-NlsGetCurrentInputMode@@YAEPEBE@Z.c)
 */

__int64 __fastcall NlsCodeInputToggleProc(struct tagKE *a1, __int64 a2)
{
  unsigned __int8 CurrentInputMode; // al
  int v5; // ebx
  int v6; // ecx
  int v7; // edx
  int v8; // r8d

  if ( *((__int16 *)a1 + 1) < 0 )
    return 0LL;
  CurrentInputMode = NlsGetCurrentInputMode((unsigned __int8 *)&byte_14027C6A0);
  v5 = CurrentInputMode;
  *((_WORD *)a1 + 1) &= 0x8F00u;
  LOBYTE(v6) = CurrentInputMode;
  NlsClearKeyStateToggle(v6, v7, v8);
  if ( v5 == 250 )
  {
    xxxKeyEventEx(
      *((_WORD *)a1 + 1) | 0x80FAu,
      *(unsigned __int8 *)a1,
      *((_DWORD *)a1 + 1),
      a2,
      *((void **)a1 + 1),
      (unsigned __int16 *)a1 + 8,
      0,
      0,
      0LL,
      0LL);
    *((_WORD *)a1 + 1) |= 0xFBu;
  }
  else if ( v5 == 251 )
  {
    xxxKeyEventEx(
      *((_WORD *)a1 + 1) | 0x80FBu,
      *(unsigned __int8 *)a1,
      *((_DWORD *)a1 + 1),
      a2,
      *((void **)a1 + 1),
      (unsigned __int16 *)a1 + 8,
      0,
      0,
      0LL,
      0LL);
    *((_WORD *)a1 + 1) |= 0xFAu;
  }
  return 1LL;
}
