/*
 * XREFs of MiAddPartitionDataToCrashDump @ 0x1406FA9A4
 * Callers:
 *     MmAddPrivateDataToCrashDump @ 0x1406FB3EC (MmAddPrivateDataToCrashDump.c)
 * Callees:
 *     MiAddPartitionToCrashDump @ 0x1406FABBC (MiAddPartitionToCrashDump.c)
 *     MiAddRangeToCrashDump @ 0x1406FAE2C (MiAddRangeToCrashDump.c)
 */

__int64 __fastcall MiAddPartitionDataToCrashDump(__int64 a1)
{
  unsigned int v1; // edi
  int v3; // edx
  int v4; // r8d
  int v5; // r11d
  unsigned int v6; // r10d
  __int64 v7; // r14
  unsigned int v8; // esi
  __int64 v9; // rax
  _QWORD *v10; // r8
  __int64 i; // r9
  unsigned __int64 v12; // rax
  unsigned int v13; // r8d

  v1 = 0;
  v3 = MiAddRangeToCrashDump(a1, stru_140E2ED08.ThreadLock, 8LL, 0LL);
  if ( v3 < 0 )
    return (unsigned int)v3;
  v3 = MiAddRangeToCrashDump(a1, stru_140E2ED08.QuantumTarget, 16LL, 0LL);
  if ( v3 < 0 )
    return (unsigned int)v3;
  v3 = MiAddRangeToCrashDump(
         a1,
         *(_QWORD *)(stru_140E2ED08.QuantumTarget + 8),
         8
       * (((unsigned __int64)*(unsigned int *)stru_140E2ED08.QuantumTarget >> 6)
        + ((*(_DWORD *)stru_140E2ED08.QuantumTarget & 0x3F) != 0)),
         0LL);
  if ( v3 < 0 )
    return (unsigned int)v3;
  do
  {
    v4 = *(_DWORD *)stru_140E2ED08.QuantumTarget - 1;
    v5 = (*(_DWORD *)(stru_140E2ED08.QuantumTarget + 8) & 4) != 0LL ? 0x20 : 0;
    v6 = v1 < *(_DWORD *)stru_140E2ED08.QuantumTarget ? v1 : 0;
    v7 = *(_QWORD *)(stru_140E2ED08.QuantumTarget + 8)
       - ((*(_QWORD *)(stru_140E2ED08.QuantumTarget + 8) & 4LL) != 0 ? 4 : 0);
    while ( 1 )
    {
      v8 = v5 + v4;
      if ( v4 - v6 == -1 )
        goto LABEL_6;
      v10 = (_QWORD *)(v7 + 8 * ((unsigned __int64)(v5 + v6) >> 6));
      for ( i = ~*v10 | ((1LL << ((unsigned __int8)v5 + (unsigned __int8)v6)) - 1); i == -1; i = ~*v10 )
      {
        if ( (unsigned __int64)++v10 > v7 + 8 * ((unsigned __int64)v8 >> 6) )
          goto LABEL_6;
      }
      _BitScanForward64(&v12, ~i);
      v9 = ((unsigned int)(((__int64)v10 - v7) >> 3) << 6) + (unsigned int)v12;
      if ( (unsigned int)v9 > v8 )
      {
LABEL_6:
        v9 = 0xFFFFFFFFLL;
        goto LABEL_13;
      }
      if ( (_DWORD)v9 != -1 )
        break;
LABEL_13:
      if ( !v6 )
        goto LABEL_18;
      v13 = v1 + 1;
      if ( v1 + 1 > *(_DWORD *)stru_140E2ED08.QuantumTarget )
        v13 = *(_DWORD *)stru_140E2ED08.QuantumTarget;
      v4 = v13 - 1;
      v6 = 0;
    }
    v9 = (unsigned int)(v9 - v5);
LABEL_18:
    if ( (unsigned int)v9 < v1 )
      break;
    if ( (_DWORD)v9 == -1 )
      break;
    v1 = v9 + 1;
    v3 = MiAddPartitionToCrashDump(a1, *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * v9));
  }
  while ( v3 >= 0 );
  if ( v3 >= 0 )
  {
    if ( !*(_QWORD *)&stru_140E2ED08.WaitRegister.Flags
      || (v3 = MiAddRangeToCrashDump(
                 a1,
                 *(_QWORD *)&stru_140E2ED08.WaitRegister.Flags,
                 8
               * (((unsigned __int64)stru_140E2ED08.SchedulingGroup >> 6)
                + (((__int64)stru_140E2ED08.SchedulingGroup & 0x3F) != 0)),
                 0LL),
          v3 >= 0) )
    {
      if ( *($C9C4F79064DE35237E3F199A7D1BD3E1 *)((char *)&stru_140E2ED08.116 + 4) )
        return (unsigned int)MiAddRangeToCrashDump(a1, *(_QWORD *)((char *)&stru_140E2ED08.116 + 4), 0x2000000LL, 0LL);
    }
  }
  return (unsigned int)v3;
}
