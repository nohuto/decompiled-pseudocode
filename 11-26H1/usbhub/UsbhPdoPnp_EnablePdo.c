/*
 * XREFs of UsbhPdoPnp_EnablePdo @ 0x140039E34
 * Callers:
 *     UsbhPdoPnp_StartDevice @ 0x14000EDC0 (UsbhPdoPnp_StartDevice.c)
 *     UsbhPdoPnp_QueryId @ 0x1400236A0 (UsbhPdoPnp_QueryId.c)
 * Callees:
 *     UsbhSshSetPortsBusyState @ 0x140008460 (UsbhSshSetPortsBusyState.c)
 *     UsbhSetPdo_AllowIo @ 0x140010690 (UsbhSetPdo_AllowIo.c)
 *     Usb_Disconnected @ 0x140013CE4 (Usb_Disconnected.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     UsbhException @ 0x14001B7DC (UsbhException.c)
 *     UsbhSyncResetDeviceInternal @ 0x140048448 (UsbhSyncResetDeviceInternal.c)
 */

__int64 __fastcall UsbhPdoPnp_EnablePdo(__int64 a1)
{
  _DWORD *v2; // rbx
  unsigned int v3; // edi
  struct _DEVICE_OBJECT *v4; // rbp
  int v5; // r8d
  __int64 v7; // rcx

  v2 = PdoExt(a1);
  v3 = 0;
  v4 = (struct _DEVICE_OBJECT *)*((_QWORD *)v2 + 148);
  v5 = PdoExt(a1)[280];
  if ( (v2[355] & 0x8000000) == 0 && v5 == 100 || (v2[283] & 4) != 0 )
    return 0LL;
  if ( ((v5 - 100) & 0xFFFFFFFC) == 0 && v5 != 101 )
  {
    UsbhSshSetPortsBusyState((__int64)v4, *((unsigned __int16 *)v2 + 714), 2LL, 0LL);
    PdoExt(a1);
    v3 = UsbhSyncResetDeviceInternal(v4);
    v7 = v3 & 0xC0000000;
    if ( (_DWORD)v7 != -1073741824 || Usb_Disconnected(v3) )
    {
      v2[355] &= ~0x8000000u;
      UsbhSetPdo_AllowIo(v7, a1);
    }
    else
    {
      UsbhException((__int64)v4, *((_WORD *)v2 + 714), 86, 0LL, 0, v3, -1, usbfile_pdo_c, 2072, 0);
    }
  }
  return v3;
}
