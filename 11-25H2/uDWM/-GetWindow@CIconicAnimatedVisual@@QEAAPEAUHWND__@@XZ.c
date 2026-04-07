/*
 * XREFs of ?GetWindow@CIconicAnimatedVisual@@QEAAPEAUHWND__@@XZ @ 0x18009A22C
 * Callers:
 *     ?WindowDestroyed@CImmersiveIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z @ 0x18001B688 (-WindowDestroyed@CImmersiveIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?_AcceptBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x1800B864C (-_AcceptBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z.c)
 * Callees:
 *     <none>
 */

HWND __fastcall CIconicAnimatedVisual::GetWindow(CIconicAnimatedVisual *this)
{
  __int64 v1; // rdx
  HWND result; // rax

  v1 = *((_QWORD *)this + 32);
  result = 0LL;
  if ( v1 )
    return *(HWND *)(v1 + 40);
  return result;
}
