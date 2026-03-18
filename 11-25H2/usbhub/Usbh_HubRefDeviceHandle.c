/*
 * XREFs of Usbh_HubRefDeviceHandle @ 0x1400352A0
 * Callers:
 *     UsbhLinkPdoDeviceHandle @ 0x14005C8A0 (UsbhLinkPdoDeviceHandle.c)
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     _guard_dispatch_icall @ 0x140061530 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Usbh_HubRefDeviceHandle(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  _DWORD *v7; // rax

  v7 = FdoExt(a1);
  if ( *((_QWORD *)v7 + 558) )
    return (*((__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD))v7 + 558))(*((_QWORD *)v7 + 529), a2, a3, a4);
  else
    return 3221225474LL;
}
