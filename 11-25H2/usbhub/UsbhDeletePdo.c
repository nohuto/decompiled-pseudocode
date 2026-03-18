/*
 * XREFs of UsbhDeletePdo @ 0x14000E690
 * Callers:
 *     Usbh_BusPnpStop_PdoEvent @ 0x1400011A4 (Usbh_BusPnpStop_PdoEvent.c)
 *     Usbh_Disconnect_PdoEvent @ 0x140010548 (Usbh_Disconnect_PdoEvent.c)
 *     UsbhRequestPortSuspend @ 0x14001C704 (UsbhRequestPortSuspend.c)
 *     Usbh_ErrorDisconnect_PdoEvent @ 0x14002E37C (Usbh_ErrorDisconnect_PdoEvent.c)
 *     UsbhWcCancelEnumeration @ 0x140036D5C (UsbhWcCancelEnumeration.c)
 *     Usbh_BusPause_PdoEvent @ 0x140049174 (Usbh_BusPause_PdoEvent.c)
 *     Usbh_BusPnpFreeResources_PdoEvent @ 0x140049308 (Usbh_BusPnpFreeResources_PdoEvent.c)
 *     Usbh_BusRemove_PdoEvent @ 0x1400494A8 (Usbh_BusRemove_PdoEvent.c)
 *     Usbh_PdoRemove_PdoEvent @ 0x14004986C (Usbh_PdoRemove_PdoEvent.c)
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhDecHubBusy @ 0x14000A860 (UsbhDecHubBusy.c)
 *     UsbhDisableTimerObject @ 0x14000C938 (UsbhDisableTimerObject.c)
 *     UsbhDecPdoIoCount @ 0x14000F830 (UsbhDecPdoIoCount.c)
 *     UsbhRemoveAndDeletePdo @ 0x14000F9CC (UsbhRemoveAndDeletePdo.c)
 *     UsbhUnlinkPdoDeviceHandle @ 0x14000FB30 (UsbhUnlinkPdoDeviceHandle.c)
 *     UsbhSshSetPortsBusyState @ 0x14000FDA0 (UsbhSshSetPortsBusyState.c)
 *     UsbhDisconnectPdoFromHub @ 0x140010078 (UsbhDisconnectPdoFromHub.c)
 *     UsbhResetPortData @ 0x140010110 (UsbhResetPortData.c)
 *     UsbhEtwLogDeviceInformation @ 0x14002D914 (UsbhEtwLogDeviceInformation.c)
 *     UsbhDeleteOrphanPdo @ 0x14003A6DC (UsbhDeleteOrphanPdo.c)
 *     WPP_RECORDER_SF_q @ 0x14003EDC0 (WPP_RECORDER_SF_q.c)
 *     UsbhBillboardCleanup @ 0x14005C19C (UsbhBillboardCleanup.c)
 */

