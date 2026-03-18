/*
 * XREFs of ?OnPointerCursorOperation@@YAXXZ @ 0x1400F8870
 * Callers:
 *     <none>
 * Callees:
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x14001EA30 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x14001F398 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     _anonymous_namespace_::HandlePointerCursorSideOp @ 0x1400F8920 (_anonymous_namespace_--HandlePointerCursorSideOp.c)
 *     _anonymous_namespace_::RenderCursor @ 0x1400F8A80 (_anonymous_namespace_--RenderCursor.c)
 */

void OnPointerCursorOperation(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  signed __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned __int64 v5; // rcx
  __int64 *v6; // [rsp+30h] [rbp+8h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v6, "PointerCursorOperation", 0LL);
  anonymous_namespace_::HandlePointerCursorSideOp();
  v2 = _InterlockedExchange64(*(volatile __int64 **)(W32GetUserSessionState(v1, v0) + 36344), 0LL);
  if ( v2 )
  {
    anonymous_namespace_::RenderCursor(v2);
    v5 = v2 - *(_QWORD *)(W32GetUserSessionState(v4, v3) + 36344) - 8;
    _InterlockedCompareExchange64(
      (volatile signed __int64 *)(*(_QWORD *)(W32GetUserSessionState(
                                                v5,
                                                (v5 * (unsigned __int128)0xAAAAAAAAAAAAAAABuLL) >> 64)
                                            + 36344)
                                + 8 * (v5 / 0xC)
                                + 48),
      v2,
      0LL);
  }
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v6);
}
