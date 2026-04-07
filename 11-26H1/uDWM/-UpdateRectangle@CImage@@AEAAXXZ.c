/*
 * XREFs of ?UpdateRectangle@CImage@@AEAAXXZ @ 0x18000A098
 * Callers:
 *     ?UpdateBitmap@CImage@@AEAAJXZ @ 0x180009530 (-UpdateBitmap@CImage@@AEAAJXZ.c)
 *     ?UpdateLayout@CImage@@UEAAJ_N@Z @ 0x18006A910 (-UpdateLayout@CImage@@UEAAJ_N@Z.c)
 * Callees:
 *     ?SetRect@CRectangleVisual@@QEAAXAEBUtagRECT@@@Z @ 0x18000A8A4 (-SetRect@CRectangleVisual@@QEAAXAEBUtagRECT@@@Z.c)
 */

void __fastcall CImage::UpdateRectangle(CImage *this)
{
  _DWORD *v1; // rdx
  struct tagRECT v2; // [rsp+20h] [rbp-18h] BYREF

  v1 = (_DWORD *)*((_QWORD *)this + 29);
  v2.left = -v1[38];
  v2.top = -v1[40];
  v2.right = *((_DWORD *)this + 16) + v1[39];
  v2.bottom = *((_DWORD *)this + 17) + v1[41];
  CRectangleVisual::SetRect(this, &v2);
}
