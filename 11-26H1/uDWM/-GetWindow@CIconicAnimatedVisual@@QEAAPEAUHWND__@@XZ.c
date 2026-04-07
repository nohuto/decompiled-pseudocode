/*
 * XREFs of ?GetWindow@CIconicAnimatedVisual@@QEAAPEAUHWND__@@XZ @ 0x18008DD38
 * Callers:
 *     ?WindowDestroyed@CImmersiveIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z @ 0x180019D50 (-WindowDestroyed@CImmersiveIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?_AcceptBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x1800B7630 (-_AcceptBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z.c)
 * Callees:
 *     <none>
 */

HWND __fastcall CIconicAnimatedVisual::GetWindow(CIconicAnimatedVisual *this)
{
  __int64 v1; // rdx
  HWND result; // rax

  v1 = *((_QWORD *)this + 28);
  result = 0LL;
  if ( v1 )
    return *(HWND *)(v1 + 40);
  return result;
}
