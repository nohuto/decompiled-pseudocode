/*
 * XREFs of WPP_RECORDER_SF_qdqss @ 0x140026A88
 * Callers:
 *     ACPIBusIrpSetSystemPower @ 0x14001BB34 (ACPIBusIrpSetSystemPower.c)
 *     ACPIDeviceIrpDeviceRequest @ 0x14002507C (ACPIDeviceIrpDeviceRequest.c)
 *     ACPIDeviceIrpDeviceFilterRequest @ 0x140025310 (ACPIDeviceIrpDeviceFilterRequest.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase1 @ 0x1400258B0 (ACPIDevicePowerProcessPhase1DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase1 @ 0x140025D50 (ACPIDevicePowerProcessPhase5DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase2 @ 0x140026640 (ACPIDevicePowerProcessPhase5DeviceSubPhase2.c)
 *     ACPIBuildRegRequest @ 0x14002B4CC (ACPIBuildRegRequest.c)
 *     ACPIDeviceInternalDelayedDeviceRequest @ 0x140034A74 (ACPIDeviceInternalDelayedDeviceRequest.c)
 *     ACPIDeviceIrpWaitWakeRequest @ 0x14003CFF8 (ACPIDeviceIrpWaitWakeRequest.c)
 *     ACPIDeviceInternalDeviceRequest @ 0x140042918 (ACPIDeviceInternalDeviceRequest.c)
 *     ACPIRootIrpSetPower @ 0x140045690 (ACPIRootIrpSetPower.c)
 *     ACPIDeviceIrpSystemRequest @ 0x1400457B0 (ACPIDeviceIrpSystemRequest.c)
 *     ACPIDockIrpSetSystemPower @ 0x140057050 (ACPIDockIrpSetSystemPower.c)
 *     ACPIDeviceIrpWarmEjectRequest @ 0x14005CFCC (ACPIDeviceIrpWarmEjectRequest.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qdqss(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        char a7,
        char a8,
        const char *a9,
        const char *a10)
{
  const char *v10; // rbx
  const char *v12; // rsi
  __int64 v14; // rdi
  unsigned __int64 v15; // r14
  unsigned int v16; // r12d
  __int64 v17; // rbp
  int v18; // eax
  __int64 v19; // rax
  bool v20; // zf
  __int64 v22; // rax
  __int64 v23; // r9
  const char *v24; // rdx
  __int64 v25; // rax
  __int64 v26; // r8
  const char *v27; // rcx
  int v28; // [rsp+20h] [rbp-88h]

  v10 = a10;
  v12 = a9;
  v14 = -1LL;
  v15 = (unsigned __int64)a3 >> 16;
  v16 = a4;
  v17 = 5LL;
  v18 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v15 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v18, (a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v15 + 1) >= 4u )
  {
    if ( a10 )
    {
      v22 = -1LL;
      do
        ++v22;
      while ( a10[v22] );
      v23 = v22 + 1;
    }
    else
    {
      v23 = 5LL;
    }
    v24 = a10;
    if ( !a10 )
      v24 = "NULL";
    if ( a9 )
    {
      v25 = -1LL;
      do
        ++v25;
      while ( a9[v25] );
      v26 = v25 + 1;
    }
    else
    {
      v26 = 5LL;
    }
    v27 = a9;
    if ( !a9 )
      v27 = "NULL";
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, char *, __int64, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v15),
      43LL,
      a5,
      v16,
      &a6,
      8LL,
      &a7,
      4LL,
      &a8,
      8LL,
      v27,
      v26,
      v24,
      v23,
      0LL);
  }
  if ( v10 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( v10[v19] );
  }
  if ( !v10 )
    v10 = "NULL";
  v20 = v12 == 0LL;
  if ( v12 )
  {
    do
      ++v14;
    while ( v12[v14] );
    v17 = v14 + 1;
    v20 = v12 == 0LL;
  }
  if ( v20 )
    v12 = "NULL";
  LOWORD(v28) = v16;
  return WppAutoLogTrace(a1, 4LL, a3, a5, v28, &a6, 8LL, &a7, 4LL, &a8, 8LL, v12, v17, v10);
}
