/*
 * XREFs of EnablePerformanceMonitoringCounters @ 0x14003B3EC
 * Callers:
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x14003B750 (InitializeEnergyEstimationForEfficiencyClass.c)
 * Callees:
 *     __security_check_cookie @ 0x14000E5E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14000E680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall EnablePerformanceMonitoringCounters(__int64 a1)
{
  char *v2; // r8
  unsigned int v3; // edi
  int v4; // ebx
  __int64 i; // rdx
  int v6; // eax
  __int64 Pool2; // rax
  _QWORD *v8; // rsi
  int v10; // [rsp+40h] [rbp-38h] BYREF
  __int64 v11; // [rsp+48h] [rbp-30h] BYREF
  _DWORD v12[4]; // [rsp+50h] [rbp-28h] BYREF

  v2 = (char *)&unk_140015CD8 + 256 * (unsigned __int64)*(unsigned __int8 *)(a1 + 376);
  v11 = 0LL;
  v10 = 0;
  v3 = *((_DWORD *)v2 + 10);
  if ( v3 )
  {
    if ( v3 > 4 )
      return (unsigned int)-1073741670;
    for ( i = 0LL; (unsigned int)i < v3; i = (unsigned int)(i + 1) )
    {
      v6 = *(_DWORD *)&v2[12 * i + 44];
      v12[i] = v6;
      if ( (unsigned int)(v6 - 2) > 0x15 )
        return (unsigned int)-1073741637;
    }
    Pool2 = ExAllocatePool2(64LL, 136LL, 1919119952LL);
    v8 = (_QWORD *)Pool2;
    if ( Pool2 )
    {
      *(_QWORD *)(a1 + 368) = Pool2;
      v10 = 1953719621;
      v4 = ((__int64 (__fastcall *)(_QWORD, _DWORD *, _QWORD, int *, __int64 *, _QWORD))HalPrivateDispatchTable[150])(
             *(unsigned int *)(a1 + 56),
             v12,
             v3,
             &v10,
             &v11,
             0LL);
      if ( v4 < 0 )
      {
        ExFreePoolWithTag(v8, (ULONG)1919119952);
        *(_QWORD *)(a1 + 368) = 0LL;
      }
      else
      {
        v8[1] = v11;
        *(_DWORD *)v8 = v3;
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v4;
}
