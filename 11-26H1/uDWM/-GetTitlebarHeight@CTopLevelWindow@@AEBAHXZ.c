/*
 * XREFs of ?GetTitlebarHeight@CTopLevelWindow@@AEBAHXZ @ 0x18004BE8C
 * Callers:
 *     ?ResizeVisualToTitlebar@CTopLevelWindow@@AEAAJPEAVCVisual@@@Z @ 0x18004BE28 (-ResizeVisualToTitlebar@CTopLevelWindow@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?HasThinRenderedBorder@CTopLevelWindow@@SA_NI@Z @ 0x1800202C0 (-HasThinRenderedBorder@CTopLevelWindow@@SA_NI@Z.c)
 *     ?GetButtonHeightAndOffset@CTopLevelWindow@@AEBAXPEAH0@Z @ 0x1800205F8 (-GetButtonHeightAndOffset@CTopLevelWindow@@AEBAXPEAH0@Z.c)
 */

__int64 __fastcall CTopLevelWindow::GetTitlebarHeight(CTopLevelWindow *this)
{
  int v2; // edx
  __int64 result; // rax
  int v4; // [rsp+30h] [rbp+8h] BYREF
  int v5; // [rsp+38h] [rbp+10h] BYREF

  if ( !CTopLevelWindow::HasThinRenderedBorder(*((_DWORD *)this + 142)) && *((_DWORD *)this + 149) > v2 )
  {
    v4 = 0;
    v5 = 0;
    CTopLevelWindow::GetButtonHeightAndOffset(this, &v4, &v5);
    v2 = v4 + v5;
  }
  result = *((unsigned int *)this + 149);
  if ( v2 <= (int)result )
  {
    result = 0LL;
    if ( v2 >= 0 )
      return (unsigned int)v2;
  }
  return result;
}
