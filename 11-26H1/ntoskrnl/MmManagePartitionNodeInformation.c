/*
 * XREFs of MmManagePartitionNodeInformation @ 0x14088378C
 * Callers:
 *     NtManagePartition @ 0x140802EF0 (NtManagePartition.c)
 * Callees:
 *     MiGetPartitionNodeInformation @ 0x14025A7B8 (MiGetPartitionNodeInformation.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmManagePartitionNodeInformation(__int64 *a1, unsigned int *a2, char a3)
{
  void *v5; // rsi
  unsigned int v6; // edi
  __int64 v7; // rcx
  ULONG_PTR v8; // r15
  int CurrentProcessorColor; // eax
  __int64 PoolMm; // rax
  unsigned __int64 *v11; // r12
  __int64 v12; // rax
  unsigned __int64 *v13; // r13
  unsigned int v14; // ebx
  __int64 v15; // rdi

  v5 = 0LL;
  if ( a2[1] || (v7 = *a2, (_DWORD)v7 != (unsigned __int16)KeNumberNodes) )
  {
    v6 = -1073741811;
    goto LABEL_15;
  }
  v8 = 72 * v7;
  v6 = 0;
  if ( a3 )
  {
    CurrentProcessorColor = MmGetCurrentProcessorColor();
    PoolMm = ExAllocatePoolMm(64LL, v8, 1766746445, CurrentProcessorColor | 0x80000000);
    v5 = (void *)PoolMm;
    if ( !PoolMm )
    {
      v6 = -1073741670;
      goto LABEL_15;
    }
    v11 = (unsigned __int64 *)PoolMm;
  }
  else
  {
    v11 = (unsigned __int64 *)*((_QWORD *)a2 + 1);
  }
  v12 = *a1;
  v13 = v11;
  v14 = 0;
  if ( *a2 )
  {
    v15 = v12;
    do
    {
      MiGetPartitionNodeInformation(v15, v14, v13);
      v13 += 9;
      ++v14;
    }
    while ( v14 < *a2 );
    v6 = 0;
  }
  if ( a3 )
  {
    ProbeForWrite(*((volatile void **)a2 + 1), v8, 8u);
    RtlCopyToUser(*((void **)a2 + 1), v11, v8);
  }
LABEL_15:
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return v6;
}
