/*
 * XREFs of Usbh_HubRestoreDevice @ 0x140049310
 * Callers:
 *     UsbhSyncResetDeviceInternal @ 0x140048448 (UsbhSyncResetDeviceInternal.c)
 * Callees:
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     Usbh_HubGetUsbDescriptors @ 0x14003914C (Usbh_HubGetUsbDescriptors.c)
 *     _guard_dispatch_icall @ 0x140061C10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Usbh_HubRestoreDevice(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 Pool2; // rax
  void *v8; // rbx
  _DWORD *v9; // rax
  int v11; // [rsp+30h] [rbp-18h] BYREF
  int v12[5]; // [rsp+34h] [rbp-14h] BYREF

  if ( (PdoExt(a2)[358] & 0x4000) != 0 )
  {
    Pool2 = ExAllocatePool2(64LL, 27LL, 1112885333LL);
    v8 = (void *)Pool2;
    if ( Pool2 )
    {
      v12[0] = 18;
      v11 = 9;
      Usbh_HubGetUsbDescriptors(a1, a4, Pool2, (__int64)v12, Pool2 + 18, (__int64)&v11);
      ExFreePoolWithTag(v8, 0);
    }
  }
  v9 = FdoExt(a1);
  if ( *((_QWORD *)v9 + 536) )
    return (*((__int64 (__fastcall **)(_QWORD, __int64, __int64))v9 + 536))(*((_QWORD *)v9 + 529), a3, a4);
  else
    return 3221225474LL;
}
