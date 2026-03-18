/*
 * XREFs of PopExecuteProcessorCallback @ 0x140428090
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueTargetDpc @ 0x14042883C (PopQueueTargetDpc.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopExecuteProcessorCallback(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  int v4; // eax

  v4 = guard_dispatch_icall_no_overrides(KeGetCurrentPrcb(), *(_QWORD *)(a2 + 8));
  if ( v4 < 0 )
    *(_DWORD *)(a2 + 40) = v4;
  return PopQueueTargetDpc(BugCheckParameter2);
}
