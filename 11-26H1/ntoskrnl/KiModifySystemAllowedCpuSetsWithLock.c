/*
 * XREFs of KiModifySystemAllowedCpuSetsWithLock @ 0x1405F6F08
 * Callers:
 *     KeCpuPartitionMoveCpus @ 0x1405F6240 (KeCpuPartitionMoveCpus.c)
 *     KeModifySystemAllowedCpuSets @ 0x1405F6688 (KeModifySystemAllowedCpuSets.c)
 * Callees:
 *     KeCpuSetReportParkedProcessors @ 0x1402F4F4C (KeCpuSetReportParkedProcessors.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     KiValidateCpuSetMasks @ 0x14045BE5C (KiValidateCpuSetMasks.c)
 *     RtlWriteAcquireTickLock @ 0x1404643A4 (RtlWriteAcquireTickLock.c)
 */

__int64 __fastcall KiModifySystemAllowedCpuSetsWithLock(
        unsigned int a1,
        __int64 a2,
        _KWAIT_STATUS_REGISTER *a3,
        int a4,
        int a5)
{
  char *v5; // rsi
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v9; // rbx
  __int64 result; // rax
  unsigned int v11; // r11d
  _KWAIT_STATUS_REGISTER *p_WaitRegister; // r9
  unsigned __int16 v13; // r8
  unsigned __int16 v14; // r10
  unsigned __int16 v15; // dx
  __int64 v16; // rcx
  unsigned int v17; // r13d
  int v18; // ebp
  unsigned int v19; // r8d
  __int64 *v20; // r12
  signed __int64 v21; // rax
  signed __int64 v22; // r9
  __int64 v23; // r11
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rbx
  _KWAIT_STATUS_REGISTER *v27; // r10
  unsigned __int16 v28; // r9
  __int64 v29; // rcx
  _KWAIT_STATUS_REGISTER *v30; // r8
  unsigned __int16 j; // dx
  char *i; // [rsp+20h] [rbp-38h]
  char *v33; // [rsp+28h] [rbp-30h]

  v5 = (char *)a2;
  v6 = a4;
  v7 = 0LL;
  v9 = 0LL;
  result = KiValidateCpuSetMasks(a2, a1);
  if ( (int)result < 0 )
    return result;
  if ( a3 )
  {
    p_WaitRegister = &stru_140FC11F0.WaitRegister;
    v13 = *(_WORD *)&a3->Flags;
    v14 = *(_WORD *)&stru_140FC11F0.WaitRegister.Flags;
    v15 = 0;
    if ( *(_WORD *)&a3->Flags >= *(_WORD *)&stru_140FC11F0.WaitRegister.Flags )
    {
      v14 = *(_WORD *)&a3->Flags;
      p_WaitRegister = a3;
      v13 = *(_WORD *)&stru_140FC11F0.WaitRegister.Flags;
    }
    while ( v15 < v13 )
    {
      v16 = *(_QWORD *)&a3[8 * v15 + 8].Flags;
      if ( (v16 & *(_QWORD *)((char *)&stru_140FC11F0.116 + 8 * v15 + 4)) != v16 )
        return 3221225485LL;
      ++v15;
    }
    if ( p_WaitRegister != &stru_140FC11F0.WaitRegister )
    {
      while ( v15 < v14 )
      {
        if ( *(_QWORD *)&a3[8 * v15 + 8].Flags )
          return 3221225485LL;
        ++v15;
      }
    }
  }
  v17 = 32;
  v18 = 0;
  if ( v11 < 0x20 )
    v17 = v11;
  KxAcquireSpinLock(&KiCpuSetLock);
  RtlWriteAcquireTickLock(&KiCpuSetSequence);
  v19 = 0;
  v20 = &KiSystemAllowedCpuSets[v6];
  v21 = (char *)(&stru_140FC11F0.MiscFlags + 1) - v5;
  v22 = &KiReservedCpuSets - (_UNKNOWN *)v5;
  v33 = (char *)((char *)(&stru_140FC11F0.MiscFlags + 1) - v5);
  for ( i = (char *)(&KiReservedCpuSets - (_UNKNOWN *)v5); ; v22 = (signed __int64)i )
  {
    v23 = *(_QWORD *)&v5[v21];
    if ( a3 )
    {
      if ( (unsigned __int16)v19 >= *(_WORD *)&a3->Flags )
        v24 = 0LL;
      else
        v24 = *(_QWORD *)&a3[8 * (unsigned __int16)v19 + 8].Flags;
    }
    else if ( v19 >= v17 )
    {
      v24 = 0LL;
      if ( !(_DWORD)v6 )
        v24 = *(_QWORD *)&v5[v21];
    }
    else
    {
      v24 = *(_QWORD *)v5;
    }
    if ( !a5 )
    {
      v9 = v24;
      goto LABEL_31;
    }
    if ( a5 == 1 )
    {
      v9 = KiSystemAllowedCpuSets[v7 + v6] | v24;
LABEL_31:
      v25 = v6;
      goto LABEL_32;
    }
    v25 = v6;
    if ( a5 == 2 )
      v9 = *v20 & ~v24;
LABEL_32:
    v26 = ~*(_QWORD *)&v5[v22] & v9;
    v27 = *(_KWAIT_STATUS_REGISTER **)KiSystemCpuPartition;
    v28 = **(_WORD **)KiSystemCpuPartition;
    if ( (unsigned __int16)v19 >= v28 )
      v29 = 0LL;
    else
      v29 = *(_QWORD *)&v27[8 * (unsigned __int16)v19 + 8].Flags;
    v9 = v29 & v26;
    KiSystemAllowedCpuSets[v7 + v25] = v9;
    if ( (v23 & v9) != v23 )
      v18 = 1;
    ++v19;
    v21 = (signed __int64)v33;
    v5 += 8;
    v7 += 2LL;
    v20 += 2;
    if ( v19 >= 0x20 )
      break;
  }
  if ( !(_DWORD)v6 )
    KiRestrictedSystemCpuSetsActive = v18;
  if ( v28 >= *(_WORD *)&stru_140FC11F0.WaitRegister.Flags )
  {
    v30 = v27;
    v28 = *(_WORD *)&stru_140FC11F0.WaitRegister.Flags;
  }
  else
  {
    v30 = &stru_140FC11F0.WaitRegister;
  }
  for ( j = 0; j < v28; ++j )
  {
    if ( *(_QWORD *)&v27[8 * j + 8].Flags != *(_QWORD *)((char *)&stru_140FC11F0.116 + 8 * j + 4) )
    {
LABEL_50:
      KiIsSystemCpuPartitionRestricted = 1;
      goto LABEL_52;
    }
  }
  while ( j < *(_WORD *)&v30->Flags )
  {
    if ( *(_QWORD *)&v30[8 * j + 8].Flags )
      goto LABEL_50;
    ++j;
  }
  KiIsSystemCpuPartitionRestricted = 0;
LABEL_52:
  ++KiCpuSetSequence;
  KeCpuSetReportParkedProcessors(0LL);
  return 0LL;
}
