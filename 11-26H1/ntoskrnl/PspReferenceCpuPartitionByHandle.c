/*
 * XREFs of PspReferenceCpuPartitionByHandle @ 0x1407F8814
 * Callers:
 *     NtCreateCpuPartition @ 0x1407F7440 (NtCreateCpuPartition.c)
 *     NtQueryInformationCpuPartition @ 0x1407F7A30 (NtQueryInformationCpuPartition.c)
 *     NtSetInformationCpuPartition @ 0x1407F7C30 (NtSetInformationCpuPartition.c)
 *     PspSetJobCpuPartition @ 0x1407FEE8C (PspSetJobCpuPartition.c)
 *     PspAssignCpuPartitionsToProcessByHandle @ 0x140B715F4 (PspAssignCpuPartitionsToProcessByHandle.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     SeDeleteAccessState @ 0x1408F7CA0 (SeDeleteAccessState.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 *     ObCheckObjectAccess @ 0x1409349E0 (ObCheckObjectAccess.c)
 *     SeCreateAccessState @ 0x140A0FB70 (SeCreateAccessState.c)
 */

__int64 __fastcall PspReferenceCpuPartitionByHandle(
        ULONG_PTR BugCheckParameter1,
        unsigned int a2,
        __int64 a3,
        ULONG a4,
        _QWORD *a5)
{
  __int64 result; // rax
  NTSTATUS v9[4]; // [rsp+40h] [rbp-1C8h] BYREF
  struct _ACCESS_STATE AccessState; // [rsp+50h] [rbp-1B8h] BYREF
  _BYTE v11[224]; // [rsp+F0h] [rbp-118h] BYREF

  memset_0(&AccessState, 0, sizeof(AccessState));
  memset_0(v11, 0, sizeof(v11));
  if ( BugCheckParameter1 != -1LL )
    return ObpReferenceObjectByHandleWithTag(BugCheckParameter1, a4, (__int64)a5, 0LL, 0LL);
  result = SeCreateAccessState(&AccessState, v11, a2, &PsCpuPartitionType->TypeInfo.GenericMapping);
  v9[0] = result;
  if ( (int)result >= 0 )
  {
    if ( (unsigned __int8)ObCheckObjectAccess(PspSystemCpuPartition, &AccessState, v9) )
    {
      v9[0] = 0;
      ObfReferenceObjectWithTag(PspSystemCpuPartition, a4);
      *a5 = PspSystemCpuPartition;
    }
    SeDeleteAccessState(&AccessState);
    return (unsigned int)v9[0];
  }
  return result;
}
