/*
 * XREFs of TpSetDefaultPoolCpuSets @ 0x180121A24
 * Callers:
 *     LdrpInitializeProcess @ 0x1800CF8B8 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

struct _TEB *__fastcall TpSetDefaultPoolCpuSets(void *Src, __int64 a2)
{
  unsigned int v3; // ebx

  v3 = a2;
  RtlAcquireSRWLockExclusive(&TppPoolpDefaultPoolCpuSetLock, a2);
  TppPoolpDefaultPoolCpuSetCount = v3;
  memmove(&TppPoolpDefaultPoolCpuSets, Src, 8LL * v3);
  return RtlReleaseSRWLockExclusive(&TppPoolpDefaultPoolCpuSetLock);
}
