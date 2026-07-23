/*
 * XREFs of PspAllocateRateControl @ 0x1409B90E0
 * Callers:
 *     NtSetInformationJobObject @ 0x1407FA7D0 (NtSetInformationJobObject.c)
 *     PspSetJobRateControl @ 0x1407FF37C (PspSetJobRateControl.c)
 *     PspAddSchedulingGroupToJobChain @ 0x1409B8904 (PspAddSchedulingGroupToJobChain.c)
 * Callees:
 *     PspGetRateControlSize @ 0x1409B9164 (PspGetRateControlSize.c)
 *     PsChargeSharedPoolQuota @ 0x1409B9190 (PsChargeSharedPoolQuota.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 *__fastcall PspAllocateRateControl(__int64 a1)
{
  __int64 RateControlSize; // rdi
  ULONG_PTR v2; // rcx
  int v3; // edx
  __int64 *Pool2; // rbx
  __int64 v5; // rax

  RateControlSize = PspGetRateControlSize(a1);
  v2 = 64LL;
  if ( v3 != 2 )
    v2 = 256LL;
  Pool2 = (__int64 *)ExAllocatePool2(v2);
  if ( Pool2 )
  {
    v5 = PsChargeSharedPoolQuota(KeGetCurrentThread()->ApcState.Process, RateControlSize);
    if ( v5 )
    {
      *Pool2 = v5;
    }
    else
    {
      ExFreePoolWithTag(Pool2, 0x624A7350u);
      return 0LL;
    }
  }
  return Pool2;
}
