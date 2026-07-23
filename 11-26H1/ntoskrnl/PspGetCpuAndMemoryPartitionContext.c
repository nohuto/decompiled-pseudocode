/*
 * XREFs of PspGetCpuAndMemoryPartitionContext @ 0x140AAC4C4
 * Callers:
 *     PsCreateMinimalProcess @ 0x140801BC8 (PsCreateMinimalProcess.c)
 *     NtCreateUserProcess @ 0x140B7D6F0 (NtCreateUserProcess.c)
 * Callees:
 *     PspDeleteCpuAndMemoryPartitionContext @ 0x14077EEEC (PspDeleteCpuAndMemoryPartitionContext.c)
 *     PspGetCpuAndMemoryPartitionFromJobList @ 0x1407FE5C0 (PspGetCpuAndMemoryPartitionFromJobList.c)
 *     PspGetCpuAndMemoryPartitionImplicit @ 0x140AAC5A4 (PspGetCpuAndMemoryPartitionImplicit.c)
 */

__int64 __fastcall PspGetCpuAndMemoryPartitionContext(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        _QWORD *a5,
        _QWORD *a6)
{
  void *v6; // rbx
  __int64 v9; // r11
  void *v10; // r10
  int CpuAndMemoryPartitionImplicit; // edi
  void **v12; // r9
  _QWORD *v13; // r8
  void *v14; // rdx
  _QWORD v16[2]; // [rsp+20h] [rbp-10h] BYREF
  void *v17; // [rsp+50h] [rbp+20h] BYREF

  v6 = 0LL;
  v16[0] = 0LL;
  v17 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  CpuAndMemoryPartitionImplicit = 0;
  if ( a1 && *(_QWORD *)(a1 + 672) )
  {
    CpuAndMemoryPartitionImplicit = PspGetCpuAndMemoryPartitionImplicit(*(_QWORD *)(a1 + 672), a2, v16, &v17);
    if ( CpuAndMemoryPartitionImplicit < 0 )
      goto LABEL_15;
    v9 = v16[0];
    v10 = v17;
    if ( v16[0] && v17 )
      goto LABEL_13;
  }
  if ( a4 )
  {
    v12 = &v17;
    v13 = v16;
    if ( v10 )
      v12 = 0LL;
    if ( v9 )
      v13 = 0LL;
    CpuAndMemoryPartitionImplicit = PspGetCpuAndMemoryPartitionFromJobList(a3, a4, v13, v12);
    if ( CpuAndMemoryPartitionImplicit >= 0 )
    {
      v9 = v16[0];
      v10 = v17;
      goto LABEL_13;
    }
LABEL_15:
    v6 = (void *)v16[0];
    v14 = v17;
    goto LABEL_14;
  }
LABEL_13:
  v14 = 0LL;
  *a5 = v9;
  *a6 = v10;
LABEL_14:
  PspDeleteCpuAndMemoryPartitionContext(v6, v14);
  return (unsigned int)CpuAndMemoryPartitionImplicit;
}
