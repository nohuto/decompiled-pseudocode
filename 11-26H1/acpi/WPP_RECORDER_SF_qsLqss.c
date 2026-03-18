/*
 * XREFs of WPP_RECORDER_SF_qsLqss @ 0x140031590
 * Callers:
 *     ACPIBusIrpUnhandled @ 0x1400311D0 (ACPIBusIrpUnhandled.c)
 *     ACPIFilterIrpDeviceUsageNotificationCompletion @ 0x1400312D0 (ACPIFilterIrpDeviceUsageNotificationCompletion.c)
 *     ACPIRootIrpCompleteRoutine @ 0x140031480 (ACPIRootIrpCompleteRoutine.c)
 *     ACPIFilterIrpRemoveDevice @ 0x14003BD90 (ACPIFilterIrpRemoveDevice.c)
 *     ACPIDockIrpRemoveDevice @ 0x140056DB0 (ACPIDockIrpRemoveDevice.c)
 *     ACPIBusIrpRemoveDevice @ 0x14005ADC0 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpStartDeviceCompletion @ 0x14005B1A0 (ACPIBusIrpStartDeviceCompletion.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x14005B380 (ACPIBusIrpSurpriseRemoval.c)
 *     ACPICMButtonStartCompletion @ 0x14005BD30 (ACPICMButtonStartCompletion.c)
 *     ACPICMButtonStartWorker @ 0x14005BE90 (ACPICMButtonStartWorker.c)
 *     ACPIEcStartDeviceCompletion @ 0x14005FF80 (ACPIEcStartDeviceCompletion.c)
 *     ACPIEcStartDeviceWorker @ 0x1400600F0 (ACPIEcStartDeviceWorker.c)
 *     ACPIFilterIrpStopDeviceCompletion @ 0x140060F80 (ACPIFilterIrpStopDeviceCompletion.c)
 *     ACPIProcessorContainerStartDeviceCompletion @ 0x140067CF0 (ACPIProcessorContainerStartDeviceCompletion.c)
 *     ACPIProcessorContainerStartDeviceWorker @ 0x140067E50 (ACPIProcessorContainerStartDeviceWorker.c)
 *     ACPIRootIrpRemoveDevice @ 0x140068DC0 (ACPIRootIrpRemoveDevice.c)
 *     ACPIFanStartDevice @ 0x1400A89C0 (ACPIFanStartDevice.c)
 *     ACPIBusAndFilterIrpEject @ 0x1400A8F30 (ACPIBusAndFilterIrpEject.c)
 *     ACPIDockIrpQueryCapabilities @ 0x1400AB740 (ACPIDockIrpQueryCapabilities.c)
 *     ACPIDockIrpQueryDeviceRelations @ 0x1400AB9F0 (ACPIDockIrpQueryDeviceRelations.c)
 *     ACPIDockIrpQueryInterface @ 0x1400AC120 (ACPIDockIrpQueryInterface.c)
 *     ACPIDockIrpQueryPnpDeviceState @ 0x1400AC2F0 (ACPIDockIrpQueryPnpDeviceState.c)
 *     ACPIBusAndFilterIrpSetLock @ 0x1400AD8A0 (ACPIBusAndFilterIrpSetLock.c)
 *     ACPIBusIrpCancelRemoveOrStopDevice @ 0x1400AD970 (ACPIBusIrpCancelRemoveOrStopDevice.c)
 *     ACPIBusIrpQueryRemoveOrStopDevice @ 0x1400ADC00 (ACPIBusIrpQueryRemoveOrStopDevice.c)
 *     ACPIBusIrpStartDeviceWorker @ 0x1400AE0C0 (ACPIBusIrpStartDeviceWorker.c)
 *     ACPIBusIrpStopDevice @ 0x1400AE270 (ACPIBusIrpStopDevice.c)
 *     ACPIFilterIrpQueryIdCompletion @ 0x1400B0E60 (ACPIFilterIrpQueryIdCompletion.c)
 *     ACPIFilterIrpStopDevice @ 0x1400B1360 (ACPIFilterIrpStopDevice.c)
 *     ACPIRootIrpCancelRemoveOrStopDevice @ 0x1400B9F20 (ACPIRootIrpCancelRemoveOrStopDevice.c)
 *     ACPIRootIrpQueryCapabilities @ 0x1400BA050 (ACPIRootIrpQueryCapabilities.c)
 *     ACPIRootIrpStopDevice @ 0x1400BA2E0 (ACPIRootIrpStopDevice.c)
 *     ACPIBusIrpDeviceEnumerated @ 0x1400C0080 (ACPIBusIrpDeviceEnumerated.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1400C0E70 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPIBusIrpDeviceUsageNotification @ 0x1400C1F40 (ACPIBusIrpDeviceUsageNotification.c)
 *     ACPIFilterIrpQueryDeviceRelations @ 0x1400C58A0 (ACPIFilterIrpQueryDeviceRelations.c)
 *     ACPIRootIrpQueryBusRelations @ 0x1400C5BD8 (ACPIRootIrpQueryBusRelations.c)
 *     ACPIInternalDeviceQueryDeviceRelations @ 0x1400C61D0 (ACPIInternalDeviceQueryDeviceRelations.c)
 *     ACPIBusIrpQueryDeviceRelations @ 0x1400C63C0 (ACPIBusIrpQueryDeviceRelations.c)
 *     ACPIBusIrpQueryResources @ 0x1400C94D0 (ACPIBusIrpQueryResources.c)
 *     ACPIBusIrpQueryResourceRequirements @ 0x1400C9940 (ACPIBusIrpQueryResourceRequirements.c)
 *     ACPIFilterIrpFilterResourceRequirements @ 0x1400C9E20 (ACPIFilterIrpFilterResourceRequirements.c)
 *     ACPIBusAndFilterIrpQueryPnpDeviceState @ 0x1400CA9C0 (ACPIBusAndFilterIrpQueryPnpDeviceState.c)
 *     ACPIRootIrpQueryInterface @ 0x1400CC6A0 (ACPIRootIrpQueryInterface.c)
 *     ACPIFilterIrpStartDeviceWorker @ 0x1400CCC00 (ACPIFilterIrpStartDeviceWorker.c)
 *     ACPIRootIrpQueryDeviceRelations @ 0x1400CDB30 (ACPIRootIrpQueryDeviceRelations.c)
 *     ACPIFilterIrpStartDevice @ 0x1400CFC00 (ACPIFilterIrpStartDevice.c)
 *     ACPIFilterIrpDeviceEnumeratedCompletion @ 0x1400D01C0 (ACPIFilterIrpDeviceEnumeratedCompletion.c)
 *     ACPIFilterIrpDeviceUsageNotification @ 0x1400D1390 (ACPIFilterIrpDeviceUsageNotification.c)
 *     ACPIRootIrpQueryRemoveOrStopDevice @ 0x1400D1D20 (ACPIRootIrpQueryRemoveOrStopDevice.c)
 *     ACPIRootIrpStartDevice @ 0x1400DBD50 (ACPIRootIrpStartDevice.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qsLqss(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        const char *a7,
        char a8,
        char a9,
        const char *a10,
        const char *a11)
{
  __int64 v11; // r15
  __int64 v12; // rdi
  const char *v13; // rsi
  const char *v14; // rbp
  unsigned __int64 v16; // r14
  unsigned int v17; // r12d
  __int64 v18; // rbx
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rax
  bool v22; // zf
  char *v24; // r14
  __int64 v25; // rax
  __int64 v26; // r11
  const char *v27; // r9
  __int64 v28; // rax
  __int64 v29; // r10
  const char *v30; // r8
  __int64 v31; // rax
  __int64 v32; // rcx
  const char *v33; // rdx
  int v34; // [rsp+20h] [rbp-A8h]
  unsigned __int16 v36; // [rsp+E8h] [rbp+20h]

  v36 = a4;
  v11 = 5LL;
  v12 = (__int64)a11;
  v13 = a10;
  v14 = a7;
  v16 = (unsigned __int64)a3 >> 16;
  v17 = a2;
  v18 = -1LL;
  v19 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v16 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v19, ((_BYTE)a3 - 1) & 0x1F) )
  {
    v24 = (char *)WPP_GLOBAL_Control + 80 * v16;
    if ( (unsigned __int8)v24[41] >= a2 )
    {
      if ( a11 )
      {
        v25 = -1LL;
        do
          v22 = a11[++v25] == 0;
        while ( !v22 );
        v26 = v25 + 1;
      }
      else
      {
        v26 = 5LL;
      }
      v27 = a11;
      if ( !a11 )
        v27 = "NULL";
      if ( a10 )
      {
        v28 = -1LL;
        do
          v22 = a10[++v28] == 0;
        while ( !v22 );
        v29 = v28 + 1;
      }
      else
      {
        v29 = 5LL;
      }
      v30 = a10;
      if ( !a10 )
        v30 = "NULL";
      if ( a7 )
      {
        v31 = -1LL;
        do
          v22 = a7[++v31] == 0;
        while ( !v22 );
        v32 = v31 + 1;
      }
      else
      {
        v32 = 5LL;
      }
      v33 = a7;
      if ( !a7 )
        v33 = "NULL";
      ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, char *, __int64, const char *, __int64, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
        *((_QWORD *)v24 + 3),
        43LL,
        a5,
        v36,
        &a6,
        8LL,
        v33,
        v32,
        &a8,
        4LL,
        &a9,
        8LL,
        v30,
        v29,
        v27,
        v26,
        0LL);
      a4 = v36;
    }
  }
  if ( v12 )
  {
    v20 = -1LL;
    do
      v22 = *(_BYTE *)(v12 + v20++ + 1) == 0;
    while ( !v22 );
  }
  if ( v13 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( v13[v21] );
  }
  if ( !v13 )
    v13 = "NULL";
  v22 = v14 == 0LL;
  if ( v14 )
  {
    do
      v22 = v14[++v18] == 0;
    while ( !v22 );
    v11 = v18 + 1;
    v22 = v14 == 0LL;
  }
  if ( v22 )
    v14 = "NULL";
  LOWORD(v34) = a4;
  return WppAutoLogTrace(a1, v17, a3, a5, v34, &a6, 8LL, v14, v11, &a8, 4LL, &a9, 8LL, v13);
}
