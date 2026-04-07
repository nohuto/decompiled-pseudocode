/*
 * XREFs of ?SetBorderDpi@CWindowBorder@@QEAAJH@Z @ 0x180083BB0
 * Callers:
 *     ?SetDpi@CAcrylicSheet@@QEAAJH@Z @ 0x180083B58 (-SetDpi@CAcrylicSheet@@QEAAJH@Z.c)
 * Callees:
 *     ?UpdateStyle@CProjectionBorderVisual@@QEAAXXZ @ 0x180094558 (-UpdateStyle@CProjectionBorderVisual@@QEAAXXZ.c)
 */

__int64 __fastcall CWindowBorder::SetBorderDpi(CWindowBorder *this, int a2)
{
  if ( a2 != *((_DWORD *)this + 63) )
  {
    *((_DWORD *)this + 63) = a2;
    CProjectionBorderVisual::UpdateStyle(this);
  }
  return 0LL;
}
