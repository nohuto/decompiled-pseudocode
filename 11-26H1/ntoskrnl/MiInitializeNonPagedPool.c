/*
 * XREFs of MiInitializeNonPagedPool @ 0x140CFFF28
 * Callers:
 *     MiInitNucleus @ 0x140CF903C (MiInitNucleus.c)
 * Callees:
 *     MiConvertActiveLargePageToSmall @ 0x140206C98 (MiConvertActiveLargePageToSmall.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14024E230 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiVaToPfnEx @ 0x14024F870 (MiVaToPfnEx.c)
 *     MiGetAnyMultiplexedVm @ 0x14044F0E0 (MiGetAnyMultiplexedVm.c)
 *     MiAddExpansionNonPagedPool @ 0x140523104 (MiAddExpansionNonPagedPool.c)
 *     MiBuildDynamicRegion @ 0x1406F9C10 (MiBuildDynamicRegion.c)
 *     MiInitializeNonPagedPoolThresholds @ 0x1406FA760 (MiInitializeNonPagedPoolThresholds.c)
 *     MiInitializeSystemWorkingSetList @ 0x14086DAB4 (MiInitializeSystemWorkingSetList.c)
 *     MiInitializeDynamicRegion @ 0x140CFFB44 (MiInitializeDynamicRegion.c)
 */

__int64 MiInitializeNonPagedPool()
{
  char *AnyMultiplexedVm; // rax
  unsigned __int64 v1; // rax
  __int64 v2; // rdi
  unsigned __int64 v3; // rsi
  __int64 i; // rbx
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // r8
  unsigned __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rbp
  __int64 v13; // rbx
  __int64 result; // rax

  AnyMultiplexedVm = MiGetAnyMultiplexedVm(6);
  if ( (int)MiInitializeSystemWorkingSetList((__int64)&MiSystemPartition, (__int64)AnyMultiplexedVm, 7, 0LL) < 0 )
    return 0LL;
  v1 = qword_140E37D18;
  v2 = qword_140E37D10;
  if ( (unsigned __int64)qword_140E37D18 > 0x100000000000LL )
    v1 = 0x100000000000LL;
  *(_QWORD *)&stru_140E366D8.ApcStateFill[40] = v1 >> 12;
  v3 = ((v1 >> 21) / (unsigned __int16)KeNumberNodes) << 21;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    v5 = v2;
    if ( (unsigned int)i >= (unsigned __int16)KeNumberNodes )
      break;
    v6 = qword_140E2D838;
    v7 = 384 * i;
    *(_QWORD *)(v7 + qword_140E2D838 + 104) = v2;
    v2 += v3;
    *(_QWORD *)(v7 + v6 + 112) = v2;
    if ( !(unsigned int)MiBuildDynamicRegion((struct _KTHREAD *)(384 * i + qword_140E2D838), v5, v3) )
      return 0LL;
  }
  if ( !(unsigned int)MiInitializeDynamicRegion(14) )
    return 0LL;
  v8 = qword_140E2D890;
  v9 = MI_IS_PHYSICAL_ADDRESS(qword_140E2D890 - 1);
  if ( v9 )
  {
    LODWORD(v10) = 2;
    do
    {
      v10 = (unsigned int)(v10 - 1);
      --v9;
    }
    while ( v9 );
    v11 = MiPageSizes[v10];
    v12 = v8 & ((v11 << 12) - 1);
    if ( v12 )
    {
      v13 = MiVaToPfnEx(v8);
      MiConvertActiveLargePageToSmall(48 * (v13 & -v11) - 0x220000000000LL, 0);
      MiAddExpansionNonPagedPool(v13, (unsigned __int64)((v11 << 12) - v12) >> 12);
    }
  }
  MiInitializeNonPagedPoolThresholds(0);
  stru_140E2C8F0.Parameter = 0LL;
  qword_140E2C8C8 = (__int64)&unk_140EF0100;
  result = 1LL;
  stru_140E2C8F0.List.Flink = 0LL;
  stru_140E2C8F0.WorkerRoutine = (void (__fastcall *)(void *))MiLogNonStealNonPagedPoolWorker;
  return result;
}
