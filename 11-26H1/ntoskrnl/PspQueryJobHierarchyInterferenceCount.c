/*
 * XREFs of PspQueryJobHierarchyInterferenceCount @ 0x1407F8EFC
 * Callers:
 *     NtQueryInformationJobObject @ 0x1407F2FB0 (NtQueryInformationJobObject.c)
 * Callees:
 *     ExInitializeFastOwnerEntry @ 0x14043D670 (ExInitializeFastOwnerEntry.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x14095A350 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspLockJobShared @ 0x140A81FE8 (PspLockJobShared.c)
 *     PspUnlockJobShared @ 0x140AAD180 (PspUnlockJobShared.c)
 */

__int64 __fastcall PspQueryJobHierarchyInterferenceCount(PVOID Object, _QWORD *a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  int v7; // esi
  __int64 v9[3]; // [rsp+38h] [rbp-80h] BYREF
  _BYTE v10[80]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v11; // [rsp+C0h] [rbp+8h] BYREF
  char v12; // [rsp+D0h] [rbp+18h]

  v12 = a3;
  memset_0(v10, 0, 0x48uLL);
  CurrentThread = KeGetCurrentThread();
  ExInitializeFastOwnerEntry((__int64)v10);
  PspLockJobShared(Object, CurrentThread, v10);
  v11 = 0LL;
  v9[0] = (__int64)&v11;
  v9[1] = (__int64)Object;
  v7 = PspEnumJobsAndProcessesInJobHierarchy(Object, (__int64)v9, 1);
  PspUnlockJobShared(Object, CurrentThread, v10);
  if ( v7 >= 0 )
  {
    if ( a3 )
      RtlWriteULong64ToUser(a2, v11);
    else
      *a2 = v11;
  }
  return (unsigned int)v7;
}
