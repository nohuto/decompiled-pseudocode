/*
 * XREFs of UsbhPdoPnp_StopDevice @ 0x14005D9C0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhUnlinkPdoDeviceHandle @ 0x1400081E4 (UsbhUnlinkPdoDeviceHandle.c)
 *     Log @ 0x140009B80 (Log.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     SET_PDO_SWPNPSTATE @ 0x140035700 (SET_PDO_SWPNPSTATE.c)
 *     UsbhTrapFatal_Dbg @ 0x140039F64 (UsbhTrapFatal_Dbg.c)
 *     UsbhCloseDeviceConfiguration @ 0x14005C85C (UsbhCloseDeviceConfiguration.c)
 */

__int64 __fastcall UsbhPdoPnp_StopDevice(ULONG_PTR a1, IRP *a2)
{
  _DWORD *v4; // rdi
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // r9
  int v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = 0;
  v4 = PdoExt(a1);
  v5 = *((_QWORD *)v4 + 148);
  if ( !v5 )
    UsbhTrapFatal_Dbg(0LL, a1);
  Log(v5, 256, 1399874671, (__int64)a2, 0LL);
  SET_PDO_SWPNPSTATE(a1, 103, 4);
  v6 = UsbhCloseDeviceConfiguration(*((_QWORD *)v4 + 148), a1, &v9);
  Log(*((_QWORD *)v4 + 148), 256, 1936745522, (__int64)a2, v6);
  LOBYTE(v7) = 1;
  UsbhUnlinkPdoDeviceHandle(*((_QWORD *)v4 + 148), a1, 2017740854LL, v7);
  a2->IoStatus.Status = 0;
  IofCompleteRequest(a2, 0);
  return 0LL;
}
