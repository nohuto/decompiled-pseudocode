/*
 * XREFs of PopExecuteProcessorCallback @ 0x14021A370
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueTargetDpc @ 0x14021AB1C (PopQueueTargetDpc.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopExecuteProcessorCallback(ULONG_PTR a1, __int64 a2)
{
  int v4; // eax

  v4 = guard_dispatch_icall_no_overrides(KeGetCurrentPrcb(), *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16));
  if ( v4 < 0 )
    *(_DWORD *)(a2 + 40) = v4;
  return PopQueueTargetDpc(a1);
}
