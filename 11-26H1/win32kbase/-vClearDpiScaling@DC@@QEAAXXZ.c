/*
 * XREFs of ?vClearDpiScaling@DC@@QEAAXXZ @ 0x14003925C
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAH_N@Z @ 0x140019F20 (-bCleanDC@XDCOBJ@@QEAAH_N@Z.c)
 * Callees:
 *     ?SetCachedDpiScaleValue@DC@@QEAAXJ@Z @ 0x140039950 (-SetCachedDpiScaleValue@DC@@QEAAXJ@Z.c)
 */

void __fastcall DC::vClearDpiScaling(DC *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 130);
  if ( (v1 & 1) != 0 )
  {
    *((_DWORD *)this + 9) |= 0x10u;
    *(_QWORD *)((char *)this + 524) = 0LL;
    *(_QWORD *)((char *)this + 532) = 0LL;
    *((_DWORD *)this + 130) = v1 & 0xFFFFFFF8 | 4;
    DC::SetCachedDpiScaleValue(this, 1);
  }
}