void __fastcall UsbhDeletePdo(__int64 a1, __int64 a2, int a3, int a4, __int64 a5)
{
  struct _DEVICE_OBJECT *v5; // rsi
  __int64 v8; // r12
  char v9; // r13
  __int64 v10; // rcx
  _DWORD *v11; // rbx
  __int64 v12; // r14
  _QWORD *v13; // rax
  __int64 v14; // rcx
  _DWORD *v15; // rax
  __int64 v16; // r8
  KIRQL v17; // dl
  __int64 v18; // r9
  void *v19; // rcx
  void *v20; // rcx
  void *v21; // rcx
  void *v22; // rcx
  void *v23; // rcx
  void *v24; // rcx
  void *v25; // rcx
  void *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  _QWORD *v29; // r8
  _QWORD *v30; // rdx

  v5 = (struct _DEVICE_OBJECT *)a2;
  v8 = 0LL;
  v9 = 0;
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    if ( a1 )
    {
      a2 = *(_QWORD *)(a1 + 64);
      if ( a2 )
      {
        v10 = *(_QWORD *)(a2 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(a2 + 880)) & *(_DWORD *)(a2 + 884));
        *(_DWORD *)v10 = 1329877092;
        *(_QWORD *)(v10 + 8) = 0LL;
        *(_QWORD *)(v10 + 16) = v5;
        *(_QWORD *)(v10 + 24) = a3;
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
  v11 = PdoExt((__int64)v5);
  if ( a1 )
  {
    FdoExt(a1);
    v8 = a5 + 132;
  }
  else
  {
    UsbhDeleteOrphanPdo(v5);
  }
  v12 = a5 + 132;
  if ( a3 == 6 )
  {
    *(_DWORD *)(a5 + 136) = 0;
    qword_14006F5A0 = 0LL;
    *(_DWORD *)(a5 + 88) = 1734964085;
    KeReleaseSpinLock(&HubG, *(_BYTE *)v12);
  }
  else
  {
    if ( a3 != 1 )
      UsbhEtwLogDeviceInformation(v11, &USBHUB_ETW_EVENT_DEVICE_REMOVE, 0LL);
    v13 = v11 + 330;
    v14 = *((_QWORD *)v11 + 165);
    if ( v14 || *((_QWORD *)v11 + 166) )
    {
      if ( *(_QWORD **)(v14 + 8) != v13 || (v30 = (_QWORD *)*((_QWORD *)v11 + 166), (_QWORD *)*v30 != v13) )
        __fastfail(3u);
      *v30 = v14;
      v12 = a5 + 132;
      *(_QWORD *)(v14 + 8) = v30;
      *v13 = 0LL;
      *((_QWORD *)v11 + 166) = 0LL;
    }
    if ( (v11[356] & 8) != 0 )
    {
      UsbhResetPortData(a1, v5, v8);
      v9 = 1;
    }
    v15 = PdoExt((__int64)v5);
    v16 = ((unsigned __int8)v15[1] + 1) & 7;
    v15[1] = v16;
    v16 *= 32LL;
    *(_DWORD *)((char *)v15 + v16 + 16) = a4;
    *(_DWORD *)((char *)v15 + v16 + 20) = v15[281];
    *(_DWORD *)((char *)v15 + v16 + 24) = 6;
    v15[281] = 6;
    *(_DWORD *)(v12 + 4) = 0;
    qword_14006F5A0 = 0LL;
    v17 = *(_BYTE *)v12;
    *(_DWORD *)(a5 + 88) = 1734964085;
    KeReleaseSpinLock(&HubG, v17);
    if ( v9 )
      UsbhSshSetPortsBusyState(a1, *((unsigned __int16 *)v11 + 714), 1LL);
    if ( a1 )
      UsbhDisableTimerObject(a1, (__int64)(v11 + 426));
    KeWaitForSingleObject(v11 + 324, Executive, 0, 0, 0LL);
    if ( *((_QWORD *)v11 + 301) )
      UsbhBillboardCleanup(v5);
    v19 = (void *)*((_QWORD *)v11 + 142);
    if ( v19 )
    {
      ExFreePoolWithTag(v19, 0);
      *((_QWORD *)v11 + 142) = 0LL;
    }
    v20 = (void *)*((_QWORD *)v11 + 143);
    if ( v20 )
    {
      ExFreePoolWithTag(v20, 0);
      *((_QWORD *)v11 + 143) = 0LL;
    }
    v21 = (void *)*((_QWORD *)v11 + 280);
    if ( v21 )
    {
      ExFreePoolWithTag(v21, 0);
      *((_QWORD *)v11 + 280) = 0LL;
    }
    v22 = (void *)*((_QWORD *)v11 + 355);
    if ( v22 )
    {
      ExFreePoolWithTag(v22, 0);
      *((_QWORD *)v11 + 355) = 0LL;
    }
    v23 = (void *)*((_QWORD *)v11 + 299);
    if ( v23 )
    {
      ExFreePoolWithTag(v23, 0);
      *((_QWORD *)v11 + 299) = 0LL;
    }
    v24 = (void *)*((_QWORD *)v11 + 300);
    if ( v24 )
    {
      ExFreePoolWithTag(v24, 0);
      *((_QWORD *)v11 + 300) = 0LL;
    }
    v25 = (void *)*((_QWORD *)v11 + 316);
    if ( v25 )
    {
      ExFreePoolWithTag(v25, 0);
      *((_QWORD *)v11 + 316) = 0LL;
    }
    v26 = (void *)*((_QWORD *)v11 + 106);
    if ( v26 )
    {
      ExFreePoolWithTag(v26, 0);
      *((_QWORD *)v11 + 106) = 0LL;
    }
    LOBYTE(v18) = 1;
    UsbhUnlinkPdoDeviceHandle(a1, v5, 2017740855LL, v18);
    if ( (UsbhLogMask & 0x100) != 0 )
    {
      if ( a1 )
      {
        v27 = *(_QWORD *)(a1 + 64);
        if ( v27 )
        {
          v28 = *(_QWORD *)(v27 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v27 + 880)) & *(_DWORD *)(v27 + 884));
          *(_DWORD *)v28 = 826558564;
          *(_QWORD *)(v28 + 8) = 0LL;
          *(_QWORD *)(v28 + 16) = v5;
          *(_QWORD *)(v28 + 24) = 0LL;
        }
      }
    }
    if ( (v11[356] & 1) != 0 )
    {
      UsbhDecPdoIoCount((ULONG_PTR)v5, (ULONG_PTR)v5);
      KeWaitForSingleObject(v11 + 310, Executive, 0, 0, 0LL);
    }
    v29 = (_QWORD *)*((_QWORD *)v11 + 107);
    if ( v29 )
    {
      UsbhDecHubBusy(a1, v27, v29);
      *((_QWORD *)v11 + 107) = 0LL;
    }
    if ( (v11[356] & 2) != 0 )
      UsbhDisconnectPdoFromHub(v5);
    v11[356] = 16;
    UsbhRemoveAndDeletePdo(v5);
  }
}
