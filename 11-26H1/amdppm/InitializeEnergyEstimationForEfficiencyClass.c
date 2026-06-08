/*
 * XREFs of InitializeEnergyEstimationForEfficiencyClass @ 0x14003B750
 * Callers:
 *     InitializeEnergyEstimation @ 0x14003B60C (InitializeEnergyEstimation.c)
 * Callees:
 *     EnumerateNextDevice @ 0x140001490 (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x140002B9C (ResetEnumerationContext.c)
 *     InitializeEnumerationContext @ 0x140003864 (InitializeEnumerationContext.c)
 *     _guard_dispatch_icall @ 0x14000E680 (_guard_dispatch_icall.c)
 *     memset @ 0x14000EA40 (memset.c)
 *     DisableEnergyEstimation @ 0x14003B21C (DisableEnergyEstimation.c)
 *     EnableEnergyEstimation @ 0x14003B2E4 (EnableEnergyEstimation.c)
 *     EnablePerformanceMonitoringCounters @ 0x14003B3EC (EnablePerformanceMonitoringCounters.c)
 */

__int64 __fastcall InitializeEnergyEstimationForEfficiencyClass(unsigned int a1)
{
  char *v2; // rbx
  __int64 result; // rax
  int v4; // r10d
  unsigned int v5; // edx
  __int64 v6; // rdi
  __int64 v7; // r8
  unsigned int v8; // r9d
  __int64 v9; // rcx
  int v10; // r10d
  __int64 v11; // rdi
  _QWORD *v12; // rsi
  _OWORD v13[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v14; // [rsp+68h] [rbp+28h] BYREF

  v14 = 0LL;
  v2 = (char *)&unk_140015CD8 + 256 * (unsigned __int64)a1;
  memset(v13, 0, sizeof(v13));
  InitializeEnumerationContext((__int64)&qword_140015618, 32, (__int64)v13);
  ResetEnumerationContext((__int64 *)v13);
  while ( 1 )
  {
    result = EnumerateNextDevice((__int64 *)v13, &v14);
    if ( (_DWORD)result )
      break;
    if ( _bittest64((const signed __int64 *)(v14 + 280), 0x25u) )
    {
      if ( *(unsigned __int8 *)(v14 + 376) == a1 )
      {
        result = EnableEnergyEstimation(v14);
        v4 = result;
        if ( (int)result < 0 )
          break;
      }
    }
  }
  if ( v4 >= 0 )
    goto LABEL_38;
  InitializeEnumerationContext((__int64)&qword_140015618, 32, (__int64)v13);
  ResetEnumerationContext((__int64 *)v13);
  while ( 1 )
  {
    result = EnumerateNextDevice((__int64 *)v13, &v14);
    if ( (_DWORD)result )
      break;
    if ( _bittest64((const signed __int64 *)(v14 + 280), 0x25u) && *(unsigned __int8 *)(v14 + 376) == a1 )
      DisableEnergyEstimation(v14);
  }
  v5 = *((_DWORD *)v2 + 10);
  v6 = 0LL;
  v7 = 0LL;
  *((_QWORD *)v2 + 31) = 0LL;
  *((_QWORD *)v2 + 30) = 0LL;
  if ( v5 )
  {
    v8 = v5;
    do
    {
      result = 3 * v7;
      v5 = v8;
      if ( (*(_DWORD *)&v2[12 * v7 + 48] & 1) == 0 )
      {
        if ( (_DWORD)v7 != (_DWORD)v6 )
        {
          v9 = 3 * v6;
          *(_QWORD *)&v2[4 * v9 + 44] = *(_QWORD *)&v2[12 * v7 + 44];
          result = *(unsigned int *)&v2[12 * v7 + 52];
          *(_DWORD *)&v2[4 * v9 + 52] = result;
          v5 = *((_DWORD *)v2 + 10);
        }
        v6 = (unsigned int)(v6 + 1);
      }
      v7 = (unsigned int)(v7 + 1);
      v8 = v5;
    }
    while ( (unsigned int)v7 < v5 );
  }
  if ( v5 != (_DWORD)v6 )
  {
    result = (__int64)memset(&v2[8 * v6 + 44 + 4 * (unsigned int)v6], 0, 12LL * (v5 - (unsigned int)v6));
    *((_DWORD *)v2 + 10) = v6;
  }
  if ( !(_DWORD)v6 )
    goto LABEL_38;
  ResetEnumerationContext((__int64 *)v13);
  while ( 1 )
  {
    result = EnumerateNextDevice((__int64 *)v13, &v14);
    if ( (_DWORD)result )
      break;
    if ( _bittest64((const signed __int64 *)(v14 + 280), 0x25u) )
    {
      if ( *(unsigned __int8 *)(v14 + 376) == a1 )
      {
        result = EnablePerformanceMonitoringCounters(v14);
        v10 = result;
        if ( (int)result < 0 )
          break;
      }
    }
  }
  if ( v10 < 0 || !*((_QWORD *)v2 + 30) )
  {
    InitializeEnumerationContext((__int64)&qword_140015618, 32, (__int64)v13);
    ResetEnumerationContext((__int64 *)v13);
    while ( 1 )
    {
      result = EnumerateNextDevice((__int64 *)v13, &v14);
      if ( (_DWORD)result )
        break;
      v11 = v14;
      if ( _bittest64((const signed __int64 *)(v14 + 280), 0x25u) )
      {
        if ( *(unsigned __int8 *)(v14 + 376) == a1 )
        {
          v12 = *(_QWORD **)(v14 + 368);
          if ( v12 )
          {
            if ( v12[1] )
            {
              ((void (*)(void))HalPrivateDispatchTable[74])();
              v12[1] = 0LL;
            }
            ExFreePoolWithTag(v12, (ULONG)1919119952);
            *(_QWORD *)(v11 + 368) = 0LL;
          }
        }
      }
    }
    *((_QWORD *)v2 + 31) = 0LL;
    *((_QWORD *)v2 + 30) = 0LL;
LABEL_38:
    if ( !*((_QWORD *)v2 + 30) )
    {
      result = (__int64)ComputeProcessorEnergy;
      *((_QWORD *)v2 + 30) = ComputeProcessorEnergy;
    }
  }
  return result;
}
