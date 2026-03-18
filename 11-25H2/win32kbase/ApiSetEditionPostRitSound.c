/*
 * XREFs of ApiSetEditionPostRitSound @ 0x1401967AC
 * Callers:
 *     ?xxxStickyKeys@@YAHPEAUtagKE@@KH@Z @ 0x1400FB2C0 (-xxxStickyKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?ToggleKeys@@YAHPEAUtagKE@@KH@Z @ 0x140109C10 (-ToggleKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?MouseKeys@@YAHPEAUtagKE@@KH@Z @ 0x14010A2E0 (-MouseKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?FilterKeys@@YAHPEAUtagKE@@KH@Z @ 0x14010A5A0 (-FilterKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?HighContrastHotKey@@YAHPEAUtagKE@@KH@Z @ 0x14010F890 (-HighContrastHotKey@@YAHPEAUtagKE@@KH@Z.c)
 *     ?FKActivationTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1401F8D30 (-FKActivationTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?TurnOffMouseKeys@@YAXXZ @ 0x1401F9020 (-TurnOffMouseKeys@@YAXXZ.c)
 *     ?xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1401F9090 (-xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxFKAcceptanceDelayTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1401F9220 (-xxxFKAcceptanceDelayTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxFKRepeatRateTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1401F9350 (-xxxFKRepeatRateTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxMKToggleMouseKeys@@YAHG@Z @ 0x1401F9930 (-xxxMKToggleMouseKeys@@YAHG@Z.c)
 *     ?xxxToggleKeysTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1401F9B00 (-xxxToggleKeysTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxTwoKeysDown@@YAHH@Z @ 0x1401F9CB0 (-xxxTwoKeysDown@@YAHH@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall ApiSetEditionPostRitSound(__int64 a1, __int64 a2, __int64 a3))(void)
{
  unsigned int v4; // edi
  __int64 (*result)(void); // rax
  __int64 v6; // rdx
  __int64 v7; // rcx

  v4 = a1;
  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 4896LL);
  if ( result )
  {
    result = (__int64 (*)(void))result();
    if ( (int)result >= 0 )
    {
      result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v7, v6) + 48) + 4904LL);
      if ( result )
        return (__int64 (*)(void))((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))result)(v4, 0LL, a3);
    }
  }
  return result;
}
