/*
 * XREFs of ??0CDesktopThumbnailBase@@IEAA@XZ @ 0x18006F7D4
 * Callers:
 *     ?Create@CVirtualDesktopThumbnail@@SAJPEAPEAV1@@Z @ 0x18006EEE0 (-Create@CVirtualDesktopThumbnail@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CDesktopThumbnail@@KAJPEAPEAV1@@Z @ 0x1800AE090 (-Create@CDesktopThumbnail@@KAJPEAPEAV1@@Z.c)
 *     ?Create@CDCompDesktopThumbnail@@SAJPEAPEAV1@@Z @ 0x1800E19FC (-Create@CDCompDesktopThumbnail@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CContainerVisual@@IEAA@XZ @ 0x1800086EC (--0CContainerVisual@@IEAA@XZ.c)
 *     ??0?$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z @ 0x180009100 (--0-$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z.c)
 */

CDesktopThumbnailBase *__fastcall CDesktopThumbnailBase::CDesktopThumbnailBase(CDesktopThumbnailBase *this)
{
  CContainerVisual::CContainerVisual(this);
  *(_QWORD *)this = &CDesktopThumbnailBase::`vftable';
  DynArrayImpl<0>::DynArrayImpl<0>((__int64)this + 200, 0LL, 0);
  *((_QWORD *)this + 29) = -1LL;
  return this;
}
