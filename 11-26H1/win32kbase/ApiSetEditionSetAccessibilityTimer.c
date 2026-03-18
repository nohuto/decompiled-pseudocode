/*
 * XREFs of ApiSetEditionSetAccessibilityTimer @ 0x1401BB43C
 * Callers:
 *     ?AccessTimeOutReset@@YAXXZ @ 0x1400DF600 (-AccessTimeOutReset@@YAXXZ.c)
 *     ?ToggleKeys@@YAHPEAUtagKE@@KH@Z @ 0x140149C90 (-ToggleKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?FilterKeys@@YAHPEAUtagKE@@KH@Z @ 0x140149FD0 (-FilterKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?AccessTimeOut@@YAXXZ @ 0x14015C610 (-AccessTimeOut@@YAXXZ.c)
 *     ?FKActivationTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x140212520 (-FKActivationTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxFKAcceptanceDelayTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x140212A20 (-xxxFKAcceptanceDelayTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxFKRepeatRateTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x140212B50 (-xxxFKRepeatRateTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxMKMouseMove@@YAHG@Z @ 0x140212D80 (-xxxMKMouseMove@@YAHG@Z.c)
 *     ?xxxMKMoveAccelCursorTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x140212EF0 (-xxxMKMoveAccelCursorTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     EditionSetAccessibilityTimer @ 0x14018A1BC (EditionSetAccessibilityTimer.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall ApiSetEditionSetAccessibilityTimer(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4))(__int64, _QWORD, __int64, _QWORD)
{
  __int64 v8; // rbx
  int (*v9)(void); // rax

  v8 = 0LL;
  v9 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 4480LL);
  if ( v9 && v9() >= 0 )
    return EditionSetAccessibilityTimer(a1, a2, a3, a4);
  return (__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD))v8;
}
