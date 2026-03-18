/*
 * XREFs of CmpSystemHiveHysteresisWorker @ 0x140851480
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpSystemHiveHysteresisWorker(void *a1)
{
  __int64 result; // rax

  ExFreePoolWithTag(a1, 0);
  result = *(_QWORD *)&WheapPfaLock.WaitRegister.Flags;
  if ( *(_QWORD *)&WheapPfaLock.WaitRegister.Flags )
    return guard_dispatch_icall_no_overrides(
             *(__int64 *)((char *)&WheapPfaLock.116 + 4),
             HIDWORD(WheapPfaLock.SchedulingGroup));
  return result;
}
