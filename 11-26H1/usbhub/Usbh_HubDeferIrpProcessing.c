/*
 * XREFs of Usbh_HubDeferIrpProcessing @ 0x14004B6D4
 * Callers:
 *     UsbhFdoPower @ 0x140033670 (UsbhFdoPower.c)
 *     UsbhPdoPower @ 0x140033830 (UsbhPdoPower.c)
 * Callees:
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     _guard_dispatch_icall @ 0x140061C10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Usbh_HubDeferIrpProcessing(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v7; // ebx
  void (__fastcall *v8)(__int64, __int64, __int64); // rax

  v7 = 0;
  v8 = (void (__fastcall *)(__int64, __int64, __int64))*((_QWORD *)FdoExt(a1) + 599);
  if ( v8 )
    v8(a2, a3, a4);
  else
    return (unsigned int)-1073741822;
  return v7;
}
