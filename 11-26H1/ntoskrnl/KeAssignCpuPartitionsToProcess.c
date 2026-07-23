/*
 * XREFs of KeAssignCpuPartitionsToProcess @ 0x1405F5FA0
 * Callers:
 *     PspAssignCpuPartitionsToProcess @ 0x1407F8448 (PspAssignCpuPartitionsToProcess.c)
 * Callees:
 *     KiAcquireCpuPartitionAssignmentLock @ 0x14045C9D8 (KiAcquireCpuPartitionAssignmentLock.c)
 *     KiReleaseCpuPartitionAssignmentLock @ 0x14045CA28 (KiReleaseCpuPartitionAssignmentLock.c)
 *     KiRemoveCpuPartitionAssignmentProcess @ 0x14045CA64 (KiRemoveCpuPartitionAssignmentProcess.c)
 *     KiNotifyAvailableCpusChangeProcess @ 0x1404D9868 (KiNotifyAvailableCpusChangeProcess.c)
 *     KiUpdateProcessAvailableCpuState @ 0x1405E8528 (KiUpdateProcessAvailableCpuState.c)
 *     KiAdjustProcessCpuSetsAfterCpuPartitionChange @ 0x1405F69E4 (KiAdjustProcessCpuSetsAfterCpuPartitionChange.c)
 *     PsDereferenceCpuPartition @ 0x1407F8418 (PsDereferenceCpuPartition.c)
 *     PsReferenceCpuPartition @ 0x1407F8430 (PsReferenceCpuPartition.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KeAssignCpuPartitionsToProcess(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  __int64 v4; // r14
  unsigned int v6; // r15d
  void *v7; // r13
  void *v8; // r12
  __int64 v9; // rax
  PVOID *v10; // rdi
  __int64 i; // rbx
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // r13
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 *v17; // rax
  __int64 v18; // r10
  __int64 *v19; // rdx
  __int64 **v20; // r9
  __int64 *v21; // rax
  __int64 v22; // rdx
  __int64 **v23; // r10
  _QWORD *v24; // rbx
  _QWORD *v25; // rax
  _QWORD *v26; // rsi
  _QWORD *v27; // rdx
  unsigned int v28; // esi
  PVOID *v29; // rbx
  unsigned __int16 v31; // [rsp+30h] [rbp-20h]
  __int64 Pool2; // [rsp+38h] [rbp-18h]
  _QWORD v33[2]; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int8 v35; // [rsp+98h] [rbp+48h] BYREF
  char v36; // [rsp+A8h] [rbp+58h]

  v36 = a4;
  v4 = a2;
  v33[1] = v33;
  v35 = 0;
  v33[0] = v33;
  v6 = 0;
  v31 = KiActiveGroups;
  Pool2 = ExAllocatePool2(0x40uLL);
  v7 = (void *)Pool2;
  v8 = (void *)ExAllocatePool2(0x40uLL);
  v9 = ExAllocatePool2(0x40uLL);
  v10 = (PVOID *)v9;
  if ( Pool2 && v8 && v9 )
  {
    for ( i = 0LL; (unsigned int)i < (unsigned int)v4; i = (unsigned int)(i + 1) )
    {
      v12 = ExAllocatePool2(0x40uLL);
      if ( !v12 )
        goto LABEL_20;
      v10[i] = (PVOID)v12;
    }
    if ( (_DWORD)v4 )
    {
      v13 = a1;
      v14 = v4;
      do
      {
        PsReferenceCpuPartition(*(_QWORD *)(*(_QWORD *)v13 + 32LL), 1967352139LL);
        v13 += 8LL;
        --v14;
      }
      while ( v14 );
      v7 = (void *)Pool2;
    }
    KiAcquireCpuPartitionAssignmentLock(&v35);
    if ( v36 )
      KiRemoveCpuPartitionAssignmentProcess(a3, (__int64)v33);
    v15 = 0LL;
    if ( (_DWORD)v4 )
    {
      v16 = a3 + 432;
      do
      {
        v17 = (__int64 *)v10[v15];
        v18 = *(_QWORD *)(a1 + 8 * v15);
        *v17 = a3;
        v19 = v17 + 4;
        v17[1] = v18;
        v20 = *(__int64 ***)(a3 + 440);
        if ( *v20 != (__int64 *)v16
          || (*v19 = v16,
              v21 = v17 + 2,
              v19[1] = (__int64)v20,
              *v20 = v19,
              *(_QWORD *)(a3 + 440) = v19,
              v22 = v18 + 16,
              v23 = *(__int64 ***)(v18 + 24),
              *v23 != (__int64 *)v22) )
        {
LABEL_37:
          __fastfail(3u);
        }
        *v21 = v22;
        v15 = (unsigned int)(v15 + 1);
        v21[1] = (__int64)v23;
        *v23 = v21;
        *(_QWORD *)(v22 + 8) = v21;
      }
      while ( (unsigned int)v15 < (unsigned int)v4 );
    }
    KiAdjustProcessCpuSetsAfterCpuPartitionChange(a3, v8, v7, v31, v33);
    KiUpdateProcessAvailableCpuState(a3, 1);
    KiNotifyAvailableCpusChangeProcess(a3);
    KiReleaseCpuPartitionAssignmentLock(v35);
    *v10 = 0LL;
  }
  else
  {
LABEL_20:
    v6 = -1073741670;
  }
  v24 = (_QWORD *)v33[0];
  while ( v24 != v33 )
  {
    v25 = v24;
    v26 = v24 - 2;
    v24 = (_QWORD *)*v24;
    if ( (_QWORD *)v24[1] != v25 )
      goto LABEL_37;
    v27 = (_QWORD *)v25[1];
    if ( (_QWORD *)*v27 != v25 )
      goto LABEL_37;
    *v27 = v24;
    v24[1] = v27;
    PsDereferenceCpuPartition(*(_QWORD *)(v26[1] + 32LL), 1967352139LL);
    ExFreePoolWithTag(v26, 0);
  }
  if ( v10 )
  {
    v28 = 0;
    if ( (_DWORD)v4 )
    {
      v29 = v10;
      do
      {
        if ( !*v29 )
          break;
        ExFreePoolWithTag(*v29, 0);
        ++v28;
        ++v29;
      }
      while ( v28 < (unsigned int)v4 );
    }
    ExFreePoolWithTag(v10, 0);
  }
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return v6;
}
