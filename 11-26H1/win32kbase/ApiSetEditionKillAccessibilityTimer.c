/*
 * XREFs of ApiSetEditionKillAccessibilityTimer @ 0x1401C0190
 * Callers:
 *     ?AccessTimeOutReset@@YAXXZ @ 0x1400DF600 (-AccessTimeOutReset@@YAXXZ.c)
 *     ResetAccessibilityCountersOnMouseInput @ 0x140134450 (ResetAccessibilityCountersOnMouseInput.c)
 *     ?MouseKeys@@YAHPEAUtagKE@@KH@Z @ 0x1401496E0 (-MouseKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?ToggleKeys@@YAHPEAUtagKE@@KH@Z @ 0x140149C90 (-ToggleKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?FilterKeys@@YAHPEAUtagKE@@KH@Z @ 0x140149FD0 (-FilterKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?FKActivationTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x140212520 (-FKActivationTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?StopFilterKeysTimers@@YAXXZ @ 0x140212770 (-StopFilterKeysTimers@@YAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionKillAccessibilityTimer(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  int (*v4)(void); // rax
  __int64 v5; // rcx
  unsigned int (__fastcall *v6)(_QWORD, __int64); // rax

  v3 = 0;
  v4 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 4496LL);
  if ( v4 )
  {
    if ( v4() >= 0 )
    {
      v6 = *(unsigned int (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v5) + 48) + 4504LL);
      if ( v6 )
        return v6(0LL, a2);
    }
  }
  return v3;
}
