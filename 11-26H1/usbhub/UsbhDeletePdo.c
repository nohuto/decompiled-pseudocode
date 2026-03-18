/*
 * XREFs of UsbhDeletePdo @ 0x140007770
 * Callers:
 *     UsbhWcCancelEnumeration @ 0x1400212B0 (UsbhWcCancelEnumeration.c)
 *     UsbhRequestPortSuspend @ 0x140021600 (UsbhRequestPortSuspend.c)
 *     Usbh_Disconnect_PdoEvent @ 0x14002350C (Usbh_Disconnect_PdoEvent.c)
 *     Usbh_ErrorDisconnect_PdoEvent @ 0x140036870 (Usbh_ErrorDisconnect_PdoEvent.c)
 *     Usbh_BusPnpStop_PdoEvent @ 0x1400386BC (Usbh_BusPnpStop_PdoEvent.c)
 *     Usbh_BusPause_PdoEvent @ 0x140048CD4 (Usbh_BusPause_PdoEvent.c)
 *     Usbh_BusPnpFreeResources_PdoEvent @ 0x140048E68 (Usbh_BusPnpFreeResources_PdoEvent.c)
 *     Usbh_BusRemove_PdoEvent @ 0x140049018 (Usbh_BusRemove_PdoEvent.c)
 *     Usbh_PdoRemove_PdoEvent @ 0x1400493F8 (Usbh_PdoRemove_PdoEvent.c)
 * Callees:
 *     UsbhDisableTimerObject @ 0x140007330 (UsbhDisableTimerObject.c)
 *     UsbhDecPdoIoCount @ 0x140007EA0 (UsbhDecPdoIoCount.c)
 *     UsbhRemoveAndDeletePdo @ 0x14000803C (UsbhRemoveAndDeletePdo.c)
 *     UsbhUnlinkPdoDeviceHandle @ 0x1400081E4 (UsbhUnlinkPdoDeviceHandle.c)
 *     UsbhSshSetPortsBusyState @ 0x140008460 (UsbhSshSetPortsBusyState.c)
 *     UsbhDisconnectPdoFromHub @ 0x140008740 (UsbhDisconnectPdoFromHub.c)
 *     UsbhResetPortData @ 0x1400087E4 (UsbhResetPortData.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhDecHubBusy @ 0x14001C060 (UsbhDecHubBusy.c)
 *     UsbhEtwLogDeviceInformation @ 0x1400334AC (UsbhEtwLogDeviceInformation.c)
 *     UsbhDeleteOrphanPdo @ 0x14003A118 (UsbhDeleteOrphanPdo.c)
 *     WPP_RECORDER_SF_q @ 0x14003E898 (WPP_RECORDER_SF_q.c)
 *     UsbhBillboardCleanup @ 0x14005C76C (UsbhBillboardCleanup.c)
 */

