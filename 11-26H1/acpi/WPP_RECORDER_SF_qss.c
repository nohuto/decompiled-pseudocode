/*
 * XREFs of WPP_RECORDER_SF_qss @ 0x14003C56C
 * Callers:
 *     ACPIFanFSTCallback @ 0x140016F90 (ACPIFanFSTCallback.c)
 *     ACPIDeviceInternalSynchronizeRequest @ 0x14001C9F8 (ACPIDeviceInternalSynchronizeRequest.c)
 *     OSNotifyDeviceWake @ 0x14001EBC8 (OSNotifyDeviceWake.c)
 *     ACPIBuildProcessRunMethodPhaseRunMethod @ 0x140027900 (ACPIBuildProcessRunMethodPhaseRunMethod.c)
 *     ACPIBuildProcessRunMethodPhaseCheckSta @ 0x140029650 (ACPIBuildProcessRunMethodPhaseCheckSta.c)
 *     ACPIBuildProcessDevicePhaseEjd @ 0x140034B80 (ACPIBuildProcessDevicePhaseEjd.c)
 *     ACPIFilterFastIoDetachCallback @ 0x14003BCD0 (ACPIFilterFastIoDetachCallback.c)
 *     ACPIInitStartDevice @ 0x1400420EC (ACPIInitStartDevice.c)
 *     ACPIBusAndFilterIrpQueryRemovalRelations @ 0x140046848 (ACPIBusAndFilterIrpQueryRemovalRelations.c)
 *     ACPICMButtonStartWorker @ 0x14005BE90 (ACPICMButtonStartWorker.c)
 *     ACPIQueryGedDeviceInterface @ 0x140062040 (ACPIQueryGedDeviceInterface.c)
 *     ACPIInternalEvaluateOST @ 0x1400621FC (ACPIInternalEvaluateOST.c)
 *     PcisuppReleasePciInterfaces @ 0x1400BC658 (PcisuppReleasePciInterfaces.c)
 *     ACPIDevicePowerDetermineSupportedDeviceStates @ 0x1400CDEFC (ACPIDevicePowerDetermineSupportedDeviceStates.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qss(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        const char *a7,
        const char *a8)
{
  __int64 v8; // rdi
  const char *v9; // rsi
  unsigned __int64 v11; // r14
  __int64 v12; // rbp
  unsigned int v13; // r12d
  const char *v14; // rbx
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rax
  bool v18; // zf
  __int64 v20; // rax
  __int64 v21; // r9
  const char *v22; // r8
  __int64 v23; // rax
  __int64 v24; // rdx
  const char *v25; // rcx
  int v26; // [rsp+20h] [rbp-78h]
  __int64 v27; // [rsp+60h] [rbp-38h]
  __int64 v28; // [rsp+68h] [rbp-30h]
  __int64 v29; // [rsp+A0h] [rbp+8h]
  unsigned __int16 v30; // [rsp+B8h] [rbp+20h]

  v30 = a4;
  v29 = a1;
  v8 = -1LL;
  v9 = a7;
  v11 = (unsigned __int64)a3 >> 16;
  v12 = 5LL;
  v13 = a2;
  v14 = a8;
  v15 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v11 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v15, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v11 + 1) >= a2 )
  {
    if ( a8 )
    {
      v20 = -1LL;
      do
        ++v20;
      while ( a8[v20] );
      v21 = v20 + 1;
    }
    else
    {
      v21 = 5LL;
    }
    v22 = a8;
    if ( !a8 )
      v22 = "NULL";
    if ( a7 )
    {
      v23 = -1LL;
      do
        ++v23;
      while ( a7[v23] );
      v24 = v23 + 1;
    }
    else
    {
      v24 = 5LL;
    }
    v25 = a7;
    if ( !a7 )
      v25 = "NULL";
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v11),
      43LL,
      a5,
      v30,
      &a6,
      8LL,
      v25,
      v24,
      v22,
      v21,
      0LL);
    a4 = v30;
    a1 = v29;
  }
  if ( v14 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( v14[v16] );
    v17 = v16 + 1;
  }
  else
  {
    v17 = 5LL;
  }
  if ( !v14 )
    v14 = "NULL";
  v18 = v9 == 0LL;
  if ( v9 )
  {
    do
      ++v8;
    while ( v9[v8] );
    v12 = v8 + 1;
    v18 = v9 == 0LL;
  }
  if ( v18 )
    v9 = "NULL";
  LOWORD(v26) = a4;
  return WppAutoLogTrace(a1, v13, a3, a5, v26, &a6, 8LL, v9, v12, v14, v17, 0LL, v27, v28);
}
