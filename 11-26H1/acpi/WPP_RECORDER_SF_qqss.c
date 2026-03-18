/*
 * XREFs of WPP_RECORDER_SF_qqss @ 0x1400338F4
 * Callers:
 *     ACPIFanDeviceControl @ 0x140017F70 (ACPIFanDeviceControl.c)
 *     ACPIDevicePowerProcessPhase0DeviceSubPhase2 @ 0x140025550 (ACPIDevicePowerProcessPhase0DeviceSubPhase2.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase3 @ 0x140025630 (ACPIDevicePowerProcessPhase5DeviceSubPhase3.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase4 @ 0x140026EB0 (ACPIDevicePowerProcessPhase1DeviceSubPhase4.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase6 @ 0x140027190 (ACPIDevicePowerProcessPhase5DeviceSubPhase6.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase5 @ 0x1400274D0 (ACPIDevicePowerProcessPhase5DeviceSubPhase5.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase4 @ 0x140031890 (ACPIDevicePowerProcessPhase5SystemSubPhase4.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase6 @ 0x1400320C0 (ACPIDevicePowerProcessPhase5SystemSubPhase6.c)
 *     ACPIDeviceCancelWaitWakeIrp @ 0x140032C00 (ACPIDeviceCancelWaitWakeIrp.c)
 *     ACPIWakeWaitIrp @ 0x14003CD70 (ACPIWakeWaitIrp.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase3 @ 0x140045930 (ACPIDevicePowerProcessPhase5SystemSubPhase3.c)
 *     ACPIBusAndFilterIrpQueryRemovalRelations @ 0x140046848 (ACPIBusAndFilterIrpQueryRemovalRelations.c)
 *     ACPIDetectDuplicateHID @ 0x140047354 (ACPIDetectDuplicateHID.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase1 @ 0x1400485C0 (ACPIDevicePowerProcessPhase5SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase0SystemSubPhase1 @ 0x140049160 (ACPIDevicePowerProcessPhase0SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase2 @ 0x1400499A0 (ACPIDevicePowerProcessPhase5SystemSubPhase2.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase5 @ 0x14004A130 (ACPIDevicePowerProcessPhase5SystemSubPhase5.c)
 *     ACPIDockIrpQueryPower @ 0x140056C60 (ACPIDockIrpQueryPower.c)
 *     ACPIFanCancelRequest @ 0x140060690 (ACPIFanCancelRequest.c)
 *     ACPIQueryGedDeviceInterface @ 0x140062040 (ACPIQueryGedDeviceInterface.c)
 *     ACPIMatchKernelPorts @ 0x140063610 (ACPIMatchKernelPorts.c)
 *     ACPIBusAndFilterIrpEject @ 0x1400A8F30 (ACPIBusAndFilterIrpEject.c)
 *     ACPIDockIrpEject @ 0x1400AB490 (ACPIDockIrpEject.c)
 *     ACPIDockIrpQueryCapabilities @ 0x1400AB740 (ACPIDockIrpQueryCapabilities.c)
 *     ACPIDockIrpQueryEjectRelations @ 0x1400ABC08 (ACPIDockIrpQueryEjectRelations.c)
 *     ACPIDockIrpQueryID @ 0x1400ABDF0 (ACPIDockIrpQueryID.c)
 *     ACPIDockIrpStartDevice @ 0x1400AC420 (ACPIDockIrpStartDevice.c)
 *     ACPIThermalStartDevice @ 0x1400BAC70 (ACPIThermalStartDevice.c)
 *     ACPIBusIrpQueryResources @ 0x1400C94D0 (ACPIBusIrpQueryResources.c)
 *     ACPIRootIrpStartDevice @ 0x1400DBD50 (ACPIRootIrpStartDevice.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qqss(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        char a7,
        const char *a8,
        const char *a9)
{
  __int64 v9; // rdi
  const char *v10; // rsi
  unsigned __int64 v12; // r14
  __int64 v13; // rbp
  unsigned int v14; // r12d
  const char *v15; // rbx
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rax
  bool v19; // zf
  __int64 v21; // rax
  __int64 v22; // r9
  const char *v23; // r8
  __int64 v24; // rax
  __int64 v25; // rdx
  const char *v26; // rcx
  int v27; // [rsp+20h] [rbp-88h]
  __int64 v28; // [rsp+B0h] [rbp+8h]
  unsigned __int16 v29; // [rsp+C8h] [rbp+20h]

  v29 = a4;
  v28 = a1;
  v9 = -1LL;
  v10 = a8;
  v12 = (unsigned __int64)a3 >> 16;
  v13 = 5LL;
  v14 = a2;
  v15 = a9;
  v16 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v12 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v16, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v12 + 1) >= a2 )
  {
    if ( a9 )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( a9[v21] );
      v22 = v21 + 1;
    }
    else
    {
      v22 = 5LL;
    }
    v23 = a9;
    if ( !a9 )
      v23 = "NULL";
    if ( a8 )
    {
      v24 = -1LL;
      do
        ++v24;
      while ( a8[v24] );
      v25 = v24 + 1;
    }
    else
    {
      v25 = 5LL;
    }
    v26 = a8;
    if ( !a8 )
      v26 = "NULL";
    pfnWppTraceMessage(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v12),
      43LL,
      a5,
      v29,
      &a6,
      8LL,
      &a7,
      8LL,
      v26,
      v25,
      v23,
      v22,
      0LL);
    a4 = v29;
    a1 = v28;
  }
  if ( v15 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( v15[v17] );
    v18 = v17 + 1;
  }
  else
  {
    v18 = 5LL;
  }
  if ( !v15 )
    v15 = "NULL";
  v19 = v10 == 0LL;
  if ( v10 )
  {
    do
      ++v9;
    while ( v10[v9] );
    v13 = v9 + 1;
    v19 = v10 == 0LL;
  }
  if ( v19 )
    v10 = "NULL";
  LOWORD(v27) = a4;
  return WppAutoLogTrace(a1, v14, a3, a5, v27, &a6, 8LL, &a7, 8LL, v10, v13, v15, v18, 0LL);
}
