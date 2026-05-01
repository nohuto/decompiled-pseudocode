/*
 * XREFs of ?_Initialize@CDragVisual@@AEAAJW4DragVisualMode@@@Z @ 0x18052028C
 * Callers:
 *     ?CreateInstance@CDragVisual@@SAJW4DragVisualMode@@PEAUIDragVisualHost@@AEBU_GUID@@PEAPEAX@Z @ 0x18051DE74 (-CreateInstance@CDragVisual@@SAJW4DragVisualMode@@PEAUIDragVisualHost@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18003F62C (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?Mirror_IsThreadRTL@@YAHXZ @ 0x1801B8A5C (-Mirror_IsThreadRTL@@YAHXZ.c)
 *     ?_RegisterWindowClass@CDragVisual@@AEAAXXZ @ 0x1805211BC (-_RegisterWindowClass@CDragVisual@@AEAAXXZ.c)
 */

__int64 __fastcall CDragVisual::_Initialize(__int64 a1, int a2)
{
  int IsThreadRTL; // eax
  CDragVisual *v5; // rcx
  unsigned int v6; // edi
  int v7; // eax
  HWND WindowInBand; // rax
  HWND v9; // rbx
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
  v7 = 5;
  if ( *(_DWORD *)(a1 + 148) != 6 )
    v7 = 7;
  WindowInBand = (HWND)CreateWindowInBand(
                         136315008LL,
                         L"ImmersiveDragVisual",
                         &LocaleName,
                         0x80000000LL,
                         0,
                         0,
                         0,
                         0,
                         0LL,
                         0LL,
                         &_ImageBase,
                         a1,
                         v7);
  v9 = WindowInBand;
  if ( WindowInBand )
  {
    WindowLongPtrW = GetWindowLongPtrW(WindowInBand, -20);
    if ( (WindowLongPtrW & 0x400000) != 0 )
      SetWindowLongPtrW(v9, -20, WindowLongPtrW & 0xFFFFFFFFFFBFFFFFuLL);
    pvAttribute = 1;
    DwmSetWindowAttribute(v9, 0xCu, &pvAttribute, 4u);
  }
  else
  {
    return (unsigned int)ResultFromKnownLastError();
  }
  return v6;
}
