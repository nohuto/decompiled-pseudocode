/*
 * XREFs of ?NlsClearKeyStateToggle@@YAXE@Z @ 0x14019F540
 * Callers:
 *     ?NlsSbcsDbcsToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1401506F0 (-NlsSbcsDbcsToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x140217EF0 (-NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsCodeInputToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x140218010 (-NlsCodeInputToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x140218220 (-NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x140218430 (-NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsRomanToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x140218610 (-NlsRomanToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall NlsClearKeyStateToggle(__int64 a1, __int64 a2)
{
  char v2; // di
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned __int64 v5; // rbx
  __int64 UserSessionState; // rax

  v2 = a1;
  v5 = (unsigned __int64)(unsigned __int8)a1 >> 2;
  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 18888) )
  {
    v3 = *(_QWORD *)(W32GetUserSessionState(v4, v3) + 18888);
    v4 = *(unsigned __int8 *)(v3 + v5 + 256);
    LODWORD(v4) = v4 & ~(1 << (2 * (v2 & 3) + 1));
    *(_BYTE *)(v3 + v5 + 256) = v4;
  }
  UserSessionState = W32GetUserSessionState(v4, v3);
  *(_BYTE *)(UserSessionState + v5 + 14336) &= ~(1 << (2 * (v2 & 3) + 1));
}
