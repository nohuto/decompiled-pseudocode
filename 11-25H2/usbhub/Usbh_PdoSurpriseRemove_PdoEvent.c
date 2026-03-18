/*
 * XREFs of Usbh_PdoSurpriseRemove_PdoEvent @ 0x140049AB8
 * Callers:
 *     UsbhPdoPnp_SurpriseRemoveDevice @ 0x14005D4E0 (UsbhPdoPnp_SurpriseRemoveDevice.c)
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     UsbhIncHubBusy @ 0x140007B90 (UsbhIncHubBusy.c)
 *     UsbhGetPortData @ 0x140008540 (UsbhGetPortData.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhDecHubBusy @ 0x14000A860 (UsbhDecHubBusy.c)
 *     UsbhUnlinkPdoDeviceHandle @ 0x14000FB30 (UsbhUnlinkPdoDeviceHandle.c)
 *     UsbhSyncResumeDeviceInternal @ 0x1400111E0 (UsbhSyncResumeDeviceInternal.c)
 *     UsbhPdoAbortAllDevicePipes @ 0x140017908 (UsbhPdoAbortAllDevicePipes.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     SET_PDO_HWPNPSTATE @ 0x14002DAD4 (SET_PDO_HWPNPSTATE.c)
 *     UsbhAcquirePdoStateLock @ 0x14002E600 (UsbhAcquirePdoStateLock.c)
 *     UsbhAcquireFdoPwrLock @ 0x1400316B0 (UsbhAcquireFdoPwrLock.c)
 *     UsbhReleaseFdoPwrLock @ 0x14003173C (UsbhReleaseFdoPwrLock.c)
 *     UsbhSetPdoPowerState @ 0x140032544 (UsbhSetPdoPowerState.c)
 *     UsbhPCE_SoftDisconnect @ 0x1400446D8 (UsbhPCE_SoftDisconnect.c)
 *     UsbhFindListPdo @ 0x140046EB8 (UsbhFindListPdo.c)
 *     UsbhOnPdoAbsentList @ 0x140047E60 (UsbhOnPdoAbsentList.c)
 *     UsbhOnPdoRemovedList @ 0x140047E9C (UsbhOnPdoRemovedList.c)
 */

void __fastcall Usbh_PdoSurpriseRemove_PdoEvent(__int64 a1, struct _DEVICE_OBJECT *a2, KSPIN_LOCK a3)
{
  _DWORD *v6; // r14
  _DWORD *v7; // rbx
  int v8; // r9d
  int v9; // r12d
  __int64 v10; // rcx
  _DWORD *v11; // rax
  int v12; // ecx
  _QWORD *v13; // r14
  _QWORD *v14; // rcx
  __int64 v15; // rbx
  _DWORD *v16; // rax
  int v17; // edx
  int v18; // r8d
  _QWORD *v19; // rax
  __int64 v20; // rdx
  _QWORD *v21; // rcx
  _QWORD *v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 PortData; // rax
  struct _KEVENT *v26; // rbx

  v6 = PdoExt((__int64)a2);
  v7 = FdoExt(a1);
  Log(a1, 2, 1884509473, 0LL, a3);
  v9 = v8 + 1;
  UsbhAcquirePdoStateLock(v10, a3, v8 + 1);
  v11 = PdoExt((__int64)a2);
  if ( v11[281] != 3 )
  {
    v12 = v11[281] - 3 - v9;
    if ( v12 )
    {
      if ( v12 != v9 )
        goto LABEL_4;
      SET_PDO_HWPNPSTATE((__int64)a2, 5, v9);
      if ( UsbhOnPdoAbsentList(*((_QWORD *)v6 + 148), (__int64)a2) )
        goto LABEL_4;
      v13 = v6 + 330;
      v14 = (_QWORD *)*((_QWORD *)v7 + 606);
      if ( (_DWORD *)*v14 == v7 + 1210 )
      {
        *v13 = v7 + 1210;
        v13[1] = v14;
        *v14 = v13;
        *((_QWORD *)v7 + 606) = v13;
LABEL_4:
        *(_DWORD *)(a3 + 136) = 0;
        qword_14006F5A0 = 0LL;
        *(_DWORD *)(a3 + 88) = 1734964085;
        KeReleaseSpinLock(&HubG, *(_BYTE *)(a3 + 132));
        return;
      }
LABEL_17:
      __fastfail(3u);
    }
    Log(a1, 4, 1936879666, (__int64)a2, 4LL);
    v15 = *((_QWORD *)v6 + 148);
    v16 = FdoExt(v15);
    if ( UsbhFindListPdo(v15, (__int64)a2, (_QWORD *)v16 + 601)
      || UsbhOnPdoRemovedList(*((_QWORD *)v6 + 148), (__int64)a2) )
    {
      if ( UsbhOnPdoRemovedList(*((_QWORD *)v6 + 148), (__int64)a2) )
      {
        v17 = 4;
        v18 = 18;
LABEL_16:
        SET_PDO_HWPNPSTATE((__int64)a2, v17, v18);
        *(_DWORD *)(a3 + 136) = 0;
        qword_14006F5A0 = 0LL;
        *(_DWORD *)(a3 + 88) = 1734964085;
        KeReleaseSpinLock(&HubG, *(_BYTE *)(a3 + 132));
        UsbhUnlinkPdoDeviceHandle(a1, (__int64)a2, 2017740850, v9);
        Log(a1, 4, 1682457650, (__int64)a2, 0LL);
        return;
      }
      v19 = v6 + 330;
      v20 = *((_QWORD *)v6 + 165);
      if ( *(_DWORD **)(v20 + 8) != v6 + 330 )
        goto LABEL_17;
      v21 = (_QWORD *)*((_QWORD *)v6 + 166);
      if ( (_QWORD *)*v21 != v19 )
        goto LABEL_17;
      *v21 = v20;
      *(_QWORD *)(v20 + 8) = v21;
      *v19 = 0LL;
      *((_QWORD *)v6 + 166) = 0LL;
    }
    v18 = v9;
    v17 = 5;
    goto LABEL_16;
  }
  *(_DWORD *)(a3 + 136) = 0;
  qword_14006F5A0 = 0LL;
  *(_DWORD *)(a3 + 88) = 1734964085;
  KeReleaseSpinLock(&HubG, *(_BYTE *)(a3 + 132));
  if ( PdoExt((__int64)a2)[197] != v9 )
  {
    v22 = (_QWORD *)UsbhIncHubBusy(a1, a3, (__int64)a2, 1381200755, v9);
    UsbhSyncResumeDeviceInternal(*((_QWORD *)v6 + 148), a3, a2);
    UsbhDecHubBusy(a1, v23, v22);
    UsbhAcquireFdoPwrLock(a1, a3, 136, 1835356755);
    UsbhSetPdoPowerState(a3, (__int64)a2, v24, v9, 14);
    UsbhReleaseFdoPwrLock(a1, a3);
  }
  UsbhPdoAbortAllDevicePipes(a1, (__int64)a2);
  PortData = UsbhGetPortData(a1, *((_WORD *)v6 + 714));
  if ( PortData )
  {
    v26 = (struct _KEVENT *)(PortData + 520);
    KeWaitForSingleObject((PVOID)(PortData + 520), Executive, 0, 0, 0LL);
    UsbhPCE_SoftDisconnect(a1, *((_WORD *)v6 + 714), a3);
    KeSetEvent(v26, 0, 0);
  }
}
