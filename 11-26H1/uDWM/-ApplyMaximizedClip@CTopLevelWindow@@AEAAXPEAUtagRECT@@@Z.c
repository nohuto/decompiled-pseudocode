/*
 * XREFs of ?ApplyMaximizedClip@CTopLevelWindow@@AEAAXPEAUtagRECT@@@Z @ 0x18000B240
 * Callers:
 *     ?UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ @ 0x18000ACD4 (-UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CTopLevelWindow::ApplyMaximizedClip(CTopLevelWindow *this, struct tagRECT *a2)
{
  int v3; // r8d
  int v4; // r10d
  LONG v5; // r9d
  LONG v6; // r11d
  LONG left; // edx
  int v8; // eax
  LONG right; // ecx
  LONG v10; // eax
  LONG top; // r8d
  LONG v12; // eax
  LONG bottom; // r9d
  LONG v14; // eax
  LONG v15; // eax
  struct tagRECT v16; // [rsp+0h] [rbp-18h]

  if ( (*((_BYTE *)this + 184) & 4) != 0 )
  {
    v3 = *((_DWORD *)this + 155);
    v4 = v3;
    v5 = *((_DWORD *)this + 157);
    v6 = v5;
    left = a2->left;
    if ( v3 <= *((_DWORD *)this + 16) - *((_DWORD *)this + 156) )
      v4 = *((_DWORD *)this + 16) - *((_DWORD *)this + 156);
    v8 = *((_DWORD *)this + 17) - *((_DWORD *)this + 158);
    right = a2->right;
    if ( v5 <= v8 )
      v6 = v8;
    v10 = v3;
    if ( left <= v3 )
      left = v3;
    else
      v10 = left;
    top = a2->top;
    v16.left = v10;
    v12 = v5;
    if ( top <= v5 )
      top = v5;
    else
      v12 = a2->top;
    bottom = a2->bottom;
    v16.top = v12;
    v14 = v4;
    if ( right >= v4 )
      right = v4;
    else
      v14 = a2->right;
    v16.right = v14;
    v15 = v6;
    if ( bottom >= v6 )
      bottom = v6;
    else
      v15 = a2->bottom;
    v16.bottom = v15;
    if ( bottom <= top || right <= left )
      v16 = (struct tagRECT)0LL;
    *a2 = v16;
  }
}
