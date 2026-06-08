/*
 * XREFs of InitializeEnergyEstimation @ 0x140027BAC
 * Callers:
 *     ProcLibDeviceStart @ 0x140032614 (ProcLibDeviceStart.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 *     RetrieveEfficiencyClassInformation @ 0x140027CF0 (RetrieveEfficiencyClassInformation.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x14004724C (InitializeEnergyEstimationForEfficiencyClass.c)
 */

__int64 InitializeEnergyEstimation()
{
  __int64 v0; // r8
  unsigned int v1; // ebx
  unsigned int i; // edx
  void *v3; // rcx
  unsigned int v4; // edx
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp+8h] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  word_140019AA8 = 0;
  KeQueryPerformanceCounter(&PerformanceFrequency);
  qword_140019AB8 = PerformanceFrequency.QuadPart;
  HalPrivateDispatchTable[76]((__int64)&qword_140019AC0);
  RetrieveEfficiencyClassInformation();
  v0 = (unsigned int)dword_1400198A4;
  v1 = 0;
  qword_140019448 = 0LL;
  for ( qword_140019440 = 0LL; v1 < dword_1400198A4; ++v1 )
  {
    InitializeEnergyEstimationForEfficiencyClass(v1);
    v0 = (unsigned int)dword_1400198A4;
  }
  qword_140019448 = qword_1400199A0[0];
  for ( i = 1; i < (unsigned int)v0; ++i )
  {
    if ( Globals[32 * (unsigned __int64)i + 258] != qword_1400199A0[0] )
    {
      qword_140019448 = (__int64)SnapEnergyCountersDispatch;
      break;
    }
  }
  v3 = (void *)qword_140019998[0];
  v4 = 1;
  qword_140019440 = qword_140019998[0];
  while ( v4 < (unsigned int)v0 )
  {
    if ( Globals[32 * (unsigned __int64)v4 + 257] != qword_140019998[0] )
    {
      v3 = ComputeEnergyDispatch;
      qword_140019440 = (__int64)ComputeEnergyDispatch;
      break;
    }
    ++v4;
  }
  if ( !v3 )
  {
    v3 = ComputeProcessorEnergy;
    qword_140019440 = (__int64)ComputeProcessorEnergy;
  }
  LOBYTE(v0) = byte_140019428;
  return ((__int64 (__fastcall *)(void *, __int64, __int64, __int64 *))qword_140019560)(
           v3,
           qword_140019448,
           v0,
           Globals);
}
