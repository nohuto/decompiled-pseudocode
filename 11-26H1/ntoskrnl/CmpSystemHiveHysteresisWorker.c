/*
 * XREFs of CmpSystemHiveHysteresisWorker @ 0x140857790
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

_KTRAP_FRAME *__fastcall CmpSystemHiveHysteresisWorker(void *a1)
{
  _KTRAP_FRAME *result; // rax

  ExFreePoolWithTag(a1, 0);
  result = WheapPfaLock.TrapFrame;
  if ( WheapPfaLock.TrapFrame )
    return (_KTRAP_FRAME *)guard_dispatch_icall_no_overrides(
                             (__int64)WheapPfaLock.ApcState.ApcListHead[0].Flink,
                             *(unsigned int *)&WheapPfaLock.Tag);
  return result;
}
