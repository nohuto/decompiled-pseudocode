/*
 * XREFs of ?DrvGetDisplayDriverDpiSetting@@YAXPEAU_devicemodeW@@@Z @ 0x140028C7C
 * Callers:
 *     DrvGetDisplayDriverParameters @ 0x1400285D4 (DrvGetDisplayDriverParameters.c)
 *     ?DrvGetDevModeForLddmPath@@YAJPEAUtagGRAPHICS_DEVICE@@KPEAU_devicemodeW@@PEA_N@Z @ 0x14007D128 (-DrvGetDevModeForLddmPath@@YAJPEAUtagGRAPHICS_DEVICE@@KPEAU_devicemodeW@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DrvGetDisplayDriverDpiSetting(struct _devicemodeW *a1)
{
  __int64 v2; // rax
  WORD v3; // ax

  v2 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  if ( *(_DWORD *)(v2 + 1200) )
    v3 = *(_WORD *)(v2 + 1168);
  else
    v3 = 96;
  a1->dmLogPixels = v3;
}
