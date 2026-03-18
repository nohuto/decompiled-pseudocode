/*
 * XREFs of PpmIdleGetPackageIdleIntervalStats @ 0x140B03E2C
 * Callers:
 *     PopPowerInformationInternal @ 0x140B6F6FC (PopPowerInformationInternal.c)
 * Callees:
 *     PpmReleaseLock @ 0x14037AFBC (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x140394F80 (PpmAcquireLock.c)
 *     PpmConvertTimeTo @ 0x140429470 (PpmConvertTimeTo.c)
 *     PpmParkGetParkNode @ 0x14042D7D4 (PpmParkGetParkNode.c)
 */

__int64 __fastcall PpmIdleGetPackageIdleIntervalStats(int a1, __int64 a2, ULONGLONG *a3)
{
  __int64 v4; // rdi
  int v5; // r13d
  ULONGLONG *v6; // r14
  __int16 v7; // bx
  __int64 ParkNode; // rax
  __int64 v9; // rsi
  __int64 v10; // rbx
  unsigned int v11; // ebx
  __int64 v12; // r15
  __int64 v14; // rbx
  __int64 v15; // rbp
  ULONGLONG *v16; // r12
  __int64 v17; // r15

  LODWORD(v4) = 0;
  v5 = 0;
  v6 = a3;
  v7 = a2;
  PpmAcquireLock((struct _KTHREAD **)&stru_140F10070.SchedulerAssistLastYieldBoostTime, a2, (unsigned int)a3);
  ParkNode = PpmParkGetParkNode(v7);
  v9 = ParkNode;
  if ( !ParkNode || (v10 = *(_QWORD *)(ParkNode + 1072)) == 0 )
  {
LABEL_10:
    LODWORD(v4) = -1073741637;
    goto LABEL_11;
  }
  if ( a1 == 74 )
  {
    v14 = v10 - (_QWORD)v6;
    v15 = 37LL;
    do
    {
      *v6 = PpmConvertTimeTo(*(ULONGLONG *)((char *)v6 + v14 + 32), 0x989680uLL);
      ++v6;
      --v15;
    }
    while ( v15 );
  }
  else
  {
    if ( a1 != 75 )
      goto LABEL_10;
    v11 = 0;
    if ( !*(_BYTE *)(ParkNode + 10) )
      goto LABEL_10;
    do
    {
      if ( v11 >= 2 )
        break;
      v12 = *(_QWORD *)(624LL * v11 + *(_QWORD *)(v9 + 1256) + 552);
      if ( v12 )
      {
        v5 = 1;
        v4 = 37LL;
        v16 = &v6[37 * v11];
        v17 = v12 - (_QWORD)v16;
        do
        {
          *v16 = PpmConvertTimeTo(*(ULONGLONG *)((char *)v16 + v17 + 32), 0x989680uLL);
          ++v16;
          --v4;
        }
        while ( v4 );
      }
      ++v11;
    }
    while ( v11 < *(unsigned __int8 *)(v9 + 10) );
    if ( !v5 )
      goto LABEL_10;
  }
LABEL_11:
  PpmReleaseLock(&stru_140F10070.SchedulerAssistLastYieldBoostTime);
  return (unsigned int)v4;
}
