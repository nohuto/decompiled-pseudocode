/*
 * XREFs of InitializeEnergyEstimation @ 0x14003B60C
 * Callers:
 *     ProcLibDeviceStart @ 0x14002E514 (ProcLibDeviceStart.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14000E680 (_guard_dispatch_icall.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x14003B750 (InitializeEnergyEstimationForEfficiencyClass.c)
 *     RetrieveEfficiencyClassInformation @ 0x14003BA14 (RetrieveEfficiencyClassInformation.c)
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
  word_140015ED8 = 0;
  KeQueryPerformanceCounter(&PerformanceFrequency);
  qword_140015EE8 = PerformanceFrequency.QuadPart;
  HalPrivateDispatchTable[76]((__int64)&unk_140015EF0);
  RetrieveEfficiencyClassInformation();
  v0 = (unsigned int)dword_140015CD4;
  v1 = 0;
  qword_140015878 = 0LL;
  for ( qword_140015870 = 0LL; v1 < dword_140015CD4; ++v1 )
  {
    InitializeEnergyEstimationForEfficiencyClass(v1);
    v0 = (unsigned int)dword_140015CD4;
  }
  qword_140015878 = qword_140015DD0[0];
  for ( i = 1; i < (unsigned int)v0; ++i )
  {
    if ( Globals[32 * (unsigned __int64)i + 258] != qword_140015DD0[0] )
    {
      qword_140015878 = (__int64)SnapEnergyCountersDispatch;
      break;
    }
  }
  v3 = (void *)qword_140015DC8[0];
  v4 = 1;
  qword_140015870 = qword_140015DC8[0];
  while ( v4 < (unsigned int)v0 )
  {
    if ( Globals[32 * (unsigned __int64)v4 + 257] != qword_140015DC8[0] )
    {
      v3 = ComputeEnergyDispatch;
      qword_140015870 = (__int64)ComputeEnergyDispatch;
      break;
    }
    ++v4;
  }
  if ( !v3 )
  {
    v3 = ComputeProcessorEnergy;
    qword_140015870 = (__int64)ComputeProcessorEnergy;
  }
  LOBYTE(v0) = byte_140015858;
  return ((__int64 (__fastcall *)(void *, __int64, __int64, __int64 *))qword_140015990)(
           v3,
           qword_140015878,
           v0,
           Globals);
}
