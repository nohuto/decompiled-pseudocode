/*
 * XREFs of ?OnPointerCursorOperation@@YAXXZ @ 0x14005EC10
 * Callers:
 *     <none>
 * Callees:
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x14003874C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     _anonymous_namespace_::RenderCursor @ 0x14005E7DC (_anonymous_namespace_--RenderCursor.c)
 *     _anonymous_namespace_::HandlePointerCursorSideOp @ 0x14005ECC0 (_anonymous_namespace_--HandlePointerCursorSideOp.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x14005F618 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 */

void OnPointerCursorOperation(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rdx
  unsigned int *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int64 v6; // rcx
  __int64 *v7; // [rsp+30h] [rbp+8h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v7, "PointerCursorOperation", 0LL);
  anonymous_namespace_::HandlePointerCursorSideOp();
  v3 = (unsigned int *)_InterlockedExchange64(*(volatile __int64 **)(W32GetUserSessionState(v1, v0) + 36312), 0LL);
  if ( v3 )
  {
    anonymous_namespace_::RenderCursor(v3, v2);
    v6 = (unsigned __int64)v3 - *(_QWORD *)(W32GetUserSessionState(v5, v4) + 36312) - 8;
    _InterlockedCompareExchange64(
      (volatile signed __int64 *)(*(_QWORD *)(W32GetUserSessionState(
                                                v6,
                                                (v6 * (unsigned __int128)0xAAAAAAAAAAAAAAABuLL) >> 64)
                                            + 36312)
                                + 8 * (v6 / 0xC)
                                + 48),
      (signed __int64)v3,
      0LL);
  }
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v7);
}
