/*
 * XREFs of MmManagePartitionCharges @ 0x140883238
 * Callers:
 *     NtManagePartition @ 0x140802EF0 (NtManagePartition.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     MiManagePartitionCharges @ 0x1406F5538 (MiManagePartitionCharges.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmManagePartitionCharges(__int64 *a1, int *a2, __int64 a3, KPROCESSOR_MODE a4)
{
  __int64 v7; // rbx
  int v8; // r10d
  __int64 v10; // rax
  int *v11; // rsi
  int *v12; // rdi
  ULONG_PTR v13; // r14
  int CurrentProcessorColor; // eax
  int *PoolMm; // rax
  int v16; // r9d
  unsigned int v17; // eax
  unsigned int v18; // r8d
  int *v19; // rdx
  int v20; // ecx
  int v21; // ebx

  v7 = *a1;
  v8 = *a2;
  if ( !*a2 || ((v8 - 1) & v8) != 0 || (v8 & 0xFFFFFFFC) != 0 )
    return 3221225485LL;
  if ( (v8 & 2) != 0 && !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, a4) )
    return 3221225569LL;
  v10 = (unsigned int)a2[1];
  if ( !(_DWORD)v10 || (unsigned int)v10 >= 0x20 )
    return 3221225485LL;
  v11 = (int *)(a3 + 8);
  if ( a4 )
  {
    v13 = 40 * v10;
    CurrentProcessorColor = MmGetCurrentProcessorColor();
    PoolMm = (int *)ExAllocatePoolMm(64LL, v13, 1632135501, CurrentProcessorColor | 0x80000000);
    v12 = PoolMm;
    if ( !PoolMm )
      return 3221225626LL;
    if ( v13 && ((unsigned __int8)v11 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    RtlCopyFromUser(PoolMm, v11, v13);
  }
  else
  {
    v12 = v11;
    v13 = 0LL;
  }
  v16 = 0;
  v17 = 0;
  v18 = a2[1];
  if ( v18 )
  {
    v19 = v12;
    do
    {
      v20 = *v19;
      if ( *v19 >= 2 )
        break;
      if ( ((1 << v20) & v16) != 0 )
        break;
      v16 |= 1 << v20;
      ++v17;
      v19 += 10;
    }
    while ( v17 < v18 );
  }
  if ( v17 >= v18 )
  {
    v21 = MiManagePartitionCharges(v7, *a2, v18, v12);
    if ( v21 >= 0 && a4 && *a2 == 1 )
    {
      ProbeForWrite(v11, v13, 8u);
      RtlCopyToUser(v11, v12, v13);
    }
  }
  else
  {
    v21 = -1073741811;
  }
  if ( v12 != v11 )
    ExFreePoolWithTag(v12, 0);
  return (unsigned int)v21;
}
