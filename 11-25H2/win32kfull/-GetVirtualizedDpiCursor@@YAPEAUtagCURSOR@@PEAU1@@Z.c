/*
 * XREFs of ?GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x14007B0E8
 * Callers:
 *     NtUserDrawIconEx @ 0x140056290 (NtUserDrawIconEx.c)
 *     NtUserGetIconInfo @ 0x14007ABF0 (NtUserGetIconInfo.c)
 *     NtUserGetCursorFrameInfo @ 0x1401B0A60 (NtUserGetCursorFrameInfo.c)
 *     NtUserGetIconSize @ 0x1401C9450 (NtUserGetIconSize.c)
 * Callees:
 *     GetDpiForSystem @ 0x1400433C4 (GetDpiForSystem.c)
 *     ?W32AcquirePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x14004C9C4 (-W32AcquirePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14004C9F8 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     GetCursorSizesIndexFromDpi @ 0x14004DCB4 (GetCursorSizesIndexFromDpi.c)
 *     ?ShouldVirtualizeIconCursorSize@@YA_NPEAUtagCURSOR@@@Z @ 0x14007B174 (-ShouldVirtualizeIconCursorSize@@YA_NPEAUtagCURSOR@@@Z.c)
 */

struct tagCURSOR *__fastcall GetVirtualizedDpiCursor(struct tagCURSOR *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct tagCURSOR *result; // rax
  __int64 v5; // rsi
  unsigned int DpiForSystem; // edi
  int v7; // edi

  if ( ShouldVirtualizeIconCursorSize(a1) )
  {
    v5 = *(_QWORD *)(W32GetUserSessionState(v3, v2) + 36344);
    DpiForSystem = GetDpiForSystem();
    W32AcquirePushLockShared((struct W32_PUSH_LOCK *)(v5 + 64));
    v7 = *(_DWORD *)(v5 + 8LL * (unsigned int)GetCursorSizesIndexFromDpi(DpiForSystem) + 28);
    CPushLock::ReleaseLock((CPushLock *)(v5 + 64));
    for ( result = (struct tagCURSOR *)*((_QWORD *)a1 + 6); result; result = (struct tagCURSOR *)*((_QWORD *)result + 5) )
    {
      if ( *((_DWORD *)result + 19) == v7 )
        return result;
    }
  }
  return a1;
}
