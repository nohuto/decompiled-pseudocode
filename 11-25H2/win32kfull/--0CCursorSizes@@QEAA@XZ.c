/*
 * XREFs of ??0CCursorSizes@@QEAA@XZ @ 0x1401B79B4
 * Callers:
 *     EditionInitGlobalCursorSizes @ 0x1401B7940 (EditionInitGlobalCursorSizes.c)
 * Callees:
 *     ?zzzRefreshSizes@CCursorSizes@@QEAAXXZ @ 0x1401B79FC (-zzzRefreshSizes@CCursorSizes@@QEAAXXZ.c)
 */

CCursorSizes *__fastcall CCursorSizes::CCursorSizes(CCursorSizes *this)
{
  *(_DWORD *)this = 32;
  *((_DWORD *)this + 1) = 32;
  *(_OWORD *)((char *)this + 8) = 0LL;
  *(_OWORD *)((char *)this + 24) = 0LL;
  *(_OWORD *)((char *)this + 40) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  CCursorSizes::zzzRefreshSizes(this);
  return this;
}
