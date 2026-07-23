/*
 * XREFs of MmProbeAndLockPagesPrivate @ 0x1404C61F8
 * Callers:
 *     sub_1409EA1DC @ 0x1409EA1DC (sub_1409EA1DC.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1409ED400 (WbMakeUserExecutablePagesKernelWritable.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 *     MiProbeAndLockPages @ 0x1403A1ECC (MiProbeAndLockPages.c)
 */

__int64 __fastcall MmProbeAndLockPagesPrivate(__int64 a1)
{
  __int64 result; // rax
  _QWORD v2[3]; // [rsp+20h] [rbp-18h] BYREF

  v2[1] = 0LL;
  v2[0] = 7LL;
  result = MiProbeAndLockPages(a1, v2);
  if ( (int)result < 0 )
    RtlRaiseStatus(result);
  return result;
}
