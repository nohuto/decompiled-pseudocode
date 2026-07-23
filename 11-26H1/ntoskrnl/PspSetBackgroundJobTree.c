/*
 * XREFs of PspSetBackgroundJobTree @ 0x140AFA158
 * Callers:
 *     NtSetInformationJobObject @ 0x1407FA7D0 (NtSetInformationJobObject.c)
 * Callees:
 *     ExAcquireFastResourceExclusive @ 0x140274BD0 (ExAcquireFastResourceExclusive.c)
 *     ExReleaseFastResourceExclusive @ 0x14048AE40 (ExReleaseFastResourceExclusive.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1409FFC10 (PspEnumJobsAndProcessesInJobHierarchy.c)
 */

__int64 __fastcall PspSetBackgroundJobTree(char *Object, char a2)
{
  char *v2; // rdi
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v8; // r8
  __int64 v9; // r9
  char v10; // [rsp+40h] [rbp+8h] BYREF
  int v11; // [rsp+41h] [rbp+9h]

  v2 = Object + 56;
  v11 = 0;
  ExAcquireFastResourceExclusive((struct _KTHREAD *)(Object + 56), 0LL, 1);
  if ( a2 )
  {
    if ( (*((_DWORD *)Object + 388) & 0x400) != 0 )
      goto LABEL_3;
    _interlockedbittestandset((volatile signed __int32 *)Object + 388, 0xAu);
  }
  else
  {
    if ( (*((_DWORD *)Object + 388) & 0x400) == 0 )
    {
LABEL_3:
      ExReleaseFastResourceExclusive((ULONG_PTR)v2, 0LL, v5, v6);
      return 3221225485LL;
    }
    _interlockedbittestandreset((volatile signed __int32 *)Object + 388, 0xAu);
  }
  v10 = a2;
  PspEnumJobsAndProcessesInJobHierarchy(
    (__int64 *)Object,
    (int)PspSetJobBackgroundCountCallback,
    0,
    (int)PspSetProcessBackgroundCountCallback,
    (__int64)&v10,
    5);
  ExReleaseFastResourceExclusive((ULONG_PTR)v2, 0LL, v8, v9);
  return 0LL;
}
