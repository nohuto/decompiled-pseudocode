/*
 * XREFs of InitializeEnergyEstimationForEfficiencyClass @ 0x14004724C
 * Callers:
 *     InitializeEnergyEstimation @ 0x140027BAC (InitializeEnergyEstimation.c)
 * Callees:
 *     EnumerateNextDevice @ 0x1400040CC (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1400048EC (ResetEnumerationContext.c)
 *     InitializeEnumerationContext @ 0x1400049F4 (InitializeEnumerationContext.c)
 *     memset @ 0x140010740 (memset.c)
 *     EnableEnergyEstimation @ 0x1400284AC (EnableEnergyEstimation.c)
 *     DisableEnergyEstimation @ 0x14003C4EC (DisableEnergyEstimation.c)
 *     DisablePerformanceMonitoringCounters @ 0x14003C5B4 (DisablePerformanceMonitoringCounters.c)
 *     EnablePerformanceMonitoringCounters @ 0x14003C624 (EnablePerformanceMonitoringCounters.c)
 */

__int64 __fastcall InitializeEnergyEstimationForEfficiencyClass(unsigned int a1)
{
  int *v2; // rbx
  __int64 result; // rax
  int v4; // r11d
  unsigned int v5; // edx
  __int64 v6; // rdi
  __int64 v7; // r8
  unsigned int v8; // r9d
  __int64 v9; // rcx
  int v10; // r11d
  _OWORD v11[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v12; // [rsp+68h] [rbp+28h] BYREF

  v12 = 0LL;
  v2 = &dword_1400198A8[64 * (unsigned __int64)a1];
  memset(v11, 0, sizeof(v11));
  InitializeEnumerationContext((__int64)&qword_1400191E8, 32, (__int64)v11);
  ResetEnumerationContext((__int64 *)v11);
  while ( 1 )
  {
    result = EnumerateNextDevice((__int64 *)v11, &v12);
    if ( (_DWORD)result )
      break;
    if ( _bittest64((const signed __int64 *)(v12 + 280), 0x25u) )
    {
      if ( *(unsigned __int8 *)(v12 + 376) == a1 )
      {
        result = EnableEnergyEstimation(v12);
        v4 = result;
        if ( (int)result < 0 )
          break;
      }
    }
  }
  if ( v4 >= 0 )
    goto LABEL_35;
  InitializeEnumerationContext((__int64)&qword_1400191E8, 32, (__int64)v11);
  ResetEnumerationContext((__int64 *)v11);
  while ( 1 )
  {
    result = EnumerateNextDevice((__int64 *)v11, &v12);
    if ( (_DWORD)result )
      break;
    if ( _bittest64((const signed __int64 *)(v12 + 280), 0x25u) && *(unsigned __int8 *)(v12 + 376) == a1 )
      DisableEnergyEstimation(v12);
  }
  v5 = v2[10];
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
      if ( (v2[3 * v7 + 12] & 1) == 0 )
      {
        if ( (_DWORD)v7 != (_DWORD)v6 )
        {
          v9 = 3 * v6;
          *(_QWORD *)&v2[v9 + 11] = *(_QWORD *)&v2[3 * v7 + 11];
          result = (unsigned int)v2[3 * v7 + 13];
          v2[v9 + 13] = result;
          v5 = v2[10];
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
    result = (__int64)memset(&v2[2 * v6 + 11 + (unsigned int)v6], 0, 12LL * (v5 - (unsigned int)v6));
    v2[10] = v6;
  }
  if ( !(_DWORD)v6 )
    goto LABEL_35;
  ResetEnumerationContext((__int64 *)v11);
  while ( 1 )
  {
    result = EnumerateNextDevice((__int64 *)v11, &v12);
    if ( (_DWORD)result )
      break;
    if ( _bittest64((const signed __int64 *)(v12 + 280), 0x25u) )
    {
      if ( *(unsigned __int8 *)(v12 + 376) == a1 )
      {
        result = EnablePerformanceMonitoringCounters(v12);
        v10 = result;
        if ( (int)result < 0 )
          break;
      }
    }
  }
  if ( v10 < 0 || !*((_QWORD *)v2 + 30) )
  {
    InitializeEnumerationContext((__int64)&qword_1400191E8, 32, (__int64)v11);
    ResetEnumerationContext((__int64 *)v11);
    while ( 1 )
    {
      result = EnumerateNextDevice((__int64 *)v11, &v12);
      if ( (_DWORD)result )
        break;
      if ( _bittest64((const signed __int64 *)(v12 + 280), 0x25u) && *(unsigned __int8 *)(v12 + 376) == a1 )
        DisablePerformanceMonitoringCounters(v12);
    }
    *((_QWORD *)v2 + 31) = 0LL;
    *((_QWORD *)v2 + 30) = 0LL;
LABEL_35:
    if ( !*((_QWORD *)v2 + 30) )
    {
      result = (__int64)ComputeProcessorEnergy;
      *((_QWORD *)v2 + 30) = ComputeProcessorEnergy;
    }
  }
  return result;
}
