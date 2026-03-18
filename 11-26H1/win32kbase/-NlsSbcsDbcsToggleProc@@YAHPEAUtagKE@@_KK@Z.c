/*
 * XREFs of ?NlsSbcsDbcsToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x140122D20
 * Callers:
 *     ?GenerateNlsVkAltKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z @ 0x14021CBC0 (-GenerateNlsVkAltKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z.c)
 *     ?GenerateNlsVkKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z @ 0x14021CC14 (-GenerateNlsVkKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z.c)
 * Callees:
 *     xxxKeyEventEx @ 0x140123104 (xxxKeyEventEx.c)
 *     ?NlsClearKeyStateToggle@@YAXE@Z @ 0x1401BF414 (-NlsClearKeyStateToggle@@YAXE@Z.c)
 *     ?NlsTestKeyStateToggle@@YAHE@Z @ 0x14021D5B4 (-NlsTestKeyStateToggle@@YAHE@Z.c)
 */

__int64 __fastcall NlsSbcsDbcsToggleProc(struct tagKE *a1, int a2)
{
  unsigned __int8 *v4; // rdi
  unsigned __int8 i; // al
  unsigned __int8 v6; // di

  if ( *((__int16 *)a1 + 1) < 0 )
    return 0LL;
  v4 = (unsigned __int8 *)&unk_14026A940;
  for ( i = -13; i; i = *v4 )
  {
    if ( (unsigned int)NlsTestKeyStateToggle(*v4) )
    {
      v6 = *v4;
      goto LABEL_8;
    }
    ++v4;
  }
  v6 = -13;
LABEL_8:
  *((_WORD *)a1 + 1) &= 0x8F00u;
  NlsClearKeyStateToggle(v6);
  if ( v6 == 243 )
  {
    xxxKeyEventEx(
      *((_WORD *)a1 + 1) | 0x80F3,
      *(unsigned __int8 *)a1,
      *((_DWORD *)a1 + 1),
      a2,
      *((_QWORD *)a1 + 1),
      (__int64)a1 + 16,
      0,
      0,
      0LL,
      0LL);
    *((_WORD *)a1 + 1) |= 0xF4u;
  }
  else if ( v6 == 244 )
  {
    xxxKeyEventEx(
      *((_WORD *)a1 + 1) | 0x80F4,
      *(unsigned __int8 *)a1,
      *((_DWORD *)a1 + 1),
      a2,
      *((_QWORD *)a1 + 1),
      (__int64)a1 + 16,
      0,
      0,
      0LL,
      0LL);
    *((_WORD *)a1 + 1) |= 0xF3u;
  }
  return 1LL;
}
