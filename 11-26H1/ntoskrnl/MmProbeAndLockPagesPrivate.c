/*
 * XREFs of MmProbeAndLockPagesPrivate @ 0x1404CCA58
 * Callers:
 *     sub_1409EDA0C @ 0x1409EDA0C (sub_1409EDA0C.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1409F0C30 (WbMakeUserExecutablePagesKernelWritable.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402E84A0 (RtlRaiseStatus.c)
 *     MiProbeAndLockPages @ 0x1403A016C (MiProbeAndLockPages.c)
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
