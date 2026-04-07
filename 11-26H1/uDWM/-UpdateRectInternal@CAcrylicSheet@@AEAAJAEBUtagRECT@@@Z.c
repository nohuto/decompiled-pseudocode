/*
 * XREFs of ?UpdateRectInternal@CAcrylicSheet@@AEAAJAEBUtagRECT@@@Z @ 0x18005E3E8
 * Callers:
 *     ?UpdateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@@Z @ 0x18005E048 (-UpdateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?UpdateTransition@CAcrylicSheet@@AEAAJXZ @ 0x18005E18C (-UpdateTransition@CAcrylicSheet@@AEAAJXZ.c)
 * Callees:
 *     ?SetRect@CRectangleVisual@@QEAAXAEBUtagRECT@@@Z @ 0x18000A8A4 (-SetRect@CRectangleVisual@@QEAAXAEBUtagRECT@@@Z.c)
 *     ?SetBorderRect@CWindowBorder@@QEAAXAEBUtagRECT@@@Z @ 0x1800117EC (-SetBorderRect@CWindowBorder@@QEAAXAEBUtagRECT@@@Z.c)
 *     ?SetSize@CVisual@@QEAAXHH@Z @ 0x180012220 (-SetSize@CVisual@@QEAAXHH@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180014BFC (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 */

__int64 __fastcall CAcrylicSheet::UpdateRectInternal(CAcrylicSheet *this, const struct tagRECT *a2, __int64 a3)
{
  LONG v4; // ebp
  int v5; // ecx
  LONG v6; // esi
  LONG *v7; // rdi
  int v8; // ecx
  int v9; // eax
  char v10; // al
  CWindowBorder *v11; // rcx
  int v13; // eax
  struct tagRECT v14; // [rsp+20h] [rbp-18h] BYREF
  struct tagPOINT v15; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  v5 = *((_DWORD *)this + 48);
  v6 = 0;
  if ( a2->right - a2->left >= 0 )
    v4 = a2->right - a2->left;
  v7 = (LONG *)((char *)this + 188);
  if ( a2->bottom - a2->top >= 0 )
    v6 = a2->bottom - a2->top;
  v8 = v5 - *((_DWORD *)this + 46);
  v9 = 0;
  if ( v8 >= 0 )
    v9 = v8;
  if ( v4 != v9 )
    goto LABEL_8;
  v13 = 0;
  if ( *((_DWORD *)this + 49) - *v7 >= 0 )
    v13 = *((_DWORD *)this + 49) - *v7;
  if ( v6 == v13 )
    v10 = 0;
  else
LABEL_8:
    v10 = 1;
  *(struct tagRECT *)((char *)this + 184) = *a2;
  if ( v10 )
  {
    v11 = (CWindowBorder *)*((_QWORD *)this + 25);
    *(_QWORD *)&v14.left = 0LL;
    v14.right = v4;
    v14.bottom = v6;
    CWindowBorder::SetBorderRect(v11, &v14);
    if ( *(_BYTE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 53) + 633LL) )
      CVisual::SetSize(*((CVisual **)this + 26), v4, v6);
    else
      CRectangleVisual::SetRect(*((CRectangleVisual **)this + 27), &v14);
  }
  v15.x = *((_DWORD *)this + 46);
  v15.y = *v7;
  CVisual::SetOffset((struct tagPOINT *)this, &v15, a3);
  return 0LL;
}
