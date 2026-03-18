/*
 * XREFs of FsRtlGetFileNameInformation @ 0x140A86A70
 * Callers:
 *     EtwpCancelTraceImageUnloadApc @ 0x1406C5420 (EtwpCancelTraceImageUnloadApc.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall FsRtlGetFileNameInformation(__int64 a1, __int64 a2)
{
  if ( FltMgrCallbacks )
    return guard_dispatch_icall_no_overrides(a1, a2);
  else
    return 3221225659LL;
}
