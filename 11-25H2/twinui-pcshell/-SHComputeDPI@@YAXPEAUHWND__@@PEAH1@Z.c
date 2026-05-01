/*
 * XREFs of ?SHComputeDPI@@YAXPEAUHWND__@@PEAH1@Z @ 0x18065F66C
 * Callers:
 *     s_OnDrawItemHelper @ 0x180660190 (s_OnDrawItemHelper.c)
 *     ?_GetDpiForMonitorFromPoint@ImmersiveContextMenuHelper@@YAIPEAUtagPOINT@@@Z @ 0x180661C7C (-_GetDpiForMonitorFromPoint@ImmersiveContextMenuHelper@@YAIPEAUtagPOINT@@@Z.c)
 *     ?ScaleByPPI@DPIToPPIHelpers@@YAHHPEAUHWND__@@W4ScaleModifier@1@@Z @ 0x1806623CC (-ScaleByPPI@DPIToPPIHelpers@@YAHHPEAUHWND__@@W4ScaleModifier@1@@Z.c)
 *     ?ScaleBySpecificDPI@DPIToPPIHelpers@@YAHHHW4ScaleModifier@1@@Z @ 0x180662488 (-ScaleBySpecificDPI@DPIToPPIHelpers@@YAHHHW4ScaleModifier@1@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SHComputeDPI(HWND a1, int *a2, int *a3)
{
  HDC DC; // rax
  HDC v6; // r14
  int DeviceCaps; // ebx
  int v8; // ebp

  DC = GetDC(0LL);
  v6 = DC;
  if ( DC )
  {
    DeviceCaps = GetDeviceCaps(DC, 88);
    v8 = GetDeviceCaps(v6, 90);
    ReleaseDC(0LL, v6);
  }
  else
  {
    DeviceCaps = 96;
    v8 = 96;
  }
  if ( a2 )
    *a2 = DeviceCaps;
  if ( a3 )
    *a3 = v8;
}
