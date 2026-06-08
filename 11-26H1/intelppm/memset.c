/*
 * XREFs of memset @ 0x140010740
 * Callers:
 *     PepParkMask @ 0x140002C10 (PepParkMask.c)
 *     ProcLibTraceRegisterGroupEvents @ 0x140003604 (ProcLibTraceRegisterGroupEvents.c)
 *     PctSnapPlatformCtrsEx @ 0x140004C64 (PctSnapPlatformCtrsEx.c)
 *     memcpy_s @ 0x140006038 (memcpy_s.c)
 *     GetProcessorStatusInfo @ 0x14000AEC0 (GetProcessorStatusInfo.c)
 *     PepParkPreference @ 0x14000F6D0 (PepParkPreference.c)
 *     memset$thunk$772440563353939046 @ 0x140011020 (memset$thunk$772440563353939046.c)
 *     AcquirePccInterface @ 0x140027238 (AcquirePccInterface.c)
 *     RegisterWmi @ 0x14002816C (RegisterWmi.c)
 *     InitEnergyCounters @ 0x14002A270 (InitEnergyCounters.c)
 *     RetrieveModelParameters @ 0x14002A6A4 (RetrieveModelParameters.c)
 *     GetRegistryQwordValue @ 0x14002CC24 (GetRegistryQwordValue.c)
 *     EvtDriverDeviceAdd @ 0x14002CE60 (EvtDriverDeviceAdd.c)
 *     WppTraceCallback @ 0x14002D360 (WppTraceCallback.c)
 *     ProcLibDeviceCreate @ 0x140032408 (ProcLibDeviceCreate.c)
 *     ValidateCoordinatedDependencyOptions @ 0x1400345A0 (ValidateCoordinatedDependencyOptions.c)
 *     ValidateCoordinatedState @ 0x140034BC4 (ValidateCoordinatedState.c)
 *     InitCpcStatesInternal @ 0x140036530 (InitCpcStatesInternal.c)
 *     RegisterKernelPlatformStates @ 0x1400398E4 (RegisterKernelPlatformStates.c)
 *     PepNotifyQueryCoordinatedStates @ 0x14003A390 (PepNotifyQueryCoordinatedStates.c)
 *     HwDebugInitializeRegistryDebugParameter @ 0x14003B4AC (HwDebugInitializeRegistryDebugParameter.c)
 *     HwDebugInitializeRegistryDebugRegister @ 0x14003B890 (HwDebugInitializeRegistryDebugRegister.c)
 *     PepQueryWpsTable @ 0x14003C2F0 (PepQueryWpsTable.c)
 *     RegisterPepDevice @ 0x14003DD4C (RegisterPepDevice.c)
 *     RegisterHvPepContext @ 0x14003EE88 (RegisterHvPepContext.c)
 *     LpiTranslateCoordinatedIdleStates @ 0x14003F484 (LpiTranslateCoordinatedIdleStates.c)
 *     UpdateKernelPlatformStates @ 0x14003FDCC (UpdateKernelPlatformStates.c)
 *     DeregisterKernelIdleDomains @ 0x140041A40 (DeregisterKernelIdleDomains.c)
 *     RegisterKernelIdleDomains @ 0x1400424AC (RegisterKernelIdleDomains.c)
 *     EmiProcessIoctl @ 0x140042B10 (EmiProcessIoctl.c)
 *     HwDebugCreateRegisterGroup @ 0x140046E44 (HwDebugCreateRegisterGroup.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x14004724C (InitializeEnergyEstimationForEfficiencyClass.c)
 *     InitPkgIdleStateStats @ 0x1400474C0 (InitPkgIdleStateStats.c)
 *     GetRegistryDwordValueNoDefault @ 0x14004841C (GetRegistryDwordValueNoDefault.c)
 *     ProcLibGlobalInit @ 0x14004B8C0 (ProcLibGlobalInit.c)
 *     PopulateEnergyEstimationModel @ 0x14004C678 (PopulateEnergyEstimationModel.c)
 *     ReadEnergyEquation @ 0x14004C7C8 (ReadEnergyEquation.c)
 * Callees:
 *     <none>
 */

void *__cdecl memset(void *a1, int Val, size_t Size)
{
  void *result; // rax
  __int64 v4; // rdx
  __m128 v5; // xmm0
  char *v6; // r8
  __m128 *v7; // rdx
  _OWORD *v8; // r9
  size_t v9; // r8
  __m128 *v10; // r9
  size_t v11; // r8
  _DWORD *v12; // r9
  size_t v13; // r8

  result = a1;
  v4 = 0x101010101010101LL * (unsigned __int8)Val;
  v5 = _mm_movelh_ps((__m128)(unsigned __int64)v4, (__m128)(unsigned __int64)v4);
  if ( Size >= 0x40 )
  {
    if ( (_isa_info & 2) != 0 && Size >= 0x320 )
      return (void *)_memset_repmovs();
    *(__m128 *)a1 = v5;
    v6 = (char *)a1 + Size;
    a1 = (void *)(((unsigned __int64)a1 + 16) & 0xFFFFFFFFFFFFFFF0uLL);
    Size = v6 - (_BYTE *)a1;
    if ( Size >= 0x40 )
    {
      v7 = (__m128 *)((char *)a1 + Size - 16);
      v8 = (_OWORD *)(((unsigned __int64)a1 + Size - 48) & 0xFFFFFFFFFFFFFFF0uLL);
      v9 = Size >> 6;
      do
      {
        *(__m128 *)a1 = v5;
        *((__m128 *)a1 + 1) = v5;
        a1 = (char *)a1 + 64;
        --v9;
        *((__m128 *)a1 - 2) = v5;
        *((__m128 *)a1 - 1) = v5;
      }
      while ( v9 );
      *v8 = v5;
      v8[1] = v5;
      v8[2] = v5;
      *v7 = v5;
      return result;
    }
LABEL_9:
    v10 = (__m128 *)((char *)a1 + Size - 16);
    *(__m128 *)a1 = v5;
    v11 = (Size & 0x20) >> 1;
    *v10 = v5;
    *(__m128 *)((char *)a1 + v11) = v5;
    *(__m128 *)((char *)v10 - v11) = v5;
    return result;
  }
  if ( Size >= 0x10 )
    goto LABEL_9;
  if ( Size < 4 )
  {
    if ( Size )
    {
      *(_BYTE *)a1 = v4;
      if ( Size != 1 )
        *(_WORD *)((char *)a1 + Size - 2) = v4;
    }
  }
  else
  {
    v12 = (char *)a1 + Size - 4;
    *(_DWORD *)a1 = v4;
    v13 = (Size & 8) >> 1;
    *v12 = v4;
    *(_DWORD *)((char *)a1 + v13) = v4;
    *(_DWORD *)((char *)v12 - v13) = v4;
  }
  return result;
}
