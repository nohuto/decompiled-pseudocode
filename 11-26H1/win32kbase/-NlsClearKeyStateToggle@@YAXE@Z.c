/*
 * XREFs of ?NlsClearKeyStateToggle@@YAXE@Z @ 0x1401BF414
 * Callers:
 *     ?NlsSbcsDbcsToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x140122D20 (-NlsSbcsDbcsToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x14021CD60 (-NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsCodeInputToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x14021CE80 (-NlsCodeInputToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x14021D090 (-NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x14021D2A0 (-NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsRomanToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x14021D480 (-NlsRomanToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall NlsClearKeyStateToggle(int a1, int a2, int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rdx
  int v5; // ecx
  int v6; // r8d
  char v7; // di
  __int64 UserSessionState; // rax

  v3 = (unsigned __int64)(unsigned __int8)a1 >> 2;
  v7 = 2 * (a1 & 3);
  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 18928) )
  {
    v4 = *(_QWORD *)(W32GetUserSessionState(v5, v4, v6) + 18928);
    v5 = *(unsigned __int8 *)(v4 + v3 + 280) & ~(1 << (v7 + 1));
    *(_BYTE *)(v4 + v3 + 280) = v5;
  }
  UserSessionState = W32GetUserSessionState(v5, v4, v6);
  *(_BYTE *)(UserSessionState + v3 + 14328) &= ~(1 << (v7 + 1));
}
