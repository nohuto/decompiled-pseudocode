/*
 * XREFs of WPP_RECORDER_SF_qLqss @ 0x14001B834
 * Callers:
 *     ACPIDeviceCompleteRequest @ 0x140019A30 (ACPIDeviceCompleteRequest.c)
 *     ACPIDevicePowerProcessPhase0DeviceSubPhase1 @ 0x140024D00 (ACPIDevicePowerProcessPhase0DeviceSubPhase1.c)
 *     ACPIDeviceIrpCompleteRequest @ 0x140024E50 (ACPIDeviceIrpCompleteRequest.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase3 @ 0x140025630 (ACPIDevicePowerProcessPhase5DeviceSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase1 @ 0x140025D50 (ACPIDevicePowerProcessPhase5DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase2 @ 0x140026640 (ACPIDevicePowerProcessPhase5DeviceSubPhase2.c)
 *     ACPIDeviceIrpForwardRequest @ 0x140026CE0 (ACPIDeviceIrpForwardRequest.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase4 @ 0x140027600 (ACPIDevicePowerProcessPhase5DeviceSubPhase4.c)
 *     ACPIDeviceIrpWaitWakeRequestPending @ 0x1400328B0 (ACPIDeviceIrpWaitWakeRequestPending.c)
 *     ACPIDeviceIrpDelayedDeviceOffRequest @ 0x140044E30 (ACPIDeviceIrpDelayedDeviceOffRequest.c)
 *     ACPIRootIrpQueryPower @ 0x1400454E0 (ACPIRootIrpQueryPower.c)
 *     ACPIDeviceIrpDelayedDeviceOnRequest @ 0x1400486C0 (ACPIDeviceIrpDelayedDeviceOnRequest.c)
 *     ACPICMButtonSetPower @ 0x14004AD00 (ACPICMButtonSetPower.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase1 @ 0x14005D1C0 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase2 @ 0x14005D320 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase2.c)
 *     ACPIDockIrpQueryEjectRelations @ 0x1400ABC08 (ACPIDockIrpQueryEjectRelations.c)
 *     ACPIDockIrpStartDevice @ 0x1400AC420 (ACPIDockIrpStartDevice.c)
 *     ACPIBusIrpQueryTargetRelation @ 0x1400C662C (ACPIBusIrpQueryTargetRelation.c)
 *     ACPIBusIrpQueryBusRelations @ 0x1400C67F8 (ACPIBusIrpQueryBusRelations.c)
 *     ACPIBusIrpQueryResources @ 0x1400C94D0 (ACPIBusIrpQueryResources.c)
 *     ACPIBusIrpQueryResourceRequirements @ 0x1400C9940 (ACPIBusIrpQueryResourceRequirements.c)
 *     ACPIFilterIrpFilterResourceRequirements @ 0x1400C9E20 (ACPIFilterIrpFilterResourceRequirements.c)
 *     ACPIFilterIrpQueryResourceRequirements @ 0x1400CA430 (ACPIFilterIrpQueryResourceRequirements.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qLqss(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        char a7,
        char a8,
        const char *a9,
        const char *a10)
{
  __int64 v10; // rdi
  const char *v11; // rsi
  unsigned __int64 v13; // r14
  __int64 v14; // rbp
  unsigned int v15; // r12d
  const char *v16; // rbx
  int v17; // eax
  __int64 v18; // rax
  bool v19; // zf
  __int64 v21; // rax
  __int64 v22; // r9
  const char *v23; // rdx
  __int64 v24; // rax
  __int64 v25; // r8
  const char *v26; // rcx
  int v27; // [rsp+20h] [rbp-98h]
  __int64 v28; // [rsp+C0h] [rbp+8h]
  unsigned __int16 v29; // [rsp+D8h] [rbp+20h]

  v29 = a4;
  v28 = a1;
  v10 = -1LL;
  v11 = a9;
  v13 = (unsigned __int64)a3 >> 16;
  v14 = 5LL;
  v15 = a2;
  v16 = a10;
  v17 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v13 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v17, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v13 + 1) >= a2 )
  {
    if ( a10 )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( a10[v21] );
      v22 = v21 + 1;
    }
    else
    {
      v22 = 5LL;
    }
    v23 = a10;
    if ( !a10 )
      v23 = "NULL";
    if ( a9 )
    {
      v24 = -1LL;
      do
        ++v24;
      while ( a9[v24] );
      v25 = v24 + 1;
    }
    else
    {
      v25 = 5LL;
    }
    v26 = a9;
    if ( !a9 )
      v26 = "NULL";
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, char *, __int64, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v13),
      43LL,
      a5,
      v29,
      &a6,
      8LL,
      &a7,
      4LL,
      &a8,
      8LL,
      v26,
      v25,
      v23,
      v22,
      0LL);
    a4 = v29;
    a1 = v28;
  }
  if ( v16 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( v16[v18] );
  }
  if ( !v16 )
    v16 = "NULL";
  v19 = v11 == 0LL;
  if ( v11 )
  {
    do
      ++v10;
    while ( v11[v10] );
    v14 = v10 + 1;
    v19 = v11 == 0LL;
  }
  if ( v19 )
    v11 = "NULL";
  LOWORD(v27) = a4;
  return WppAutoLogTrace(a1, v15, a3, a5, v27, &a6, 8LL, &a7, 4LL, &a8, 8LL, v11, v14, v16);
}
