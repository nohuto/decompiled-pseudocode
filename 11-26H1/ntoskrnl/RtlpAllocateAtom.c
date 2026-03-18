/*
 * XREFs of RtlpAllocateAtom @ 0x140AA3130
 * Callers:
 *     RtlpAllocateAtomTableEntry @ 0x140461D3C (RtlpAllocateAtomTableEntry.c)
 *     RtlpLookupOrCreateLowBox @ 0x140461EB0 (RtlpLookupOrCreateLowBox.c)
 *     RtlCreateAtomTableEx @ 0x1404D3CC0 (RtlCreateAtomTableEx.c)
 * Callees:
 *     PspChargeQuota @ 0x1403BD5A0 (PspChargeQuota.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 *__fastcall RtlpAllocateAtom(unsigned __int64 a1, ULONG a2)
{
  unsigned __int64 v2; // rdi
  __int64 *Pool2; // rbx
  _KPROCESS *Process; // rsi
  __int64 SchedulingGroup; // rsi

  v2 = a1 + 16;
  if ( a1 + 16 >= a1 )
  {
    Pool2 = (__int64 *)ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
      return Pool2;
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( Process != PsInitialSystemProcess )
    {
      SchedulingGroup = (__int64)Process[1].SchedulingGroup;
      if ( v2 && (int)PspChargeQuota(SchedulingGroup, 0LL, 1, v2) < 0 )
      {
        *Pool2 = 0LL;
      }
      else
      {
        _InterlockedIncrement((volatile signed __int32 *)(SchedulingGroup + 512));
        *Pool2 = SchedulingGroup;
        if ( SchedulingGroup )
        {
LABEL_7:
          Pool2[1] = v2;
          Pool2 += 2;
          return Pool2;
        }
      }
      ExFreePoolWithTag(Pool2, a2);
      return 0LL;
    }
    *Pool2 = 1LL;
    goto LABEL_7;
  }
  return 0LL;
}
