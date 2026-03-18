/*
 * XREFs of PspSetIoPriorityLimitJobTree @ 0x1407F9304
 * Callers:
 *     NtSetInformationJobObject @ 0x1407F4C70 (NtSetInformationJobObject.c)
 * Callees:
 *     ExAcquireFastResourceExclusive @ 0x140275660 (ExAcquireFastResourceExclusive.c)
 *     ExReleaseFastResourceExclusive @ 0x1404912F0 (ExReleaseFastResourceExclusive.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x14095A350 (PspEnumJobsAndProcessesInJobHierarchy.c)
 */

void __fastcall PspSetIoPriorityLimitJobTree(char *Object, int a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  LODWORD(v6) = 0;
  ExAcquireFastResourceExclusive((struct _KTHREAD *)(Object + 56), 0LL, 1);
  if ( a2 != *((_DWORD *)Object + 272) )
  {
    *((_DWORD *)Object + 272) = a2;
    PspEnumJobsAndProcessesInJobHierarchy(Object, (__int64)&v6, 5);
  }
  ExReleaseFastResourceExclusive((ULONG_PTR)(Object + 56), 0LL, v4, v5);
}
