/*
 * XREFs of ACPIBusIrpSetSystemPower @ 0x14001BB34
 * Callers:
 *     ACPIBusIrpSetPower @ 0x14001BAA0 (ACPIBusIrpSetPower.c)
 *     ACPICMLidSetPowerCompletion @ 0x14004AC10 (ACPICMLidSetPowerCompletion.c)
 * Callees:
 *     ACPIDispatchPowerIrpSuccess @ 0x14001BE60 (ACPIDispatchPowerIrpSuccess.c)
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qdqss @ 0x140026A88 (WPP_RECORDER_SF_qdqss.c)
 *     ACPIDeviceIrpWarmEjectRequest @ 0x14005CFCC (ACPIDeviceIrpWarmEjectRequest.c)
 */

__int64 __fastcall ACPIBusIrpSetSystemPower(PDEVICE_OBJECT DeviceObject, _QWORD *Context, __int64 a3)
{
  __int64 DeviceExtension; // rax
  __int64 v7; // r10
  __int64 v8; // rbx
  __int64 v9; // rdx
  POWER_STATE v10; // r14d
  __int64 result; // rax
  const char *v12; // rcx
  const char *v13; // r8
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r8
  const char *v17; // rcx
  const char *v18; // rdx

  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)DeviceObject);
  v7 = *(int *)(a3 + 24);
  v8 = DeviceExtension;
  v9 = *(_QWORD *)(DeviceExtension + 8);
  v10.SystemState = *(_SYSTEM_POWER_STATE *)(DeviceExtension + 4 * v7 + 508);
  if ( (v9 & 0x2000000) != 0 && (_DWORD)v7 == 1 )
    *(_DWORD *)(DeviceExtension + 244) = *(_WORD *)(a3 + 10) & 0xF;
  if ( *(_DWORD *)(a3 + 32) == 7 )
  {
    v15 = Context[23];
    *((_DWORD *)Context + 12) = 0;
    *(_BYTE *)(v15 + 3) |= 1u;
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 728));
    v16 = *(_QWORD *)(v8 + 8);
    v17 = byte_140075A82;
    v18 = byte_140075A82;
    if ( (v16 & 0x200000000000LL) != 0 )
    {
      v17 = *(const char **)(v8 + 608);
      if ( (v16 & 0x400000000000LL) != 0 )
        v18 = *(const char **)(v8 + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qdqss(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v18,
        12,
        58,
        (__int64)&WPP_fcfdf8e587be3a45444c0aabc3a31ffd_Traceguids,
        (char)Context,
        v7 - 1,
        v8,
        (__int64)v17,
        (__int64)v18);
    result = ACPIDeviceIrpWarmEjectRequest(v8, Context, &ACPIDeviceIrpCompleteRequest, 0LL);
    if ( (_DWORD)result == -1073741802 )
      return 259LL;
  }
  else if ( (v9 & 0x20000) == 0
         || (*(_DWORD *)(DeviceExtension + 1008) & 0x400LL) != 0
         || *(_DWORD *)(DeviceExtension + 384) == v10.SystemState )
  {
    return ACPIDispatchPowerIrpSuccess(DeviceObject, Context);
  }
  else
  {
    v12 = byte_140075A82;
    v13 = byte_140075A82;
    if ( (v9 & 0x200000000000LL) != 0 )
    {
      v12 = *(const char **)(DeviceExtension + 608);
      if ( (v9 & 0x400000000000LL) != 0 )
        v13 = *(const char **)(DeviceExtension + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qdqss(
        WPP_GLOBAL_Control->DeviceExtension,
        v9,
        10,
        59,
        (__int64)&WPP_fcfdf8e587be3a45444c0aabc3a31ffd_Traceguids,
        (char)Context,
        LOBYTE(v10.SystemState) - 1,
        DeviceExtension,
        (__int64)v12,
        (__int64)v13);
    v14 = Context[23];
    *((_DWORD *)Context + 12) = 0;
    *(_BYTE *)(v14 + 3) |= 1u;
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 728));
    PoRequestPowerIrp(DeviceObject, 2u, v10, ACPIBusIrpSetSystemPowerComplete, Context, 0LL);
    return 259LL;
  }
  return result;
}
