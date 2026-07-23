/*
 * XREFs of PspSetJobMemoryPartition @ 0x1407FF1B4
 * Callers:
 *     NtSetInformationJobObject @ 0x1407FA7D0 (NtSetInformationJobObject.c)
 * Callees:
 *     PsIsServerSilo @ 0x140216B68 (PsIsServerSilo.c)
 *     ExAcquireFastResourceExclusive @ 0x140274BD0 (ExAcquireFastResourceExclusive.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     PsDereferencePartition @ 0x1403836F0 (PsDereferencePartition.c)
 *     ExReleaseFastResourceExclusive @ 0x14048AE40 (ExReleaseFastResourceExclusive.c)
 *     PspConvertJobToMixed @ 0x140778724 (PspConvertJobToMixed.c)
 *     SmPartitionJobPaired @ 0x14081F36C (SmPartitionJobPaired.c)
 *     PsReferencePartitionByHandle @ 0x140A5D28C (PsReferencePartitionByHandle.c)
 *     SmCreatePartition @ 0x140AAEDD0 (SmCreatePartition.c)
 *     PsAssignProcessToJobObject @ 0x140AC7930 (PsAssignProcessToJobObject.c)
 */

__int64 __fastcall PspSetJobMemoryPartition(__int64 a1, char a2, __int64 a3)
{
  __int64 v4; // rax
  char v5; // r14
  int v6; // eax
  PVOID v7; // rsi
  int Partition; // ebx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // r9
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  Object = 0LL;
  v4 = a3;
  LOBYTE(a3) = a2;
  v5 = 0;
  v6 = PsReferencePartitionByHandle(v4, 1LL, a3, 1649046352LL, &Object);
  v7 = Object;
  Partition = v6;
  if ( v6 < 0 )
    goto LABEL_14;
  if ( _interlockedbittestandset((volatile signed __int32 *)Object + 34, 0) )
  {
    Partition = -1073741637;
    goto LABEL_14;
  }
  v5 = 1;
  ExAcquireFastResourceExclusive((struct _KTHREAD *)(a1 + 56), 0LL, 1);
  if ( PsIsServerSilo(a1) || *(_QWORD *)(a1 + 1792) || *(_QWORD *)(a1 + 1288) != a1 + 1288 || *(_DWORD *)(a1 + 216) )
  {
    Partition = -1073741637;
    goto LABEL_13;
  }
  Partition = PspConvertJobToMixed(v9, 1);
  if ( Partition < 0 )
  {
LABEL_13:
    ExReleaseFastResourceExclusive(a1 + 56, 0LL, v10, v11);
    goto LABEL_14;
  }
  *(_QWORD *)(a1 + 1792) = -1LL;
  ExReleaseFastResourceExclusive(a1 + 56, 0LL, v10, v11);
  Partition = SmCreatePartition(v7);
  if ( Partition >= 0 )
  {
    Partition = PsAssignProcessToJobObject((PVOID)a1, *((_QWORD *)v7 + 15));
    if ( Partition >= 0 )
    {
      ObfReferenceObjectWithTag(v7, 0x624A7350u);
      ExAcquireFastResourceExclusive((struct _KTHREAD *)(a1 + 56), 0LL, 1);
      *(_QWORD *)(a1 + 1792) = v7;
      *(_QWORD *)(a1 + 1800) = a1;
      ExReleaseFastResourceExclusive(a1 + 56, 0LL, v12, v13);
      SmPartitionJobPaired(v7, a1);
      v5 = 0;
      Partition = 0;
    }
  }
LABEL_14:
  if ( v7 )
  {
    if ( *(_QWORD *)(a1 + 1792) == -1LL )
      *(_QWORD *)(a1 + 1792) = 0LL;
    if ( v5 )
      _interlockedbittestandreset((volatile signed __int32 *)v7 + 34, 0);
    PsDereferencePartition((__int64)v7);
  }
  return (unsigned int)Partition;
}
