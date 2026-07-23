/*
 * XREFs of TpSetDefaultPoolCpuSets @ 0x1801217C0
 * Callers:
 *     LdrpInitializeProcess @ 0x1800CD028 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

void __fastcall TpSetDefaultPoolCpuSets(void *Src, unsigned int a2)
{
  RtlAcquireSRWLockExclusive(&TppPoolpDefaultPoolCpuSetLock);
  TppPoolpDefaultPoolCpuSetCount = a2;
  memmove(&TppPoolpDefaultPoolCpuSets, Src, 8LL * a2);
  RtlReleaseSRWLockExclusive(&TppPoolpDefaultPoolCpuSetLock);
}
