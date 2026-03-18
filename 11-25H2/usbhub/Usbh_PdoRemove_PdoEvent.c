/*
 * XREFs of Usbh_PdoRemove_PdoEvent @ 0x14004986C
 * Callers:
 *     UsbhPdoPnp_RemoveDevice @ 0x14005D220 (UsbhPdoPnp_RemoveDevice.c)
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     UsbhGetPortData @ 0x140008540 (UsbhGetPortData.c)
 *     UsbhDeletePdo @ 0x14000E690 (UsbhDeletePdo.c)
 *     UsbhSshSetPortsBusyState @ 0x14000FDA0 (UsbhSshSetPortsBusyState.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhDisablePort @ 0x14001C650 (UsbhDisablePort.c)
 *     UsbhDeleteUxdSettings @ 0x14001D8CC (UsbhDeleteUxdSettings.c)
 *     SET_PDO_HWPNPSTATE @ 0x14002DAD4 (SET_PDO_HWPNPSTATE.c)
 *     UsbhAcquirePdoStateLock @ 0x14002E600 (UsbhAcquirePdoStateLock.c)
 *     UsbhOnPdoAbsentList @ 0x140047E60 (UsbhOnPdoAbsentList.c)
 *     UsbhSetPdo_FailIo @ 0x140048710 (UsbhSetPdo_FailIo.c)
 */

void __fastcall Usbh_PdoRemove_PdoEvent(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 PortData; // r15
  __int64 v7; // rcx
  int v8; // edi
  int v9; // r8d
  __int64 v10; // rcx
  _DWORD *v11; // rax
  _DWORD *v12; // rsi
  int v13; // edi
  int v14; // edi
  _QWORD *v15; // rax
  __int64 v16; // rdx
  _QWORD *v17; // rcx
  unsigned __int16 *v18; // rdi
  int v19; // eax

  PortData = 0LL;
  Log(a1, 2, 1884441942, 0LL, a3);
  UsbhAcquirePdoStateLock(v7, a3, 6);
  v8 = PdoExt(a2)[281];
  if ( !a1 )
  {
    v9 = v8;
    v10 = 0LL;
LABEL_12:
    UsbhDeletePdo(v10, a2, v9, 6, a3);
    return;
  }
  v11 = PdoExt(a2);
  v12 = v11;
  v13 = v8 - 3;
  if ( v13 )
  {
    v14 = v13 - 1;
    if ( v14 )
    {
      if ( v14 == 1 )
      {
        if ( UsbhOnPdoAbsentList(*((_QWORD *)v11 + 148), a2) )
        {
          v15 = v12 + 330;
          v16 = *((_QWORD *)v12 + 165);
          if ( *(_DWORD **)(v16 + 8) != v12 + 330 || (v17 = (_QWORD *)*((_QWORD *)v12 + 166), (_QWORD *)*v17 != v15) )
            __fastfail(3u);
          *v17 = v16;
          *(_QWORD *)(v16 + 8) = v17;
          *v15 = 0LL;
          *((_QWORD *)v12 + 166) = 0LL;
        }
        v9 = 5;
        v10 = a1;
        goto LABEL_12;
      }
    }
    else
    {
      SET_PDO_HWPNPSTATE(a2, 4, 6);
    }
    *(_DWORD *)(a3 + 136) = 0;
    qword_14006F5A0 = 0LL;
    *(_DWORD *)(a3 + 88) = 1734964085;
    KeReleaseSpinLock(&HubG, *(_BYTE *)(a3 + 132));
    return;
  }
  v18 = (unsigned __int16 *)(v11 + 357);
  if ( (v11[358] & 0x2000) != 0 )
    PortData = UsbhGetPortData(a1, *v18);
  SET_PDO_HWPNPSTATE(a2, 3, 6);
  *(_DWORD *)(a3 + 136) = 0;
  qword_14006F5A0 = 0LL;
  *(_DWORD *)(a3 + 88) = 1734964085;
  KeReleaseSpinLock(&HubG, *(_BYTE *)(a3 + 132));
  UsbhDeleteUxdSettings(a1, a2, 1);
  if ( PortData )
  {
    UsbhSetPdo_FailIo(a2);
    KeWaitForSingleObject(v12 + 724, Executive, 0, 0, 0LL);
    v19 = v12[355];
    if ( (v19 & 0x8000000) == 0 )
    {
      v12[355] = v19 | 0x8000000;
      UsbhDisablePort(a1, PortData);
      UsbhSshSetPortsBusyState(a1, *v18, 1, 0);
    }
    KeSetEvent((PRKEVENT)(v12 + 724), 0, 0);
  }
}
