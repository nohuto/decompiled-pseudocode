/*
 * XREFs of ?SetBorderDpi@CWindowBorder@@QEAAJH@Z @ 0x1800941E4
 * Callers:
 *     ?SetDpi@CAcrylicSheet@@QEAAJH@Z @ 0x18009418C (-SetDpi@CAcrylicSheet@@QEAAJH@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001C060 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

__int64 __fastcall CWindowBorder::SetBorderDpi(CWindowBorder *this, int a2)
{
  if ( a2 != *((_DWORD *)this + 69) )
  {
    *((_DWORD *)this + 69) = a2;
    CVisual::SetDirtyFlags(this, 4096);
  }
  return 0LL;
}
