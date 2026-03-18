/*
 * XREFs of PspReferenceCpuPartitionByHandle @ 0x1407F2CB4
 * Callers:
 *     NtCreateCpuPartition @ 0x1407F18E0 (NtCreateCpuPartition.c)
 *     NtQueryInformationCpuPartition @ 0x1407F1ED0 (NtQueryInformationCpuPartition.c)
 *     NtSetInformationCpuPartition @ 0x1407F20D0 (NtSetInformationCpuPartition.c)
 *     PspSetJobCpuPartition @ 0x1407F938C (PspSetJobCpuPartition.c)
 *     PspAssignCpuPartitionsToProcessByHandle @ 0x140B6E144 (PspAssignCpuPartitionsToProcessByHandle.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     SeDeleteAccessState @ 0x1408F16E0 (SeDeleteAccessState.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1408FA680 (ObpReferenceObjectByHandleWithTag.c)
 *     ObCheckObjectAccess @ 0x140904A50 (ObCheckObjectAccess.c)
 *     SeCreateAccessState @ 0x140A10980 (SeCreateAccessState.c)
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
