/*
 * XREFs of ACPIInitStopDevice @ 0x1400C7F58
 * Callers:
 *     ACPIFilterRemoveNonPresentDevices @ 0x14001C520 (ACPIFilterRemoveNonPresentDevices.c)
 *     ACPIFilterIrpRemoveDevice @ 0x14003BD90 (ACPIFilterIrpRemoveDevice.c)
 *     ACPIBusIrpRemoveDevice @ 0x14005ADC0 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x14005B380 (ACPIBusIrpSurpriseRemoval.c)
 *     ACPIFilterIrpStopDeviceCompletion @ 0x140060F80 (ACPIFilterIrpStopDeviceCompletion.c)
 *     ACPIBusIrpStopDevice @ 0x1400AE270 (ACPIBusIrpStopDevice.c)
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x14000EC04 (AMLIEvalNameSpaceObject.c)
 *     AMLIDereferenceHandleEx @ 0x14002217C (AMLIDereferenceHandleEx.c)
 *     ACPIGet @ 0x1400235A0 (ACPIGet.c)
 *     AMLIGetNamedChild @ 0x140025CA0 (AMLIGetNamedChild.c)
 *     WPP_RECORDER_SF_Lqss @ 0x140034360 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIInternalClearFlags @ 0x1400398B4 (ACPIInternalClearFlags.c)
 *     ACPIDeviceInternalDeviceRequest @ 0x140042918 (ACPIDeviceInternalDeviceRequest.c)
 *     IsNsobjPciBus @ 0x1400C83A4 (IsNsobjPciBus.c)
 */

__int64 __fastcall ACPIInitStopDevice(__int64 a1, char a2)
{
  __int64 *v2; // rsi
  char *v3; // rbx
  int v6; // eax
  __int64 *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 *v10; // rax
  __int64 v11; // rsi
  int v12; // ebx
  int v13; // r10d
  __int64 v14; // r9
  const char *v15; // rcx
  const char *v16; // r8
  __int64 v17; // r9
  const char *v18; // rcx
  const char *v19; // r10
  void *v20; // rcx
  void *v21; // rcx
  struct _KEVENT Event; // [rsp+50h] [rbp-28h] BYREF
  __int64 v24; // [rsp+80h] [rbp+8h] BYREF

  v2 = *(__int64 **)(a1 + 760);
  v3 = (char *)(a1 + 1008);
  v24 = 0LL;
  if ( (*(_DWORD *)(a1 + 1008) & 0x40000) == 0 && !(unsigned __int8)IsNsobjPciBus(v2) )
  {
    v6 = *(_DWORD *)(a1 + 384);
    if ( v6 )
    {
      if ( v6 != 4 || a2 && *v3 < 0 )
      {
        memset(&Event, 0, sizeof(Event));
        KeInitializeEvent(&Event, SynchronizationEvent, 0);
        if ( (unsigned int)ACPIDeviceInternalDeviceRequest(
                             (_QWORD *)a1,
                             4LL,
                             (void (__fastcall *)(__int64, __int64, __int64))ACPIInitPowerRequestCompletion,
                             (__int64)&Event,
                             a2 != 0 ? 8 : 0) == 259 )
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      }
    }
  }
  if ( _bittest64((const signed __int64 *)(a1 + 8), 0x25u) && *(_BYTE *)(a1 + 184) )
  {
    v7 = (__int64 *)(a1 + 192);
    v8 = 3LL;
    do
    {
      v9 = *v7++;
      *(_BYTE *)(v9 + 130) = 0;
      --v8;
    }
    while ( v8 );
  }
  ACPIInternalClearFlags(v3, 1LL);
  if ( v2 )
  {
    if ( (*(_DWORD *)v3 & 0x40100) == 0 )
    {
      v10 = AMLIGetNamedChild(v2, 1397310559);
      v11 = (__int64)v10;
      if ( v10 )
      {
        v12 = AMLIEvalNameSpaceObject(v10, 0LL, 0, 0LL);
        AMLIDereferenceHandleEx(v11);
        if ( v12 >= 0 )
        {
          v13 = ACPIGet(a1, 1096045407, -1878783998, 0LL, 0, 0LL, 0LL, (__int64)&v24, 0LL);
          if ( v13 >= 0 )
          {
            if ( (v24 & 2) != 0 )
            {
              v17 = *(_QWORD *)(a1 + 8);
              v18 = byte_140075A82;
              v19 = byte_140075A82;
              if ( (v17 & 0x200000000000LL) != 0 )
              {
                v18 = *(const char **)(a1 + 608);
                if ( (v17 & 0x400000000000LL) != 0 )
                  v19 = *(const char **)(a1 + 616);
              }
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_Lqss(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  2u,
                  1u,
                  0x1Du,
                  (__int64)&WPP_a984ea3e217b3fb5c4c90658d89fa1c5_Traceguids,
                  v24,
                  a1,
                  v18,
                  v19);
            }
          }
          else
          {
            v14 = *(_QWORD *)(a1 + 8);
            v15 = byte_140075A82;
            v16 = byte_140075A82;
            if ( (v14 & 0x200000000000LL) != 0 )
            {
              v15 = *(const char **)(a1 + 608);
              if ( (v14 & 0x400000000000LL) != 0 )
                v16 = *(const char **)(a1 + 616);
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_Lqss(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                4u,
                1u,
                0x1Cu,
                (__int64)&WPP_a984ea3e217b3fb5c4c90658d89fa1c5_Traceguids,
                v13,
                a1,
                v15,
                v16);
          }
        }
      }
    }
  }
  v20 = *(void **)(a1 + 672);
  if ( v20 )
  {
    ExFreePoolWithTag(v20, 0);
    *(_QWORD *)(a1 + 672) = 0LL;
  }
  v21 = *(void **)(a1 + 680);
  if ( v21 )
  {
    ExFreePoolWithTag(v21, 0);
    *(_QWORD *)(a1 + 680) = 0LL;
  }
  return 0LL;
}
