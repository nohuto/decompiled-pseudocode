/*
 * XREFs of ?DrvGetDisplayDriverDpiSetting@@YAXPEAU_devicemodeW@@@Z @ 0x14004CEEC
 * Callers:
 *     ?DrvGetDevModeForLddmPath@@YAJPEAUtagGRAPHICS_DEVICE@@KPEAU_devicemodeW@@PEA_N@Z @ 0x14002BCA0 (-DrvGetDevModeForLddmPath@@YAJPEAUtagGRAPHICS_DEVICE@@KPEAU_devicemodeW@@PEA_N@Z.c)
 *     DrvGetDisplayDriverParameters @ 0x14004C840 (DrvGetDisplayDriverParameters.c)
 * Callees:
 *     <none>
 */

void __fastcall DrvGetDisplayDriverDpiSetting(struct _devicemodeW *a1)
{
  __int64 v2; // rax
  WORD v3; // ax

  v2 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  if ( *(_DWORD *)(v2 + 1112) )
    v3 = *(_WORD *)(v2 + 1080);
  else
    v3 = 96;
  a1->dmLogPixels = v3;
}
