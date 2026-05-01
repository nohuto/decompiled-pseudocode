/*
 * XREFs of ?_GetScaledPoint@CDragVisual@@AEAA?AUtagPOINT@@W4ScaledPointType@1@@Z @ 0x180520148
 * Callers:
 *     ?_UpdateThumbnailRect@CDragVisual@@AEAA_NW4DragVisualMode@@@Z @ 0x180521828 (-_UpdateThumbnailRect@CDragVisual@@AEAA_NW4DragVisualMode@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

__int64 __fastcall CDragVisual::_GetScaledPoint(__int64 a1, __int64 a2, int a3)
{
  HWND v5; // rcx
  int v7; // esi
  int v8; // ebx
  int v9; // ecx
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  int v14; // r15d
  __int64 result; // rax
  struct tagRECT Rect; // [rsp+20h] [rbp-48h] BYREF

  v5 = *(HWND *)(a1 + 152);
  Rect = 0LL;
  GetWindowRect(v5, &Rect);
  v7 = (Rect.right - Rect.left) / 2 + Rect.left;
  v8 = (Rect.bottom - Rect.top) / 2 + Rect.top;
  v9 = *(_DWORD *)(a1 + 192);
  v10 = v7;
  if ( v7 <= v9 )
    v10 = *(_DWORD *)(a1 + 192);
  if ( v10 >= *(_DWORD *)(a1 + 200) )
  {
    v7 = *(_DWORD *)(a1 + 200);
  }
  else if ( v7 <= v9 )
  {
    v7 = *(_DWORD *)(a1 + 192);
  }
  v11 = *(_DWORD *)(a1 + 196);
  v12 = (Rect.bottom - Rect.top) / 2 + Rect.top;
  if ( v8 <= v11 )
    v12 = *(_DWORD *)(a1 + 196);
  if ( v12 >= *(_DWORD *)(a1 + 204) )
  {
    v8 = *(_DWORD *)(a1 + 204);
  }
  else if ( v8 <= v11 )
  {
    v8 = *(_DWORD *)(a1 + 196);
  }
  v13 = 0;
  v14 = 0;
  *(_QWORD *)a2 = 0LL;
  if ( a3 != 1 )
    v13 = MulDiv(*(_DWORD *)(a1 + 336) - v7, *(_DWORD *)(a1 + 284), *(_DWORD *)(a1 + 344));
  *(_DWORD *)a2 = v7 + v13;
  if ( a3 != 1 )
    v14 = MulDiv(*(_DWORD *)(a1 + 340) - v8, *(_DWORD *)(a1 + 284), *(_DWORD *)(a1 + 344));
  result = a2;
  *(_DWORD *)(a2 + 4) = v14 + v8;
  return result;
}
