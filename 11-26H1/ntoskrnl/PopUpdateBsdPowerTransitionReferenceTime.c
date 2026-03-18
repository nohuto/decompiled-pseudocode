/*
 * XREFs of PopUpdateBsdPowerTransitionReferenceTime @ 0x140B31A48
 * Callers:
 *     PopBsdHandleRequest @ 0x1404E5A30 (PopBsdHandleRequest.c)
 * Callees:
 *     RtlComputeCrc32 @ 0x1404843E0 (RtlComputeCrc32.c)
 */

__int64 PopUpdateBsdPowerTransitionReferenceTime()
{
  __int64 result; // rax

  *(_QWORD *)&stru_140E66FF0.SavedApcStateFill[40] = MEMORY[0xFFFFF78000000014];
  result = RtlComputeCrc32(0LL, (__int64)&stru_140E66FF0.SavedApcStateFill[40], 8u);
  *(_DWORD *)&stru_140E66FF0.SchedulerApc.Type = result;
  return result;
}
