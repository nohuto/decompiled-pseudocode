/*
 * XREFs of ?_Initialize@CDragVisual@@AEAAJW4DragVisualMode@@@Z @ 0x18054313C
 * Callers:
 *     ?CreateInstance@CDragVisual@@SAJW4DragVisualMode@@PEAUIDragVisualHost@@AEBU_GUID@@PEAPEAX@Z @ 0x180540D48 (-CreateInstance@CDragVisual@@SAJW4DragVisualMode@@PEAUIDragVisualHost@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180042238 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?Mirror_IsThreadRTL@@YAHXZ @ 0x180082308 (-Mirror_IsThreadRTL@@YAHXZ.c)
 *     ?_RegisterWindowClass@CDragVisual@@AEAAXXZ @ 0x180544090 (-_RegisterWindowClass@CDragVisual@@AEAAXXZ.c)
 */

__int64 __fastcall CDragVisual::_Initialize(__int64 a1, int a2)
{
  int IsThreadRTL; // eax
  CDragVisual *v5; // rcx
  unsigned int v6; // edi
  HWND WindowInBand; // rax
  HWND v8; // rbx
  LONG_PTR WindowLongPtrW; // rax
  int pvAttribute; // [rsp+88h] [rbp+10h] BYREF

  IsThreadRTL = Mirror_IsThreadRTL();
  v6 = 0;
  *(_DWORD *)(a1 + 144) = a2;
  *(_DWORD *)(a1 + 148) = a2;
  *(_BYTE *)(a1 + 273) = IsThreadRTL != 0;
  if ( a2 == 6 )
  {
    *(_DWORD *)(a1 + 332) = 50;
    *(_BYTE *)(a1 + 278) = 1;
  }
  CDragVisual::_RegisterWindowClass(v5);
  WindowInBand = (HWND)CreateWindowInBand(136315008LL, L"ImmersiveDragVisual", &pvData, 0x80000000LL);
  v8 = WindowInBand;
  if ( WindowInBand )
  {
    WindowLongPtrW = GetWindowLongPtrW(WindowInBand, -20);
    if ( (WindowLongPtrW & 0x400000) != 0 )
      SetWindowLongPtrW(v8, -20, WindowLongPtrW & 0xFFFFFFFFFFBFFFFFuLL);
    pvAttribute = 1;
    DwmSetWindowAttribute(v8, 0xCu, &pvAttribute, 4u);
  }
  else
  {
    return (unsigned int)ResultFromKnownLastError();
  }
  return v6;
}
