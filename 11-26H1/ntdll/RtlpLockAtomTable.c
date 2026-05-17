/*
 * XREFs of RtlpLockAtomTable @ 0x180037A80
 * Callers:
 *     RtlQueryAtomInAtomTable @ 0x180037300 (RtlQueryAtomInAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x180037520 (RtlDeleteAtomFromAtomTable.c)
 *     RtlAddAtomToAtomTableEx @ 0x1800375D0 (RtlAddAtomToAtomTableEx.c)
 *     RtlEmptyAtomTable @ 0x1800381C0 (RtlEmptyAtomTable.c)
 *     RtlDestroyAtomTable @ 0x180112670 (RtlDestroyAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x18013F2F0 (RtlPinAtomInAtomTable.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 */

char __fastcall RtlpLockAtomTable(_DWORD *a1)
{
  if ( !a1 || *a1 != 1836020801 )
    return 0;
  RtlAcquireSRWLockExclusive(a1 + 2);
  return 1;
}
