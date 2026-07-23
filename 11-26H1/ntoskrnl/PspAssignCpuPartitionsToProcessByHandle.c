/*
 * XREFs of PspAssignCpuPartitionsToProcessByHandle @ 0x140B715F4
 * Callers:
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     PspLockProcessShared @ 0x140275C70 (PspLockProcessShared.c)
 *     PspUnlockProcessShared @ 0x14027C520 (PspUnlockProcessShared.c)
 *     PspAssignCpuPartitionsToProcess @ 0x1407F8448 (PspAssignCpuPartitionsToProcess.c)
 *     PspReferenceCpuPartitionByHandle @ 0x1407F8814 (PspReferenceCpuPartitionByHandle.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspAssignCpuPartitionsToProcessByHandle(__int64 a1, char a2, __int64 a3, unsigned int a4, char a5)
{
  __int64 v6; // rsi
  __int64 v7; // rbp
  PVOID *Pool2; // r14
  __int64 v10; // rax
  __int64 v11; // r8
  _QWORD *v12; // rdi
  int v13; // ebp
  struct _KTHREAD *CurrentThread; // rbx
  PVOID *v15; // rbx

  v6 = 0LL;
  v7 = a3;
  if ( a4 - 1 > 0x7FF )
    return (unsigned int)-1073741811;
  Pool2 = (PVOID *)ExAllocatePool2(0x100uLL);
  v10 = ExAllocatePool2(0x40uLL);
  v12 = (_QWORD *)v10;
  if ( Pool2 && v10 )
  {
    while ( (unsigned int)v6 < a4 )
    {
      LOBYTE(v11) = a2;
      v13 = PspReferenceCpuPartitionByHandle(*(_QWORD *)(v7 + 8 * v6), 4u, v11, 0x50707350u, &Pool2[v6]);
      if ( v13 < 0 )
        goto LABEL_9;
      v7 = a3;
      v12[v6] = *(_QWORD *)Pool2[v6];
      v6 = (unsigned int)(v6 + 1);
    }
    CurrentThread = KeGetCurrentThread();
    PspLockProcessShared(a1, (__int64)CurrentThread);
    v13 = PspAssignCpuPartitionsToProcess(a1, (__int64)v12, a4, a5);
    PspUnlockProcessShared(a1, (__int64)CurrentThread);
    goto LABEL_9;
  }
  v13 = -1073741670;
  if ( Pool2 )
  {
LABEL_9:
    if ( (_DWORD)v6 )
    {
      v15 = Pool2;
      do
      {
        ObfDereferenceObjectWithTag(*v15++, 0x50707350u);
        --v6;
      }
      while ( v6 );
    }
    ExFreePoolWithTag(Pool2, 0);
  }
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  return (unsigned int)v13;
}