void __fastcall UsbhDeletePdo(__int64 a1, __int64 a2, int a3, int a4, __int64 a5)
{
  struct _DEVICE_OBJECT *v5; // rsi
  __int64 v8; // r12
  char v9; // r13
  __int64 v10; // rcx
  signed __int32 v11; // eax
  unsigned int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rbx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r14
  _QWORD *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r9
  void *v26; // rcx
  void *v27; // rcx
  void *v28; // rcx
  void *v29; // rcx
  void *v30; // rcx
  void *v31; // rcx
  void *v32; // rcx
  void *v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  signed __int32 v36; // eax
  unsigned int v37; // edx
  __int64 v38; // rcx
  __int64 v39; // r8
  _QWORD *v40; // rdx

  v5 = (struct _DEVICE_OBJECT *)a2;
  v8 = 0LL;
  v9 = 0;
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    if ( a1 )
    {
      v10 = *(_QWORD *)(a1 + 64);
      if ( v10 )
      {
        v11 = _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 880), 0xFFFFFFFF);
        v12 = *(_DWORD *)(v10 + 884);
        v13 = *(_QWORD *)(v10 + 888);
        a2 = 32LL * ((v11 - 1) & v12);
        *(_DWORD *)(a2 + v13) = 1329877092;
        *(_QWORD *)(a2 + v13 + 8) = 0LL;
        *(_QWORD *)(a2 + v13 + 16) = v5;
        *(_QWORD *)(a2 + v13 + 24) = a3;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      1,
      25,
      (__int64)&WPP_939f5a741f6d330202eecd1a59aa0212_Traceguids,
      (char)v5);
  v15 = PdoExt(v5);
  if ( a1 )
  {
    FdoExt(a1, v14, v16, v17);
    v8 = a5 + 132;
  }
  else
  {
    UsbhDeleteOrphanPdo(v5);
  }
  v18 = a5 + 132;
  if ( a3 == 6 )
  {
    *(_DWORD *)(a5 + 136) = 0;
    qword_140070600 = 0LL;
    *(_DWORD *)(a5 + 88) = 1734964085;
    KeReleaseSpinLock(&HubG, *(_BYTE *)v18);
  }
  else
  {
    if ( a3 != 1 )
      UsbhEtwLogDeviceInformation(v15, &USBHUB_ETW_EVENT_DEVICE_REMOVE, 0LL);
    v19 = (_QWORD *)(v15 + 1320);
    v20 = *(_QWORD *)(v15 + 1320);
    if ( v20 || *(_QWORD *)(v15 + 1328) )
    {
      if ( *(_QWORD **)(v20 + 8) != v19 || (v40 = *(_QWORD **)(v15 + 1328), (_QWORD *)*v40 != v19) )
        __fastfail(3u);
      *v40 = v20;
      v18 = a5 + 132;
      *(_QWORD *)(v20 + 8) = v40;
      *v19 = 0LL;
      *(_QWORD *)(v15 + 1328) = 0LL;
    }
    if ( (*(_DWORD *)(v15 + 1424) & 8) != 0 )
    {
      UsbhResetPortData(a1, v5, v8);
      v9 = 1;
    }
    v21 = PdoExt(v5);
    v22 = ((unsigned __int8)*(_DWORD *)(v21 + 4) + 1) & 7;
    *(_DWORD *)(v21 + 4) = v22;
    v22 *= 32LL;
    *(_DWORD *)(v22 + v21 + 16) = a4;
    *(_DWORD *)(v22 + v21 + 20) = *(_DWORD *)(v21 + 1124);
    *(_DWORD *)(v22 + v21 + 24) = 6;
    *(_DWORD *)(v21 + 1124) = 6;
    *(_DWORD *)(v18 + 4) = 0;
    qword_140070600 = 0LL;
    LOBYTE(v22) = *(_BYTE *)v18;
    *(_DWORD *)(a5 + 88) = 1734964085;
    KeReleaseSpinLock(&HubG, v22);
    if ( v9 )
      UsbhSshSetPortsBusyState(a1, *(unsigned __int16 *)(v15 + 1428), 1LL);
    if ( a1 )
      UsbhDisableTimerObject(a1, v15 + 1704, v23, v24);
    KeWaitForSingleObject((PVOID)(v15 + 1296), Executive, 0, 0, 0LL);
    if ( *(_QWORD *)(v15 + 2408) )
      UsbhBillboardCleanup(v5);
    v26 = *(void **)(v15 + 1136);
    if ( v26 )
    {
      ExFreePoolWithTag(v26, 0);
      *(_QWORD *)(v15 + 1136) = 0LL;
    }
    v27 = *(void **)(v15 + 1144);
    if ( v27 )
    {
      ExFreePoolWithTag(v27, 0);
      *(_QWORD *)(v15 + 1144) = 0LL;
    }
    v28 = *(void **)(v15 + 2240);
    if ( v28 )
    {
      ExFreePoolWithTag(v28, 0);
      *(_QWORD *)(v15 + 2240) = 0LL;
    }
    v29 = *(void **)(v15 + 2840);
    if ( v29 )
    {
      ExFreePoolWithTag(v29, 0);
      *(_QWORD *)(v15 + 2840) = 0LL;
    }
    v30 = *(void **)(v15 + 2392);
    if ( v30 )
    {
      ExFreePoolWithTag(v30, 0);
      *(_QWORD *)(v15 + 2392) = 0LL;
    }
    v31 = *(void **)(v15 + 2400);
    if ( v31 )
    {
      ExFreePoolWithTag(v31, 0);
      *(_QWORD *)(v15 + 2400) = 0LL;
    }
    v32 = *(void **)(v15 + 2528);
    if ( v32 )
    {
      ExFreePoolWithTag(v32, 0);
      *(_QWORD *)(v15 + 2528) = 0LL;
    }
    v33 = *(void **)(v15 + 848);
    if ( v33 )
    {
      ExFreePoolWithTag(v33, 0);
      *(_QWORD *)(v15 + 848) = 0LL;
    }
    LOBYTE(v25) = 1;
    UsbhUnlinkPdoDeviceHandle(a1, v5, 2017740855LL, v25);
    if ( (UsbhLogMask & 0x100) != 0 )
    {
      if ( a1 )
      {
        v35 = *(_QWORD *)(a1 + 64);
        if ( v35 )
        {
          v36 = _InterlockedExchangeAdd((volatile signed __int32 *)(v35 + 880), 0xFFFFFFFF);
          v37 = *(_DWORD *)(v35 + 884);
          v38 = *(_QWORD *)(v35 + 888);
          v34 = 32LL * ((v36 - 1) & v37);
          *(_DWORD *)(v34 + v38) = 826558564;
          *(_QWORD *)(v34 + v38 + 8) = 0LL;
          *(_QWORD *)(v34 + v38 + 16) = v5;
          *(_QWORD *)(v34 + v38 + 24) = 0LL;
        }
      }
    }
    if ( (*(_DWORD *)(v15 + 1424) & 1) != 0 )
    {
      UsbhDecPdoIoCount((ULONG_PTR)v5, (ULONG_PTR)v5);
      KeWaitForSingleObject((PVOID)(v15 + 1240), Executive, 0, 0, 0LL);
    }
    v39 = *(_QWORD *)(v15 + 856);
    if ( v39 )
    {
      UsbhDecHubBusy(a1, v34, v39);
      *(_QWORD *)(v15 + 856) = 0LL;
    }
    if ( (*(_DWORD *)(v15 + 1424) & 2) != 0 )
      UsbhDisconnectPdoFromHub(v5);
    *(_DWORD *)(v15 + 1424) = 16;
    UsbhRemoveAndDeletePdo(v5);
  }
}
