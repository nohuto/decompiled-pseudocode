/*
 * XREFs of PspSetJobCpuPartition @ 0x1407FEE8C
 * Callers:
 *     NtSetInformationJobObject @ 0x1407FA7D0 (NtSetInformationJobObject.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireFastResourceExclusive @ 0x140274BD0 (ExAcquireFastResourceExclusive.c)
 *     ExReleaseFastResourceExclusive @ 0x14048AE40 (ExReleaseFastResourceExclusive.c)
 *     PspReferenceCpuPartitionByHandle @ 0x1407F8814 (PspReferenceCpuPartitionByHandle.c)
 */

__int64 __fastcall PspSetJobCpuPartition(__int64 a1, char a2, __int64 a3)
{
  ULONG_PTR v4; // rax
  int v5; // ebx
  __int64 v6; // r8
  __int64 v7; // r9
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  Object = 0LL;
  v4 = a3;
  LOBYTE(a3) = a2;
  v5 = PspReferenceCpuPartitionByHandle(v4, 4u, a3, 0x624A7350u, &Object);
  if ( v5 >= 0 )
  {
    ExAcquireFastResourceExclusive((struct _KTHREAD *)(a1 + 56), 0LL, 1);
    if ( !*(_QWORD *)(a1 + 1832) && *(_QWORD *)(a1 + 1288) == a1 + 1288 && !*(_DWORD *)(a1 + 216) )
    {
      *(_QWORD *)(a1 + 1832) = Object;
      *(_QWORD *)(a1 + 1840) = a1;
      ExReleaseFastResourceExclusive(a1 + 56, 0LL, v6, v7);
      return 0;
    }
    v5 = -1073741637;
    ExReleaseFastResourceExclusive(a1 + 56, 0LL, v6, v7);
  }
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x624A7350u);
  return (unsigned int)v5;
}
