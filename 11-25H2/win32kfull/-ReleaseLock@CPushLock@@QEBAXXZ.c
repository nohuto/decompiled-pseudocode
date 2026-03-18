/*
 * XREFs of ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14004C9F8
 * Callers:
 *     ?GetCurrentCursorSize@CCursorSizes@@QEBAIXZ @ 0x14004C98C (-GetCurrentCursorSize@CCursorSizes@@QEBAIXZ.c)
 *     ?xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z @ 0x14004E6E0 (-xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z.c)
 *     ?zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x1400608E0 (-zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 *     ?GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x14007B0E8 (-GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     GreGetRandomRgn @ 0x140158D50 (GreGetRandomRgn.c)
 *     ?zzzRefreshSizes@CCursorSizes@@QEAAXXZ @ 0x1401B79FC (-zzzRefreshSizes@CCursorSizes@@QEAAXXZ.c)
 *     ?bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z @ 0x140260B68 (-bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z.c)
 *     ?bSaveRegion@@YAHAEAVXDCOBJ@@J@Z @ 0x140262F80 (-bSaveRegion@@YAHAEAVXDCOBJ@@J@Z.c)
 *     ?HandleRequestCursorSizesRequest@CCursorSizes@@QEBAXPECUtagCURSORSIZEINFO@@@Z @ 0x140273A2C (-HandleRequestCursorSizesRequest@CCursorSizes@@QEBAXPECUtagCURSORSIZEINFO@@@Z.c)
 * Callees:
 *     ?W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x1400B473C (-W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 */

void __fastcall CPushLock::ReleaseLock(CPushLock *this)
{
  if ( PsGetCurrentThreadId() == *((HANDLE *)this + 1) )
  {
    *((_QWORD *)this + 1) = 0LL;
    W32ReleasePushLockExclusive(this);
  }
  else
  {
    ExReleasePushLockSharedEx(this, 0LL);
    KeLeaveCriticalRegion();
  }
}
