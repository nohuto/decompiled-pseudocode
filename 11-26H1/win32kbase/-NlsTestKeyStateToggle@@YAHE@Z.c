/*
 * XREFs of ?NlsTestKeyStateToggle@@YAHE@Z @ 0x14021D5B4
 * Callers:
 *     ?NlsSbcsDbcsToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x140122D20 (-NlsSbcsDbcsToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsGetCurrentInputMode@@YAEPEBE@Z @ 0x1401C2350 (-NlsGetCurrentInputMode@@YAEPEBE@Z.c)
 *     ?NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x14021CD60 (-NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsConvOrNonConvProc@@YAHPEAUtagKE@@_KK@Z @ 0x14021CF90 (-NlsConvOrNonConvProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsHelpOrEndProc@@YAHPEAUtagKE@@_KK@Z @ 0x14021CFD0 (-NlsHelpOrEndProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x14021D090 (-NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsKanaEventProc@@YAHPEAUtagKE@@_KK@Z @ 0x14021D1F0 (-NlsKanaEventProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsKanaModeToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x14021D240 (-NlsKanaModeToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x14021D2A0 (-NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsNumpadModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x14021D3A0 (-NlsNumpadModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NlsTestKeyStateToggle(unsigned __int8 a1, int a2, int a3)
{
  unsigned __int64 v3; // rdi
  int v4; // ecx
  int v5; // ebx
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  unsigned int v9; // eax

  v3 = (unsigned __int64)a1 >> 2;
  v4 = 2 * (a1 & 3) + 1;
  v5 = 1 << v4;
  if ( *(_QWORD *)(W32GetUserSessionState(v4, a2, a3) + 18928) )
    v9 = *(unsigned __int8 *)(*(_QWORD *)(W32GetUserSessionState(v7, v6, v8) + 18928) + v3 + 280);
  else
    v9 = *(unsigned __int8 *)(W32GetUserSessionState(v7, v6, v8) + v3 + 14328);
  return v5 & v9;
}
