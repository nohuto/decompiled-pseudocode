/*
 * XREFs of RtlpLockAtomTable @ 0x180001750
 * Callers:
 *     RtlEmptyAtomTable @ 0x180001060 (RtlEmptyAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x1800011F0 (RtlDeleteAtomFromAtomTable.c)
 *     RtlAddAtomToAtomTableEx @ 0x1800012A0 (RtlAddAtomToAtomTableEx.c)
 *     RtlDestroyAtomTable @ 0x180112120 (RtlDestroyAtomTable.c)
 *     RtlQueryAtomInAtomTable @ 0x180117380 (RtlQueryAtomInAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x18013F1F0 (RtlPinAtomInAtomTable.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 */

char __fastcall RtlpLockAtomTable(__int64 a1)
{
  if ( !a1 || *(_DWORD *)a1 != 1836020801 )
    return 0;
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 8));
  return 1;
}
