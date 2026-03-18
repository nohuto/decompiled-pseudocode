/*
 * XREFs of UsbhPdoPnp_StopDevice @ 0x14005D3D0
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     UsbhUnlinkPdoDeviceHandle @ 0x14000FB30 (UsbhUnlinkPdoDeviceHandle.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     SET_PDO_SWPNPSTATE @ 0x1400376D8 (SET_PDO_SWPNPSTATE.c)
 *     UsbhTrapFatal_Dbg @ 0x14003A52C (UsbhTrapFatal_Dbg.c)
 *     UsbhCloseDeviceConfiguration @ 0x14005C274 (UsbhCloseDeviceConfiguration.c)
 */

__int64 __fastcall UsbhPdoPnp_StopDevice(ULONG_PTR a1, IRP *a2)
{
  _DWORD *v4; // rdi
  __int64 v5; // rcx
  int v6; // eax
  int v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = 0;
  v4 = PdoExt(a1);
  v5 = *((_QWORD *)v4 + 148);
  if ( !v5 )
    UsbhTrapFatal_Dbg(0LL, a1);
  Log(v5, 256, 1399874671, (__int64)a2, 0LL);
  SET_PDO_SWPNPSTATE(a1, 103, 4);
  v6 = UsbhCloseDeviceConfiguration(*((_QWORD *)v4 + 148), a1, &v8);
  Log(*((_QWORD *)v4 + 148), 256, 1936745522, (__int64)a2, v6);
  UsbhUnlinkPdoDeviceHandle(*((_QWORD *)v4 + 148), a1, 2017740854, 1);
  a2->IoStatus.Status = 0;
  IofCompleteRequest(a2, 0);
  return 0LL;
}
