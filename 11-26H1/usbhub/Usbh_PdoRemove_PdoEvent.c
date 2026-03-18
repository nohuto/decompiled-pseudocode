/*
 * XREFs of Usbh_PdoRemove_PdoEvent @ 0x1400493F8
 * Callers:
 *     UsbhPdoPnp_RemoveDevice @ 0x14005D810 (UsbhPdoPnp_RemoveDevice.c)
 * Callees:
 *     UsbhDeletePdo @ 0x140007770 (UsbhDeletePdo.c)
 *     UsbhSshSetPortsBusyState @ 0x140008460 (UsbhSshSetPortsBusyState.c)
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhAcquirePdoStateLock @ 0x140010E10 (UsbhAcquirePdoStateLock.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     UsbhGetPortData @ 0x1400186A0 (UsbhGetPortData.c)
 *     UsbhDeleteUxdSettings @ 0x140022594 (UsbhDeleteUxdSettings.c)
 *     UsbhDisablePort @ 0x140024098 (UsbhDisablePort.c)
 *     SET_PDO_HWPNPSTATE @ 0x140033458 (SET_PDO_HWPNPSTATE.c)
 *     UsbhOnPdoAbsentList @ 0x1400479B0 (UsbhOnPdoAbsentList.c)
 *     UsbhSetPdo_FailIo @ 0x140048260 (UsbhSetPdo_FailIo.c)
 */

void __fastcall Usbh_PdoRemove_PdoEvent(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 PortData; // r15
  __int64 v7; // rcx
  int v8; // edi
  int v9; // r8d
  __int64 v10; // rcx
  _DWORD *v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  _DWORD *v14; // rsi
  int v15; // edi
  int v16; // edi
  _QWORD *v17; // rax
  __int64 v18; // rdx
  _QWORD *v19; // rcx
  unsigned __int16 *v20; // rdi
  int v21; // eax

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
  v14 = v11;
  v15 = v8 - 3;
  if ( v15 )
  {
    v16 = v15 - 1;
    if ( v16 )
    {
      if ( v16 == 1 )
      {
        if ( UsbhOnPdoAbsentList(*((_QWORD *)v11 + 148), a2) )
        {
          v17 = v14 + 330;
          v18 = *((_QWORD *)v14 + 165);
          if ( *(_DWORD **)(v18 + 8) != v14 + 330 || (v19 = (_QWORD *)*((_QWORD *)v14 + 166), (_QWORD *)*v19 != v17) )
            __fastfail(3u);
          *v19 = v18;
          *(_QWORD *)(v18 + 8) = v19;
          *v17 = 0LL;
          *((_QWORD *)v14 + 166) = 0LL;
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
    qword_140070600 = 0LL;
    *(_DWORD *)(a3 + 88) = 1734964085;
    KeReleaseSpinLock(&HubG, *(_BYTE *)(a3 + 132));
    return;
  }
  v20 = (unsigned __int16 *)(v11 + 357);
  if ( (v11[358] & 0x2000) != 0 )
    PortData = UsbhGetPortData(a1, *v20, v12, v13);
  SET_PDO_HWPNPSTATE(a2, 3, 6);
  *(_DWORD *)(a3 + 136) = 0;
  qword_140070600 = 0LL;
  *(_DWORD *)(a3 + 88) = 1734964085;
  KeReleaseSpinLock(&HubG, *(_BYTE *)(a3 + 132));
  UsbhDeleteUxdSettings(a1, a2, 1);
  if ( PortData )
  {
    UsbhSetPdo_FailIo(a2);
    KeWaitForSingleObject(v14 + 724, Executive, 0, 0, 0LL);
    v21 = v14[355];
    if ( (v21 & 0x8000000) == 0 )
    {
      v14[355] = v21 | 0x8000000;
      UsbhDisablePort(a1, PortData);
      UsbhSshSetPortsBusyState(a1, *v20, 1LL, 0LL);
    }
    KeSetEvent((PRKEVENT)(v14 + 724), 0, 0);
  }
}
