/*
 * XREFs of KiRemoveAndFreeCpuPartitionAssignmentProcess @ 0x14045C928
 * Callers:
 *     PspProcessDelete @ 0x140800D10 (PspProcessDelete.c)
 * Callees:
 *     KiAcquireCpuPartitionAssignmentLock @ 0x14045C9D8 (KiAcquireCpuPartitionAssignmentLock.c)
 *     KiReleaseCpuPartitionAssignmentLock @ 0x14045CA28 (KiReleaseCpuPartitionAssignmentLock.c)
 *     KiRemoveCpuPartitionAssignmentProcess @ 0x14045CA64 (KiRemoveCpuPartitionAssignmentProcess.c)
 *     PsDereferenceCpuPartition @ 0x1407F8418 (PsDereferenceCpuPartition.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall KiRemoveAndFreeCpuPartitionAssignmentProcess(__int64 a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rbx
  _QWORD *v4; // rax
  _QWORD *v5; // rdi
  _QWORD *v6; // rdx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = 0;
  v7[1] = v7;
  v7[0] = v7;
  KiAcquireCpuPartitionAssignmentLock(&v8);
  KiRemoveCpuPartitionAssignmentProcess(a1, v7);
  LOBYTE(v2) = v8;
  KiReleaseCpuPartitionAssignmentLock(v2);
  v3 = (_QWORD *)v7[0];
  while ( v3 )
  {
    v4 = v3;
    if ( v3 == v7 )
      break;
    v5 = v3 - 2;
    v3 = (_QWORD *)*v3;
    if ( (_QWORD *)v3[1] != v4 || (v6 = (_QWORD *)v4[1], (_QWORD *)*v6 != v4) )
      __fastfail(3u);
    *v6 = v3;
    v3[1] = v6;
    PsDereferenceCpuPartition(*(_QWORD *)(v5[1] + 32LL), 1967352139LL);
    ExFreePoolWithTag(v5, 0);
  }
}
